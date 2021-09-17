// Portal Gun plugin Ver 1.0
// Created by Leonardo Gabriel de Lima
// Git Hub:https://github.com/leonardodesigner

// Include libraries
#include "PortalGunComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "PortalActor.h"

// Sets default values for this component's properties
UPortalGunComponent::UPortalGunComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;

    
	
}


// Called when the game starts
void UPortalGunComponent::BeginPlay()
{
	Super::BeginPlay();

	ActorsToIgnore.Add(GetOwner()); // Ignore the self actor 
	
}

void UPortalGunComponent::CreatePortal()
{
	if (WeaponMesh) // Verify if weapon mesh is valid
	{
		FVector LocMuzzleLocation = WeaponMesh->GetSocketLocation(MuzzleSocket); // Get the Weapon Socket Muzzle location

	
		FHitResult LocHit; // Create local hit result
		
		if (WeaponTrace(LocMuzzleLocation,FireRange,LocHit))
		{
			if (LocHit.Actor!= nullptr)                  // Verify if hit actor is valid or if is not a BSP
			{
				if (PortalClass)                         // Verify if portal class is valid 
				{
					auto * HitPortal= Cast<APortalActor>(LocHit.Actor );  // Cast to Portal Actor Class
					
					if (!HitPortal)                                       // Verify if is hit object is different of portal actor
					{
						FRotator PortalRotation = UKismetMathLibrary::MakeRotFromX(LocHit.ImpactNormal); // Set portal rotation based on hit object normal
					
						if (PortalArray.Num() < 2)           // Verify is the num of portals in level is less than two
							{
							FActorSpawnParameters SpawnInfo; // Create the variable to store the spawn portal Return Value
					
					
							//..........................................................................................................................................................
							PortalArray.Add( // Store portal to Array of portals
					  
							// Spawn a new portal
							GetWorld()->SpawnActor<APortalActor>(PortalClass,        // Get the pre defined portal class
																LocHit.ImpactPoint, // Set location on weapon hit point
																PortalRotation,     // Set portal Rotation
																SpawnInfo)          // Get the portal Spawned Return Value
											); // Add Portal to portal array

							
							//..........................................................................................................................................................

							PortalArray[0]-> PortalA_Color = PortalA_Color;             // Set first portal color

							PortalArray[0]-> SelectPortalType = EPortalType::PortalGun; // Set portal type as Weapon
							
							PortalArray[0]-> bAutomaticFindPortal = true;               // Set auto find portal for auto set self as destiny of portal destiny

							PortalArray[0]->SetPortalCapture(0);
							
							PortalArray[0]-> ClearPortalDestiny();                      // Reset portal destiny to update it
							
							PortalArray[0]-> PortalIndexID = 0;                         // Set first portal Index

							
							
							// Set portal destination if portal amount is equal two
							if (PortalArray.Num() == 2)
							   {
								PortalArray[1]-> PortalIndexID = 1;                         // Set first portal Index

								PortalArray[1]-> SelectPortalType = EPortalType::PortalGun; // Set portal type as Weapon

								PortalArray[1]->SetPortalCapture(1);

								PortalArray[0]->SetPortalDestiny(PortalArray[1]);           // Set portal destiny

								PortalArray[1]-> PortalB_Color = PortalB_Color;             // Set second portal color  
							
							   }
							
							
							}
						else // 
							{

							
							
							
							// Teleport the indexed portal
							PortalArray[PortalIndex] -> SetActorLocationAndRotation(LocHit.Location,PortalRotation,true,nullptr,ETeleportType::None);

							PortalArray[0]-> ClearPortalDestiny();             // Clear portal destiny
							
							PortalArray[0]-> SetPortalDestiny(PortalArray[1]); // Set portal destiny
							
							// Select the portal on flip flop method
							if ((PortalIndex+1) > 1) // Verify if the portal index is greater than two
								{
								PortalIndex = 0;     // Return to first portal
								}
							else
							{
								PortalIndex ++ ;	// Go to second portal
							}

							
						
				
							}

					}
					
					
				}
		
			}
		}
	}
	else
	{
		// if Weapon mesh is not valid, will printed the error message
		if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("Insert Weapon Mesh !")));}
			
	}
	
}

