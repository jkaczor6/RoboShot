// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAI.h"

void AShooterAI::BeginPlay()
{
	Super::BeginPlay();

	// PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

void AShooterAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*if (PlayerPawn)
	{
		if (LineOfSightTo(PlayerPawn))
		{
			SetFocus(PlayerPawn);
			MoveToActor(PlayerPawn, 200.0f);
		}
		else
		{
			ClearFocus(EAIFocusPriority::Gameplay);
			StopMovement();
		}
	}*/
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
			MyBlackboard->SetValueAsVector("PlayerLocation", PlayerCharacter->GetActorLocation());
			MyBlackboard->SetValueAsVector("StartLocation", MyCharacter->GetActorLocation());
		}
	}
}
