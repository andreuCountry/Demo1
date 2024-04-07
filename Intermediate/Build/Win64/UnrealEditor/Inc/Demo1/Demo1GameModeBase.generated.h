// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO1_Demo1GameModeBase_generated_h
#error "Demo1GameModeBase.generated.h already included, missing '#pragma once' in Demo1GameModeBase.h"
#endif
#define DEMO1_Demo1GameModeBase_generated_h

#define FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_SPARSE_DATA
#define FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_RPC_WRAPPERS
#define FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemo1GameModeBase(); \
	friend struct Z_Construct_UClass_ADemo1GameModeBase_Statics; \
public: \
	DECLARE_CLASS(ADemo1GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo1"), NO_API) \
	DECLARE_SERIALIZER(ADemo1GameModeBase)


#define FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADemo1GameModeBase(); \
	friend struct Z_Construct_UClass_ADemo1GameModeBase_Statics; \
public: \
	DECLARE_CLASS(ADemo1GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo1"), NO_API) \
	DECLARE_SERIALIZER(ADemo1GameModeBase)


#define FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemo1GameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemo1GameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemo1GameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemo1GameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemo1GameModeBase(ADemo1GameModeBase&&); \
	NO_API ADemo1GameModeBase(const ADemo1GameModeBase&); \
public:


#define FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemo1GameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemo1GameModeBase(ADemo1GameModeBase&&); \
	NO_API ADemo1GameModeBase(const ADemo1GameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemo1GameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemo1GameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemo1GameModeBase)


#define FID_Demo1_Source_Demo1_Demo1GameModeBase_h_12_PROLOG
#define FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_SPARSE_DATA \
	FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_RPC_WRAPPERS \
	FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_INCLASS \
	FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_SPARSE_DATA \
	FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Demo1_Source_Demo1_Demo1GameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO1_API UClass* StaticClass<class ADemo1GameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo1_Source_Demo1_Demo1GameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
