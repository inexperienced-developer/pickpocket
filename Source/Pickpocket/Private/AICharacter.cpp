// Fill out your copyright notice in the Description page of Project Settings.


#include "AICharacter.h"

// Sets default values
AAICharacter::AAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

APatrolPoint* AAICharacter::GetNextPoint()
{
	if (m_points.Num() <= 0) return nullptr;
	int32 random = FMath::RandRange(0, m_points.Num() - 1);
	return m_points[random];
}

// Called every frame
void AAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
}

