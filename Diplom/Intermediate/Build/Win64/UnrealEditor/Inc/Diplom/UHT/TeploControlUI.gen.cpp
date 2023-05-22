// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diplom/UI/TeploControlUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeploControlUI() {}
// Cross Module References
	DIPLOM_API UClass* Z_Construct_UClass_AComponentOfMechanism_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_UTeploControlUI();
	DIPLOM_API UClass* Z_Construct_UClass_UTeploControlUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Diplom();
// End Cross Module References
	DEFINE_FUNCTION(UTeploControlUI::execSubTemp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubTemp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTeploControlUI::execPlusTemp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlusTemp();
		P_NATIVE_END;
	}
	void UTeploControlUI::StaticRegisterNativesUTeploControlUI()
	{
		UClass* Class = UTeploControlUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlusTemp", &UTeploControlUI::execPlusTemp },
			{ "SubTemp", &UTeploControlUI::execSubTemp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTeploControlUI_PlusTemp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTeploControlUI_PlusTemp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/TeploControlUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTeploControlUI_PlusTemp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTeploControlUI, nullptr, "PlusTemp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTeploControlUI_PlusTemp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeploControlUI_PlusTemp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTeploControlUI_PlusTemp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTeploControlUI_PlusTemp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTeploControlUI_SubTemp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTeploControlUI_SubTemp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/TeploControlUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTeploControlUI_SubTemp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTeploControlUI, nullptr, "SubTemp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTeploControlUI_SubTemp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeploControlUI_SubTemp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTeploControlUI_SubTemp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTeploControlUI_SubTemp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTeploControlUI);
	UClass* Z_Construct_UClass_UTeploControlUI_NoRegister()
	{
		return UTeploControlUI::StaticClass();
	}
	struct Z_Construct_UClass_UTeploControlUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeploPipe_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TeploPipe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTeploControlUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Diplom,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTeploControlUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTeploControlUI_PlusTemp, "PlusTemp" }, // 1209098685
		{ &Z_Construct_UFunction_UTeploControlUI_SubTemp, "SubTemp" }, // 3420617009
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeploControlUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/TeploControlUI.h" },
		{ "ModuleRelativePath", "UI/TeploControlUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeploControlUI_Statics::NewProp_TeploPipe_MetaData[] = {
		{ "Category", "MaterialPipe" },
		{ "ModuleRelativePath", "UI/TeploControlUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTeploControlUI_Statics::NewProp_TeploPipe = { "TeploPipe", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTeploControlUI, TeploPipe), Z_Construct_UClass_AComponentOfMechanism_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTeploControlUI_Statics::NewProp_TeploPipe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeploControlUI_Statics::NewProp_TeploPipe_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTeploControlUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeploControlUI_Statics::NewProp_TeploPipe,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTeploControlUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTeploControlUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTeploControlUI_Statics::ClassParams = {
		&UTeploControlUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTeploControlUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTeploControlUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTeploControlUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTeploControlUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTeploControlUI()
	{
		if (!Z_Registration_Info_UClass_UTeploControlUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTeploControlUI.OuterSingleton, Z_Construct_UClass_UTeploControlUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTeploControlUI.OuterSingleton;
	}
	template<> DIPLOM_API UClass* StaticClass<UTeploControlUI>()
	{
		return UTeploControlUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTeploControlUI);
	UTeploControlUI::~UTeploControlUI() {}
	struct Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_TeploControlUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_TeploControlUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTeploControlUI, UTeploControlUI::StaticClass, TEXT("UTeploControlUI"), &Z_Registration_Info_UClass_UTeploControlUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTeploControlUI), 19317980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_TeploControlUI_h_527887759(TEXT("/Script/Diplom"),
		Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_TeploControlUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_UI_TeploControlUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
