// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

UCLASS()
class ITOSG_API AInteractable : public AActor
{
	GENERATED_BODY()
	
public:	

	//virtual void Tick(float DeltaTime) override;
	
	AInteractable();

	virtual void BeginPlay() override;
	
	//The function that is called when the player interacts with the interactable
	UFUNCTION(BlueprintImplementableEvent)
	void Interact(APlayerController* Controller);

	UPROPERTY(EditDefaultsOnly)
	FString Name;

	UPROPERTY(EditDefaultsOnly)
	FString Action;

	UFUNCTION(BlueprintCallable, Category = "Pickup")
	FString GetUseText() const { return FString::Printf(TEXT("%s : Press E to %s"), *Name, *Action); }

};
