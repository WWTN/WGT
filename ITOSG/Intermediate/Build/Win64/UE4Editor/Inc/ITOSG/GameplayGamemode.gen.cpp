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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayGamemode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayGamemode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameplayGamemode_Statics::ClassParams = {
		&AGameplayGamemode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		nullptr, 0,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AGameplayGamemode, 4064767470);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayGamemode(Z_Construct_UClass_AGameplayGamemode, &AGameplayGamemode::StaticClass, TEXT("/Script/ITOSG"), TEXT("AGameplayGamemode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayGamemode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
