// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo1/Demo1GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemo1GameModeBase() {}
// Cross Module References
	DEMO1_API UClass* Z_Construct_UClass_ADemo1GameModeBase_NoRegister();
	DEMO1_API UClass* Z_Construct_UClass_ADemo1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Demo1();
// End Cross Module References
	void ADemo1GameModeBase::StaticRegisterNativesADemo1GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADemo1GameModeBase);
	UClass* Z_Construct_UClass_ADemo1GameModeBase_NoRegister()
	{
		return ADemo1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADemo1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADemo1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemo1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Demo1GameModeBase.h" },
		{ "ModuleRelativePath", "Demo1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADemo1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemo1GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADemo1GameModeBase_Statics::ClassParams = {
		&ADemo1GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADemo1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADemo1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADemo1GameModeBase()
	{
		if (!Z_Registration_Info_UClass_ADemo1GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADemo1GameModeBase.OuterSingleton, Z_Construct_UClass_ADemo1GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADemo1GameModeBase.OuterSingleton;
	}
	template<> DEMO1_API UClass* StaticClass<ADemo1GameModeBase>()
	{
		return ADemo1GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADemo1GameModeBase);
	struct Z_CompiledInDeferFile_FID_Demo1_Source_Demo1_Demo1GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo1_Source_Demo1_Demo1GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADemo1GameModeBase, ADemo1GameModeBase::StaticClass, TEXT("ADemo1GameModeBase"), &Z_Registration_Info_UClass_ADemo1GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADemo1GameModeBase), 1555091201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Demo1_Source_Demo1_Demo1GameModeBase_h_1634496202(TEXT("/Script/Demo1"),
		Z_CompiledInDeferFile_FID_Demo1_Source_Demo1_Demo1GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Demo1_Source_Demo1_Demo1GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
