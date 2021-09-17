// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "GameFramework/MovementComponent.h"
#include "GameFramework/PawnMovementComponent.h"


// Construction Script
void APortalActor::OnConstruction(const FTransform& transform)
{
	PortalMesh ->SetStaticMesh(SetPortalMesh); // Set Portal Static Mesh
	SetPortalDestiny(PortalDestination);
	

}



// Sets default values
APortalActor::APortalActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// ****************************************************************************************************************************************************************************
	// Creating the Root component configurations
	PortalRootComponent = CreateDefaultSubobject<USceneComponent>( TEXT("RootComponent"));// Create Root Component to Portal
	RootComponent = PortalRootComponent;                                                  // Associate Root Component
	// ****************************************************************************************************************************************************************************
	// Creating the box collision component configurations
	OverlapComp = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapComp"));                    // Create a box component trigger
	OverlapComp -> SetCollisionEnabled(ECollisionEnabled::QueryOnly);                    // Set Collision Enabled Type
	OverlapComp ->SetCollisionResponseToAllChannels(ECR_Ignore);                                 // Make the box Ignore all collisions type
	OverlapComp ->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);               // Now, make the box recognizes the pawn collision and make overlap response
	OverlapComp ->SetCollisionResponseToChannel(ECC_PhysicsBody,ECR_Overlap);        // Now, make the box recognizes the physic body collision and make overlap response
	OverlapComp -> SetBoxExtent(FVector(200.0f));                                                // Set the box extent
	OverlapComp ->SetupAttachment(PortalRootComponent);                                          // Attach to Root Component
	OverlapComp->OnComponentBeginOverlap.AddDynamic(this, & APortalActor::PortalTriggerOverlap); // Begin Overlapping Event
	// ****************************************************************************************************************************************************************************
	// Creating the Portal mesh configurations
	PortalMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PortalMesh"));                                                // Create portal mesh
	PortalMesh -> SetCollisionEnabled(ECollisionEnabled::QueryOnly);                                                      // Disable Collision
	PortalMesh ->SetupAttachment(PortalRootComponent);                                                                            // Attach to Root Component
	PortalMesh ->SetRelativeLocation(FVector(1.0f,0.0f,0.0f),false,nullptr,ETeleportType::None);// Set Relative Location
	PortalMesh ->SetStaticMesh(SetPortalMesh);                                                                                    // Set Portal Static Mesh
	// ****************************************************************************************************************************************************************************
	// Creating the Spawn point configuration
	PortalSpawnPoint = CreateDefaultSubobject<UBillboardComponent>( TEXT("SpawnPoint"));// Create Root Component to Portal
	PortalSpawnPoint ->SetupAttachment(PortalRootComponent);
	PortalSpawnPoint ->SetRelativeLocation(FVector(0.0f,0.0f,0.0f),false,nullptr,ETeleportType::None);// Set Relative Location
	// ****************************************************************************************************************************************************************************
	// Creating the Scene capture configuration
	PortalCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("PortalCapture")); // Create Scene capture transform
	PortalCapture ->SetupAttachment(PortalRootComponent); // Attach to Root Component

	// ****************************************************************************************************************************************************************************
	// Set the Scene Capture texture
	static ConstructorHelpers::FObjectFinder<UTexture> PortalCaptureA(TEXT("Texture'/PortalGun/Content/Material/Textures/PortalViewA.PortalViewA'"));
	if (PortalCaptureA.Object != nullptr)
	{
		SetCaptureA= Cast<UTexture>(PortalCaptureA.Object);		
	}
	static ConstructorHelpers::FObjectFinder<UTexture> PortalCaptureB(TEXT("Texture'/PortalGun/Content/Material/Textures/PortalViewB.PortalViewB'"));
	if (PortalCaptureA.Object != nullptr)
	{
		SetCaptureB= Cast<UTexture>(PortalCaptureB.Object);		
	}
		

}

// Called when the game starts or when spawned
void APortalActor::BeginPlay()
{
	Super::BeginPlay();
	
	PortalMesh ->SetStaticMesh(SetPortalMesh); // Set Portal Static Mesh

	// Update portal transform if necessary
	//..........................................................................................................................................................
	if (PortalDestination)
	{
		PortalDestinationTransform = FTransform (FRotator (0.0, PortalDestination->PortalSpawnPoint->GetComponentRotation().Yaw,0.0f) // Set Rotation
																	,PortalDestination->PortalSpawnPoint->GetComponentLocation(), // Set Location
															FVector(1.0,1.0,1.0)) ; // Set Scale
	}
	//..........................................................................................................................................................
	
}

// Teleport trigger
void APortalActor::PortalTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (PortalDestination)                             // Verify if portal destination is valid
	{
		
		if (!bIsTeleporting)                           // Is not teleporting
		{
			PortalDestination -> bIsTeleporting = true; // Teleport to destination is true
			
			OtherActor -> TeleportTo(PortalDestinationTransform.GetLocation(),PortalDestinationTransform.Rotator(),false,false); // Teleport to destination

			// Cast to Pawn 
			auto * PawnCharacter= Cast<APawn>(OtherActor);

			if (PawnCharacter) // Verify if pawn is valid
			{
				PawnCharacter ->GetController()->SetControlRotation(PortalDestinationTransform.Rotator()); // Set control rotation based on destination rotation

				PawnCharacter ->GetMovementComponent() ->StopMovementImmediately();

			}

			 auto * CurrentComp= Cast<UMovementComponent>(OtherComp);
			if (CurrentComp)
			{
				CurrentComp ->StopMovementImmediately();
			}
			else
			{
				OtherComp -> SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector,false,NAME_None);
			}
			
			// Delay in 0.1 seconds 
			FTimerHandle handle; // Time handle for delay
			GetWorld()->GetTimerManager().SetTimer(handle, [this]()
				{
				
				PortalDestination -> bIsTeleporting = false; // Set destiny actor teleport condition to false
				}, 0.1f, false);
			
			
		}
		else // Else if is teleporting, the teleport condition is false
		{
			// Delay in 0.1 seconds 
			FTimerHandle handle; // Time handle for delay
			GetWorld()->GetTimerManager().SetTimer(handle, [this]()
				{
				bIsTeleporting = false; // Set self actor teleport condition to false
			    }, 0.1f, false);
		}
	}
	
	
}

