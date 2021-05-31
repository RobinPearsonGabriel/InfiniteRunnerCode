// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMPROG2P1/RunGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunGameMode() {}
// Cross Module References
	GMPROG2P1_API UClass* Z_Construct_UClass_ARunGameMode_NoRegister();
	GMPROG2P1_API UClass* Z_Construct_UClass_ARunGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GMPROG2P1();
	GMPROG2P1_API UClass* Z_Construct_UClass_AFloorTile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(ARunGameMode::execAddTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunGameMode::execonTileExit)
	{
		P_GET_OBJECT(AFloorTile,Z_Param_floorTile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onTileExit(Z_Param_floorTile);
		P_NATIVE_END;
	}
	void ARunGameMode::StaticRegisterNativesARunGameMode()
	{
		UClass* Class = ARunGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTile", &ARunGameMode::execAddTile },
			{ "onTileExit", &ARunGameMode::execonTileExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunGameMode_AddTile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunGameMode_AddTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunGameMode_AddTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunGameMode, nullptr, "AddTile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunGameMode_AddTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunGameMode_AddTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunGameMode_AddTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunGameMode_AddTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunGameMode_onTileExit_Statics
	{
		struct RunGameMode_eventonTileExit_Parms
		{
			AFloorTile* floorTile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_floorTile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunGameMode_onTileExit_Statics::NewProp_floorTile = { "floorTile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunGameMode_eventonTileExit_Parms, floorTile), Z_Construct_UClass_AFloorTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunGameMode_onTileExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunGameMode_onTileExit_Statics::NewProp_floorTile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunGameMode_onTileExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunGameMode_onTileExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunGameMode, nullptr, "onTileExit", nullptr, nullptr, sizeof(RunGameMode_eventonTileExit_Parms), Z_Construct_UFunction_ARunGameMode_onTileExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunGameMode_onTileExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunGameMode_onTileExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunGameMode_onTileExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunGameMode_onTileExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunGameMode_onTileExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARunGameMode_NoRegister()
	{
		return ARunGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARunGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTransformPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransformPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilePrefab_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TilePrefab;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GMPROG2P1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunGameMode_AddTile, "AddTile" }, // 2613334234
		{ &Z_Construct_UFunction_ARunGameMode_onTileExit, "onTileExit" }, // 3184251085
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RunGameMode.h" },
		{ "ModuleRelativePath", "RunGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunGameMode_Statics::NewProp_NewTransformPoint_MetaData[] = {
		{ "Category", "RunGameMode" },
		{ "ModuleRelativePath", "RunGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARunGameMode_Statics::NewProp_NewTransformPoint = { "NewTransformPoint", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunGameMode, NewTransformPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ARunGameMode_Statics::NewProp_NewTransformPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::NewProp_NewTransformPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunGameMode_Statics::NewProp_TilePrefab_MetaData[] = {
		{ "Category", "RunGameMode" },
		{ "ModuleRelativePath", "RunGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARunGameMode_Statics::NewProp_TilePrefab = { "TilePrefab", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunGameMode, TilePrefab), Z_Construct_UClass_AFloorTile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARunGameMode_Statics::NewProp_TilePrefab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::NewProp_TilePrefab_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunGameMode_Statics::NewProp_NewTransformPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunGameMode_Statics::NewProp_TilePrefab,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARunGameMode_Statics::ClassParams = {
		&ARunGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARunGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARunGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARunGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARunGameMode, 715057536);
	template<> GMPROG2P1_API UClass* StaticClass<ARunGameMode>()
	{
		return ARunGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARunGameMode(Z_Construct_UClass_ARunGameMode, &ARunGameMode::StaticClass, TEXT("/Script/GMPROG2P1"), TEXT("ARunGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
