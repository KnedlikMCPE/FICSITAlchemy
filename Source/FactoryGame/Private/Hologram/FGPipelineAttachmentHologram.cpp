// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGPipelineAttachmentHologram.h"
#include "Buildables/FGBuildableWall.h"
#include "Buildables/FGBuildablePipelineAttachment.h"
#include "Buildables/FGBuildablePipeline.h"
#include "Buildables/FGBuildableRoad.h"
#include "Buildables/FGBuildableRailroadTrack.h"
#include "Buildables/FGBuildableFoundation.h"

AFGPipelineAttachmentHologram::AFGPipelineAttachmentHologram() : Super() {
	this->mMaxValidTurnOffset = 140;
	this->mMaxValidTurnAngle = 3;
	this->mRotationAxis = EAxis::Z;
	this->mIncrementSnappedConnectionOnScroll = true;
	this->mUseProducerDirectionalArrow = true;
	this->mProducerArrowRelativeLocation.X = 0; this->mProducerArrowRelativeLocation.Y = 0; this->mProducerArrowRelativeLocation.Z = 200;
	this->mWallSnapOffset.X = 0; this->mWallSnapOffset.Y = 75;
	this->mHasPipeRotationBuildStep = true;
	this->mIncludeBuildGuideTraceChannel = true;
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildablePipeline::StaticClass()); this->mValidHitClasses.Add(AFGBuildablePipelineAttachment::StaticClass()); this->mValidHitClasses.Add(AFGBuildableWall::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->SetHidden(true);
	this->SetReplicates(true);
}
void AFGPipelineAttachmentHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGPipelineAttachmentHologram::BeginPlay(){ }
bool AFGPipelineAttachmentHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGPipelineAttachmentHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
void AFGPipelineAttachmentHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGPipelineAttachmentHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGPipelineAttachmentHologram::ScrollRotate(int32 delta, int32 step){ }
int32 AFGPipelineAttachmentHologram::GetRotationStep() const{ return int32(); }
void AFGPipelineAttachmentHologram::CheckClearance(){ }
void AFGPipelineAttachmentHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGPipelineAttachmentHologram::CheckValidPlacement(){ }
void AFGPipelineAttachmentHologram::TrySnapToConnection(const float snapDistance, FVector& out_location, FVector& out_normal){ }
FName AFGPipelineAttachmentHologram::mConnection0 = FName();
FName AFGPipelineAttachmentHologram::mConnection1 = FName();