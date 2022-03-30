// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BASICWINCONDITION_BasicWinConditionCharacter_generated_h
#error "BasicWinConditionCharacter.generated.h already included, missing '#pragma once' in BasicWinConditionCharacter.h"
#endif
#define BASICWINCONDITION_BasicWinConditionCharacter_generated_h

#define BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_SPARSE_DATA
#define BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicWinConditionCharacter(); \
	friend struct Z_Construct_UClass_ABasicWinConditionCharacter_Statics; \
public: \
	DECLARE_CLASS(ABasicWinConditionCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasicWinCondition"), NO_API) \
	DECLARE_SERIALIZER(ABasicWinConditionCharacter)


#define BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABasicWinConditionCharacter(); \
	friend struct Z_Construct_UClass_ABasicWinConditionCharacter_Statics; \
public: \
	DECLARE_CLASS(ABasicWinConditionCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasicWinCondition"), NO_API) \
	DECLARE_SERIALIZER(ABasicWinConditionCharacter)


#define BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicWinConditionCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicWinConditionCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicWinConditionCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicWinConditionCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicWinConditionCharacter(ABasicWinConditionCharacter&&); \
	NO_API ABasicWinConditionCharacter(const ABasicWinConditionCharacter&); \
public:


#define BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicWinConditionCharacter(ABasicWinConditionCharacter&&); \
	NO_API ABasicWinConditionCharacter(const ABasicWinConditionCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicWinConditionCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicWinConditionCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicWinConditionCharacter)


#define BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABasicWinConditionCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABasicWinConditionCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__TriggerCapsule() { return STRUCT_OFFSET(ABasicWinConditionCharacter, TriggerCapsule); }


#define BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_9_PROLOG
#define BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_SPARSE_DATA \
	BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_RPC_WRAPPERS \
	BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_INCLASS \
	BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_SPARSE_DATA \
	BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICWINCONDITION_API UClass* StaticClass<class ABasicWinConditionCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BasicWinCondition_Source_BasicWinCondition_BasicWinConditionCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
