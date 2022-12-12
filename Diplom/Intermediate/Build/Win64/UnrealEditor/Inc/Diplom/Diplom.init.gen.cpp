// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiplom_init() {}
	DIPLOM_API UFunction* Z_Construct_UDelegateFunction_Diplom_OnPickUp__DelegateSignature();
	DIPLOM_API UFunction* Z_Construct_UDelegateFunction_Diplom_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Diplom;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Diplom()
	{
		if (!Z_Registration_Info_UPackage__Script_Diplom.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Diplom_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Diplom_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Diplom",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1AFF8712,
				0x1E8099F3,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Diplom.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Diplom.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Diplom(Z_Construct_UPackage__Script_Diplom, TEXT("/Script/Diplom"), Z_Registration_Info_UPackage__Script_Diplom, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1AFF8712, 0x1E8099F3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
