// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/QuestHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIPLOM_QuestHUD_generated_h
#error "QuestHUD.generated.h already included, missing '#pragma once' in QuestHUD.h"
#endif
#define DIPLOM_QuestHUD_generated_h

#define FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_SPARSE_DATA
#define FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateTextToPrint); \
	DECLARE_FUNCTION(execSetVisibilityToBorderQuest);


#define FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateTextToPrint); \
	DECLARE_FUNCTION(execSetVisibilityToBorderQuest);


#define FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_ACCESSORS
#define FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestHUD(); \
	friend struct Z_Construct_UClass_UQuestHUD_Statics; \
public: \
	DECLARE_CLASS(UQuestHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Diplom"), NO_API) \
	DECLARE_SERIALIZER(UQuestHUD)


#define FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUQuestHUD(); \
	friend struct Z_Construct_UClass_UQuestHUD_Statics; \
public: \
	DECLARE_CLASS(UQuestHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Diplom"), NO_API) \
	DECLARE_SERIALIZER(UQuestHUD)


#define FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestHUD(UQuestHUD&&); \
	NO_API UQuestHUD(const UQuestHUD&); \
public: \
	NO_API virtual ~UQuestHUD();


#define FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestHUD(UQuestHUD&&); \
	NO_API UQuestHUD(const UQuestHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestHUD) \
	NO_API virtual ~UQuestHUD();


#define FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_12_PROLOG
#define FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_SPARSE_DATA \
	FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_RPC_WRAPPERS \
	FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_ACCESSORS \
	FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_INCLASS \
	FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_SPARSE_DATA \
	FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_ACCESSORS \
	FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIPLOM_API UClass* StaticClass<class UQuestHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
