// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Runtime/Core/Public/Math/Color.h"
#include "ArkanoidGameMode.generated.h"

UCLASS()
class ARKANOID_API AArkanoidGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	AArkanoidGameMode(const FObjectInitializer  &ObjectInitializer);

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Field", meta = (ClampMin = "4", UIMin = "4"))
		int32 FieldWidth = 4;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Field", meta = (ClampMin = "4", UIMin = "4"))
		int32 FieldHeight = 4;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks", meta = (ClampMin = "1", UIMin = "1"))
		int32 ScoreFromBrick = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks", meta = (ClampMin = "1", UIMin = "1"))
		int32 LegendaryBrickBuffTime = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,  Category = "Game Settings|Bricks", meta = (ClampMin = "1", UIMin = "1"))
		int32 BrickWidth = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks", meta = (ClampMin = "1", UIMin = "1"))
		int32 BrickHeight = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks", meta = (ClampMin = "1", UIMin = "1"))
		int32 BrickRowsCount = 2;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks", meta = (ClampMin = "1", UIMin = "1"))
		int32 BrickColumnsCount = 2;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks")
		FColor CommonBrickColor;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks")
		FColor RareBrickColor;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks")
		FColor LegendaryBrickColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Player", meta = (ClampMin = "1", UIMin = "1"))
		int32 HitPoints = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Projectile", meta = (ClampMin = "1.0", UIMin = "1.0"))
		float ProjectileStartSpeed = 1.0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Projectile")
		FColor ProjectileDefaultColor;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Projectile")
		FColor ProjectileBuffedColor;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Projectile", meta = (ClampMin = "1.0", UIMin = "1.0"))
		float ProjectileSpeedIncerease = 1.0;

	UPROPERTY(BlueprintReadWrite, Category = "Gameplay")
		int32 CurrentLevel;
};
