// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMPROG2P1_RunCharacter_generated_h
#error "RunCharacter.generated.h already included, missing '#pragma once' in RunCharacter.h"
#endif
#define GMPROG2P1_RunCharacter_generated_h

#define GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_SPARSE_DATA
#define GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_RPC_WRAPPERS
#define GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunCharacter(); \
	friend struct Z_Construct_UClass_ARunCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMPROG2P1"), NO_API) \
	DECLARE_SERIALIZER(ARunCharacter)


#define GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARunCharacter(); \
	friend struct Z_Construct_UClass_ARunCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMPROG2P1"), NO_API) \
	DECLARE_SERIALIZER(ARunCharacter)


#define GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunCharacter(ARunCharacter&&); \
	NO_API ARunCharacter(const ARunCharacter&); \
public:


#define GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunCharacter(ARunCharacter&&); \
	NO_API ARunCharacter(const ARunCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunCharacter)


#define GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMesh() { return STRUCT_OFFSET(ARunCharacter, SkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ARunCharacter, Camera); }


#define GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_9_PROLOG
#define GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_SPARSE_DATA \
	GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_RPC_WRAPPERS \
	GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_INCLASS \
	GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_SPARSE_DATA \
	GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_INCLASS_NO_PURE_DECLS \
	GMPROG2P1_Source_GMPROG2P1_RunCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMPROG2P1_API UClass* StaticClass<class ARunCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GMPROG2P1_Source_GMPROG2P1_RunCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
