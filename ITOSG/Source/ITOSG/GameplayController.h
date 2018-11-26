// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ITOSGCharacter.h"
#include "GameplayController.generated.h"

/**
 * 
 */
UCLASS()
class ITOSG_API AGameplayController : public APlayerController
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "Utils")
	void AddItemToInventoryByID(FName ID);

	//The interactable that the player is currently looking at. This will be equal to nullptr if the player is not looking at something that is interactable.
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class AInteractable* CurrentInteractable;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TArray<FInventoryItem> Inventory;

protected: 

	void Interact();

	virtual void SetupInputComponent() override;
	
};
