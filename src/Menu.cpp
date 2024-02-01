#include "../pch.h"
#include "../include/Menu.hpp"
#include "SDK.hpp"
#include "config.h"
#include <algorithm>
std::string rand_str(const int len)
{
    std::string str;
    char c;
    int idx;
    for (idx = 0; idx < len; idx++)
    {
        c = 'a' + rand() % 26;
        str.push_back(c);
    }
    return str;
}

int InputTextCallback(ImGuiInputTextCallbackData* data) {
    char inputChar = data->EventChar;

    Config.Update(Config.inputTextBuffer);

    return 0;
}

namespace DX11_Base 
{
    // helper variables
    char inputBuffer_getFnAddr[100];
    char inputBuffer_getClass[100];
    char inputBuffer_setWaypoint[32];
    char inputBuffer_nickname[16];
    int inputTechPoints_buffer = 1;

    namespace Styles 
    {
        void InitStyle()
        {
            ImGuiStyle& style = ImGui::GetStyle();
            ImVec4* colors = ImGui::GetStyle().Colors;

            //	STYLE PROPERTIES
            style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
            ImGui::StyleColorsClassic();

            if (g_Menu->dbg_RAINBOW_THEME) 
            {
                //  RGB MODE STLYE PROPERTIES
                colors[ImGuiCol_Separator] = ImVec4(g_Menu->dbg_RAINBOW);
                colors[ImGuiCol_TitleBg] = ImVec4(0, 0, 0, 1.0f);
                colors[ImGuiCol_TitleBgActive] = ImVec4(0, 0, 0, 1.0f);
                colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0, 0, 0, 1.0f);
            }
            else 
            {
                /// YOUR DEFAULT STYLE PROPERTIES HERE
            }
        }
    }


    namespace Tabs 
    {
        void TABPlayer()
        {
            if (ImGui::BeginChild("CHILD WINDOW", ImVec2(0.f, 300.f)))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;

                //�л�����һ��
                ImGui::Checkbox("SpeedHack", &Config.IsSpeedHack);
                if (Config.IsSpeedHack)
                {
                    ImGui::SameLine();
                    cursorX = gWindow->DC.CursorPos.x += 10.f;
                    ImGui::SliderFloat("##SpeedModifilers", &Config.SpeedModiflers, 1, 10);
                }
                else
                {
                    ImGui::SameLine();
                    cursorX = gWindow->DC.CursorPos.x += 10.f;
                    ImGui::NewLine();
                }

                ImGui::Checkbox("AttackHack", &Config.IsAttackModiler);
                if (Config.IsAttackModiler)
                {
                    ImGui::SameLine();
                    gWindow->DC.CursorPos.x = cursorX;
                    ImGui::SliderInt("##AttackModifilers", &Config.DamageUp, 0, 200000);
                }

                ImGui::Checkbox("DefenseHack", &Config.IsDefuseModiler);
                if (Config.IsDefuseModiler)
                {
                    ImGui::SameLine();
                    gWindow->DC.CursorPos.x = cursorX;
                    ImGui::SliderInt("##defenseModifilers", &Config.DefuseUp, 0, 200000);
                }

                ImGui::Checkbox("Godmode", &Config.IsGodMode);

                ImGui::Checkbox("InfStamina", &Config.IsInfStamina);

                if (ImGui::Checkbox("InfAmmo", &Config.IsInfinAmmo))
                    SetInfiniteAmmo(Config.IsInfinAmmo);

                if (ImGui::Checkbox("TELEPORT PALS TO XHAIR", &Config.IsTeleportAllToXhair) && !Config.IsTeleportAllToXhair)
                    Config.mDebugEntCapDistance = 10.f;
                if (Config.IsTeleportAllToXhair)
                {
                    ImGui::SameLine();
                    ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                    ImGui::SliderFloat("##ENT_CAP_DISTANCE", &Config.mDebugEntCapDistance, 1.0f, 100.f, "%.0f", ImGuiSliderFlags_AlwaysClamp);
                }

                if (ImGui::Checkbox("DEATH AURA", &Config.IsDeathAura) && !Config.IsDeathAura)
                {
                    Config.mDeathAuraDistance = 10.0f;
                    Config.mDeathAuraAmount = 1;
                }
                if (Config.IsDeathAura)
                {
                    ImGui::SameLine();
                    ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x * .7);
                    ImGui::SliderFloat("##AURA_DISTANCE", &Config.mDeathAuraDistance, 1.0f, 100.f, "%.0f", ImGuiSliderFlags_AlwaysClamp);
                    ImGui::SameLine();
                    ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                    ImGui::SliderInt("##AURA_DMG", &Config.mDeathAuraAmount, 1, 10, "%d", ImGuiSliderFlags_AlwaysClamp);
                }

                if (ImGui::Checkbox("Float Mode", &Config.IsToggledFly))
                    ExploitFly(Config.IsToggledFly);

                if (ImGui::Checkbox("FullBright", &Config.IsFullbright))
                    SetFullbright(Config.IsFullbright);

                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x * .65);
                ImGui::InputTextWithHint("##NAME_INPUT_BUFFER", "ENTER NEW NICKNAME", inputBuffer_nickname, 16);
                ImGui::SameLine();
                if (ImGui::Button("SET"))
                {
                    SetPlayerNickname(std::string(inputBuffer_nickname));
                    memset(inputBuffer_nickname, 0, 16);
                }
                ImGui::SameLine();
                if (ImGui::Button("SET RANDOM", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
                {
                    //  @TODO: initialize instance at runtime and store as a variable in config
                    static SDK::UKismetStringLibrary* lib = SDK::UKismetStringLibrary::GetDefaultObj();
                    std::string s = rand_str(20);
                    SetPlayerNickname(s);
                }

                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x * .3);
                ImGui::InputInt("##ADD_TECH_POINTS", &inputTechPoints_buffer);
                ImGui::SameLine();
                if (ImGui::Button("TECH POINTS"))
                {
                    AddTechPoints(inputTechPoints_buffer);
                    inputTechPoints_buffer = 1;
                }
                ImGui::SameLine();
                if (ImGui::Button("ANCIENT TECH POINTS", ImVec2(ImGui::GetContentRegionAvail().x, 0)))
                {
                    AddAncientTechPoints(inputTechPoints_buffer);
                    inputTechPoints_buffer = 1;
                }

                //Creadit Mokobake
                //ImGui::Checkbox("MuteKiGodmode", &Config.IsMuteki);
                ImGui::EndChild();
            }
        }
        
        void TABExploit()
        {
            if (ImGui::BeginChild("CHILD WINDOW", ImVec2(0.f, 300.f)))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;

                //creadit 
                //ImGui::Checkbox("PalIsMonster", &Config.IsMonster);
                ImGui::InputText("Item Name", Config.ItemName,sizeof(Config.ItemName));
                ImGui::InputInt("Item Num", &Config.Item);
                ImGui::SameLine();
                if (ImGui::Button("Give item", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
                {
                    AddItemToInventoryByName(std::string(Config.ItemName), Config.Item);
                    g_Console->printdbg("\n\n[+] ItemName: %s [+]\n\n", Console::Colors::green, Config.ItemName);
                }

                ImGui::InputInt("Slot to modify (start 0):", &Config.AddItemSlot);
                ImGui::InputInt("Multiple of how much:", &Config.AddItemCount);
                
                if (ImGui::Button("Give items from slot", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
                    IncrementInventoryItemCountByIndex(Config.AddItemCount, Config.AddItemSlot);
                
                if (ImGui::Button("Unlock All Effigies", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
                    UnlockAllEffigies();


                /*if (ImGui::Button("DeleteSelf", ImVec2(ImGui::GetWindowContentRegionWidth() - 3, 20)))
                {
                    SDK::APalPlayerCharacter* p_appc = Config.GetPalPlayerCharacter();
                    if (p_appc != NULL)
                    {
                        if (Config.GetPalPlayerCharacter()->GetPalPlayerController() != NULL)
                        {
                            if (Config.GetPalPlayerCharacter()->GetPalPlayerController()->GetPalPlayerState() != NULL)
                            {
                                Config.GetPalPlayerCharacter()->GetPalPlayerController()->GetPalPlayerState()->Debug_RequestDeletePlayerSelf_ToServer();
                            }
                        }
                    }
                }*/

                if (ImGui::Button("GodHealth", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                    ReviveLocalPlayer();

                //Creadit WoodgamerHD
                ImGui::InputInt("EXP:", &Config.EXP);
                ImGui::SameLine();
                if (ImGui::Button("Give exp", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
                GiveExperiencePoints(Config.EXP);


                ImGui::EndChild();
            }
        }
        
        void TABConfig()
        {
            
            ImGui::Text("PalWorld Menu");
            ImGui::Text("VERSION: v1.2.3");

            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();
            if (ImGui::Button("UNHOOK DLL", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20))) {
#if DEBUG
                g_Console->printdbg("\n\n[+] UNHOOK INITIALIZED [+]\n\n", Console::Colors::red);

#endif
                g_KillSwitch = TRUE;
            }
        }
        
        void TABDatabase()
        {
            if (ImGui::BeginChild("CHILD WINDOW", ImVec2(0.f, 300.f)))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;

                //ImGui::Checkbox("IsItems", &Config.matchDbItems);

                ImGui::InputText("Filter", Config.inputTextBuffer, sizeof(Config.inputTextBuffer), ImGuiInputTextFlags_CallbackCharFilter, InputTextCallback);

                Config.Update(Config.inputTextBuffer);

                const auto& filteredItems = Config.GetFilteredItems();

                for (const auto& itemName : filteredItems) {
                    if (ImGui::Button(itemName.c_str()))
                    {
                        strcpy_s(Config.ItemName, itemName.c_str());
                        continue;
                        //if (Config.matchDbItems) {}
                        //strcpy_s(Config.PalName, itemName.c_str());
                    }
                }

                ImGui::EndChild();
            }
        }
        
        void TABEntityManager()
        {
            if (ImGui::BeginChild("CHILD WINDOW", ImVec2(0.f, 300.f)))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;

                if (Config.gWorld)
                {
                    ImGui::Checkbox("filterPlayer", &Config.filterPlayer);
                    SDK::TArray<SDK::AActor*> T = Config.GetUWorld()->PersistentLevel->Actors;
                    for (int i = 0; i < T.Count(); i++)
                    {
                        if (!T[i])
                            continue;

                        if (!T[i]->IsA(SDK::APalCharacter::StaticClass()))
                            continue;

                        SDK::APalCharacter* Character = (SDK::APalCharacter*)T[i];
                        SDK::FString name;
                        if (Config.filterPlayer)
                        {
                            if (!T[i]->IsA(SDK::APalPlayerCharacter::StaticClass()))
                                continue;
                        }
                        if (T[i]->IsA(SDK::APalPlayerCharacter::StaticClass()))
                        {
                            if (!Character)
                                continue;

                            Character->CharacterParameterComponent->GetNickname(&name);
                        }
                        else
                        {
                            SDK::UKismetStringLibrary* lib = SDK::UKismetStringLibrary::GetDefaultObj();
                            if (!Character)
                                continue;

                            std::string s = Character->GetFullName();
                            size_t firstUnderscorePos = s.find('_');

                            if (firstUnderscorePos != std::string::npos)
                            {
                                std::string result = s.substr(firstUnderscorePos + 1);

                                size_t secondUnderscorePos = result.find('_');

                                if (secondUnderscorePos != std::string::npos) {
                                    result = result.substr(0, secondUnderscorePos);
                                }
                                wchar_t  ws[255];
                                swprintf(ws, 255, L"%hs", result);
                                name = SDK::FString(ws);
                            }
                        }
                        ImGui::Text(name.ToString().c_str());
                        ImGui::SameLine();
                        ImGui::PushID(i);
                        if (ImGui::Button("Kill"))
                        {
                            if (T[i]->IsA(SDK::APalCharacter::StaticClass()))
                                SendDamageToActor(Character, 99999999999);
                        }
                        ImGui::SameLine();
                        if (ImGui::Button("TP"))
                        {
                            if (Config.GetPalPlayerCharacter() != NULL)
                            {
                                if (Character)
                                {
                                    SDK::FVector vector = Character->K2_GetActorLocation();
                                    AnyWhereTP(vector, Config.IsSafe);
                                }
                            }
                        }

                        /*if (Character->IsA(SDK::APalPlayerCharacter::StaticClass()))
                        {
                            ImGui::SameLine();
                            if (ImGui::Button("Boss"))
                            {
                                if (Config.GetPalPlayerCharacter() != NULL)
                                {
                                    auto controller = Config.GetPalPlayerCharacter()->GetPalPlayerController();
                                    if (controller != NULL)
                                    {
                                        controller->Transmitter->BossBattle->RequestBossBattleEntry_ToServer(SDK::EPalBossType::ElectricBoss, (SDK::APalPlayerCharacter*)Character);
                                        controller->Transmitter->BossBattle->RequestBossBattleStart_ToServer(SDK::EPalBossType::ElectricBoss, (SDK::APalPlayerCharacter*)Character);
                                    }
                                }
                            }
                        }*/
                        if (Character->IsA(SDK::APalPlayerCharacter::StaticClass()))
                        {
                            ImGui::SameLine();
                            if (ImGui::Button("MaskIt"))
                            {
                                if (Config.GetPalPlayerCharacter() != NULL)
                                {
                                    auto controller = Config.GetPalPlayerCharacter()->GetPalPlayerController();
                                    if (controller != NULL)
                                    {
                                        auto player = (SDK::APalPlayerCharacter*)Character;
                                        SDK::FString fakename;
                                        player->CharacterParameterComponent->GetNickname(&fakename);
                                        Config.GetPalPlayerCharacter()->GetPalPlayerController()->Transmitter->NetworkIndividualComponent->UpdateCharacterNickName_ToServer(Config.GetPalPlayerCharacter()->CharacterParameterComponent->IndividualHandle->ID, fakename);
                                    }
                                }
                            }
                        }
                        ImGui::PopID();
                    }

                }

                ImGui::EndChild();
            }

        }

        void TABTeleportManager()
        {
            if (ImGui::BeginChild("CHILD WINDOW", ImVec2(0.f, 300.f)))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;

                ImGui::Checkbox("SafeTeleport", &Config.IsSafe);
                if (ImGui::Button("Home", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                    RespawnLocalPlayer(Config.IsSafe);

                ImGui::Text("POS");
                ImGui::SameLine();
                ImGui::InputFloat3("##INPUT_FLOAT_POS", Config.Pos);
                ImGui::SameLine();
                if (ImGui::Button("TELEPORT", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
                {
                    SDK::FVector vector = { Config.Pos[0],Config.Pos[1],Config.Pos[2] };
                    AnyWhereTP(vector, Config.IsSafe);
                }


                if (ImGui::CollapsingHeader("LOCATIONS"))
                {
                    for (const auto& pair : database::locationMap)
                    {
                        const std::string& locationName = pair.first;
                        if (ImGui::Button(locationName.c_str()))
                        {
                            SDK::FVector location = SDK::FVector(pair.second[0], pair.second[1], pair.second[2]);
                            AnyWhereTP(location, Config.IsSafe);
                        }
                    }
                }

                ImGui::InputTextWithHint("##INPUT_SETWAYPOINT", "CUSTOM WAYPOINT NAME", inputBuffer_setWaypoint, 32);
                ImGui::SameLine();
                if (ImGui::Button("SET", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
                {
                    std::string wpName = inputBuffer_setWaypoint;
                    if (wpName.size() > 0)
                    {
                        AddWaypointLocation(wpName);
                        memset(inputBuffer_setWaypoint, 0, 32);
                    }
                }
                if (Config.db_waypoints.size() > 0)
                {
                    if (ImGui::BeginChild("##CHILD_WAYPOINTS", { 0.0f, 100.f }))
                    {
                        DWORD index = -1;
                        for (auto waypoint : Config.db_waypoints)
                        {
                            index++;
                            ImGui::PushID(index);
                            //  ImGui::Checkbox("SHOW", &waypoint.bIsShown);
                            //  ImGui::SameLine();
                            if (ImGui::Button(waypoint.waypointName.c_str(), ImVec2(ImGui::GetContentRegionAvail().x, 20)))
                                AnyWhereTP(waypoint.waypointLocation, false);
                            ImGui::PopID();
                        }
                        ImGui::EndChild();
                    }
                }

                ImGui::EndChild();
            }

        }

        void TABItemSpawner()
        {
            if (ImGui::BeginChild("CHILD WINDOW", ImVec2(0.f, 300.f)))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;
                static int num_to_add = 1;
                static int category = 0;

                ImGui::InputInt("Num To Add", &num_to_add);

                ImGui::Combo("Item Category", &category, "Accessories\0Ammo\0Armor\0Crafting Materials\0Eggs\0Food\0Hats\0\Medicine\0Money\0Other\0Pal Spheres\0Seeds\0Tools\0Weapons\0");

                std::initializer_list list = itemlist::accessories;

                switch (category)
                {
                    case 1:
                        list = itemlist::ammo;
                        break;
                    case 2:
                        list = itemlist::armor;
                        break;
                    case 3:
                        list = itemlist::craftingmaterials;
                        break;
                    case 4:
                        list = itemlist::eggs;
                        break;
                    case 5:
                        list = itemlist::food;
                        break;
                    case 6:
                        list = itemlist::hats;
                        break;
                    case 7:
                        list = itemlist::medicine;
                        break;
                    case 8:
                        list = itemlist::money;
                        break;
                    case 9:
                        list = itemlist::other;
                        break;
                    case 10:
                        list = itemlist::palspheres;
                        break;
                    case 11:
                        list = itemlist::seeds;
                        break;
                    case 12:
                        list = itemlist::tools;
                        break;
                    case 13:
                        list = itemlist::weapons;
                        break;
                    default:
                        list = itemlist::accessories;
                }

                int cur_size = 0;

                static char item_search[100];

                ImGui::InputText("Search", item_search, IM_ARRAYSIZE(item_search));

                for (const auto& item : list) {
                    std::istringstream ss(item);
                    std::string left_text, right_text;

                    std::getline(ss, left_text, '|');
                    std::getline(ss, right_text);

                    auto right_to_lower = right_text;
                    std::string item_search_to_lower = item_search;

                    std::transform(right_to_lower.begin(), right_to_lower.end(), right_to_lower.begin(), ::tolower);
                    std::transform(item_search_to_lower.begin(), item_search_to_lower.end(), item_search_to_lower.begin(), ::tolower);

                    if (item_search[0] != '\0' && (right_to_lower.find(item_search_to_lower) == std::string::npos))
                        continue;

                    if (cur_size != 0 && cur_size < 20)
                    {
                        ImGui::SameLine();
                    }
                    else if (cur_size != 0)
                    {
                        cur_size = 0;
                    }

                    cur_size += right_text.length();

                    ImGui::PushID(item);
                    if (ImGui::Button(right_text.c_str()))
                        AddItemToInventoryByName(left_text, num_to_add);
                    ImGui::PopID();
                }

                ImGui::EndChild();
            }

        }

        void TABQuick()
        {
            if (ImGui::BeginChild("CHILD WINDOW", ImVec2(0.f, 300.f)))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;

                if (ImGui::Button("Basic Items stack", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                    SpawnMultiple_ItemsToInventory(config::QuickItemSet::basic_items_stackable);

                if (ImGui::Button("Basic Items single", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                    SpawnMultiple_ItemsToInventory(config::QuickItemSet::basic_items_single);

                if (ImGui::Button("Unlock Pal skills", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                    SpawnMultiple_ItemsToInventory(config::QuickItemSet::pal_unlock_skills);

                if (ImGui::Button("Spheres", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                    SpawnMultiple_ItemsToInventory(config::QuickItemSet::spheres);

                if (ImGui::Button("Tools", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
                    SpawnMultiple_ItemsToInventory(config::QuickItemSet::tools);
             
                ImGui::EndChild();
            }

        }
        
        void TABDebug()
        {
            ImGui::Checkbox("Show Quick Tab", &Config.IsQuick);
            ImGui::Checkbox("Open Manager Tab", &Config.bisOpenManager);
            ImGui::Checkbox("Show Teleporter Tab", &Config.bisTeleporter);

            if (ImGui::Checkbox("DEBUG ESP", &Config.isDebugESP) && !Config.isDebugESP)
                Config.mDebugESPDistance = 10.f;
            if (Config.isDebugESP)
            {
                ImGui::SameLine();
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                ImGui::SliderFloat("##DISTANCE", &Config.mDebugESPDistance, 1.0f, 100.f, "%.0f", ImGuiSliderFlags_AlwaysClamp);
            }

            if (ImGui::Checkbox("CONSOLE", &g_Console->bShowConsole))
                g_Console->SetConsoleVisibility(g_Console->bShowConsole);

            if (ImGui::Button("PRINT ENGINE GLOBALS", ImVec2(ImGui::GetContentRegionAvail().x - 3, 20)))
            {

                g_Console->printdbg("[+] [UNREAL ENGINE GLOBALS]\n"
                    "UWorld:\t\t\t0x%llX\n"
                    "ULocalPlayer:\t\t0x%llX\n"
                    "APalPlayerController:\t0x%llX\n"
                    "APalPlayerCharacter:\t0x%llX\n"
                    "APalPlayerState:\t0x%llX\n"
                    "UCharacterImpMan:\t0x%llX\n"
                    "UPalPlayerInventory:\t0x%llX\n"
                    "APalWeaponBase:\t\t0x%llX\n",
                    Console::Colors::yellow, 
                    Config.gWorld,
                    Config.GetLocalPlayer(),
                    Config.GetPalPlayerController(),
                    Config.GetPalPlayerCharacter(),
                    Config.GetPalPlayerState(),
                    Config.GetCharacterImpManager(),
                    Config.GetInventoryComponent(),
                    Config.GetPlayerEquippedWeapon()
                );
                
            }

            //  Get Function Pointer Offset
            ImGui::InputTextWithHint("##INPUT", "INPUT GOBJECT fn NAME", inputBuffer_getFnAddr, 100);
            ImGui::SameLine();
            if (ImGui::Button("GET fn", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
            {
                std::string input = inputBuffer_getFnAddr;
                SDK::UFunction* object = SDK::UObject::FindObject<SDK::UFunction>(input);
                if (object)
                {
                    static __int64 dwHandle = reinterpret_cast<__int64>(GetModuleHandle(0));
                    void* fnAddr = object->ExecFunction;
                    unsigned __int64 fnOffset = (reinterpret_cast<__int64>(fnAddr) - dwHandle);
                    g_Console->printdbg("[+] Found [%s] -> 0x%llX\n", Console::Colors::yellow, input.c_str(), fnOffset);
                }
                else
                    g_Console->printdbg("[!] OBJECT [%s] NOT FOUND!\n", Console::Colors::red, input.c_str());
                memset(inputBuffer_getFnAddr, 0, 100);
            }


            //  Get Class pointer by name
            ImGui::InputTextWithHint("##INPUT_GETCLASS", "INPUT OBJECT CLASS NAME", inputBuffer_getClass, 100);
            ImGui::SameLine();
            if (ImGui::Button("GET CLASS", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
            {
                std::string input = inputBuffer_getClass;
                SDK::UClass* czClass = SDK::UObject::FindObject<SDK::UClass>(input.c_str());
                if (czClass)
                {
                    static __int64 dwHandle = reinterpret_cast<__int64>(GetModuleHandle(0));
                    g_Console->printdbg("[+] Found [%s] -> 0x%llX\n", Console::Colors::yellow, input.c_str(), czClass->Class);
                }
                else
                    g_Console->printdbg("[!] CLASS [%s] NOT FOUND!\n", Console::Colors::red, input.c_str());

            }

        }
	}

	void Menu::Draw()
	{

		if (g_GameVariables->m_ShowMenu)
			MainMenu();

		if (g_GameVariables->m_ShowHud)
			HUD(&g_GameVariables->m_ShowHud);

		if (g_GameVariables->m_ShowDemo)
			ImGui::ShowDemoWindow();
	}

	
    void Menu::MainMenu()
	{
        if (!g_GameVariables->m_ShowDemo)
            Styles::InitStyle();

        if (g_Menu->dbg_RAINBOW_THEME) {
            ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(g_Menu->dbg_RAINBOW));
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(g_Menu->dbg_RAINBOW));
            ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(g_Menu->dbg_RAINBOW));
        }
        if (!ImGui::Begin("PalWorld", &g_GameVariables->m_ShowMenu, 96))
        {
            ImGui::End();
            return;
        }
        if (g_Menu->dbg_RAINBOW_THEME) {
            ImGui::PopStyleColor();
            ImGui::PopStyleColor();
            ImGui::PopStyleColor();
        }
        
        ImGuiContext* pImGui = GImGui;

        //  Display Menu Content
        //Tabs::TABMain();

        ImGui::Text("Testing some case...");

        if (ImGui::BeginTabBar("##tabs", ImGuiTabBarFlags_None))
        {
            if (ImGui::BeginTabItem("Player"))
            {
                Tabs::TABPlayer();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("EXPLOIT"))
            {
                Tabs::TABExploit();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("Database"))
            {
                Tabs::TABDatabase();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("Item Spawner"))
            {
                Tabs::TABItemSpawner();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("Entity Manager"))
            {
                Tabs::TABEntityManager();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("CONFIG"))
            {
                Tabs::TABConfig();
                ImGui::EndTabItem();
            }
            if (Config.IsQuick && ImGui::BeginTabItem("Quick"))
            {
                Tabs::TABQuick();
                ImGui::EndTabItem();
            }
            if (Config.bisOpenManager && ImGui::BeginTabItem("Entity Manager"))
            {
                Tabs::TABTeleportManager();
                ImGui::EndTabItem();
            }
            if (Config.bisTeleporter && ImGui::BeginTabItem("Teleport Manager"))
            {
                Tabs::TABTeleportManager();
                ImGui::EndTabItem();
            }
#if DEBUG
            if (ImGui::BeginTabItem("DEBUG"))
            {
                Tabs::TABDebug();
                ImGui::EndTabItem();
            }
#endif
            ImGui::EndTabBar();
        }
        ImGui::End();
	}

	void Menu::HUD(bool* p_open)
	{
        
        ImGui::SetNextWindowPos(g_D3D11Window->pViewport->WorkPos);
        ImGui::SetNextWindowSize(g_D3D11Window->pViewport->WorkSize);
        ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, NULL);
        ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.00f, 0.00f, 0.00f, 0.00f));
        if (!ImGui::Begin("##HUDWINDOW", (bool*)true, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoInputs))
        {
            ImGui::PopStyleColor();
            ImGui::PopStyleVar();
            ImGui::End();
            return;
        }
        ImGui::PopStyleColor();
        ImGui::PopStyleVar();

        auto ImDraw = ImGui::GetWindowDrawList();
        auto draw_size = g_D3D11Window->pViewport->WorkSize;
        auto center = ImVec2({ draw_size.x * .5f, draw_size.y * .5f });
        auto top_center = ImVec2({ draw_size.x * .5f, draw_size.y * 0.0f });
        
        //  Watermark
        ImDraw->AddText(top_center, g_Menu->dbg_RAINBOW, "PalWorld-NetCrack");

        if (Config.IsESP)
            ESP();

        if (Config.isDebugESP)
            ESP_DEBUG(Config.mDebugESPDistance);

        if (Config.db_waypoints.size() > 0)
            RenderWaypointsToScreen();

        ImGui::End();
	}

    void Menu::Loops()
    {
        //  Respawn
        if ((GetAsyncKeyState(VK_F5) & 1))
            RespawnLocalPlayer(Config.IsSafe);

        //  Revive Player
        if ((GetAsyncKeyState(VK_F6) & 1))
            ReviveLocalPlayer();

        //  
        if (Config.IsSpeedHack)
            SpeedHack(Config.SpeedModiflers);   //  @CRASH palcrack!DX11_Base::Menu::Loops() [A:\Github\collab\PalWorld-NetCrack\src\Menu.cpp:787] : UPON LOADING GAME WORLD
        
        //  
        if (Config.IsAttackModiler)
            SetPlayerAttackParam(Config.DamageUp);

        //  
        if (Config.IsDefuseModiler)
            SetPlayerDefenseParam(Config.DefuseUp);

        //  
        if (Config.IsInfStamina)
            ResetStamina();

        if (Config.IsTeleportAllToXhair)
            TeleportAllPalsToCrosshair(Config.mDebugEntCapDistance);

        if (Config.IsDeathAura)
            DeathAura(Config.mDeathAuraAmount, Config.mDeathAuraDistance, true);

        //  
        //  SetDemiGodMode(Config.IsMuteki);

        if (Config.IsGodMode)
            SetPlayerHealth(INT_MAX);
    }
}