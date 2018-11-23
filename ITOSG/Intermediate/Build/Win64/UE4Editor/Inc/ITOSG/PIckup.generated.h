// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ITOSG_PIckup_generated_h
#error "PIckup.generated.h already included, missing '#pragma once' in PIckup.h"
#endif
#define ITOSG_PIckup_generated_h

#define ITOSG_Source_ITOSG_PIckup_h_15_RPC_WRAPPERS
#define ITOSG_Source_ITOSG_PIckup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ITOSG_Source_ITOSG_PIckup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AInteractable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ITOSG"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define ITOSG_Source_ITOSG_PIckup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AInteractable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ITOSG"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define ITOSG_Source_ITOSG_PIckup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define ITOSG_Source_ITOSG_PIckup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define ITOSG_Source_ITOSG_PIckup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupMesh() { return STRUCT_OFFSET(APickup, PickupMesh); } \
	FORCEINLINE static uint32 __PPO__ItemID() { return STRUCT_OFFSET(APickup, ItemID); }


#define ITOSG_Source_ITOSG_PIckup_h_12_PROLOG
#define ITOSG_Source_ITOSG_PIckup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ITOSG_Source_ITOSG_PIckup_h_15_PRIVATE_PROPERTY_OFFSET \
	ITOSG_Source_ITOSG_PIckup_h_15_RPC_WRAPPERS \
	ITOSG_Source_ITOSG_PIckup_h_15_INCLASS \
	ITOSG_Source_ITOSG_PIckup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ITOSG_Source_ITOSG_PIckup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ITOSG_Source_ITOSG_PIckup_h_15_PRIVATE_PROPERTY_OFFSET \
	ITOSG_Source_ITOSG_PIckup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ITOSG_Source_ITOSG_PIckup_h_15_INCLASS_NO_PURE_DECLS \
	ITOSG_Source_ITOSG_PIckup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ITOSG_Source_ITOSG_PIckup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
