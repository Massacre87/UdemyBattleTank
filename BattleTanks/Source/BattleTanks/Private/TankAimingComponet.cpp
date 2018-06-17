// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAimingComponet.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"



// Sets default values for this component's properties
UTankAimingComponet::UTankAimingComponet()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTankAimingComponet::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTankAimingComponet::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

void UTankAimingComponet::SetBarrelReference(UStaticMeshComponent* BarrelToSet)
{
	Barrel = BarrelToSet;
}

void UTankAimingComponet::AimAt(FVector HitLocation, float LaunchSpeed)
{
	if (Barrel)
	{
		UE_LOG(LogTemp, Warning, TEXT("Firing at %f"), LaunchSpeed);
	}
}



