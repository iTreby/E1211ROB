// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef E1211ROBE_E1211ROBEProjectile_generated_h
#error "E1211ROBEProjectile.generated.h already included, missing '#pragma once' in E1211ROBEProjectile.h"
#endif
#define E1211ROBE_E1211ROBEProjectile_generated_h

#define E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAE1211ROBEProjectile(); \
	friend struct Z_Construct_UClass_AE1211ROBEProjectile_Statics; \
public: \
	DECLARE_CLASS(AE1211ROBEProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/E1211ROBE"), NO_API) \
	DECLARE_SERIALIZER(AE1211ROBEProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAE1211ROBEProjectile(); \
	friend struct Z_Construct_UClass_AE1211ROBEProjectile_Statics; \
public: \
	DECLARE_CLASS(AE1211ROBEProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/E1211ROBE"), NO_API) \
	DECLARE_SERIALIZER(AE1211ROBEProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AE1211ROBEProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AE1211ROBEProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AE1211ROBEProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AE1211ROBEProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AE1211ROBEProjectile(AE1211ROBEProjectile&&); \
	NO_API AE1211ROBEProjectile(const AE1211ROBEProjectile&); \
public:


#define E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AE1211ROBEProjectile(AE1211ROBEProjectile&&); \
	NO_API AE1211ROBEProjectile(const AE1211ROBEProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AE1211ROBEProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AE1211ROBEProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AE1211ROBEProjectile)


#define E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AE1211ROBEProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AE1211ROBEProjectile, ProjectileMovement); }


#define E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_9_PROLOG
#define E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_RPC_WRAPPERS \
	E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_INCLASS \
	E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_INCLASS_NO_PURE_DECLS \
	E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> E1211ROBE_API UClass* StaticClass<class AE1211ROBEProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E1211ROBE_Source_E1211ROBE_E1211ROBEProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
