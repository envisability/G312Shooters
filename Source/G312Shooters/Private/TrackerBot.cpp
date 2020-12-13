// Fill out your copyright notice in the Description page of Project Settings.



#include "G312Shooters/Public/TrackerBot.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"
#include "Sound/SoundCue.h"

//#include "NavigationSystem.h"
// #include "NavigationPath.h"

// Sets default values
ATrackerBot::ATrackerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Add the mesh and ensure that it would not affect navigation 
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCanEverAffectNavigation(false);
	MeshComp->SetSimulatePhysics(true);
	RootComponent = MeshComp;
}

// Called when the game starts or when spawned
void ATrackerBot::BeginPlay()
{
	Super::BeginPlay();
	
}

FVector ATrackerBot::GetNextPathPoint()
{
	// Get the player, which serves as the target and find the path to it 
	ACharacter* PlayerPawn = UGameplayStatics::GetPlayerCharacter(this, 0);
	// UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), PlayerPawn);

	return FVector();
}

// Called every frame
void ATrackerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
