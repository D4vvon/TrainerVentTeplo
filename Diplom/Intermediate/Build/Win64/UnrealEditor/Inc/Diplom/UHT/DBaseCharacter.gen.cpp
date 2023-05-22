// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diplom/Characters/DBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBaseCharacter() {}
// Cross Module References
	DIPLOM_API UClass* Z_Construct_UClass_ADBaseCharacter();
	DIPLOM_API UClass* Z_Construct_UClass_ADBaseCharacter_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Diplom();
// End Cross Module References
	void ADBaseCharacter::StaticRegisterNativesADBaseCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADBaseCharacter);
	UClass* Z_Construct_UClass_ADBaseCharacter_NoRegister()
	{
		return ADBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineOfSightDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineOfSightDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineOfSightObject_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_LineOfSightObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Diplom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/DBaseCharacter.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Characters/DBaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBaseCharacter_Statics::NewProp_LineOfSightDistance_MetaData[] = {
		{ "Category", "Character | LineTrace" },
		{ "ModuleRelativePath", "Characters/DBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADBaseCharacter_Statics::NewProp_LineOfSightDistance = { "LineOfSightDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADBaseCharacter, LineOfSightDistance), METADATA_PARAMS(Z_Construct_UClass_ADBaseCharacter_Statics::NewProp_LineOfSightDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBaseCharacter_Statics::NewProp_LineOfSightDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBaseCharacter_Statics::NewProp_LineOfSightObject_MetaData[] = {
		{ "ModuleRelativePath", "Characters/DBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ADBaseCharacter_Statics::NewProp_LineOfSightObject = { "LineOfSightObject", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADBaseCharacter, LineOfSightObject), Z_Construct_UClass_UInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBaseCharacter_Statics::NewProp_LineOfSightObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBaseCharacter_Statics::NewProp_LineOfSightObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBaseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBaseCharacter_Statics::NewProp_LineOfSightDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBaseCharacter_Statics::NewProp_LineOfSightObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADBaseCharacter_Statics::ClassParams = {
		&ADBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADBaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBaseCharacter_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ADBaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBaseCharacter()
	{
		if (!Z_Registration_Info_UClass_ADBaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADBaseCharacter.OuterSingleton, Z_Construct_UClass_ADBaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADBaseCharacter.OuterSingleton;
	}
	template<> DIPLOM_API UClass* StaticClass<ADBaseCharacter>()
	{
		return ADBaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBaseCharacter);
	ADBaseCharacter::~ADBaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_Characters_DBaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_Characters_DBaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADBaseCharacter, ADBaseCharacter::StaticClass, TEXT("ADBaseCharacter"), &Z_Registration_Info_UClass_ADBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADBaseCharacter), 3192994555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_Characters_DBaseCharacter_h_469355831(TEXT("/Script/Diplom"),
		Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_Characters_DBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_Characters_DBaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
