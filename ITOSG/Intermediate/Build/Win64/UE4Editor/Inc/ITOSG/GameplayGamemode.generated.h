// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ITOSG_GameplayGamemode_generated_h
#error "GameplayGamemode.generated.h already included, missing '#pragma once' in GameplayGamemode.h"
#endif
#define ITOSG_GameplayGamemode_generated_h

#define ITOSG_Source_ITOSG_GameplayGamemode_h_15_RPC_WRAPPERS
#define ITOSG_Source_ITOSG_GameplayGamemode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ITOSG_Source_ITOSG_GameplayGamemode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayGamemode(); \
	friend struct Z_Construct_UClass_AGameplayGamemode_Statics; \
public: \
	DECLARE_CLASS(AGameplayGamemode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ITOSG"), NO_API) \
	DECLARE_SERIALIZER(AGameplayGamemode)


#define ITOSG_Source_ITOSG_GameplayGamemode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayGamemode(); \
	friend struct Z_Construct_UClass_AGameplayGamemode_Statics; \
public: \
	DECLARE_CLASS(AGameplayGamemode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ITOSG"), NO_API) \
	DECLARE_SERIALIZER(AGameplayGamemode)


#define ITOSG_Source_ITOSG_GameplayGamemode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayGamemode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayGamemode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayGamemode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayGamemode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayGamemode(AGameplayGamemode&&); \
	NO_API AGameplayGamemode(const AGameplayGamemode&); \
public:


#define ITOSG_Source_ITOSG_GameplayGamemode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayGamemode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayGamemode(AGameplayGamemode&&); \
	NO_API AGameplayGamemode(const AGameplayGamemode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayGamemode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayGamemode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayGamemode)


#define ITOSG_Source_ITOSG_GameplayGamemode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemDB() { return STRUCT_OFFSET(AGameplayGamemode, ItemDB); }


#define ITOSG_Source_ITOSG_GameplayGamemode_h_12_PROLOG
#define ITOSG_Source_ITOSG_GameplayGamemode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ITOSG_Source_ITOSG_GameplayGamemode_h_15_PRIVATE_PROPERTY_OFFSET \
	ITOSG_Source_ITOSG_GameplayGamemode_h_15_RPC_WRAPPERS \
	ITOSG_Source_ITOSG_GameplayGamemode_h_15_INCLASS \
	ITOSG_Source_ITOSG_GameplayGamemode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ITOSG_Source_ITOSG_GameplayGamemode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ITOSG_Source_ITOSG_GameplayGamemode_h_15_PRIVATE_PROPERTY_OFFSET \
	ITOSG_Source_ITOSG_GameplayGamemode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ITOSG_Source_ITOSG_GameplayGamemode_h_15_INCLASS_NO_PURE_DECLS \
	ITOSG_Source_ITOSG_GameplayGamemode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ITOSG_Source_ITOSG_GameplayGamemode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
