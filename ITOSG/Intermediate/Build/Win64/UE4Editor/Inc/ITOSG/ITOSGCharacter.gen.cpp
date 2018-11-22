// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ITOSG/ITOSGCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITOSGCharacter() {}
// Cross Module References
	ITOSG_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	UPackage* Z_Construct_UPackage__Script_ITOSG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ITOSG_API UClass* Z_Construct_UClass_APIckup_NoRegister();
	ITOSG_API UClass* Z_Construct_UClass_AITOSGCharacter_NoRegister();
	ITOSG_API UClass* Z_Construct_UClass_AITOSGCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ITOSG_API uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, Z_Construct_UPackage__Script_ITOSG(), TEXT("InventoryItem"), sizeof(FInventoryItem), Get_Z_Construct_UScriptStruct_FInventoryItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInventoryItem(FInventoryItem::StaticStruct, TEXT("/Script/ITOSG"), TEXT("InventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_ITOSG_StaticRegisterNativesFInventoryItem
{
	FScriptStruct_ITOSG_StaticRegisterNativesFInventoryItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InventoryItem")),new UScriptStruct::TCppStructOps<FInventoryItem>);
	}
} ScriptStruct_ITOSG_StaticRegisterNativesFInventoryItem;
	struct Z_Construct_UScriptStruct_FInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeUsed_MetaData[];
#endif
		static void NewProp_bCanBeUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPickup_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemPickup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed_SetBit(void* Obj)
	{
		((FInventoryItem*)Obj)->bCanBeUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBeUsed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FInventoryItem), &Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Text, "Description", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInventoryItem, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Thumbnail = { UE4CodeGen_Private::EPropertyClass::Object, "Thumbnail", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInventoryItem, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Thumbnail_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInventoryItem, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Action = { UE4CodeGen_Private::EPropertyClass::Text, "Action", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInventoryItem, Action), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Text, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInventoryItem, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemPickup_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemPickup = { UE4CodeGen_Private::EPropertyClass::Class, "ItemPickup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FInventoryItem, ItemPickup), Z_Construct_UClass_APIckup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemPickup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemPickup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID = { UE4CodeGen_Private::EPropertyClass::Name, "ItemID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInventoryItem, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ITOSG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InventoryItem",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FInventoryItem),
		alignof(FInventoryItem),
		Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ITOSG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InventoryItem"), sizeof(FInventoryItem), Get_Z_Construct_UScriptStruct_FInventoryItem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_CRC() { return 2008793874U; }
	void AITOSGCharacter::StaticRegisterNativesAITOSGCharacter()
	{
	}
	UClass* Z_Construct_UClass_AITOSGCharacter_NoRegister()
	{
		return AITOSGCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AITOSGCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorToWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorToWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AITOSGCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ITOSG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AITOSGCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ITOSGCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_CursorToWorld_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
		{ "ToolTip", "A decal that projects to the cursor location." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_CursorToWorld = { UE4CodeGen_Private::EPropertyClass::Object, "CursorToWorld", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AITOSGCharacter, CursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_CursorToWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_CursorToWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AITOSGCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ITOSGCharacter.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_TopDownCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TopDownCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AITOSGCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AITOSGCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_CursorToWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AITOSGCharacter_Statics::NewProp_TopDownCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AITOSGCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AITOSGCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AITOSGCharacter_Statics::ClassParams = {
		&AITOSGCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		Z_Construct_UClass_AITOSGCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AITOSGCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AITOSGCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AITOSGCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AITOSGCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AITOSGCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AITOSGCharacter, 2372194032);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AITOSGCharacter(Z_Construct_UClass_AITOSGCharacter, &AITOSGCharacter::StaticClass, TEXT("/Script/ITOSG"), TEXT("AITOSGCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AITOSGCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
