// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L02/MotorPNA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotorPNA() {}
// Cross Module References
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_AMotorPNA_NoRegister();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_AMotorPNA();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L02();
// End Cross Module References
	void AMotorPNA::StaticRegisterNativesAMotorPNA()
	{
	}
	UClass* Z_Construct_UClass_AMotorPNA_NoRegister()
	{
		return AMotorPNA::StaticClass();
	}
	struct Z_Construct_UClass_AMotorPNA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotorPNA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotorPNA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MotorPNA.h" },
		{ "ModuleRelativePath", "MotorPNA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotorPNA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotorPNA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotorPNA_Statics::ClassParams = {
		&AMotorPNA::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMotorPNA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotorPNA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotorPNA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotorPNA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotorPNA, 1797281968);
	template<> GALAGA_USFX_L02_API UClass* StaticClass<AMotorPNA>()
	{
		return AMotorPNA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotorPNA(Z_Construct_UClass_AMotorPNA, &AMotorPNA::StaticClass, TEXT("/Script/Galaga_USFX_L02"), TEXT("AMotorPNA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotorPNA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
