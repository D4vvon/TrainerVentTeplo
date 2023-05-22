// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DiplomCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIPLOM_DiplomCharacter_generated_h
#error "DiplomCharacter.generated.h already included, missing '#pragma once' in DiplomCharacter.h"
#endif
#define DIPLOM_DiplomCharacter_generated_h

#define FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_SPARSE_DATA
#define FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_RPC_WRAPPERS
#define FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_ACCESSORS
#define FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADiplomCharacter(); \
	friend struct Z_Construct_UClass_ADiplomCharacter_Statics; \
public: \
	DECLARE_CLASS(ADiplomCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Diplom"), NO_API) \
	DECLARE_SERIALIZER(ADiplomCharacter)


#define FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesADiplomCharacter(); \
	friend struct Z_Construct_UClass_ADiplomCharacter_Statics; \
public: \
	DECLARE_CLASS(ADiplomCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Diplom"), NO_API) \
	DECLARE_SERIALIZER(ADiplomCharacter)


#define FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADiplomCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADiplomCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADiplomCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADiplomCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADiplomCharacter(ADiplomCharacter&&); \
	NO_API ADiplomCharacter(const ADiplomCharacter&); \
public: \
	NO_API virtual ~ADiplomCharacter();


#define FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADiplomCharacter(ADiplomCharacter&&); \
	NO_API ADiplomCharacter(const ADiplomCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADiplomCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADiplomCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADiplomCharacter) \
	NO_API virtual ~ADiplomCharacter();


#define FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_20_PROLOG
#define FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_SPARSE_DATA \
	FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_RPC_WRAPPERS \
	FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_ACCESSORS \
	FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_INCLASS \
	FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_SPARSE_DATA \
	FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_ACCESSORS \
	FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIPLOM_API UClass* StaticClass<class ADiplomCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Diplom_Diplom_Source_Diplom_DiplomCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
