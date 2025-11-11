// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAI.h"

void AShooterAI::BeginPlay()
{
	Super::BeginPlay();

}

void AShooterAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShooterAI::StartBehaviorTree(ARoboShotCharacter* Player)
{
	if (EnemyAIBehaviorTree)
	{
		MyCharacter = Cast<ARoboShotCharacter>(GetPawn());
		if (Player)
		{
			PlayerCharacter = Player;
		}

		RunBehaviorTree(EnemyAIBehaviorTree);

		UBlackboardComponent* MyBlackboard = GetBlackboardComponent();

		if (MyBlackboard && PlayerCharacter && MyCharacter)
		{
			MyBlackboard->SetValueAsVector("StartLocation", MyCharacter->GetActorLocation());
		}
	}
}
