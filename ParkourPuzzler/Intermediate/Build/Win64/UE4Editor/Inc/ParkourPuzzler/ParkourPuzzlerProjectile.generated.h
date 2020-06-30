// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PARKOURPUZZLER_ParkourPuzzlerProjectile_generated_h
#error "ParkourPuzzlerProjectile.generated.h already included, missing '#pragma once' in ParkourPuzzlerProjectile.h"
#endif
#define PARKOURPUZZLER_ParkourPuzzlerProjectile_generated_h

#define ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_RPC_WRAPPERS \
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
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParkourPuzzlerProjectile(); \
	friend PARKOURPUZZLER_API class UClass* Z_Construct_UClass_AParkourPuzzlerProjectile(); \
public: \
	DECLARE_CLASS(AParkourPuzzlerProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ParkourPuzzler"), NO_API) \
	DECLARE_SERIALIZER(AParkourPuzzlerProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAParkourPuzzlerProjectile(); \
	friend PARKOURPUZZLER_API class UClass* Z_Construct_UClass_AParkourPuzzlerProjectile(); \
public: \
	DECLARE_CLASS(AParkourPuzzlerProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ParkourPuzzler"), NO_API) \
	DECLARE_SERIALIZER(AParkourPuzzlerProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParkourPuzzlerProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParkourPuzzlerProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParkourPuzzlerProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParkourPuzzlerProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParkourPuzzlerProjectile(AParkourPuzzlerProjectile&&); \
	NO_API AParkourPuzzlerProjectile(const AParkourPuzzlerProjectile&); \
public:


#define ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParkourPuzzlerProjectile(AParkourPuzzlerProjectile&&); \
	NO_API AParkourPuzzlerProjectile(const AParkourPuzzlerProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParkourPuzzlerProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParkourPuzzlerProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParkourPuzzlerProjectile)


#define ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AParkourPuzzlerProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AParkourPuzzlerProjectile, ProjectileMovement); }


#define ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_9_PROLOG
#define ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_RPC_WRAPPERS \
	ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_INCLASS \
	ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_INCLASS_NO_PURE_DECLS \
	ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ParkourPuzzler_Source_ParkourPuzzler_ParkourPuzzlerProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
