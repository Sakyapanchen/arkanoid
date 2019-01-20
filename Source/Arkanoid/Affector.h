// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Affector.generated.h"


UINTERFACE(MinimalAPI)
class UAffector : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class ARKANOID_API IAffector
{
	GENERATED_IINTERFACE_BODY()


public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Affects")
		void AffectionRequest(FHitResult Hit, AActor * Projectile, bool & Success);
};
