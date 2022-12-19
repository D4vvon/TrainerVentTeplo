// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diplom/Characters/Controllers/DPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDPlayerController() {}
// Cross Module References
	DIPLOM_API UClass* Z_Construct_UClass_ADPlayerController_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_ADPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Diplom();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DIPLOM_API UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_AComponentOfMechanism_NoRegister();
// End Cross Module References
	void ADPlayerController::StaticRegisterNativesADPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADPlayerController);
	UClass* Z_Construct_UClass_ADPlayerController_NoRegister()
	{
		return ADPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ADPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHUDWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerHUDWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopmonentOfMechanismClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CopmonentOfMechanismClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Diplom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Characters/Controllers/DPlayerController.h" },
		{ "ModuleRelativePath", "Characters/Controllers/DPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADPlayerController_Statics::NewProp_PlayerHUDWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Characters/Controllers/DPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADPlayerController_Statics::NewProp_PlayerHUDWidgetClass = { "PlayerHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADPlayerController, PlayerHUDWidgetClass), Z_Construct_UClass_UPlayerHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADPlayerController_Statics::NewProp_PlayerHUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADPlayerController_Statics::NewProp_PlayerHUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADPlayerController_Statics::NewProp_CopmonentOfMechanismClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Characters/Controllers/DPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADPlayerController_Statics::NewProp_CopmonentOfMechanismClass = { "CopmonentOfMechanismClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADPlayerController, CopmonentOfMechanismClass), Z_Construct_UClass_AComponentOfMechanism_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADPlayerController_Statics::NewProp_CopmonentOfMechanismClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADPlayerController_Statics::NewProp_CopmonentOfMechanismClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADPlayerController_Statics::NewProp_PlayerHUDWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADPlayerController_Statics::NewProp_CopmonentOfMechanismClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADPlayerController_Statics::ClassParams = {
		&ADPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADPlayerController()
	{
		if (!Z_Registration_Info_UClass_ADPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADPlayerController.OuterSingleton, Z_Construct_UClass_ADPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADPlayerController.OuterSingleton;
	}
	template<> DIPLOM_API UClass* StaticClass<ADPlayerController>()
	{
		return ADPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADPlayerController);
	struct Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Characters_Controllers_DPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Characters_Controllers_DPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADPlayerController, ADPlayerController::StaticClass, TEXT("ADPlayerController"), &Z_Registration_Info_UClass_ADPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADPlayerController), 1717931583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Characters_Controllers_DPlayerController_h_3352518213(TEXT("/Script/Diplom"),
		Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Characters_Controllers_DPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Characters_Controllers_DPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
