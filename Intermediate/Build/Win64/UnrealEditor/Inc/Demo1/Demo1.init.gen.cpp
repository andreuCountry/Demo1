// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemo1_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Demo1;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Demo1()
	{
		if (!Z_Registration_Info_UPackage__Script_Demo1.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Demo1",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF9DEE42D,
				0x03F6ADE7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Demo1.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Demo1.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Demo1(Z_Construct_UPackage__Script_Demo1, TEXT("/Script/Demo1"), Z_Registration_Info_UPackage__Script_Demo1, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF9DEE42D, 0x03F6ADE7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
