// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Runtime/Core/Public/Math/Color.h"
#include "ArkanoidGameMode.generated.h"

USTRUCT(BlueprintType)
struct FBrickData
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Brick Data", meta = (ClampMin = "0.01", ClampMax = "0.99", UIMin = "0.01", UIMax = "0.01"))
		float SpawnChance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Brick Data")
		FLinearColor Color;
};

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
		int32 LegendaryBrickBaffTime = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,  Category = "Game Settings|Bricks", meta = (ClampMin = "1", UIMin = "1"))
		int32 BrickWidth = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks", meta = (ClampMin = "1", UIMin = "1"))
		int32 BrickHeight = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks", meta = (ClampMin = "1", UIMin = "1"))
		int32 BrickRowsCount = 2;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks", meta = (ClampMin = "1", UIMin = "1"))
		int32 BrickColumnsCount = 2;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks")
		FBrickData CommonBrick;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks")
		FBrickData RareBrick;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Bricks")
		FBrickData LegendaryBrick;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Player", meta = (ClampMin = "1", UIMin = "1"))
		int32 MaxHitPoints = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Player", meta = (ClampMin = "1", UIMin = "1"))
		int32 BoardWidth = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Projectile", meta = (ClampMin = "1.0", UIMin = "1.0"))
		float ProjectileStartSpeed = 1.0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Projectile")
		FLinearColor ProjectileDefaultColor;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Projectile")
		FLinearColor ProjectileBaffedColor;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings|Projectile", meta = (ClampMin = "1.0", UIMin = "1.0"))
		float ProjectileSpeedIncrease = 1.0;

	UPROPERTY(BlueprintReadWrite, Category = "Gameplay")
		int32 CurrentLevel;
	UPROPERTY(BlueprintReadWrite, Category = "Gameplay")
		int32 CurrentHitPoints;
	UPROPERTY(BlueprintReadWrite, Category = "Gameplay")
		int32 CurrentScore;
	UPROPERTY(BlueprintReadWrite, Category = "Gameplay")
		int32 MaxScore;

};
