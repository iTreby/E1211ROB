// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef E1211ROBE_E1211ROBECharacter_generated_h
#error "E1211ROBECharacter.generated.h already included, missing '#pragma once' in E1211ROBECharacter.h"
#endif
#define E1211ROBE_E1211ROBECharacter_generated_h

#define E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_RPC_WRAPPERS
#define E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAE1211ROBECharacter(); \
	friend struct Z_Construct_UClass_AE1211ROBECharacter_Statics; \
public: \
	DECLARE_CLASS(AE1211ROBECharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/E1211ROBE"), NO_API) \
	DECLARE_SERIALIZER(AE1211ROBECharacter)


#define E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAE1211ROBECharacter(); \
	friend struct Z_Construct_UClass_AE1211ROBECharacter_Statics; \
public: \
	DECLARE_CLASS(AE1211ROBECharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/E1211ROBE"), NO_API) \
	DECLARE_SERIALIZER(AE1211ROBECharacter)


#define E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AE1211ROBECharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AE1211ROBECharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AE1211ROBECharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AE1211ROBECharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AE1211ROBECharacter(AE1211ROBECharacter&&); \
	NO_API AE1211ROBECharacter(const AE1211ROBECharacter&); \
public:


#define E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AE1211ROBECharacter(AE1211ROBECharacter&&); \
	NO_API AE1211ROBECharacter(const AE1211ROBECharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AE1211ROBECharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AE1211ROBECharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AE1211ROBECharacter)


#define E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AE1211ROBECharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AE1211ROBECharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AE1211ROBECharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AE1211ROBECharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AE1211ROBECharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AE1211ROBECharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AE1211ROBECharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AE1211ROBECharacter, L_MotionController); }


#define E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_11_PROLOG
#define E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_RPC_WRAPPERS \
	E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_INCLASS \
	E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_INCLASS_NO_PURE_DECLS \
	E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> E1211ROBE_API UClass* StaticClass<class AE1211ROBECharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E1211ROBE_Source_E1211ROBE_E1211ROBECharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
