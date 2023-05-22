// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diplom/DiplomGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiplomGameMode() {}
// Cross Module References
	DIPLOM_API UClass* Z_Construct_UClass_ADiplomGameMode();
	DIPLOM_API UClass* Z_Construct_UClass_ADiplomGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Diplom();
// End Cross Module References
	void ADiplomGameMode::StaticRegisterNativesADiplomGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADiplomGameMode);
	UClass* Z_Construct_UClass_ADiplomGameMode_NoRegister()
	{
		return ADiplomGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADiplomGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADiplomGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Diplom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiplomGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DiplomGameMode.h" },
		{ "ModuleRelativePath", "DiplomGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADiplomGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADiplomGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADiplomGameMode_Statics::ClassParams = {
		&ADiplomGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADiplomGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADiplomGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADiplomGameMode()
	{
		if (!Z_Registration_Info_UClass_ADiplomGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADiplomGameMode.OuterSingleton, Z_Construct_UClass_ADiplomGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADiplomGameMode.OuterSingleton;
	}
	template<> DIPLOM_API UClass* StaticClass<ADiplomGameMode>()
	{
		return ADiplomGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADiplomGameMode);
	ADiplomGameMode::~ADiplomGameMode() {}
	struct Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_DiplomGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_DiplomGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADiplomGameMode, ADiplomGameMode::StaticClass, TEXT("ADiplomGameMode"), &Z_Registration_Info_UClass_ADiplomGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADiplomGameMode), 3794150346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_DiplomGameMode_h_4255078189(TEXT("/Script/Diplom"),
		Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_DiplomGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diplom_Diplom_Source_Diplom_DiplomGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
