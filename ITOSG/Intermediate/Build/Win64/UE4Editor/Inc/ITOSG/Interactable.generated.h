// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef ITOSG_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define ITOSG_Interactable_generated_h

#define ITOSG_Source_ITOSG_Interactable_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUseText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUseText(); \
		P_NATIVE_END; \
	}


#define ITOSG_Source_ITOSG_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUseText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUseText(); \
		P_NATIVE_END; \
	}


#define ITOSG_Source_ITOSG_Interactable_h_12_EVENT_PARMS \
	struct Interactable_eventInteract_Parms \
	{ \
		APlayerController* Controller; \
	};


#define ITOSG_Source_ITOSG_Interactable_h_12_CALLBACK_WRAPPERS
#define ITOSG_Source_ITOSG_Interactable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ITOSG"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define ITOSG_Source_ITOSG_Interactable_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ITOSG"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define ITOSG_Source_ITOSG_Interactable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public:


#define ITOSG_Source_ITOSG_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractable)


#define ITOSG_Source_ITOSG_Interactable_h_12_PRIVATE_PROPERTY_OFFSET
#define ITOSG_Source_ITOSG_Interactable_h_9_PROLOG \
	ITOSG_Source_ITOSG_Interactable_h_12_EVENT_PARMS


#define ITOSG_Source_ITOSG_Interactable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ITOSG_Source_ITOSG_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	ITOSG_Source_ITOSG_Interactable_h_12_RPC_WRAPPERS \
	ITOSG_Source_ITOSG_Interactable_h_12_CALLBACK_WRAPPERS \
	ITOSG_Source_ITOSG_Interactable_h_12_INCLASS \
	ITOSG_Source_ITOSG_Interactable_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ITOSG_Source_ITOSG_Interactable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ITOSG_Source_ITOSG_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	ITOSG_Source_ITOSG_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ITOSG_Source_ITOSG_Interactable_h_12_CALLBACK_WRAPPERS \
	ITOSG_Source_ITOSG_Interactable_h_12_INCLASS_NO_PURE_DECLS \
	ITOSG_Source_ITOSG_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ITOSG_Source_ITOSG_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
