// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ITOSG/GameplayGamemode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayGamemode() {}
// Cross Module References
	ITOSG_API UClass* Z_Construct_UClass_AGameplayGamemode_NoRegister();
	ITOSG_API UClass* Z_Construct_UClass_AGameplayGamemode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_ITOSG();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void AGameplayGamemode::StaticRegisterNativesAGameplayGamemode()
	{
	}
	UClass* Z_Construct_UClass_AGameplayGamemode_NoRegister()
	{
		return AGameplayGamemode::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayGamemode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayGamemode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ITOSG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayGamemode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameplayGamemode.h" },
		{ "ModuleRelativePath", "GameplayGamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayGamemode_Statics::NewProp_ItemDB_MetaData[] = {
		{ "Category", "GameplayGamemode" },
		{ "ModuleRelativePath", "GameplayGamemode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayGamemode_Statics::NewProp_ItemDB = { UE4CodeGen_Private::EPropertyClass::Object, "ItemDB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AGameplayGamemode, ItemDB), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayGamemode_Statics::NewProp_ItemDB_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameplayGamemode_Statics::NewProp_ItemDB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayGamemode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayGamemode_Statics::NewProp_ItemDB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayGamemode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayGamemode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameplayGamemode_Statics::ClassParams = {
		&AGameplayGamemode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		nullptr, 0,
		Z_Construct_UClass_AGameplayGamemode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGameplayGamemode_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayGamemode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameplayGamemode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayGamemode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameplayGamemode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameplayGamemode, 4086966482);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayGamemode(Z_Construct_UClass_AGameplayGamemode, &AGameplayGamemode::StaticClass, TEXT("/Script/ITOSG"), TEXT("AGameplayGamemode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayGamemode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
