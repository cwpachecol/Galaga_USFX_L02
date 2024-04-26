// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L02/PNA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePNA() {}
// Cross Module References
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_APNA_NoRegister();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_APNA();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L02();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_UPlanoPNA_NoRegister();
// End Cross Module References
	void APNA::StaticRegisterNativesAPNA()
	{
	}
	UClass* Z_Construct_UClass_APNA_NoRegister()
	{
		return APNA::StaticClass();
	}
	struct Z_Construct_UClass_APNA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APNA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APNA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PNA.h" },
		{ "ModuleRelativePath", "PNA.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APNA_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlanoPNA_NoRegister, (int32)VTABLE_OFFSET(APNA, IPlanoPNA), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APNA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APNA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APNA_Statics::ClassParams = {
		&APNA::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APNA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APNA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APNA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APNA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APNA, 3496697042);
	template<> GALAGA_USFX_L02_API UClass* StaticClass<APNA>()
	{
		return APNA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APNA(Z_Construct_UClass_APNA, &APNA::StaticClass, TEXT("/Script/Galaga_USFX_L02"), TEXT("APNA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APNA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
