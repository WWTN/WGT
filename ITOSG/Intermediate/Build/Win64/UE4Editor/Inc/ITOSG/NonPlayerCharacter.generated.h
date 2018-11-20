// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ITOSG_NonPlayerCharacter_generated_h
#error "NonPlayerCharacter.generated.h already included, missing '#pragma once' in NonPlayerCharacter.h"
#endif
#define ITOSG_NonPlayerCharacter_generated_h

#define ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInteractWithObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractWithObject(); \
		P_NATIVE_END; \
	}


#define ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteractWithObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractWithObject(); \
		P_NATIVE_END; \
	}


#define ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANonPlayerCharacter(); \
	friend struct Z_Construct_UClass_ANonPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ANonPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ITOSG"), NO_API) \
	DECLARE_SERIALIZER(ANonPlayerCharacter)


#define ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANonPlayerCharacter(); \
	friend struct Z_Construct_UClass_ANonPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ANonPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ITOSG"), NO_API) \
	DECLARE_SERIALIZER(ANonPlayerCharacter)


#define ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANonPlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANonPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANonPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANonPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANonPlayerCharacter(ANonPlayerCharacter&&); \
	NO_API ANonPlayerCharacter(const ANonPlayerCharacter&); \
public:


#define ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANonPlayerCharacter(ANonPlayerCharacter&&); \
	NO_API ANonPlayerCharacter(const ANonPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANonPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANonPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANonPlayerCharacter)


#define ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define ITOSG_Source_ITOSG_NonPlayerCharacter_h_9_PROLOG
#define ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_RPC_WRAPPERS \
	ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_INCLASS \
	ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ITOSG_Source_ITOSG_NonPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ITOSG_Source_ITOSG_NonPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
