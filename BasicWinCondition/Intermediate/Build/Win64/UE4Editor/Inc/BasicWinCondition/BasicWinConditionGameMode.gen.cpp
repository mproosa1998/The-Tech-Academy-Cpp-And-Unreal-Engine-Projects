// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicWinCondition/BasicWinConditionGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicWinConditionGameMode() {}
// Cross Module References
	BASICWINCONDITION_API UClass* Z_Construct_UClass_ABasicWinConditionGameMode_NoRegister();
	BASICWINCONDITION_API UClass* Z_Construct_UClass_ABasicWinConditionGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BasicWinCondition();
// End Cross Module References
	void ABasicWinConditionGameMode::StaticRegisterNativesABasicWinConditionGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABasicWinConditionGameMode_NoRegister()
	{
		return ABasicWinConditionGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABasicWinConditionGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicWinConditionGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicWinCondition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicWinConditionGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BasicWinConditionGameMode.h" },
		{ "ModuleRelativePath", "BasicWinConditionGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicWinConditionGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicWinConditionGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicWinConditionGameMode_Statics::ClassParams = {
		&ABasicWinConditionGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABasicWinConditionGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicWinConditionGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicWinConditionGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicWinConditionGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicWinConditionGameMode, 1207607974);
	template<> BASICWINCONDITION_API UClass* StaticClass<ABasicWinConditionGameMode>()
	{
		return ABasicWinConditionGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicWinConditionGameMode(Z_Construct_UClass_ABasicWinConditionGameMode, &ABasicWinConditionGameMode::StaticClass, TEXT("/Script/BasicWinCondition"), TEXT("ABasicWinConditionGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicWinConditionGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
