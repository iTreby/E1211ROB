// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E1211ROBE/GeneratorPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorPad() {}
// Cross Module References
	E1211ROBE_API UClass* Z_Construct_UClass_AGeneratorPad_NoRegister();
	E1211ROBE_API UClass* Z_Construct_UClass_AGeneratorPad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_E1211ROBE();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AGeneratorPad::StaticRegisterNativesAGeneratorPad()
	{
	}
	UClass* Z_Construct_UClass_AGeneratorPad_NoRegister()
	{
		return AGeneratorPad::StaticClass();
	}
	struct Z_Construct_UClass_AGeneratorPad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isOnGenerator_MetaData[];
#endif
		static void NewProp_isOnGenerator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOnGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EnergyAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Speed;
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
	UObject* (*const Z_Construct_UClass_AGeneratorPad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_E1211ROBE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorPad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneratorPad.h" },
		{ "ModuleRelativePath", "GeneratorPad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorPad_Statics::NewProp_isOnGenerator_MetaData[] = {
		{ "Category", "GeneratorPad" },
		{ "ModuleRelativePath", "GeneratorPad.h" },
	};
#endif
	void Z_Construct_UClass_AGeneratorPad_Statics::NewProp_isOnGenerator_SetBit(void* Obj)
	{
		((AGeneratorPad*)Obj)->isOnGenerator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeneratorPad_Statics::NewProp_isOnGenerator = { "isOnGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGeneratorPad), &Z_Construct_UClass_AGeneratorPad_Statics::NewProp_isOnGenerator_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeneratorPad_Statics::NewProp_isOnGenerator_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeneratorPad_Statics::NewProp_isOnGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorPad_Statics::NewProp_EnergyAdd_MetaData[] = {
		{ "Category", "GeneratorPad" },
		{ "ModuleRelativePath", "GeneratorPad.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeneratorPad_Statics::NewProp_EnergyAdd = { "EnergyAdd", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneratorPad, EnergyAdd), METADATA_PARAMS(Z_Construct_UClass_AGeneratorPad_Statics::NewProp_EnergyAdd_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeneratorPad_Statics::NewProp_EnergyAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorPad_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "GeneratorPad" },
		{ "ModuleRelativePath", "GeneratorPad.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeneratorPad_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneratorPad, Speed), METADATA_PARAMS(Z_Construct_UClass_AGeneratorPad_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeneratorPad_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorPad_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "GeneratorPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GeneratorPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneratorPad_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneratorPad, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeneratorPad_Statics::NewProp_BoxComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeneratorPad_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorPad_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "GeneratorPad" },
		{ "ModuleRelativePath", "GeneratorPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneratorPad_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneratorPad, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeneratorPad_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeneratorPad_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorPad_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "GeneratorPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GeneratorPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneratorPad_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneratorPad, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeneratorPad_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeneratorPad_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeneratorPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorPad_Statics::NewProp_isOnGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorPad_Statics::NewProp_EnergyAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorPad_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorPad_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorPad_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorPad_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneratorPad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneratorPad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneratorPad_Statics::ClassParams = {
		&AGeneratorPad::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeneratorPad_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGeneratorPad_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGeneratorPad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGeneratorPad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneratorPad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneratorPad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneratorPad, 3986509666);
	template<> E1211ROBE_API UClass* StaticClass<AGeneratorPad>()
	{
		return AGeneratorPad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneratorPad(Z_Construct_UClass_AGeneratorPad, &AGeneratorPad::StaticClass, TEXT("/Script/E1211ROBE"), TEXT("AGeneratorPad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratorPad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
