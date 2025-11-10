// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "RoboShotCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ShooterAI.generated.h"

/**
 * 
 */
UCLASS()
class ROBOSHOT_API AShooterAI : public AAIController
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UBehaviorTree* EnemyAIBehaviorTree;

	ARoboShotCharacter* PlayerCharacter;
	ARoboShotCharacter* MyCharacter;

	void StartBehaviorTree(ARoboShotCharacter* Player);
};
