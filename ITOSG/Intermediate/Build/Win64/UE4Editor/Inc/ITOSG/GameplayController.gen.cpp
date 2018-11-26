// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ITOSG/GameplayController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayController() {}
// Cross Module References
	ITOSG_API UClass* Z_Construct_UClass_AGameplayController_NoRegister();
	ITOSG_API UClass* Z_Construct_UClass_AGameplayController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ITOSG();
	ITOSG_API UFunction* Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID();
	ITOSG_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	ITOSG_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
// End Cross Module References
	void AGameplayController::StaticRegisterNativesAGameplayController()
	{
		UClass* Class = AGameplayController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToInventoryByID", &AGameplayController::execAddItemToInventoryByID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics
	{
		struct GameplayController_eventAddItemToInventoryByID_Parms
		{
			FName ID;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Name, "ID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayController_eventAddItemToInventoryByID_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "GameplayController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayController, "AddItemToInventoryByID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GameplayController_eventAddItemToInventoryByID_Parms), Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameplayController_NoRegister()
	{
		return AGameplayController::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ITOSG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameplayController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayController_AddItemToInventoryByID, "AddItemToInventoryByID" }, // 3936033937
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameplayController.h" },
		{ "ModuleRelativePath", "GameplayController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "GameplayController" },
		{ "ModuleRelativePath", "GameplayController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory = { UE4CodeGen_Private::EPropertyClass::Array, "Inventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(AGameplayController, Inventory), METADATA_PARAMS(Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Inventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayController_Statics::NewProp_CurrentInteractable_MetaData[] = {
		{ "Category", "GameplayController" },
		{ "ModuleRelativePath", "GameplayController.h" },
		{ "ToolTip", "The interactable that the player is currently looking at. This will be equal to nullptr if the player is not looking at something that is interactable." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayController_Statics::NewProp_CurrentInteractable = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentInteractable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(AGameplayController, CurrentInteractable), Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayController_Statics::NewProp_CurrentInteractable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameplayController_Statics::NewProp_CurrentInteractable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayController_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayController_Statics::NewProp_CurrentInteractable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameplayController_Statics::ClassParams = {
		&AGameplayController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AGameplayController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGameplayController_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameplayController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameplayController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameplayController, 2186011896);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayController(Z_Construct_UClass_AGameplayController, &AGameplayController::StaticClass, TEXT("/Script/ITOSG"), TEXT("AGameplayController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