void UPortalGunComponent::DestroySinglePortal()
{
	if (WeaponMesh) // Verify if weapon mesh is valid
	{
		FVector LocMuzzleLocation = WeaponMesh->GetSocketLocation(MuzzleSocket);  // Get the Weapon Socket Muzzle location
	
		FHitResult LocHit; // Create local hit result
		
		if (WeaponTrace(LocMuzzleLocation,FireRange,LocHit))
		{
			if (LocHit.Actor!= nullptr)          // Verify if hit actor is valid or if is not a BSP
			{
				auto * HitPortal= Cast<APortalActor>(LocHit.Actor );  // Cast to Portal Actor Class
				if (HitPortal)                                        // Verify if Portal Actor is valid
				{
					if (PortalArray.Contains(HitPortal))
					{
						PortalIndex = 0;                                  // Return to first portal
						PortalArray[0]-> PortalIndexID = PortalIndex;     // Set portal Index
						PortalArray[0]-> ClearPortalDestiny();            // Clear portal destiny
						PortalArray[0]-> PortalA_Color = PortalA_Color;   // Set first portal color
						PortalArray.Remove(HitPortal);                    // Remove the portal from portal index
						HitPortal-> Destroy();                            // Destroy Portal Actor
						
						
					}
				
				}
							
			}
		}
	}
	else
	{
		// if Weapon mesh is not valid, will printed the error message
		if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("Insert Weapon Mesh !")));}
			
	}
	
}

void UPortalGunComponent::DestroyAllPortals()
{
	// For Each Loop
	for (AActor* Actor : PortalArray)
	{
		PortalArray[0]-> ClearPortalDestiny();        // Clear portal destiny
		Actor->Destroy();                             // Destroy all portals
	}
	PortalArray.Empty();                              // Clear portal array
	PortalIndex = 0;                                  // Return to first portal
	
}

bool UPortalGunComponent::WeaponTrace(FVector InputMuzzleLoc, float InputFireRange, FHitResult& OutputHit)
{
	
	
	FVector WeaponEndTrace; // Create the end point of trace, this variable is used for weapon fire range location

	FRotator FireDirection; // Store the fire direction
	
	if (UseWeaponDirection)
	{
		// Fire direction is based on Muzzle
		FireDirection = WeaponMesh->GetSocketRotation(MuzzleSocket);
	}
	else
	{   // Fire direction is based on player control rotation
		FireDirection = GetOwner()->GetInstigatorController()->GetControlRotation();
	}
	

	// Set the Fire range 
	WeaponEndTrace = InputMuzzleLoc + (UKismetMathLibrary::GetForwardVector(FireDirection) * InputFireRange ) ;

	
	
	FHitResult OutHit;                    // Output hit result
	FCollisionQueryParams CollisionParams;// Create collision param

	//..........................................................................................................................................................
	// Create line trace
	const bool Hit = UKismetSystemLibrary::LineTraceSingleForObjects(GetWorld(),
		                                                             InputMuzzleLoc,    // Initial Location
		                                                             WeaponEndTrace,    // End Location / Range Location
		                                                             ObjectsAffected,   // List of affected objects 
		                                                             false,             // Trace Complex
		                                                             ActorsToIgnore,    // Actors to ignore
		                                                             DrawDebug,         // Draw debug trace
		                                                          OutHit,            // Output hit result
		                                                             true,              // Trace Complex
		                                                             FLinearColor::Red, // Hit trace color
		                                                             FLinearColor::Green// Line trace color
		                                                             );
	//..........................................................................................................................................................
	
	// If hit is valid, return the rit value 
	if (Hit)
	{
		OutputHit = OutHit;
		return  Hit;
		
	}
	// else, return false
    return false;
	
}


// Called every frame
void UPortalGunComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

