#pragma once
#include <Windows.h>
#include "libs/utils/memory.h"
#include "database.h"
#include "ItemList.hpp"

typedef bool(*Tick)(SDK::APalPlayerCharacter* m_this, float DeltaSecond);

class config
{
public:
	//offsets
	DWORD64 ClientBase = 0;
	DWORD64 offset_Tick = 0x2AD4EC0;//APalPlayerCharacter::Tick // 48 89 5C 24 ? 57 48 83 EC 60 48 8B F9 E8 ? ? ? ? 48 8B | [IDA NOTE: 2ND RESULT]
	//check
	bool IsESP = false;
	bool IsFullbright = false;
	bool IsForgeMode = false;
	bool IsTeleportAllToXhair = false;
	bool IsDeathAura = false;
	bool IsAimbot = false;
	bool IsSpeedHack = false;
	bool IsAttackModiler = false;
	bool IsDefuseModiler = false;
	bool IsInfStamina = false;
	bool IsSafe = true;
	bool IsInfinAmmo = false;
	bool IsGodMode = false;
	bool IsToggledFly = false;
	bool IsMuteki = false;
	bool IsMonster = false;
	bool IsQuick = false;
	bool matchDbItems = true;
	bool isDebugESP = false;
	bool bisOpenManager = false;
	bool filterPlayer = false;
	bool bisRandomName = false;
	bool bisTeleporter = false;
	float SpeedModiflers = 1.0f;
	//def and value
	float mDebugESPDistance = 5.0f;
	float mDebugEntCapDistance = 10.0f;
	float mDeathAuraDistance = 10.f;
	int mDeathAuraAmount = 1.f;
	int DamageUp = 0;
	int DefuseUp = 0;
	int EXP = 0;
	int Item = 0;
	float Pos[3] = { 0,0,0 };
	char ItemName[255];
	char inputTextBuffer[255] = "";
	SDK::UWorld* gWorld = nullptr;
	SDK::APalPlayerCharacter* localPlayer = NULL;
	SDK::TArray<SDK::APalPlayerCharacter*> AllPlayers = {};
	SDK::UPalCharacterImportanceManager* UCIM = NULL;
	SDK::UObject* WorldContextObject = NULL;
	int AddItemSlot = 0;
	int AddItemCount = 2;

	enum QuickItemSet
	{
		basic_items_stackable,
		basic_items_single,
		pal_unlock_skills,
		spheres,
		tools

	};
	//Filtered Items
	std::vector<std::string> db_filteredItems;
	
	
	
	struct SWaypoint
	{
		std::string waypointName;
		SDK::FVector waypointLocation;
		SDK::FRotator waypointRotation;

		bool bIsShown = true;
		float* mColor[4];

		SWaypoint() {};
		SWaypoint(std::string wpName, SDK::FVector wpLocation, SDK::FRotator wpRotation) { waypointName = wpName; waypointLocation = wpLocation; waypointRotation = wpRotation; }
	};
	std::vector<SWaypoint> db_waypoints;
	std::vector<std::pair<std::string, SDK::UClass*>> db_filteredEnts;

	struct STargetEntity
	{
		SDK::APalCharacter* pEntCharacter;
		SDK::FVector entLocation;
		SDK::FRotator entRotation;
		SDK::FVector entFwdDir;
		SDK::FVector entOrigin;
		SDK::FVector entBounds;
		bool bIsValid = false;

		STargetEntity() {};
		STargetEntity(SDK::APalCharacter* pChar)
		{
			if (!pChar)
				return;

			entLocation = pChar->K2_GetActorLocation();
			entRotation = pChar->K2_GetActorRotation();
			entFwdDir = pChar->GetActorForwardVector();
			pChar->GetActorBounds(true, &entOrigin, &entBounds, true);
			bIsValid = true;
		}
	};
	STargetEntity pTargetEntity;

	//static function
	static SDK::UWorld* GetUWorld();
	static SDK::UPalCharacterImportanceManager* GetCharacterImpManager();
	static SDK::ULocalPlayer* GetLocalPlayer();
	static SDK::APalPlayerCharacter* GetPalPlayerCharacter(); 
	static SDK::APalPlayerController* GetPalPlayerController();
	static SDK::APalPlayerState* GetPalPlayerState();
	static SDK::UPalPlayerInventoryData* GetInventoryComponent();
	static SDK::APalWeaponBase* GetPlayerEquippedWeapon();
	static bool	GetTAllPlayers(SDK::TArray<class SDK::APalCharacter*>* outResult);
	static bool	GetTAllImpNPC(SDK::TArray<class SDK::APalCharacter*>* outResult);
	static bool	GetTAllNPC(SDK::TArray<class SDK::APalCharacter*>* outResult);
	static bool	GetTAllPals(SDK::TArray<class SDK::APalCharacter*>* outResult);
	static bool GetPartyPals(std::vector<SDK::AActor*>* outResult);
	static bool GetPlayerDeathChests(std::vector<SDK::FVector>* outLocations);
	static bool GetAllActorsofType(SDK::UClass* mType, std::vector<SDK::AActor*>* outArray, bool bLoopAllLevels = false, bool bSkipLocalPlayer = false);
	static void Init();
	static void Update(const char* filterText);
	static const std::vector<std::string>& GetFilteredItems();
};
extern config Config;
