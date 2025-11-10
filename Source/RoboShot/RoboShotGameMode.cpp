// Copyright Epic Games, Inc. All Rights Reserved.

#include "RoboShotGameMode.h"

void ARoboShotGameMode::BeginPlay()
{
	Super::BeginPlay();

	ARoboShotCharacter* Player = Cast<ARoboShotCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	TArray<AActor*> Enemies;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AShooterAI::StaticClass(), Enemies);

	for (AActor* Enemy : Enemies)
	{
		AShooterAI* EnemyAI = Cast<AShooterAI>(Enemy);

		if (EnemyAI)
		{
			EnemyAI->StartBehaviorTree(Player);
		}
	}
}

ARoboShotGameMode::ARoboShotGameMode()
{
	// stub
}
