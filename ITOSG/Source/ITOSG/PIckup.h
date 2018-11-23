// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "PIckup.generated.h"

/**
 * 
 */
UCLASS()
class ITOSG_API APickup : public AInteractable
{
	GENERATED_BODY()
	
public:

	APickup();

protected:

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemID;
	
};
