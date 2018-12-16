// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ITOSG/ITOSGGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITOSGGameMode() {}
// Cross Module References
	ITOSG_API UClass* Z_Construct_UClass_AITOSGGameMode_NoRegister();
	ITOSG_API UClass* Z_Construct_UClass_AITOSGGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ITOSG();
// End Cross Module References
	void AITOSGGameMode::StaticRegisterNativesAITOSGGameMode()
	{
	}
	UClass* Z_Construct_UClass_AITOSGGameMode_NoRegister()
	{
		return AITOSGGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AITOSGGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AITOSGGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ITOSG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AITOSGGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ITOSGGameMode.h" },
		{ "ModuleRelativePath", "ITOSGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AITOSGGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AITOSGGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AITOSGGameMode_Statics::ClassParams = {
		&AITOSGGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AITOSGGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AITOSGGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AITOSGGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AITOSGGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AITOSGGameMode, 212099084);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AITOSGGameMode(Z_Construct_UClass_AITOSGGameMode, &AITOSGGameMode::StaticClass, TEXT("/Script/ITOSG"), TEXT("AITOSGGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AITOSGGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
