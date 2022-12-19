// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Diplom/Actors/Interactable/MechamismComponents/ComponentOfMechanism.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentOfMechanism() {}
// Cross Module References
	DIPLOM_API UClass* Z_Construct_UClass_AComponentOfMechanism_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_AComponentOfMechanism();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Diplom();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DIPLOM_API UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_ADPlayerController_NoRegister();
	DIPLOM_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void AComponentOfMechanism::StaticRegisterNativesAComponentOfMechanism()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AComponentOfMechanism);
	UClass* Z_Construct_UClass_AComponentOfMechanism_NoRegister()
	{
		return AComponentOfMechanism::StaticClass();
	}
	struct Z_Construct_UClass_AComponentOfMechanism_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHUDWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerHUDWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComponentOfMechanism_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Diplom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponentOfMechanism_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Interactable/MechamismComponents/ComponentOfMechanism.h" },
		{ "ModuleRelativePath", "Actors/Interactable/MechamismComponents/ComponentOfMechanism.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_ComponentMesh_MetaData[] = {
		{ "Category", "Interactive | Copmonent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Interactable/MechamismComponents/ComponentOfMechanism.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_ComponentMesh = { "ComponentMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComponentOfMechanism, ComponentMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_ComponentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_ComponentMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_PlayerHUDWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Actors/Interactable/MechamismComponents/ComponentOfMechanism.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_PlayerHUDWidgetClass = { "PlayerHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComponentOfMechanism, PlayerHUDWidgetClass), Z_Construct_UClass_UPlayerHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_PlayerHUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_PlayerHUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Actors/Interactable/MechamismComponents/ComponentOfMechanism.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComponentOfMechanism, PlayerController), Z_Construct_UClass_ADPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Actors/Interactable/MechamismComponents/ComponentOfMechanism.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComponentOfMechanism, Description), METADATA_PARAMS(Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AComponentOfMechanism_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_ComponentMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_PlayerHUDWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComponentOfMechanism_Statics::NewProp_Description,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AComponentOfMechanism_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AComponentOfMechanism, IInteractable), false },  // 3016754657
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComponentOfMechanism_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComponentOfMechanism>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AComponentOfMechanism_Statics::ClassParams = {
		&AComponentOfMechanism::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AComponentOfMechanism_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AComponentOfMechanism_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AComponentOfMechanism_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComponentOfMechanism_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComponentOfMechanism()
	{
		if (!Z_Registration_Info_UClass_AComponentOfMechanism.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AComponentOfMechanism.OuterSingleton, Z_Construct_UClass_AComponentOfMechanism_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AComponentOfMechanism.OuterSingleton;
	}
	template<> DIPLOM_API UClass* StaticClass<AComponentOfMechanism>()
	{
		return AComponentOfMechanism::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComponentOfMechanism);
	struct Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Actors_Interactable_MechamismComponents_ComponentOfMechanism_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Actors_Interactable_MechamismComponents_ComponentOfMechanism_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AComponentOfMechanism, AComponentOfMechanism::StaticClass, TEXT("AComponentOfMechanism"), &Z_Registration_Info_UClass_AComponentOfMechanism, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AComponentOfMechanism), 1786732573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Actors_Interactable_MechamismComponents_ComponentOfMechanism_h_2463899252(TEXT("/Script/Diplom"),
		Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Actors_Interactable_MechamismComponents_ComponentOfMechanism_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Diplom_Source_Diplom_Actors_Interactable_MechamismComponents_ComponentOfMechanism_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
