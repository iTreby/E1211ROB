// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E1211ROBE/EnergyDrink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnergyDrink() {}
// Cross Module References
	E1211ROBE_API UClass* Z_Construct_UClass_AEnergyDrink_NoRegister();
	E1211ROBE_API UClass* Z_Construct_UClass_AEnergyDrink();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_E1211ROBE();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnergyDrink::StaticRegisterNativesAEnergyDrink()
	{
	}
	UClass* Z_Construct_UClass_AEnergyDrink_NoRegister()
	{
		return AEnergyDrink::StaticClass();
	}
	struct Z_Construct_UClass_AEnergyDrink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healing_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_healing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnergyDrink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_E1211ROBE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnergyDrink_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnergyDrink.h" },
		{ "ModuleRelativePath", "EnergyDrink.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "EnergyDrink" },
		{ "ModuleRelativePath", "EnergyDrink.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnergyDrink, Count), METADATA_PARAMS(Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Count_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnergyDrink_Statics::NewProp_healing_MetaData[] = {
		{ "Category", "EnergyDrink" },
		{ "ModuleRelativePath", "EnergyDrink.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnergyDrink_Statics::NewProp_healing = { "healing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnergyDrink, healing), METADATA_PARAMS(Z_Construct_UClass_AEnergyDrink_Statics::NewProp_healing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnergyDrink_Statics::NewProp_healing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "EnergyDrink" },
		{ "ModuleRelativePath", "EnergyDrink.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnergyDrink, Time), METADATA_PARAMS(Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnergyDrink_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "EnergyDrink" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnergyDrink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnergyDrink_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnergyDrink, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnergyDrink_Statics::NewProp_BoxComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnergyDrink_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "EnergyDrink" },
		{ "ModuleRelativePath", "EnergyDrink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnergyDrink, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnergyDrink_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "EnergyDrink" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnergyDrink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnergyDrink_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnergyDrink, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnergyDrink_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnergyDrink_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnergyDrink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnergyDrink_Statics::NewProp_healing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnergyDrink_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnergyDrink_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnergyDrink_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnergyDrink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnergyDrink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnergyDrink_Statics::ClassParams = {
		&AEnergyDrink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnergyDrink_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AEnergyDrink_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnergyDrink_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnergyDrink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnergyDrink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnergyDrink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnergyDrink, 3252392809);
	template<> E1211ROBE_API UClass* StaticClass<AEnergyDrink>()
	{
		return AEnergyDrink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnergyDrink(Z_Construct_UClass_AEnergyDrink, &AEnergyDrink::StaticClass, TEXT("/Script/E1211ROBE"), TEXT("AEnergyDrink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnergyDrink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
