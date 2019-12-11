// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E1211ROBE/E1211ROBEHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE1211ROBEHUD() {}
// Cross Module References
	E1211ROBE_API UClass* Z_Construct_UClass_AE1211ROBEHUD_NoRegister();
	E1211ROBE_API UClass* Z_Construct_UClass_AE1211ROBEHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_E1211ROBE();
// End Cross Module References
	void AE1211ROBEHUD::StaticRegisterNativesAE1211ROBEHUD()
	{
	}
	UClass* Z_Construct_UClass_AE1211ROBEHUD_NoRegister()
	{
		return AE1211ROBEHUD::StaticClass();
	}
	struct Z_Construct_UClass_AE1211ROBEHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AE1211ROBEHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_E1211ROBE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AE1211ROBEHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "E1211ROBEHUD.h" },
		{ "ModuleRelativePath", "E1211ROBEHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AE1211ROBEHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AE1211ROBEHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AE1211ROBEHUD_Statics::ClassParams = {
		&AE1211ROBEHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AE1211ROBEHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AE1211ROBEHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AE1211ROBEHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AE1211ROBEHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AE1211ROBEHUD, 520847177);
	template<> E1211ROBE_API UClass* StaticClass<AE1211ROBEHUD>()
	{
		return AE1211ROBEHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AE1211ROBEHUD(Z_Construct_UClass_AE1211ROBEHUD, &AE1211ROBEHUD::StaticClass, TEXT("/Script/E1211ROBE"), TEXT("AE1211ROBEHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AE1211ROBEHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
