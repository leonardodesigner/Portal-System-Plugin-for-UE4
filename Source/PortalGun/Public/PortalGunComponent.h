// Portal Gun plugin Ver 1.0
// Created by Leonardo Gabriel de Lima
// Git Hub:https://github.com/leonardodesigner


#pragma once
// Include libraries
#include "CoreMinimal.h"

#include "PortalActor.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/ActorComponent.h"
#include "PortalGunComponent.generated.h"



UCLASS(Blueprintable, BlueprintType)
class PORTALGUN_API UPortalGunComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPortalGunComponent();

	// Weapon properties 
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Basic Properties", Meta =(Tooltip = "Set the weapon fire range "))
	float FireRange = 5000.0;
	
	UPROPERTY(BlueprintReadWrite, Category = "Basic Properties", Meta =(Tooltip = "Get the player weapon mesh "))
	USceneComponent* WeaponMesh;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Basic Properties", Meta =(Tooltip = "Get the weapon muzzle socket "))
	FName MuzzleSocket;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Basic Properties", Meta =(Tooltip = "Draw debug weapon trace type "))
	TEnumAsByte< EDrawDebugTrace::Type  > DrawDebug;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Basic Properties", Meta =(Tooltip = "Select the portal custom class "))
    TSubclassOf <APortalActor>  PortalClass;

	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Basic Properties", Meta =(Tooltip = "Use fire trace based on weapon direction or player control rotation "))
	bool UseWeaponDirection = false;
	
	// Objects type can be destroyed
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Basic Properties", Meta =(Tooltip = "Selcet the affected objects channel"))
	TArray <TEnumAsByte< EObjectTypeQuery > > ObjectsAffected;

	//Actors to Ignore
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Basic Properties", Meta =(Tooltip = "Actors to trace ignore, case is ignored, the portal will not spawn"))
	TArray<AActor*> ActorsToIgnore;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Basic Configurations|Color", Meta =(Tooltip = "Insert the first portal color "))
	FLinearColor PortalA_Color= FLinearColor(0.0,1.0,2.0,1.0);

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Basic Configurations|Color", Meta =(Tooltip = "Insert the second portal color "))
	FLinearColor PortalB_Color = FLinearColor(2.0,1.0,0.0,1.0);
	
	// portal generation functionality 
	UPROPERTY(BlueprintReadOnly, Category = "Portal Generator" , Meta =(Tooltip = "this array list the portals spawned in level "))
	TArray<APortalActor *> PortalArray;
	
	UPROPERTY(BlueprintReadOnly, Category = "Portal Generator", Meta = (ArrayClamp="PortalArray",Tooltip = "this index selects the current generated portal to update its location"))
	int PortalIndex;

	
	
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	
private:
	
	
	
	UFUNCTION(BlueprintCallable, Category="Functions", Meta =(Tooltip = "Spawn a portal where the trace hits  ") )
	void CreatePortal();
	
	UFUNCTION(BlueprintCallable, Category="Functions", Meta =(Tooltip = "Destroy a portal where the trace hits  ") )
	void DestroySinglePortal();
	
	UFUNCTION(BlueprintCallable, Category="Functions", Meta =(Tooltip = "Destroy all portals Generated by player "))
	void DestroyAllPortals();
	
	UFUNCTION(BlueprintCallable, Category="Functions", Meta =(Tooltip = "Create weapon trace  "))
	bool WeaponTrace(FVector InputMuzzleLoc, float InputFireRange,  FHitResult& OutputHit);
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};