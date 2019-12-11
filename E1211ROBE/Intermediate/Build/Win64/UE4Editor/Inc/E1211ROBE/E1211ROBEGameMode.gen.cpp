// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E1211ROBE/E1211ROBEGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE1211ROBEGameMode() {}
// Cross Module References
	E1211ROBE_API UClass* Z_Construct_UClass_AE1211ROBEGameMode_NoRegister();
	E1211ROBE_API UClass* Z_Construct_UClass_AE1211ROBEGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_E1211ROBE();
// End Cross Module References
	void AE1211ROBEGameMode::StaticRegisterNativesAE1211ROBEGameMode()
	{
	}
	UClass* Z_Construct_UClass_AE1211ROBEGameMode_NoRegister()
	{
		return AE1211ROBEGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AE1211ROBEGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AE1211ROBEGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_E1211ROBE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AE1211ROBEGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "E1211ROBEGameMode.h" },
		{ "ModuleRelativePath", "E1211ROBEGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AE1211ROBEGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AE1211ROBEGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AE1211ROBEGameMode_Statics::ClassParams = {
		&AE1211ROBEGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AE1211ROBEGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AE1211ROBEGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AE1211ROBEGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AE1211ROBEGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AE1211ROBEGameMode, 2912777139);
	template<> E1211ROBE_API UClass* StaticClass<AE1211ROBEGameMode>()
	{
		return AE1211ROBEGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AE1211ROBEGameMode(Z_Construct_UClass_AE1211ROBEGameMode, &AE1211ROBEGameMode::StaticClass, TEXT("/Script/E1211ROBE"), TEXT("AE1211ROBEGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AE1211ROBEGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
