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
struct FHitResult;
#ifdef E1211ROBE_Deadly_Trap_generated_h
#error "Deadly_Trap.generated.h already included, missing '#pragma once' in Deadly_Trap.h"
#endif
#define E1211ROBE_Deadly_Trap_generated_h

#define E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeadly_Trap(); \
	friend struct Z_Construct_UClass_ADeadly_Trap_Statics; \
public: \
	DECLARE_CLASS(ADeadly_Trap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/E1211ROBE"), NO_API) \
	DECLARE_SERIALIZER(ADeadly_Trap)


#define E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADeadly_Trap(); \
	friend struct Z_Construct_UClass_ADeadly_Trap_Statics; \
public: \
	DECLARE_CLASS(ADeadly_Trap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/E1211ROBE"), NO_API) \
	DECLARE_SERIALIZER(ADeadly_Trap)


#define E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeadly_Trap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeadly_Trap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeadly_Trap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeadly_Trap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeadly_Trap(ADeadly_Trap&&); \
	NO_API ADeadly_Trap(const ADeadly_Trap&); \
public:


#define E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeadly_Trap(ADeadly_Trap&&); \
	NO_API ADeadly_Trap(const ADeadly_Trap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeadly_Trap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeadly_Trap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeadly_Trap)


#define E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_PRIVATE_PROPERTY_OFFSET
#define E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_9_PROLOG
#define E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_PRIVATE_PROPERTY_OFFSET \
	E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_RPC_WRAPPERS \
	E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_INCLASS \
	E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_PRIVATE_PROPERTY_OFFSET \
	E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_INCLASS_NO_PURE_DECLS \
	E1211ROBE_Source_E1211ROBE_Deadly_Trap_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> E1211ROBE_API UClass* StaticClass<class ADeadly_Trap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID E1211ROBE_Source_E1211ROBE_Deadly_Trap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
