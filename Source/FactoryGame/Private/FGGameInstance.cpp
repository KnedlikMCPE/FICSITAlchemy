// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGGameInstance.h"

void FOnJoinSessionData::SetState(EJoinSessionState newState, FOnJoinSessionStateChanged& onStateChangedDelegate){ }
UFGGameInstance::UFGGameInstance(){ }
UFGGameInstance::~UFGGameInstance(){ }
void UFGGameInstance::Init(){ }
bool UFGGameInstance::JoinSession(ULocalPlayer* localPlayer, const FOnlineSessionSearchResult& searchResult){ return bool(); }
TSubclassOf<UOnlineSession> UFGGameInstance::GetOnlineSessionClass(){ return TSubclassOf<UOnlineSession>(); }
UAnalyticsService* UFGGameInstance::GetGameAnalyticsService(UObject* worldContext){ return nullptr; }
UAnalyticsService* UFGGameInstance::GetAnalyticsServiceFromWorld(UWorld* worldContext){ return nullptr; }
void UFGGameInstance::PushError(TSubclassOf<class UFGErrorMessage> errorMessage){ }
void UFGGameInstance::PushError(UObject* worldContext, TSubclassOf<class UFGErrorMessage> errorMessage){ }
UFGErrorMessage* UFGGameInstance::GetNextError(){ return nullptr; }
UFGErrorMessage* UFGGameInstance::GetNextError(UObject* worldContext){ return nullptr; }
UFGErrorMessage* UFGGameInstance::PeekNextError() const{ return nullptr; }
UFGErrorMessage* UFGGameInstance::PeekNextError(UObject* worldContext){ return nullptr; }
void UFGGameInstance::SetHasSeenAlphaInfoScreen(bool hasSeen){ }
bool UFGGameInstance::FindModPackages(){ return bool(); }
void UFGGameInstance::GetFGUGC(UClass* WeaponClass, UClass* EnemyClass, UClass* BossClass, UClass *PlayerPawnClass){ }
void UFGGameInstance::Shutdown(){ }
void UFGGameInstance::SetSkipOnboarding(bool doSkip){ }
void UFGGameInstance::QueryNATType(){ }
bool UFGGameInstance::GetLatestNetworkError(FFGGameNetworkErrorMsg& msg){ return bool(); }
bool UFGGameInstance::PopLatestNetworkError(){ return bool(); }
EJoinSessionState UFGGameInstance::GetCurrentJoinSessionState() const{ return EJoinSessionState(); }
UFGDebugOverlayWidget* UFGGameInstance::GetDebugOverlayWidget(){ return nullptr; }
void UFGGameInstance::LoadComplete(const float loadTime, const FString& mapName){ }
void UFGGameInstance::OnDestroyOldSessionComplete_JoinSession(FName gameSessionName, bool wasSuccessful){ }
void UFGGameInstance::OnQueryFriendProductIdCompleted_JoinSession(bool wasSuccessful, FString EpicId, EOS_ProductUserId ProductId){ }
void UFGGameInstance::PollHostProductUserId_JoinSession(){ }
void UFGGameInstance::_OnNATUpdatedCallback(void* userData, ECachedNATType Data){ }
void UFGGameInstance::OnNATUpdated(ECachedNATType Data){ }
void UFGGameInstance::OnJoinSessionComplete(FName sessionName, EOnJoinSessionCompleteResult::Type joinResult){ }
void UFGGameInstance::SendRecievedNetworkErrorOnDelegate(UWorld* world, UNetDriver* driver, ENetworkFailure::Type errorType, const FString& errorMsg){ }
void UFGGameInstance::OnPreLoadMap(const FString& levelName){ }
void UFGGameInstance::OnPostLoadMap(UWorld* loadedWorld){ }
void UFGGameInstance::OnWorldDestroy(UWorld* world){ }
void UFGGameInstance::InitGameAnalytics(){ }
void UFGGameInstance::JoinSession_Internal(){ }
void UFGGameInstance::OnSendGameplayDataUpdated(FString cvar){ }
