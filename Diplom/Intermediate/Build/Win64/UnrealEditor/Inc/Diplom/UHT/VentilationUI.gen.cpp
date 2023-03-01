// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diplom/UI/VentilationUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVentilationUI() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	DIPLOM_API UClass* Z_Construct_UClass_AComponentOfMechanism_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_UVentilationUI();
	DIPLOM_API UClass* Z_Construct_UClass_UVentilationUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Diplom();
// End Cross Module References
	DEFINE_FUNCTION(UVentilationUI::execstopRotateFan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->stopRotateFan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVentilationUI::execstartRotateFan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->startRotateFan();
		P_NATIVE_END;
	}
	void UVentilationUI::StaticRegisterNativesUVentilationUI()
	{
		UClass* Class = UVentilationUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "startRotateFan", &UVentilationUI::execstartRotateFan },
			{ "stopRotateFan", &UVentilationUI::execstopRotateFan },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVentilationUI_startRotateFan_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVentilationUI_startRotateFan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/VentilationUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVentilationUI_startRotateFan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVentilationUI, nullptr, "startRotateFan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVentilationUI_startRotateFan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVentilationUI_startRotateFan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVentilationUI_startRotateFan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVentilationUI_startRotateFan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVentilationUI_stopRotateFan_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVentilationUI_stopRotateFan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/VentilationUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVentilationUI_stopRotateFan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVentilationUI, nullptr, "stopRotateFan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVentilationUI_stopRotateFan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVentilationUI_stopRotateFan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVentilationUI_stopRotateFan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVentilationUI_stopRotateFan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVentilationUI);
	UClass* Z_Construct_UClass_UVentilationUI_NoRegister()
	{
		return UVentilationUI::StaticClass();
	}
	struct Z_Construct_UClass_UVentilationUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VentFan_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VentFan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationFanSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationFanSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVentilationUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Diplom,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVentilationUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVentilationUI_startRotateFan, "startRotateFan" }, // 2086120198
		{ &Z_Construct_UFunction_UVentilationUI_stopRotateFan, "stopRotateFan" }, // 3149306855
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVentilationUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/VentilationUI.h" },
		{ "ModuleRelativePath", "UI/VentilationUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVentilationUI_Statics::NewProp_VentFan_MetaData[] = {
		{ "Category", "MaterialPipe" },
		{ "ModuleRelativePath", "UI/VentilationUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVentilationUI_Statics::NewProp_VentFan = { "VentFan", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVentilationUI, VentFan), Z_Construct_UClass_AComponentOfMechanism_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVentilationUI_Statics::NewProp_VentFan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVentilationUI_Statics::NewProp_VentFan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVentilationUI_Statics::NewProp_RotationFanSpeed_MetaData[] = {
		{ "Category", "MaterialPipe" },
		{ "ModuleRelativePath", "UI/VentilationUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVentilationUI_Statics::NewProp_RotationFanSpeed = { "RotationFanSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVentilationUI, RotationFanSpeed), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UVentilationUI_Statics::NewProp_RotationFanSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVentilationUI_Statics::NewProp_RotationFanSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVentilationUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVentilationUI_Statics::NewProp_VentFan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVentilationUI_Statics::NewProp_RotationFanSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVentilationUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVentilationUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVentilationUI_Statics::ClassParams = {
		&UVentilationUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVentilationUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVentilationUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVentilationUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVentilationUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVentilationUI()
	{
		if (!Z_Registration_Info_UClass_UVentilationUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVentilationUI.OuterSingleton, Z_Construct_UClass_UVentilationUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVentilationUI.OuterSingleton;
	}
	template<> DIPLOM_API UClass* StaticClass<UVentilationUI>()
	{
		return UVentilationUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVentilationUI);
	UVentilationUI::~UVentilationUI() {}
	struct Z_CompiledInDeferFile_FID_Ychebka_TrainerVentTeplo_Diplom_Source_Diplom_UI_VentilationUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ychebka_TrainerVentTeplo_Diplom_Source_Diplom_UI_VentilationUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVentilationUI, UVentilationUI::StaticClass, TEXT("UVentilationUI"), &Z_Registration_Info_UClass_UVentilationUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVentilationUI), 1237070929U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ychebka_TrainerVentTeplo_Diplom_Source_Diplom_UI_VentilationUI_h_1759289238(TEXT("/Script/Diplom"),
		Z_CompiledInDeferFile_FID_Ychebka_TrainerVentTeplo_Diplom_Source_Diplom_UI_VentilationUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ychebka_TrainerVentTeplo_Diplom_Source_Diplom_UI_VentilationUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
