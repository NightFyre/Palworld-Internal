#include "../pch.h"
#include "include/config.h"
#include "include/Menu.hpp"

config Config;
Tick TickFunc;
Tick OldTickFunc;

bool DetourTick(SDK::APalPlayerCharacter* m_this, float DeltaSecond)
{
    bool result = OldTickFunc(m_this, DeltaSecond);
    Config.GetUWorld();

    SDK::APalPlayerCharacter* pPalPlayerCharacter = m_this;
    if (!pPalPlayerCharacter)
    {
        Config.bIsValidInstance = false;
        Config.localPlayer = nullptr;
        return result;
    }

    SDK::APalPlayerController* pPalPlayerController = pPalPlayerCharacter->GetPalPlayerController();
    if (!pPalPlayerController)
    {
        Config.bIsValidInstance = false;
        Config.localPlayer = nullptr;
        return result;
    }

    if (!pPalPlayerController->IsLocalPlayerController())
    {
        Config.bIsValidInstance = false;
        Config.localPlayer = nullptr;
        return result;
    }

    Config.bIsValidInstance = true;
    Config.localPlayer = m_this;
    DX11_Base::g_Menu->Loops();     //  sync with game thread
    return result;
}   //  @CRASH: palcrack!DetourTick() [A:\Github\collab\PalWorld-NetCrack\config.cpp:45] : SPEED HACK UPON LOADING WORLD
//  @CRASH-UPDATE: optimized method of obtaining gWorld, watch for crashes when joining new worlds

bool config::Init()
{
    Config.ClientBase = reinterpret_cast<__int64>(GetModuleHandle(0));
  
    __int64 gworld = signature("48 8B 05 ? ? ? ? EB 05").instruction(3).add(7).GetPointer();
    __int64 TickPTR = signature("48 89 5C 24 08 57 48 83 EC 60 48 8B F9 E8 ?? ?? ?? ?? 48 8B 8F").GetPointer();
    if (!gworld || !TickPTR)
        return false;

    Config.pGWorld = gworld;
    Config.gWorld = Config.GetUWorld();

    SDK::InitGObjects();
    Config.kString = SDK::UKismetStringLibrary::GetDefaultObj();
    Config.pPalUtility = SDK::UPalUtility::GetDefaultObj();

    TickFunc = reinterpret_cast<Tick>(TickPTR);
    if (MH_CreateHook(TickFunc, DetourTick, reinterpret_cast<void**>(&OldTickFunc)) != MH_OK)
        return false;

    //init database
    ZeroMemory(&Config.db_filteredItems, sizeof(Config.db_filteredItems));
    
    return true;
}

void config::Shutdown()
{
    MH_DisableHook((Tick)(Config.ClientBase + Config.offset_Tick));
    MH_RemoveHook((Tick)(Config.ClientBase + Config.offset_Tick));
}

void config::Update(const char* filterText)
{
    Config.db_filteredItems.clear();

    const auto& itemsToSearch = database::db_items;

    for (const auto& itemName : itemsToSearch) {
        if (strstr(itemName.c_str(), filterText) != nullptr) {
            Config.db_filteredItems.push_back(itemName);
        }
    }
    std::sort(Config.db_filteredItems.begin(), Config.db_filteredItems.end());
}
const std::vector<std::string>& config::GetFilteredItems() { return Config.db_filteredItems; }

//  credit: liquidace
bool config::InGame()
{
    SDK::UWorld* pWorld = Config.gWorld;
    SDK::UPalUtility* pUtility = Config.pPalUtility;
    if (!pWorld || !pUtility)
        return false;

    SDK::APalGameStateInGame* pGameState = pUtility->GetPalGameStateInGame(pWorld);
    if (!pGameState)
        return false;

    return pGameState->MaxPlayerNum >= 1;
}

SDK::UWorld* config::GetUWorld()
{
    __int64 pWorld = *(__int64*)Config.pGWorld;
    if (!pWorld)
        Config.gWorld = nullptr;
    else
        Config.gWorld = reinterpret_cast<SDK::UWorld*>(pWorld);

    return Config.gWorld;
}

SDK::UPalCharacterImportanceManager* config::GetCharacterImpManager()
{
    SDK::UWorld* pWorld = Config.gWorld;
    if (!pWorld)
        return nullptr;

    SDK::UGameInstance* pGameInstance = pWorld->OwningGameInstance;
    if (!pGameInstance)
        return nullptr;

    return static_cast<SDK::UPalGameInstance*>(pGameInstance)->CharacterImportanceManager;
}

SDK::ULocalPlayer* config::GetLocalPlayer()
{
    SDK::UWorld* pWorld = Config.gWorld;
    if (!pWorld)
        return nullptr;

    SDK::UGameInstance* pGameInstance = pWorld->OwningGameInstance;
    if (!pGameInstance)
        return nullptr;
    
    return pGameInstance->LocalPlayers[0];
}

SDK::APalPlayerCharacter* config::GetPalPlayerCharacter()
{

    if (Config.localPlayer != NULL)
    {
        return Config.localPlayer;
    }
    return nullptr;
}

SDK::APalPlayerController* config::GetPalPlayerController()
{
    SDK::APalPlayerCharacter* pPlayer = GetPalPlayerCharacter();
    if (!pPlayer)
        return nullptr;

    return static_cast<SDK::APalPlayerController*>(pPlayer->GetPalPlayerController());
}

