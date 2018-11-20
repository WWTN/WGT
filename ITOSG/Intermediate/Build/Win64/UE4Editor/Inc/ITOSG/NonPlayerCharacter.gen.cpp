// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ITOSG/NonPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNonPlayerCharacter() {}
// Cross Module References
	ITOSG_API UClass* Z_Construct_UClass_ANonPlayerCharacter_NoRegister();
	ITOSG_API UClass* Z_Construct_UClass_ANonPlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ITOSG();
	ITOSG_API UFunction* Z_Construct_UFunction_ANonPlayerCharacter_InteractWithObject();
// End Cross Module References
	void ANonPlayerCharacter::StaticRegisterNativesANonPlayerCharacter()
	{
		UClass* Class = ANonPlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InteractWithObject", &ANonPlayerCharacter::execInteractWithObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANonPlayerCharacter_InteractWithObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANonPlayerCharacter_InteractWithObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "My Functions" },
		{ "ModuleRelativePath", "NonPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANonPlayerCharacter_InteractWithObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANonPlayerCharacter, "InteractWithObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANonPlayerCharacter_InteractWithObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANonPlayerCharacter_InteractWithObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANonPlayerCharacter_InteractWithObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANonPlayerCharacter_InteractWithObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANonPlayerCharacter_NoRegister()
	{
		return ANonPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANonPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANonPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ITOSG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANonPlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANonPlayerCharacter_InteractWithObject, "InteractWithObject" }, // 2222345851
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANonPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NonPlayerCharacter.h" },
		{ "ModuleRelativePath", "NonPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANonPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANonPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANonPlayerCharacter_Statics::ClassParams = {
		&ANonPlayerCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ANonPlayerCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANonPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANonPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANonPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANonPlayerCharacter, 1869873745);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANonPlayerCharacter(Z_Construct_UClass_ANonPlayerCharacter, &ANonPlayerCharacter::StaticClass, TEXT("/Script/ITOSG"), TEXT("ANonPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANonPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
