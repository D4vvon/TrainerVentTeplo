// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef DIPLOM_DiplomProjectile_generated_h
#error "DiplomProjectile.generated.h already included, missing '#pragma once' in DiplomProjectile.h"
#endif
#define DIPLOM_DiplomProjectile_generated_h

#define FID_Diplom_Source_Diplom_DiplomProjectile_h_15_SPARSE_DATA
#define FID_Diplom_Source_Diplom_DiplomProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Diplom_Source_Diplom_DiplomProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Diplom_Source_Diplom_DiplomProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADiplomProjectile(); \
	friend struct Z_Construct_UClass_ADiplomProjectile_Statics; \
public: \
	DECLARE_CLASS(ADiplomProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Diplom"), NO_API) \
	DECLARE_SERIALIZER(ADiplomProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Diplom_Source_Diplom_DiplomProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADiplomProjectile(); \
	friend struct Z_Construct_UClass_ADiplomProjectile_Statics; \
public: \
	DECLARE_CLASS(ADiplomProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Diplom"), NO_API) \
	DECLARE_SERIALIZER(ADiplomProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Diplom_Source_Diplom_DiplomProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADiplomProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADiplomProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADiplomProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADiplomProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADiplomProjectile(ADiplomProjectile&&); \
	NO_API ADiplomProjectile(const ADiplomProjectile&); \
public:


#define FID_Diplom_Source_Diplom_DiplomProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADiplomProjectile(ADiplomProjectile&&); \
	NO_API ADiplomProjectile(const ADiplomProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADiplomProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADiplomProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADiplomProjectile)


#define FID_Diplom_Source_Diplom_DiplomProjectile_h_12_PROLOG
#define FID_Diplom_Source_Diplom_DiplomProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Diplom_Source_Diplom_DiplomProjectile_h_15_SPARSE_DATA \
	FID_Diplom_Source_Diplom_DiplomProjectile_h_15_RPC_WRAPPERS \
	FID_Diplom_Source_Diplom_DiplomProjectile_h_15_INCLASS \
	FID_Diplom_Source_Diplom_DiplomProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Diplom_Source_Diplom_DiplomProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Diplom_Source_Diplom_DiplomProjectile_h_15_SPARSE_DATA \
	FID_Diplom_Source_Diplom_DiplomProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Diplom_Source_Diplom_DiplomProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Diplom_Source_Diplom_DiplomProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIPLOM_API UClass* StaticClass<class ADiplomProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Diplom_Source_Diplom_DiplomProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
