// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diplom/UI/HighLightInteractable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighLightInteractable() {}
// Cross Module References
	DIPLOM_API UClass* Z_Construct_UClass_UHighLightInteractable_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_UHighLightInteractable();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Diplom();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UHighLightInteractable::StaticRegisterNativesUHighLightInteractable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHighLightInteractable);
	UClass* Z_Construct_UClass_UHighLightInteractable_NoRegister()
	{
		return UHighLightInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UHighLightInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHighLightInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Diplom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighLightInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/HighLightInteractable.h" },
		{ "ModuleRelativePath", "UI/HighLightInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighLightInteractable_Statics::NewProp_ActionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HighLightInteractable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHighLightInteractable_Statics::NewProp_ActionText = { "ActionText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighLightInteractable, ActionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHighLightInteractable_Statics::NewProp_ActionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighLightInteractable_Statics::NewProp_ActionText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHighLightInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighLightInteractable_Statics::NewProp_ActionText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighLightInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighLightInteractable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHighLightInteractable_Statics::ClassParams = {
		&UHighLightInteractable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHighLightInteractable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHighLightInteractable_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHighLightInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHighLightInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighLightInteractable()
	{
		if (!Z_Registration_Info_UClass_UHighLightInteractable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHighLightInteractable.OuterSingleton, Z_Construct_UClass_UHighLightInteractable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHighLightInteractable.OuterSingleton;
	}
	template<> DIPLOM_API UClass* StaticClass<UHighLightInteractable>()
	{
		return UHighLightInteractable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighLightInteractable);
	struct Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_UI_HighLightInteractable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_UI_HighLightInteractable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHighLightInteractable, UHighLightInteractable::StaticClass, TEXT("UHighLightInteractable"), &Z_Registration_Info_UClass_UHighLightInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHighLightInteractable), 2924311351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_UI_HighLightInteractable_h_3393317421(TEXT("/Script/Diplom"),
		Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_UI_HighLightInteractable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_UI_HighLightInteractable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
