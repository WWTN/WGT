// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ITOSG_GameplayController_generated_h
#error "GameplayController.generated.h already included, missing '#pragma once' in GameplayController.h"
#endif
#define ITOSG_GameplayController_generated_h

#define ITOSG_Source_ITOSG_GameplayController_h_15_RPC_WRAPPERS
#define ITOSG_Source_ITOSG_GameplayController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ITOSG_Source_ITOSG_GameplayController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayController(); \
	friend struct Z_Construct_UClass_AGameplayController_Statics; \
public: \
	DECLARE_CLASS(AGameplayController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ITOSG"), NO_API) \
	DECLARE_SERIALIZER(AGameplayController)


#define ITOSG_Source_ITOSG_GameplayController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayController(); \
	friend struct Z_Construct_UClass_AGameplayController_Statics; \
public: \
	DECLARE_CLASS(AGameplayController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ITOSG"), NO_API) \
	DECLARE_SERIALIZER(AGameplayController)


#define ITOSG_Source_ITOSG_GameplayController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayController(AGameplayController&&); \
	NO_API AGameplayController(const AGameplayController&); \
public:


#define ITOSG_Source_ITOSG_GameplayController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayController(AGameplayController&&); \
	NO_API AGameplayController(const AGameplayController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayController)


#define ITOSG_Source_ITOSG_GameplayController_h_15_PRIVATE_PROPERTY_OFFSET
#define ITOSG_Source_ITOSG_GameplayController_h_12_PROLOG
#define ITOSG_Source_ITOSG_GameplayController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ITOSG_Source_ITOSG_GameplayController_h_15_PRIVATE_PROPERTY_OFFSET \
	ITOSG_Source_ITOSG_GameplayController_h_15_RPC_WRAPPERS \
	ITOSG_Source_ITOSG_GameplayController_h_15_INCLASS \
	ITOSG_Source_ITOSG_GameplayController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ITOSG_Source_ITOSG_GameplayController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ITOSG_Source_ITOSG_GameplayController_h_15_PRIVATE_PROPERTY_OFFSET \
	ITOSG_Source_ITOSG_GameplayController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ITOSG_Source_ITOSG_GameplayController_h_15_INCLASS_NO_PURE_DECLS \
	ITOSG_Source_ITOSG_GameplayController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ITOSG_Source_ITOSG_GameplayController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