SDK::APalPlayerState* config::GetPalPlayerState()
{
    SDK::APalPlayerCharacter* pPlayer = GetPalPlayerCharacter();
    if (!pPlayer)
        return nullptr;

    return static_cast<SDK::APalPlayerState*>(pPlayer->PlayerState);
}

SDK::UPalPlayerInventoryData* config::GetInventoryComponent()
{
    SDK::APalPlayerState* pPlayerState = GetPalPlayerState();
    if (!pPlayerState)
        return nullptr;

    return pPlayerState->InventoryData;
}

SDK::APalWeaponBase* config::GetPlayerEquippedWeapon()
{
    SDK::APalPlayerCharacter* pPalCharacter = GetPalPlayerCharacter();
    if (!pPalCharacter)
        return nullptr;

    SDK::UPalShooterComponent* pWeaponInventory = pPalCharacter->ShooterComponent;
    if (!pWeaponInventory)
        return nullptr;

    return pWeaponInventory->HasWeapon;
}

bool config::GetTAllPlayers(SDK::TArray<class SDK::APalCharacter*>* outResult)
{
    SDK::UPalCharacterImportanceManager* mPal = GetCharacterImpManager();
    if (!mPal)
        return false;

    mPal->GetAllPlayer(outResult);
    return true;
}

bool config::GetTAllImpNPC(SDK::TArray<class SDK::APalCharacter*>* outResult)
{
    SDK::UPalCharacterImportanceManager* mPal = GetCharacterImpManager();
    if (!mPal)
        return false;

    mPal->GetImportantNPC(outResult);
    return true;
}

bool config::GetTAllNPC(SDK::TArray<class SDK::APalCharacter*>* outResult)
{
    SDK::UPalCharacterImportanceManager* mPal = GetCharacterImpManager();
    if (!mPal)
        return false;

    mPal->GetAllNPC(outResult);
    return true;
}

bool config::GetTAllPals(SDK::TArray<class SDK::APalCharacter*>* outResult)
{
    SDK::UPalCharacterImportanceManager* mPal = GetCharacterImpManager();
    if (!mPal)
        return false;

    mPal->GetAllPalCharacter(outResult);
    return true;
}

//  @TODO:
bool config::GetPartyPals(std::vector<SDK::AActor*>* outResult)
{
    return false;
}

//  @TODO:
bool config::GetPlayerDeathChests(std::vector<SDK::FVector>* outLocations)
{
    return false;
}

// credit: xCENTx
bool config::GetAllActorsofType(SDK::UClass* mType, std::vector<SDK::AActor*>* outArray, bool bLoopAllLevels, bool bSkipLocalPlayer)
{
    SDK::UWorld* pWorld = Config.gWorld;
    if (!pWorld)
        return false;

    SDK::AActor* pLocalPlayer = static_cast<SDK::AActor*>(GetPalPlayerCharacter());
    std::vector<SDK::AActor*> result;

    //	Get Levels
    SDK::TArray<SDK::ULevel*> pLevelsArray = pWorld->Levels;
    __int32 levelsCount = pLevelsArray.Count();

    //	Loop Levels Array
    for (int i = 0; i < levelsCount; i++)
    {
        if (!pLevelsArray.IsValidIndex(i))
            continue;

        SDK::ULevel* pLevel = pLevelsArray[i];
        if (!pLevel && bLoopAllLevels)
            continue;
        else if (!pLevel && !bLoopAllLevels)
            break;

        SDK::TArray<SDK::AActor*> pActorsArray = pLevelsArray[i]->Actors;
        __int32 actorsCount = pActorsArray.Count();

        //	Loop Actor Array
        for (int j = 0; j < actorsCount; j++)
        {
            if (!pActorsArray.IsValidIndex(j))
                continue;

            SDK::AActor* pActor = pActorsArray[j];
            if (!pActor || !pActor->RootComponent || (pActor == pLocalPlayer && bSkipLocalPlayer))
                continue;

            if (!pActor->IsA(mType))
                continue;

            result.push_back(pActor);
        }

        if (bLoopAllLevels)
            continue;
        else
            break;
    }
    *outArray = result;
    return result.size() > 0;
}

bool config::IsAlive(SDK::AActor* pChar)
{
    SDK::UPalUtility* pUtil = Config.pPalUtility;
    SDK::APalPlayerCharacter* pLocalChar = Config.GetPalPlayerCharacter();
    if (!pUtil || !pLocalChar || !pChar)
        return false;

    return !pUtil->IsDead(pChar);
}

bool config::IsAPartyMember(SDK::APalCharacter* pChar)
{
    SDK::APalPlayerCharacter* pLocalChar = Config.GetPalPlayerCharacter();
    if (!pLocalChar || !pChar || !IsAlive(pChar))
        return false;

    SDK::UPalCharacterParameterComponent* pParams = pChar->CharacterParameterComponent;
    if (!pParams)
        return false;

    return pParams->IsOtomo();
}

bool config::IsABaseWorker(SDK::APalCharacter* pChar, bool bLocalControlled)
{
    SDK::UPalUtility* pUtil = Config.pPalUtility;
    SDK::APalPlayerCharacter* pLocalChar = Config.GetPalPlayerCharacter();
    if (!pUtil || !pLocalChar || !pChar || !IsAlive(pChar))
        return false;

    bool bResult = bLocalControlled ? pUtil->IsLocalPlayerCampPal(pChar) : pUtil->IsBaseCampPal(pChar);
    return bResult;
}
