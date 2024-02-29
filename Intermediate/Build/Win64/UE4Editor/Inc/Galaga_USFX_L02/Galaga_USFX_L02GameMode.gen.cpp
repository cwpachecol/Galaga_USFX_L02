// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L02/Galaga_USFX_L02GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaga_USFX_L02GameMode() {}
// Cross Module References
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_AGalaga_USFX_L02GameMode_NoRegister();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_AGalaga_USFX_L02GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L02();
// End Cross Module References
	void AGalaga_USFX_L02GameMode::StaticRegisterNativesAGalaga_USFX_L02GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGalaga_USFX_L02GameMode_NoRegister()
	{
		return AGalaga_USFX_L02GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalaga_USFX_L02GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaga_USFX_L02GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_L02GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Galaga_USFX_L02GameMode.h" },
		{ "ModuleRelativePath", "Galaga_USFX_L02GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaga_USFX_L02GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaga_USFX_L02GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalaga_USFX_L02GameMode_Statics::ClassParams = {
		&AGalaga_USFX_L02GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_L02GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_L02GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaga_USFX_L02GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalaga_USFX_L02GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalaga_USFX_L02GameMode, 3767822271);
	template<> GALAGA_USFX_L02_API UClass* StaticClass<AGalaga_USFX_L02GameMode>()
	{
		return AGalaga_USFX_L02GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalaga_USFX_L02GameMode(Z_Construct_UClass_AGalaga_USFX_L02GameMode, &AGalaga_USFX_L02GameMode::StaticClass, TEXT("/Script/Galaga_USFX_L02"), TEXT("AGalaga_USFX_L02GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaga_USFX_L02GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
