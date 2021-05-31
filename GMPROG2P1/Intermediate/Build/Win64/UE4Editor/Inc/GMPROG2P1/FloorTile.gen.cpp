// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMPROG2P1/FloorTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorTile() {}
// Cross Module References
	GMPROG2P1_API UFunction* Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GMPROG2P1();
	GMPROG2P1_API UClass* Z_Construct_UClass_AFloorTile_NoRegister();
	GMPROG2P1_API UClass* Z_Construct_UClass_AFloorTile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature_Statics
	{
		struct _Script_GMPROG2P1_eventPlayerExitSignaiture_Parms
		{
			AFloorTile* Tile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GMPROG2P1_eventPlayerExitSignaiture_Parms, Tile), Z_Construct_UClass_AFloorTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature_Statics::NewProp_Tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GMPROG2P1, nullptr, "PlayerExitSignaiture__DelegateSignature", nullptr, nullptr, sizeof(_Script_GMPROG2P1_eventPlayerExitSignaiture_Parms), Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AFloorTile::execOnActorOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AFloorTile::StaticRegisterNativesAFloorTile()
	{
		UClass* Class = AFloorTile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorOverlap", &AFloorTile::execOnActorOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics
	{
		struct FloorTile_eventOnActorOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorTile_eventOnActorOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FloorTile_eventOnActorOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FloorTile_eventOnActorOverlap_Parms), &Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorTile_eventOnActorOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorTile_eventOnActorOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorTile_eventOnActorOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorTile_eventOnActorOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorTile, nullptr, "OnActorOverlap", nullptr, nullptr, sizeof(FloorTile_eventOnActorOverlap_Parms), Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorTile_OnActorOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorTile_OnActorOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFloorTile_NoRegister()
	{
		return AFloorTile::StaticClass();
	}
	struct Z_Construct_UClass_AFloorTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttatchPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttatchPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Floor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Floor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerExit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerExit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GMPROG2P1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloorTile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloorTile_OnActorOverlap, "OnActorOverlap" }, // 2694091592
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorTile.h" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_ExitTrigger_MetaData[] = {
		{ "Category", "FloorTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_ExitTrigger = { "ExitTrigger", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, ExitTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_ExitTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_ExitTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_AttatchPoint_MetaData[] = {
		{ "Category", "FloorTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_AttatchPoint = { "AttatchPoint", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, AttatchPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_AttatchPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_AttatchPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_root_MetaData[] = {
		{ "Category", "FloorTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_WallB_MetaData[] = {
		{ "Category", "FloorTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_WallB = { "WallB", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, WallB), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_WallB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_WallB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_WallA_MetaData[] = {
		{ "Category", "FloorTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_WallA = { "WallA", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, WallA), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_WallA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_WallA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_Floor_MetaData[] = {
		{ "Category", "FloorTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, Floor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_Floor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_Floor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_OnPlayerExit_MetaData[] = {
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_OnPlayerExit = { "OnPlayerExit", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorTile, OnPlayerExit), Z_Construct_UDelegateFunction_GMPROG2P1_PlayerExitSignaiture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::NewProp_OnPlayerExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_OnPlayerExit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_ExitTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_AttatchPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_WallB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_WallA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_Floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_OnPlayerExit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloorTile_Statics::ClassParams = {
		&AFloorTile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFloorTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloorTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloorTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloorTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloorTile, 1478568426);
	template<> GMPROG2P1_API UClass* StaticClass<AFloorTile>()
	{
		return AFloorTile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloorTile(Z_Construct_UClass_AFloorTile, &AFloorTile::StaticClass, TEXT("/Script/GMPROG2P1"), TEXT("AFloorTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
