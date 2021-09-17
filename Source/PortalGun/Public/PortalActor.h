// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
// Include libraries
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PortalActor.generated.h"

class UBoxComponent;
class USceneComponent;
class UBillboardComponent;
class USceneCaptureComponent2D;

UENUM()
enum class EPortalType
{
	PortalGun,
	FixedPortal
};
UCLASS()
class PORTALGUN_API APortalActor : public AActor
{
	GENERATED_BODY()

	virtual void OnConstruction(const FTransform& transform) override;

   
	
public:	
	// Sets default values for this actor's properties
	APortalActor();

	UPROPERTY(VisibleDefaultsOnly ,BlueprintReadOnly, Meta =(Tooltip = " Used by id of gun fired portal "))
	int PortalIndexID; // Used by id of gun fired portal

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Basic Configurations", Meta =(ExposeOnSpawn="true",Tooltip = " Select the portal type "))
	EPortalType SelectPortalType = EPortalType::FixedPortal;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Basic Configurations", Meta =(ExposeOnSpawn="true", Tooltip = " Can auto set as self as destiny of portal destiny? "))
	bool bAutomaticFindPortal = false;
	
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadWrite, Category="Basic Configurations|Color", Meta =(EditCondition="SelectPortalType == EPortalType::PortalGun", EditConditionHides,Tooltip = " Select the first portal color "))
	FLinearColor PortalA_Color= FLinearColor(0.0,1.0,2.0,1.0);

	UPROPERTY(VisibleDefaultsOnly,BlueprintReadWrite, Category="Basic Configurations|Color", Meta =(EditCondition="SelectPortalType == EPortalType::PortalGun", EditConditionHides, Tooltip = " Select the second portal color "))
	FLinearColor PortalB_Color = FLinearColor(2.0,1.0,0.0,1.0);
	
	UFUNCTION(Meta =( Tooltip = " Set the portal destiny "))
	void SetPortalDestiny(APortalActor * InPortalDestination);
	
	UFUNCTION(Meta =( Tooltip = " Clear the portal destiny "))
	void ClearPortalDestiny();

	UFUNCTION()
	void SetPortalCapture(int index);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY()
	USceneComponent * PortalRootComponent;

	UPROPERTY(VisibleDefaultsOnly, Category="Components")
	UBillboardComponent * PortalSpawnPoint;
	
	// Creating the box volume component
	UPROPERTY(VisibleAnywhere, Category="Components")
	UBoxComponent * OverlapComp;
	
	UPROPERTY(VisibleDefaultsOnly, Category="Components")
	UStaticMeshComponent * PortalMesh;

	UPROPERTY(EditAnywhere, Category="Components")
	UStaticMesh * SetPortalMesh;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Basic Configurations", Meta =(ExposeOnSpawn="true",EditCondition="SelectPortalType == EPortalType::FixedPortal", EditConditionHides, Tooltip = " Get the portal destiny "))
	APortalActor * PortalDestination;

	UPROPERTY(BlueprintReadWrite, Category="Basic Configurations")
	FTransform PortalDestinationTransform;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Basic Configurations|Color", Meta =(ExposeOnSpawn="true",EditCondition="SelectPortalType == EPortalType::FixedPortal", EditConditionHides, Tooltip = " Select Fixed portal color "))
	FLinearColor PortalColor;

	UPROPERTY(VisibleDefaultsOnly ,BlueprintReadWrite, Category="System Properties")
    UTexture* SetCaptureA;
	
	UPROPERTY(VisibleDefaultsOnly ,BlueprintReadWrite, Category="System Properties")
	UTexture* SetCaptureB;

	UPROPERTY(EditAnywhere ,BlueprintReadWrite, Category="Basic Configurations", Meta =(ExposeOnSpawn="true",EditCondition="SelectPortalType == EPortalType::FixedPortal", EditConditionHides, Tooltip = " Set custom portal scene capture used in Fixed Portal"))
	UTexture* SetSceneCapture;
	
	float PortalOpenTime;
	
	UPROPERTY( BlueprintReadOnly, Category="System Properties")
	bool bIsTeleporting = false;

	UPROPERTY( VisibleDefaultsOnly, BlueprintReadOnly, Category="Components")
	USceneCaptureComponent2D * PortalCapture;
	
	UPROPERTY(EditAnywhere, Category="Sounds")
	USoundBase* PortalSound;

	UPROPERTY(BlueprintReadOnly, Category="System Properties|Material")
	UMaterialInstanceDynamic *  PortalMat;

	
	// Creating the Overlap Function
	UFUNCTION()
	void PortalTriggerOverlap(UPrimitiveComponent*OverlappedComponent,AActor*OtherActor,UPrimitiveComponent*OtherComp,int32 OtherBoxIndex,bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void PortalEffects();

	


		
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
