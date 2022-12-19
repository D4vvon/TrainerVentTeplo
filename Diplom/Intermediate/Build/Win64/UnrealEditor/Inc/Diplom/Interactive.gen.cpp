// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diplom/Actors/Interactable/Interactive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractive() {}
// Cross Module References
	DIPLOM_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_UInteractable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Diplom();
// End Cross Module References
	void UInteractable::StaticRegisterNativesUInteractable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractable);
	UClass* Z_Construct_UClass_UInteractable_NoRegister()
	{
		return UInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Diplom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Interactable/Interactive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractable_Statics::ClassParams = {
		&UInteractable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractable()
	{
		if (!Z_Registration_Info_UClass_UInteractable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractable.OuterSingleton, Z_Construct_UClass_UInteractable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractable.OuterSingleton;
	}
	template<> DIPLOM_API UClass* StaticClass<UInteractable>()
	{
		return UInteractable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractable);
	struct Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Actors_Interactable_Interactive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Actors_Interactable_Interactive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractable, UInteractable::StaticClass, TEXT("UInteractable"), &Z_Registration_Info_UClass_UInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractable), 3016754657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Actors_Interactable_Interactive_h_1944306673(TEXT("/Script/Diplom"),
		Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Actors_Interactable_Interactive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Actors_Interactable_Interactive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
