// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E1211ROBE/PlayerEnergyWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerEnergyWidget() {}
// Cross Module References
	E1211ROBE_API UClass* Z_Construct_UClass_UPlayerEnergyWidget_NoRegister();
	E1211ROBE_API UClass* Z_Construct_UClass_UPlayerEnergyWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_E1211ROBE();
	E1211ROBE_API UClass* Z_Construct_UClass_AE1211ROBECharacter_NoRegister();
// End Cross Module References
	void UPlayerEnergyWidget::StaticRegisterNativesUPlayerEnergyWidget()
	{
	}
	UClass* Z_Construct_UClass_UPlayerEnergyWidget_NoRegister()
	{
		return UPlayerEnergyWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerEnergyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerEnergyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_E1211ROBE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerEnergyWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerEnergyWidget.h" },
		{ "ModuleRelativePath", "PlayerEnergyWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerEnergyWidget_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PlayerEnergyWidget" },
		{ "ModuleRelativePath", "PlayerEnergyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerEnergyWidget_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerEnergyWidget, Player), Z_Construct_UClass_AE1211ROBECharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerEnergyWidget_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerEnergyWidget_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerEnergyWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerEnergyWidget_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerEnergyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerEnergyWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerEnergyWidget_Statics::ClassParams = {
		&UPlayerEnergyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerEnergyWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPlayerEnergyWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerEnergyWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerEnergyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerEnergyWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerEnergyWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerEnergyWidget, 807483166);
	template<> E1211ROBE_API UClass* StaticClass<UPlayerEnergyWidget>()
	{
		return UPlayerEnergyWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerEnergyWidget(Z_Construct_UClass_UPlayerEnergyWidget, &UPlayerEnergyWidget::StaticClass, TEXT("/Script/E1211ROBE"), TEXT("UPlayerEnergyWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerEnergyWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
