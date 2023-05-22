// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diplom/UI/PlayerHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUDWidget() {}
// Cross Module References
	DIPLOM_API UClass* Z_Construct_UClass_UHighLightInteractable_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_UPlayerHUDWidget();
	DIPLOM_API UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_UTeploControlUI_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_UVentilationUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Diplom();
// End Cross Module References
	void UPlayerHUDWidget::StaticRegisterNativesUPlayerHUDWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHUDWidget);
	UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister()
	{
		return UPlayerHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ventUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ventUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_teploUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_teploUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsQuest_MetaData[];
#endif
		static void NewProp_bIsQuest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsQuest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderForQuest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BorderForQuest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextForQuest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextForQuest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Diplom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerHUDWidget.h" },
		{ "ModuleRelativePath", "UI/PlayerHUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_InteractableKey_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_InteractableKey = { "InteractableKey", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerHUDWidget, InteractableKey), Z_Construct_UClass_UHighLightInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_InteractableKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_InteractableKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ventUI_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ventUI = { "ventUI", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerHUDWidget, ventUI), Z_Construct_UClass_UVentilationUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ventUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ventUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_teploUI_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_teploUI = { "teploUI", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerHUDWidget, teploUI), Z_Construct_UClass_UTeploControlUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_teploUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_teploUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_bIsQuest_MetaData[] = {
		{ "Category", "PlayerHUDWidget" },
		{ "ModuleRelativePath", "UI/PlayerHUDWidget.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_bIsQuest_SetBit(void* Obj)
	{
		((UPlayerHUDWidget*)Obj)->bIsQuest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_bIsQuest = { "bIsQuest", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlayerHUDWidget), &Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_bIsQuest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_bIsQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_bIsQuest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_BorderForQuest_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_BorderForQuest = { "BorderForQuest", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerHUDWidget, BorderForQuest), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_BorderForQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_BorderForQuest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_TextForQuest_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_TextForQuest = { "TextForQuest", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerHUDWidget, TextForQuest), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_TextForQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_TextForQuest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_InteractableKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ventUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_teploUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_bIsQuest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_BorderForQuest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_TextForQuest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUDWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams = {
		&UPlayerHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerHUDWidget()
	{
		if (!Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton, Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton;
	}
	template<> DIPLOM_API UClass* StaticClass<UPlayerHUDWidget>()
	{
		return UPlayerHUDWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUDWidget);
	UPlayerHUDWidget::~UPlayerHUDWidget() {}
	struct Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_PlayerHUDWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_PlayerHUDWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHUDWidget, UPlayerHUDWidget::StaticClass, TEXT("UPlayerHUDWidget"), &Z_Registration_Info_UClass_UPlayerHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHUDWidget), 2615484676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_PlayerHUDWidget_h_501386923(TEXT("/Script/Diplom"),
		Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_PlayerHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_PlayerHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
