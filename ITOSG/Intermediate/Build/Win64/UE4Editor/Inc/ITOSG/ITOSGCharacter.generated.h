// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ITOSG_ITOSGCharacter_generated_h
#error "ITOSGCharacter.generated.h already included, missing '#pragma once' in ITOSGCharacter.h"
#endif
#define ITOSG_ITOSGCharacter_generated_h

#define ITOSG_Source_ITOSG_ITOSGCharacter_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItem_Statics; \
	ITOSG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


#define ITOSG_Source_ITOSG_ITOSGCharacter_h_49_RPC_WRAPPERS
#define ITOSG_Source_ITOSG_ITOSGCharacter_h_49_RPC_WRAPPERS_NO_PURE_DECLS
#define ITOSG_Source_ITOSG_ITOSGCharacter_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAITOSGCharacter(); \
	friend struct Z_Construct_UClass_AITOSGCharacter_Statics; \
public: \
	DECLARE_CLASS(AITOSGCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ITOSG"), NO_API) \
	DECLARE_SERIALIZER(AITOSGCharacter)


#define ITOSG_Source_ITOSG_ITOSGCharacter_h_49_INCLASS \
private: \
	static void StaticRegisterNativesAITOSGCharacter(); \
	friend struct Z_Construct_UClass_AITOSGCharacter_Statics; \
public: \
	DECLARE_CLASS(AITOSGCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ITOSG"), NO_API) \
	DECLARE_SERIALIZER(AITOSGCharacter)


#define ITOSG_Source_ITOSG_ITOSGCharacter_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AITOSGCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AITOSGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AITOSGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AITOSGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AITOSGCharacter(AITOSGCharacter&&); \
	NO_API AITOSGCharacter(const AITOSGCharacter&); \
public:


#define ITOSG_Source_ITOSG_ITOSGCharacter_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AITOSGCharacter(AITOSGCharacter&&); \
	NO_API AITOSGCharacter(const AITOSGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AITOSGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AITOSGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AITOSGCharacter)


#define ITOSG_Source_ITOSG_ITOSGCharacter_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AITOSGCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AITOSGCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AITOSGCharacter, CursorToWorld); }


#define ITOSG_Source_ITOSG_ITOSGCharacter_h_46_PROLOG
#define ITOSG_Source_ITOSG_ITOSGCharacter_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ITOSG_Source_ITOSG_ITOSGCharacter_h_49_PRIVATE_PROPERTY_OFFSET \
	ITOSG_Source_ITOSG_ITOSGCharacter_h_49_RPC_WRAPPERS \
	ITOSG_Source_ITOSG_ITOSGCharacter_h_49_INCLASS \
	ITOSG_Source_ITOSG_ITOSGCharacter_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ITOSG_Source_ITOSG_ITOSGCharacter_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ITOSG_Source_ITOSG_ITOSGCharacter_h_49_PRIVATE_PROPERTY_OFFSET \
	ITOSG_Source_ITOSG_ITOSGCharacter_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	ITOSG_Source_ITOSG_ITOSGCharacter_h_49_INCLASS_NO_PURE_DECLS \
	ITOSG_Source_ITOSG_ITOSGCharacter_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ITOSG_Source_ITOSG_ITOSGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
