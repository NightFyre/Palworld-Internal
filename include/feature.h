#pragma once
#include "include/Menu.hpp"
#include "config.h"

void ESP();

void ESP_DEBUG(float mDist, ImVec4 color = { 1.0f, 1.0f, 1.0f, 01.0f }, SDK::UClass* mEntType = SDK::AActor::StaticClass());

void DrawUActorComponent(SDK::TArray<SDK::UActorComponent*> Comps, ImColor color);

void UnlockAllEffigies();

void IncrementInventoryItemCountByIndex(__int32 mCount, __int32 mIndex = 0);

void AddItemToInventoryByName(std::string itemName, int count);

void SpawnMultiple_ItemsToInventory(config::QuickItemSet Set);

void AnyWhereTP(SDK::FVector& vector, bool IsSafe);

void ExploitFly(bool IsFly);

void SetFullbright(bool bIsSet);

void SpeedHack(float mSpeed);

void SetDemiGodMode(bool bIsSet);

void RespawnLocalPlayer(bool bIsSafe);

void SetPlayerNickname(std::string newName);

void SetPlayerHealth(__int32 newHealth);

void SetPlayerInventoryWeight(float newWeight);

void SetPickupsWeight(float newWeight);

void ReviveLocalPlayer();

void ResetStamina();

void GiveExperiencePoints(__int32 mXP);

void SetPlayerAttackParam(__int32 mNewAtk);

void SetPlayerDefenseParam(__int32 mNewDef);

void SetInfiniteAmmo(bool bInfAmmo);

void SetCraftingSpeed(float mNewSpeed, bool bRestoreDefault = false);

void SetPlayerInventoryWeight(float newWeight);

void SetPickupsWeight(float newWeight);

void ApplyStatusBuff(SDK::APalCharacter* pChar, SDK::EPalStatusID newStatus);

void RemoveStatusBuff(SDK::APalCharacter* pChar, SDK::EPalStatusID remStatus);

void AddTechPoints(__int32 mPoints);

void AddAncientTechPoints(__int32 mPoints);

void RemoveTechPoints(__int32 mPoints);

void RemoveAncientTechPoints(__int32 mPoints);

void ClearWorldMap();

void SetWorldTime(__int32 mHour);

float GetDistanceToActor(SDK::AActor* pLocal, SDK::AActor* pTarget);

bool GetActorNickName(SDK::APalCharacter* pCharacter, std::string* outName);

bool GetItemName(SDK::APalMapObject* pMap, std::string* outName);

void ForgeActor(SDK::AActor* pTarget, float mDistance, float mHeight = 0.0f, float mAngle = 0.0f);

void SendDamageToActor(SDK::APalCharacter* pTarget, int32 damage, bool bSpoofAttacker = false);

void DeathAura(__int32 dmgAmount, float mDistance, bool bIntensityEffect = false, bool bVisualEffect = false, SDK::EPalVisualEffectID visID = SDK::EPalVisualEffectID::None);

void TeleportAllPalsToCrosshair(float mDistance);

void TeleportToMapMarker();

void AddWaypointLocation(std::string wpName);

bool RemoveWaypointLocationByName(std::string wpName);

bool RemoveWaypointLocationByIndex(__int32 wpIndex);

void RenderWaypointsToScreen(float fontSize);

void RenderNearbyNPCTags(ImColor color = ImColor(1.0f, 1.0f,1.0f, 1.0f), float distance = 5.f, float fontSize = 8.0f, bool b2DBox = false);

void RenderNearbyPalTags(ImColor color = ImColor(1.0f, 1.0f,1.0f, 1.0f), float distance = 5.f, float fontSize = 8.0f, bool b2DBox = false);