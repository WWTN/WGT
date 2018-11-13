// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ITOSG/NPCBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCBase() {}
// Cross Module References
	ITOSG_API UClass* Z_Construct_UClass_ANPCBase_NoRegister();
	ITOSG_API UClass* Z_Construct_UClass_ANPCBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ITOSG();
// End Cross Module References
	void ANPCBase::StaticRegisterNativesANPCBase()
	{
	}
	UClass* Z_Construct_UClass_ANPCBase_NoRegister()
	{
		return ANPCBase::StaticClass();
	}
	struct Z_Construct_UClass_ANPCBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ITOSG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NPCBase.h" },
		{ "ModuleRelativePath", "NPCBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPCBase_Statics::ClassParams = {
		&ANPCBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ANPCBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANPCBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPCBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPCBase, 1445192433);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPCBase(Z_Construct_UClass_ANPCBase, &ANPCBase::StaticClass, TEXT("/Script/ITOSG"), TEXT("ANPCBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
