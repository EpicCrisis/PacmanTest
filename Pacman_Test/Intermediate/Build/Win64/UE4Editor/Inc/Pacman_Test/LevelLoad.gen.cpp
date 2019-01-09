// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "LevelLoad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelLoad() {}
// Cross Module References
	PACMAN_TEST_API UClass* Z_Construct_UClass_ALevelLoad_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_ALevelLoad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
// End Cross Module References
	void ALevelLoad::StaticRegisterNativesALevelLoad()
	{
	}
	UClass* Z_Construct_UClass_ALevelLoad_NoRegister()
	{
		return ALevelLoad::StaticClass();
	}
	UClass* Z_Construct_UClass_ALevelLoad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Pacman_Test,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LevelLoad.h" },
				{ "ModuleRelativePath", "LevelLoad.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapArray_MetaData[] = {
				{ "Category", "MapArray" },
				{ "ModuleRelativePath", "LevelLoad.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapArray = { UE4CodeGen_Private::EPropertyClass::Array, "MapArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ALevelLoad, MapArray), METADATA_PARAMS(NewProp_MapArray_MetaData, ARRAY_COUNT(NewProp_MapArray_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MapArray_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "MapArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapArray_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALevelLoad>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALevelLoad::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelLoad, 1620885938);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelLoad(Z_Construct_UClass_ALevelLoad, &ALevelLoad::StaticClass, TEXT("/Script/Pacman_Test"), TEXT("ALevelLoad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelLoad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
