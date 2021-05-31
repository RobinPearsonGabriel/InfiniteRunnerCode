// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFloorTile;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GMPROG2P1_FloorTile_generated_h
#error "FloorTile.generated.h already included, missing '#pragma once' in FloorTile.h"
#endif
#define GMPROG2P1_FloorTile_generated_h

#define GMPROG2P1_Source_GMPROG2P1_FloorTile_h_10_DELEGATE \
struct _Script_GMPROG2P1_eventPlayerExitSignaiture_Parms \
{ \
	AFloorTile* Tile; \
}; \
static inline void FPlayerExitSignaiture_DelegateWrapper(const FMulticastScriptDelegate& PlayerExitSignaiture, AFloorTile* Tile) \
{ \
	_Script_GMPROG2P1_eventPlayerExitSignaiture_Parms Parms; \
	Parms.Tile=Tile; \
	PlayerExitSignaiture.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_SPARSE_DATA
#define GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorOverlap);


#define GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorOverlap);


#define GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloorTile(); \
	friend struct Z_Construct_UClass_AFloorTile_Statics; \
public: \
	DECLARE_CLASS(AFloorTile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMPROG2P1"), NO_API) \
	DECLARE_SERIALIZER(AFloorTile)


#define GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFloorTile(); \
	friend struct Z_Construct_UClass_AFloorTile_Statics; \
public: \
	DECLARE_CLASS(AFloorTile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMPROG2P1"), NO_API) \
	DECLARE_SERIALIZER(AFloorTile)


#define GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloorTile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloorTile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorTile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorTile(AFloorTile&&); \
	NO_API AFloorTile(const AFloorTile&); \
public:


#define GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorTile(AFloorTile&&); \
	NO_API AFloorTile(const AFloorTile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorTile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloorTile)


#define GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Floor() { return STRUCT_OFFSET(AFloorTile, Floor); } \
	FORCEINLINE static uint32 __PPO__WallA() { return STRUCT_OFFSET(AFloorTile, WallA); } \
	FORCEINLINE static uint32 __PPO__WallB() { return STRUCT_OFFSET(AFloorTile, WallB); } \
	FORCEINLINE static uint32 __PPO__root() { return STRUCT_OFFSET(AFloorTile, root); } \
	FORCEINLINE static uint32 __PPO__AttatchPoint() { return STRUCT_OFFSET(AFloorTile, AttatchPoint); } \
	FORCEINLINE static uint32 __PPO__ExitTrigger() { return STRUCT_OFFSET(AFloorTile, ExitTrigger); }


#define GMPROG2P1_Source_GMPROG2P1_FloorTile_h_11_PROLOG
#define GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_PRIVATE_PROPERTY_OFFSET \
	GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_SPARSE_DATA \
	GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_RPC_WRAPPERS \
	GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_INCLASS \
	GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_PRIVATE_PROPERTY_OFFSET \
	GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_SPARSE_DATA \
	GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_INCLASS_NO_PURE_DECLS \
	GMPROG2P1_Source_GMPROG2P1_FloorTile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMPROG2P1_API UClass* StaticClass<class AFloorTile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GMPROG2P1_Source_GMPROG2P1_FloorTile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
