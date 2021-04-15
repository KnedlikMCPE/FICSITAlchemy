// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGVehicleCollisionBoxComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UFGVehicleCollisionBoxComponent::UFGVehicleCollisionBoxComponent() : Super() {
	this->mFudgeFactor = 1.20000004768372;
	this->mAddedZVelocityFactor = 0.100000001490116;
	this->mMaxAddedZVelocity = 600;
	this->mMaxCollisionVelocity = 1000;
	this->mMinVelocityForAddedZ = 400;
	this->AreaClass = UNavArea_Obstacle::StaticClass();
}
void UFGVehicleCollisionBoxComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult){ }
void UFGVehicleCollisionBoxComponent::PushCharacter(AActor* OtherActor){ }