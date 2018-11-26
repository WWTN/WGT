// Fill out your copyright notice in the Description page of Project Settings.

#include "GameplayController.h"
#include "Interactable.h"
#include "GameplayGamemode.h"
#include "ITOSG.h"

void AGameplayController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Use", IE_Pressed, this, &AGameplayController::Interact);

}

void AGameplayController::Interact()
{
	if (CurrentInteractable)
	{
		CurrentInteractable->Interact(this);
	}



}

void AGameplayController::AddItemToInventoryByID(FName ID)
{
	AGameplayGameMode* GameMode = Cast< AGameplayGameMode>(GetWorld()->GetAuthGameMode());

	UDataTable* ItemTable = GameMode->GetItemDB();

	FInventoryItem* ItemToAdd = ItemTable->FindRow<FInventoryItem>(ID, "");

	if (ItemToAdd)
	{
		Inventory.Add(*ItemToAdd);
	}
}