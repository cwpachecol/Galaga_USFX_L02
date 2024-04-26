// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L02/EstructuraPNA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstructuraPNA() {}
// Cross Module References
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_AEstructuraPNA_NoRegister();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_AEstructuraPNA();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L02();
// End Cross Module References
	void AEstructuraPNA::StaticRegisterNativesAEstructuraPNA()
	{
	}
	UClass* Z_Construct_UClass_AEstructuraPNA_NoRegister()
	{
		return AEstructuraPNA::StaticClass();
	}
	struct Z_Construct_UClass_AEstructuraPNA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstructuraPNA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstructuraPNA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstructuraPNA.h" },
		{ "ModuleRelativePath", "EstructuraPNA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstructuraPNA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstructuraPNA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstructuraPNA_Statics::ClassParams = {
		&AEstructuraPNA::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstructuraPNA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstructuraPNA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstructuraPNA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstructuraPNA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstructuraPNA, 2761152307);
	template<> GALAGA_USFX_L02_API UClass* StaticClass<AEstructuraPNA>()
	{
		return AEstructuraPNA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstructuraPNA(Z_Construct_UClass_AEstructuraPNA, &AEstructuraPNA::StaticClass, TEXT("/Script/Galaga_USFX_L02"), TEXT("AEstructuraPNA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstructuraPNA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
