// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerCapsule.h"
#include "WinTriggerCapsule.generated.h"

/**
 * 
 */
UCLASS()
class BASICWINCONDITION_API AWinTriggerCapsule : public ATriggerCapsule
{
	GENERATED_BODY()
	
};

void onActorBeginOverlap();
