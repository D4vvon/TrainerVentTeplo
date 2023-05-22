// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diplom/UI/QuestHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestHUD() {}
// Cross Module References
	DIPLOM_API UClass* Z_Construct_UClass_UQuestHUD();
	DIPLOM_API UClass* Z_Construct_UClass_UQuestHUD_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_UTeploControlUI_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_UVentilationUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Diplom();
// End Cross Module References
	DEFINE_FUNCTION(UQuestHUD::execUpdateTextToPrint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTextToPrint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestHUD::execSetVisibilityToBorderQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityToBorderQuest();
		P_NATIVE_END;
	}
	void UQuestHUD::StaticRegisterNativesUQuestHUD()
	{
		UClass* Class = UQuestHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetVisibilityToBorderQuest", &UQuestHUD::execSetVisibilityToBorderQuest },
			{ "UpdateTextToPrint", &UQuestHUD::execUpdateTextToPrint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestHUD_SetVisibilityToBorderQuest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestHUD_SetVisibilityToBorderQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestHUD_SetVisibilityToBorderQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestHUD, nullptr, "SetVisibilityToBorderQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestHUD_SetVisibilityToBorderQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestHUD_SetVisibilityToBorderQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestHUD_SetVisibilityToBorderQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestHUD_SetVisibilityToBorderQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestHUD_UpdateTextToPrint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestHUD_UpdateTextToPrint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestHUD_UpdateTextToPrint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestHUD, nullptr, "UpdateTextToPrint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestHUD_UpdateTextToPrint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestHUD_UpdateTextToPrint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestHUD_UpdateTextToPrint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestHUD_UpdateTextToPrint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestHUD);
	UClass* Z_Construct_UClass_UQuestHUD_NoRegister()
	{
		return UQuestHUD::StaticClass();
	}
	struct Z_Construct_UClass_UQuestHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_UQuestHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Diplom,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestHUD_SetVisibilityToBorderQuest, "SetVisibilityToBorderQuest" }, // 1921136782
		{ &Z_Construct_UFunction_UQuestHUD_UpdateTextToPrint, "UpdateTextToPrint" }, // 1742734737
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/QuestHUD.h" },
		{ "ModuleRelativePath", "UI/QuestHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestHUD_Statics::NewProp_ventUI_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "QuestHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestHUD_Statics::NewProp_ventUI = { "ventUI", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestHUD, ventUI), Z_Construct_UClass_UVentilationUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestHUD_Statics::NewProp_ventUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestHUD_Statics::NewProp_ventUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestHUD_Statics::NewProp_teploUI_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "QuestHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestHUD_Statics::NewProp_teploUI = { "teploUI", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestHUD, teploUI), Z_Construct_UClass_UTeploControlUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestHUD_Statics::NewProp_teploUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestHUD_Statics::NewProp_teploUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestHUD_Statics::NewProp_bIsQuest_MetaData[] = {
		{ "Category", "QuestHUD" },
		{ "ModuleRelativePath", "UI/QuestHUD.h" },
	};
#endif
	void Z_Construct_UClass_UQuestHUD_Statics::NewProp_bIsQuest_SetBit(void* Obj)
	{
		((UQuestHUD*)Obj)->bIsQuest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestHUD_Statics::NewProp_bIsQuest = { "bIsQuest", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UQuestHUD), &Z_Construct_UClass_UQuestHUD_Statics::NewProp_bIsQuest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestHUD_Statics::NewProp_bIsQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestHUD_Statics::NewProp_bIsQuest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestHUD_Statics::NewProp_BorderForQuest_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "QuestHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestHUD_Statics::NewProp_BorderForQuest = { "BorderForQuest", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestHUD, BorderForQuest), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestHUD_Statics::NewProp_BorderForQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestHUD_Statics::NewProp_BorderForQuest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestHUD_Statics::NewProp_TextForQuest_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "QuestHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestHUD_Statics::NewProp_TextForQuest = { "TextForQuest", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestHUD, TextForQuest), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestHUD_Statics::NewProp_TextForQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestHUD_Statics::NewProp_TextForQuest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestHUD_Statics::NewProp_ventUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestHUD_Statics::NewProp_teploUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestHUD_Statics::NewProp_bIsQuest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestHUD_Statics::NewProp_BorderForQuest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestHUD_Statics::NewProp_TextForQuest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestHUD_Statics::ClassParams = {
		&UQuestHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestHUD()
	{
		if (!Z_Registration_Info_UClass_UQuestHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestHUD.OuterSingleton, Z_Construct_UClass_UQuestHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestHUD.OuterSingleton;
	}
	template<> DIPLOM_API UClass* StaticClass<UQuestHUD>()
	{
		return UQuestHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestHUD);
	UQuestHUD::~UQuestHUD() {}
	struct Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestHUD, UQuestHUD::StaticClass, TEXT("UQuestHUD"), &Z_Registration_Info_UClass_UQuestHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestHUD), 2248168319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_2136436997(TEXT("/Script/Diplom"),
		Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_QuestHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
