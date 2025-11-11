// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_PlayerLocation.h"
#include "ShooterAI.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTService_PlayerLocation::UBTService_PlayerLocation()
{
	NodeName = TEXT("Set Player Last Known Location");
}

void UBTService_PlayerLocation::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AShooterAI* OwnerController = Cast<AShooterAI>(OwnerComp.GetAIOwner());
	ARoboShotCharacter* Player = OwnerController->PlayerCharacter;
	UBlackboardComponent* BlackboardComponent = OwnerController->GetBlackboardComponent();

	if (Player && BlackboardComponent)
	{
		BlackboardComponent->SetValueAsVector(GetSelectedBlackboardKey(), Player->GetActorLocation());
	}
}
