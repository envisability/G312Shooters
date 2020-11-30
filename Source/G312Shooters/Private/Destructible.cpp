// Fill out your copyright notice in the Description page of Project Settings.


#include "./G312Shooters/Public/Destructible.h"
#include "G312Shooters/G312ShootersProjectile.h"
#include "DestructibleComponent.h"
#include "Engine.h"

// Sets default values
ADestructible::ADestructible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));

	DestructibleComponent = CreateDefaultSubobject<UDestructibleComponent>(TEXT("Destrcutible Component"));
	DestructibleComponent->SetupAttachment(RootComponent);

	DestructibleComponent->SetNotifyRigidBodyCollision(true);
	DestructibleComponent->SetNotifyRigidBodyCollision(true);

	DestructibleComponent->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	DestructibleComponent->OnComponentHit.AddDynamic(this, &ADestructible::OnCompHit);	
}

// Called when the game starts or when spawned
void ADestructible::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADestructible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADestructible::OnCompHit(
	UPrimitiveComponent* HitComp, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, 
	FVector NormalImpulse, 
	const FHitResult& Hit)
{
	if (OtherActor) {
	
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, 
			FString::Printf(TEXT("I Hit: %s"), *OtherActor->GetName()));
		// Cast the other actor to hit 
		AG312ShootersProjectile* projectile = Cast<AG312ShootersProjectile>(OtherActor);
	}
}