void APortalActor::PortalEffects()
{
	
	PortalMat = PortalMesh ->CreateDynamicMaterialInstance(0,nullptr,NAME_None); // Create dynamic material instance

	// Material Param Names
	FName LocOpenPortal = "OpenPortal";
	FName LocPortalColor = "PortalColor";
	FName LocPortalCapture = "PortalSceneCapture";
    // Material Param Properties 
	FLinearColor LocMaterialColorParam;
	UTexture * LocMaterialTexParam;
	
	if (SelectPortalType == EPortalType::PortalGun)
	{
		if (PortalIndexID == 0)   // Verify if portal index id is 0 (First Portal) 
		{
			LocMaterialColorParam = PortalA_Color;
			LocMaterialTexParam = SetCaptureB;    // Set scene capture of second portal because, this portal needs show another side

			
		}
		else // Verify if portal index id is 1 (Second Portal) 
		{
			LocMaterialColorParam = PortalB_Color;
			LocMaterialTexParam = SetCaptureA;    // Set scene capture of first portal because, this portal needs show another side
			
	
			
		}

		PortalMat ->SetVectorParameterValue( LocPortalColor,LocMaterialColorParam);
		
		if (PortalDestination)
		{
			
			
			PortalMat ->SetScalarParameterValue( LocOpenPortal,1);
			

			// Set the Scene Capture texture
		
		
			if (LocMaterialTexParam)
			{
				PortalMat ->SetTextureParameterValue(LocPortalCapture,LocMaterialTexParam);
				
				
			}
		
	
		
	

		}
		else
		{
			
			
			PortalMat ->SetScalarParameterValue( LocOpenPortal,0);
			
		}
		
	}
	else
	{
		PortalMat ->SetScalarParameterValue( LocOpenPortal,1);
		LocMaterialColorParam = PortalColor;
		LocMaterialTexParam = SetSceneCapture;
		PortalMat ->SetVectorParameterValue( LocPortalColor,LocMaterialColorParam);
		if (LocMaterialTexParam)
		{
			PortalMat ->SetTextureParameterValue(LocPortalCapture,LocMaterialTexParam);
			
		}
		
	}
		
	

	
	
}



void APortalActor::SetPortalDestiny(APortalActor* InPortalDestination)
{
	
	
	if (InPortalDestination)
	{
		//..........................................................................................................................................................
		// Set portal destination transform values
		PortalDestinationTransform = FTransform (FRotator (0.0, InPortalDestination->PortalSpawnPoint->GetComponentRotation().Yaw,0.0f) // Set Rotation
			                                               ,InPortalDestination->PortalSpawnPoint->GetComponentLocation(), // Set Location
			                                        FVector(1.0,1.0,1.0)) ; // Set Scale
		//..........................................................................................................................................................


		if (bAutomaticFindPortal) // Automatic find destiny portal
		{
			InPortalDestination -> bAutomaticFindPortal = true;          // Set destiny portal auto find has true
			InPortalDestination -> SelectPortalType = SelectPortalType;  // Set destiny portal type
			if (!IsValid(InPortalDestination -> PortalDestination))      // Verify if instigator portal of destiny portal isn't valid
			{
				InPortalDestination -> PortalDestination = this;    // set self as destiny to portal destiny
				
				InPortalDestination -> SetPortalDestiny(this);      // set self as destiny to portal destiny
			}
		}
	
		PortalEffects();
	
	}
		                               
}

void APortalActor::ClearPortalDestiny()
{

	
	// If portal destination is valid
	if (PortalDestination)
	{
		// will be null the instigator portal
		PortalDestination -> PortalDestination = nullptr;
		PortalDestination -> PortalEffects();
		
	}

	// clear portal destination
	PortalDestination = nullptr;

	PortalEffects();
	
}

void APortalActor::SetPortalCapture(int index)
{

	UTexture * LocCaptureParam = nullptr;

	switch (SelectPortalType) // Select portal type
	{
		case EPortalType::FixedPortal:
			
			if (PortalDestination) // fixed portal
				{
				LocCaptureParam = PortalDestination-> SetSceneCapture;    // Set scene capture of another portal
				}
			break;
		
	    case EPortalType::PortalGun:
	    	
	    	if (index == 0)   // Verify if portal index id is 0 (First Portal) 
	    		{
		
	    		LocCaptureParam = SetCaptureA;    // Set scene capture of second portal because, this portal needs show another side

			
	    		}
		else // Verify if portal index id is 1 (Second Portal) 
			{
			
			LocCaptureParam = SetCaptureB;    // Set scene capture of first portal because, this portal needs show another side
			
			}
		    break;
	}
	

		
	// Set portal scene capture
	UTextureRenderTarget2D * CurrentCapture = Cast <UTextureRenderTarget2D> (LocCaptureParam);
	PortalCapture -> TextureTarget = CurrentCapture;
		
	
}

// Called every frame
void APortalActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	
}

