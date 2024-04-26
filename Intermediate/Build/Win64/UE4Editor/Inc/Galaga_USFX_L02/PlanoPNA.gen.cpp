// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L02/PlanoPNA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanoPNA() {}
// Cross Module References
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_UPlanoPNA_NoRegister();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_UPlanoPNA();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L02();
// End Cross Module References
	void UPlanoPNA::StaticRegisterNativesUPlanoPNA()
	{
	}
	UClass* Z_Construct_UClass_UPlanoPNA_NoRegister()
	{
		return UPlanoPNA::StaticClass();
	}
	struct Z_Construct_UClass_UPlanoPNA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanoPNA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanoPNA_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlanoPNA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanoPNA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlanoPNA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlanoPNA_Statics::ClassParams = {
		&UPlanoPNA::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlanoPNA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanoPNA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlanoPNA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlanoPNA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlanoPNA, 1015568574);
	template<> GALAGA_USFX_L02_API UClass* StaticClass<UPlanoPNA>()
	{
		return UPlanoPNA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlanoPNA(Z_Construct_UClass_UPlanoPNA, &UPlanoPNA::StaticClass, TEXT("/Script/Galaga_USFX_L02"), TEXT("UPlanoPNA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanoPNA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
