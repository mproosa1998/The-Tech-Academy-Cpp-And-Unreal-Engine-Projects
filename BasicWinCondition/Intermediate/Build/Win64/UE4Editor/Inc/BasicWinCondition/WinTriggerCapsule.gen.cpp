// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicWinCondition/WinTriggerCapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWinTriggerCapsule() {}
// Cross Module References
	BASICWINCONDITION_API UClass* Z_Construct_UClass_AWinTriggerCapsule_NoRegister();
	BASICWINCONDITION_API UClass* Z_Construct_UClass_AWinTriggerCapsule();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerCapsule();
	UPackage* Z_Construct_UPackage__Script_BasicWinCondition();
// End Cross Module References
	void AWinTriggerCapsule::StaticRegisterNativesAWinTriggerCapsule()
	{
	}
	UClass* Z_Construct_UClass_AWinTriggerCapsule_NoRegister()
	{
		return AWinTriggerCapsule::StaticClass();
	}
	struct Z_Construct_UClass_AWinTriggerCapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWinTriggerCapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerCapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicWinCondition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWinTriggerCapsule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WinTriggerCapsule.h" },
		{ "ModuleRelativePath", "WinTriggerCapsule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWinTriggerCapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWinTriggerCapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWinTriggerCapsule_Statics::ClassParams = {
		&AWinTriggerCapsule::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWinTriggerCapsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWinTriggerCapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWinTriggerCapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWinTriggerCapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWinTriggerCapsule, 435249798);
	template<> BASICWINCONDITION_API UClass* StaticClass<AWinTriggerCapsule>()
	{
		return AWinTriggerCapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWinTriggerCapsule(Z_Construct_UClass_AWinTriggerCapsule, &AWinTriggerCapsule::StaticClass, TEXT("/Script/BasicWinCondition"), TEXT("AWinTriggerCapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWinTriggerCapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
