// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIPLOM_DBaseCharacter_generated_h
#error "DBaseCharacter.generated.h already included, missing '#pragma once' in DBaseCharacter.h"
#endif
#define DIPLOM_DBaseCharacter_generated_h

#define FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_SPARSE_DATA
#define FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_RPC_WRAPPERS
#define FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBaseCharacter(); \
	friend struct Z_Construct_UClass_ADBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ADBaseCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Diplom"), NO_API) \
	DECLARE_SERIALIZER(ADBaseCharacter)


#define FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesADBaseCharacter(); \
	friend struct Z_Construct_UClass_ADBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ADBaseCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Diplom"), NO_API) \
	DECLARE_SERIALIZER(ADBaseCharacter)


#define FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBaseCharacter(ADBaseCharacter&&); \
	NO_API ADBaseCharacter(const ADBaseCharacter&); \
public:


#define FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBaseCharacter(ADBaseCharacter&&); \
	NO_API ADBaseCharacter(const ADBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBaseCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBaseCharacter)


#define FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_14_PROLOG
#define FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_SPARSE_DATA \
	FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_RPC_WRAPPERS \
	FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_INCLASS \
	FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_SPARSE_DATA \
	FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIPLOM_API UClass* StaticClass<class ADBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Diplom_Source_Diplom_Characters_DBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
