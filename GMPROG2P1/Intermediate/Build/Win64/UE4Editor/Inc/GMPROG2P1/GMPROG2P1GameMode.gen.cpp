// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMPROG2P1/GMPROG2P1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMPROG2P1GameMode() {}
// Cross Module References
	GMPROG2P1_API UClass* Z_Construct_UClass_AGMPROG2P1GameMode_NoRegister();
	GMPROG2P1_API UClass* Z_Construct_UClass_AGMPROG2P1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GMPROG2P1();
// End Cross Module References
	void AGMPROG2P1GameMode::StaticRegisterNativesAGMPROG2P1GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGMPROG2P1GameMode_NoRegister()
	{
		return AGMPROG2P1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGMPROG2P1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMPROG2P1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GMPROG2P1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMPROG2P1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GMPROG2P1GameMode.h" },
		{ "ModuleRelativePath", "GMPROG2P1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMPROG2P1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMPROG2P1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMPROG2P1GameMode_Statics::ClassParams = {
		&AGMPROG2P1GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGMPROG2P1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMPROG2P1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMPROG2P1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMPROG2P1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMPROG2P1GameMode, 804384425);
	template<> GMPROG2P1_API UClass* StaticClass<AGMPROG2P1GameMode>()
	{
		return AGMPROG2P1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMPROG2P1GameMode(Z_Construct_UClass_AGMPROG2P1GameMode, &AGMPROG2P1GameMode::StaticClass, TEXT("/Script/GMPROG2P1"), TEXT("AGMPROG2P1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMPROG2P1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
