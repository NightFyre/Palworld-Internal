#include "../pch.h"
#include "include/config.h"
#include "include/Menu.hpp"
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
        //  Hides the Dear ImGui Navigation Interface ( Windowing Mode ) 
        //  Very annoying when drawing on the canvas and gamepad input is enabled.
        // @TODO: Disable ImGui Navigation
        void SetNavigationMenuViewState(bool bShow)
        {
            ImVec4* colors = ImGui::GetStyle().Colors;
            switch (bShow)
            {
            case true:
            {
                //  Show Navigation Panel | Default ImGui Dark Style
                //  Perhaps just call InitStyle() ?
                colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
                colors[ImGuiCol_WindowBg] = ImVec4(0.06f, 0.06f, 0.06f, 0.94f);
                colors[ImGuiCol_Border] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
                colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
                colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
                colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
            }break;
            case false:
            {
                //  Hide Navigation Panel
                colors[ImGuiCol_Text] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
                colors[ImGuiCol_WindowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
                colors[ImGuiCol_Border] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
                colors[ImGuiCol_NavHighlight] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
                colors[ImGuiCol_NavWindowingHighlight] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
                colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
            }break;
            }
        }

        void InitStyle()
        {
            ImGuiStyle& style = ImGui::GetStyle();
            ImVec4* colors = ImGui::GetStyle().Colors;
            ImGui::StyleColorsDark();

            //	STYLE PROPERTIES
            style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
            style.WindowPadding = ImVec2(10.f, 10.f);
            style.FramePadding = ImVec2(20.f, 10.f);
            style.ItemSpacing = ImVec2(10.f, 10.f);
            style.ItemInnerSpacing = ImVec2(10.f, 10.f);
            style.TouchExtraPadding = ImVec2(10.f, 10.f);
            style.IndentSpacing = 20.f;
            style.ScrollbarSize = 20.f;
            style.GrabMinSize = 20.f;
            style.FrameBorderSize = 5.0f;
            style.TabBorderSize = 5.0f;
            style.TabBarBorderSize = 3.0f;

            style.WindowRounding = 6.0f;
            style.ChildRounding = 1.0f;
            style.FrameRounding = 3.0f;
            style.PopupRounding = 3.0f;
            style.ScrollbarRounding = 1.0f;
            style.GrabRounding = 1.0f;
            style.TabRounding = 0.0f;

            style.SeparatorTextBorderSize = 6.0f;

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
            if (ImGui::BeginChild("PLAYER CHILD WINDOW", ImVec2(ImGui::GetContentRegionAvail().x * .5, 150.f), ImGuiChildFlags_AutoResizeY | ImGuiChildFlags_Border))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;

                if (ImGui::Checkbox("SpeedHack", &Config.IsSpeedHack) && !Config.IsSpeedHack)
                {
                    Config.SpeedModiflers = 1.0f;
                    SpeedHack(Config.SpeedModiflers);
                }
                ImGui::SameLine();
                cursorX = gWindow->DC.CursorPos.x += 10.f;
                if (Config.IsSpeedHack)
                {
                    ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                    ImGui::SliderFloat("##SpeedModifilers", &Config.SpeedModiflers, 1, 10);
                }
                else
                    ImGui::NewLine();
                gWindow->DC.CursorPos.y += 5.f;

                ImGui::Checkbox("AttackHack", &Config.IsAttackModiler);
                if (Config.IsAttackModiler)
                {
                    ImGui::SameLine();
                    gWindow->DC.CursorPos.x = cursorX;
                    ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                    ImGui::SliderInt("##AttackModifilers", &Config.DamageUp, 0, 200000);
                }
                gWindow->DC.CursorPos.y += 5.f;

                ImGui::Checkbox("DefenseHack", &Config.IsDefuseModiler);
                if (Config.IsDefuseModiler)
                {
                    ImGui::SameLine();
                    gWindow->DC.CursorPos.x = cursorX;
                    ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                    ImGui::SliderInt("##defenseModifilers", &Config.DefuseUp, 0, 200000);
                }
                gWindow->DC.CursorPos.y += 5.f;

                if (ImGui::Checkbox("FastCrafting", &Config.IsFastCrafting))
                    SetCraftingSpeed(9999.f, !Config.IsFastCrafting);
                gWindow->DC.CursorPos.y += 5.f;

                if (ImGui::Checkbox("FastWorkerCrafting", &Config.IsFastWorkerCrafting))
                    SetCraftingSpeed(9999.f, !Config.IsFastWorkerCrafting);
                gWindow->DC.CursorPos.y += 5.f;

                ImGui::EndChild();
            }
            ImGui::SameLine();
            if (ImGui::BeginChild("PLAYER CHILD WINDOW 2", ImVec2(ImGui::GetContentRegionAvail().x, 150.f), ImGuiChildFlags_AutoResizeY | ImGuiChildFlags_Border))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;
                ImGui::Checkbox("God Mode", &Config.IsGodMode);
                gWindow->DC.CursorPos.y += 5.f;

                ImGui::Checkbox("Infinite Stamina", &Config.IsInfStamina);
                gWindow->DC.CursorPos.y += 5.f;

                if (ImGui::Checkbox("Infinite Ammo", &Config.IsInfinAmmo))
                    SetInfiniteAmmo(Config.IsInfinAmmo);
                gWindow->DC.CursorPos.y += 5.f;

                ImGui::EndChild();
            }
            ImGui::NewLine();
            ImGui::SeparatorText("PLAYER INFO");
            if (ImGui::BeginChild("PLAYER CHILD WINDOW 3", ImVec2(0.f, 150.f)))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;
                //  NickName
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x * .65);
                ImGui::InputTextWithHint("##NAME_INPUT_BUFFER", "ENTER NEW NICKNAME", inputBuffer_nickname, 16);
                ImGui::SameLine();
                if (ImGui::Button("SET", ImVec2(0, 40.f)))
                {
                    SetPlayerNickname(std::string(inputBuffer_nickname));
                    memset(inputBuffer_nickname, 0, 16);
                }
                ImGui::SameLine();
                if (ImGui::Button("SET RANDOM", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                {
                    //  @TODO: initialize instance at runtime and store as a variable in config
                    static SDK::UKismetStringLibrary* lib = SDK::UKismetStringLibrary::GetDefaultObj();
                    std::string s = rand_str(20);
                    SetPlayerNickname(s);
                }
                gWindow->DC.CursorPos.y += 5.f;

                //  Tech Points
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x * .3);
                ImGui::InputInt("##ADD_TECH_POINTS", &inputTechPoints_buffer);
                ImGui::SameLine();
                if (ImGui::Button("TECH POINTS", ImVec2(0.0f, 40.f)))
                {
                    AddTechPoints(inputTechPoints_buffer);
                    inputTechPoints_buffer = 1;
                }
                ImGui::SameLine();
                if (ImGui::Button("ANCIENT TECH POINTS", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                {
                    AddAncientTechPoints(inputTechPoints_buffer);
                    inputTechPoints_buffer = 1;
                }
                gWindow->DC.CursorPos.y += 5.f;

                //  Experience Points
                //Creadit WoodgamerHD
                ImGui::InputInt("##EXP:", &Config.EXP);
                ImGui::SameLine();
                if (ImGui::Button("GIVE EXPERIENCE", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                    GiveExperiencePoints(Config.EXP);

                //Creadit Mokobake
                //ImGui::Checkbox("MuteKiGodmode", &Config.IsMuteki);
                ImGui::EndChild();
            }
        }

        void TABExploit()
        {
            if (ImGui::BeginChild("EXPLOIT CHILD WINDOW", ImVec2(ImGui::GetContentRegionAvail().x * .5, 150.f), ImGuiChildFlags_AutoResizeY | ImGuiChildFlags_Border))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;

                //creadit 
                //ImGui::Checkbox("PalIsMonster", &Config.IsMonster);
                //  ImGui::InputTextWithHint("##Item Name", "ITEM NAME", Config.ItemName, sizeof(Config.ItemName));
                //  ImGui::SameLine();
                //  ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                //  ImGui::InputInt("##Item Num", &Config.Item);
                //  if (ImGui::Button("Give item", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
                //  {
                //      AddItemToInventoryByName(std::string(Config.ItemName), Config.Item);
                //      g_Console->printdbg("\n\n[+] ItemName: %s [+]\n\n", Console::Colors::green, Config.ItemName);
                //  }
                //  ImGui::Separator();
                //  
                //  ImGui::InputInt("Slot to modify (start 0):", &Config.AddItemSlot);
                //  ImGui::InputInt("Multiple of how much:", &Config.AddItemCount);
                //  
                //  if (ImGui::Button("Give items from slot", ImVec2(ImGui::GetContentRegionAvail().x, 20)))
                //      IncrementInventoryItemCountByIndex(Config.AddItemCount, Config.AddItemSlot);

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


                ImGui::Checkbox("PARTY TAGS", &Config.isPartyTags);
                ImGui::SameLine();
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                ImGui::SliderFloat("##PARTY_DISTANCE", &Config.mPartyTagDistance, 1.0f, 10.0f, "%.0f");
                gWindow->DC.CursorPos.y += 5.f;

                ImGui::Checkbox("BASE WORKER TAGS", &Config.isBaseWorkerTags);
                ImGui::SameLine();
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                ImGui::SliderFloat("##BASE_DISTANCE", &Config.mBaseWorkerTagDistance, 1.0f, 10.0f, "%.0f");
                gWindow->DC.CursorPos.y += 5.f;

                ImGui::Checkbox("PAL TAGS", &Config.isPalTags);
                ImGui::SameLine();
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                ImGui::SliderFloat("##PAL_DISTANCE", &Config.mPALTagDistance, 1.0f, 10.0f, "%.0f");
                gWindow->DC.CursorPos.y += 5.f;

                ImGui::Checkbox("NPC TAGS", &Config.isNPCTags);
                ImGui::SameLine();
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                ImGui::SliderFloat("##NPC_DISTANCE", &Config.mNPCTagDistance, 1.0f, 10.0f, "%.0f");
                gWindow->DC.CursorPos.y += 5.f;

                ImGui::EndChild();
            }
            ImGui::SameLine();
            if (ImGui::BeginChild("EXPLOIT CHILD WINDOW 2", ImVec2(ImGui::GetContentRegionAvail().x, 150.f), ImGuiChildFlags_AutoResizeY | ImGuiChildFlags_Border))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;

                if (ImGui::Checkbox("FULL BRIGHT", &Config.IsFullbright))
                    SetFullbright(Config.IsFullbright);
                gWindow->DC.CursorPos.y += 5.f;

                if (ImGui::Checkbox("FLOAT MODE", &Config.IsToggledFly))
                    ExploitFly(Config.IsToggledFly);
                gWindow->DC.CursorPos.y += 5.f;

                if (ImGui::Checkbox("TELEPORT PALS TO XHAIR", &Config.IsTeleportAllToXhair) && !Config.IsTeleportAllToXhair)
                    Config.mDebugEntCapDistance = 10.f;
                if (Config.IsTeleportAllToXhair)
                {
                    ImGui::SameLine();
                    ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                    ImGui::SliderFloat("##ENT_CAP_DISTANCE", &Config.mDebugEntCapDistance, 1.0f, 100.f, "%.0f", ImGuiSliderFlags_AlwaysClamp);
                }
                gWindow->DC.CursorPos.y += 5.f;

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

                ImGui::EndChild();
            }
            ImGui::NewLine();
            ImGui::SeparatorText("MISC");
            if (ImGui::BeginChild("EXPLOIT CHILD WINDOW 3", ImVec2(0.f, 150.f)))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;

                if (ImGui::Button("Unlock All RELICS", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                    UnlockAllEffigies();
                gWindow->DC.CursorPos.y += 5.f;

                if (ImGui::Button("SET MAX HEALTH", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                    ReviveLocalPlayer();

                ImGui::EndChild();
            }
        }

        void TABItemSpawner()
        {
            int cur_size = 0;
            static int num_to_add = 1;
            static char item_search[100];
            std::initializer_list list = itemlist::accessories;

            if (ImGui::BeginChild("ITEMS CHILD WINDOW", ImVec2(0.0f, 100.0f), ImGuiChildFlags_AutoResizeY | ImGuiChildFlags_Border))
            {
                static int category = 0;
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x * .6f);
                ImGui::Combo("##ITEM_CATEGORY", &category, "Accessories\0Ammo\0Armor\0Blueprints\0Crafting Materials\0Eggs\0Food\0Hats\0Medicine\0Money\0Other\0Pal Spheres\0Seeds\0Tools\0Weapons\0");
                ImGui::SameLine();
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                ImGui::InputInt("##ITEM_AMOUNT", &num_to_add);

                switch (category)
                {
                case 1: list = itemlist::ammo; break;
                case 2: list = itemlist::armor; break;
                case 3: list = itemlist::blueprints; break;
                case 4: list = itemlist::craftingmaterials; break;
                case 5: list = itemlist::eggs; break;
                case 6: list = itemlist::food; break;
                case 7: list = itemlist::hats; break;
                case 8: list = itemlist::medicine; break;
                case 9: list = itemlist::money; break;
                case 10: list = itemlist::other; break;
                case 11: list = itemlist::palspheres; break;
                case 12: list = itemlist::seeds; break;
                case 13: list = itemlist::tools; break;
                case 14: list = itemlist::weapons; break;
                default: list = itemlist::accessories; break;
                }

                ImGui::InputText("Search", item_search, IM_ARRAYSIZE(item_search));

                ImGui::EndChild();
            }

            if (ImGui::BeginChild("ITEMS CHILD WINDOW 2", ImVec2(0.f, 200.0f)))
            {
                for (const auto& item : list)
                {
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
                    if (ImGui::Button(right_text.c_str(), ImVec2(0, 40.f)))
                        AddItemToInventoryByName(left_text, num_to_add);
                    ImGui::PopID();
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

                SDK::UWorld* pWorld = Config.gWorld;

                if (pWorld && pWorld->PersistentLevel)
                {
                    SDK::ULevel* pLevel = pWorld->PersistentLevel;
                    if (!g_Menu->bSelectedTarget)
                    {
                        ImGui::Checkbox("PLAYERS", &Config.filterPlayers);
                        ImGui::Checkbox("SKIP LOCAL PLAYER", &Config.bSkipLocalPlayer);

                        ImGui::SeparatorText("ENTITIES");
                        if (ImGui::BeginChild("ENTS CHILD WINDOW"))
                        {
                            SDK::TArray<SDK::AActor*> T = pLevel->Actors;  //  potential crash : nullptr
                            DWORD TCount = T.Count();
                            for (int i = 0; i < TCount; i++)
                            {
                                SDK::AActor* obj = T[i];
                                if (!obj || !obj->IsA(SDK::APalCharacter::StaticClass()))
                                    continue;

                                SDK::APalPlayerCharacter* pPlayerChar = nullptr;
                                SDK::APalPlayerCharacter* pLocalPlayerChar = nullptr;
                                SDK::APalCharacter* pChar = reinterpret_cast<SDK::APalCharacter*>(obj);

                                bool bIsPlayer = obj->IsA(SDK::APalPlayerCharacter::StaticClass());
                                if (bIsPlayer)
                                {
                                    pPlayerChar = reinterpret_cast<SDK::APalPlayerCharacter*>(pChar);
                                    pLocalPlayerChar = Config.GetPalPlayerCharacter();

                                    //  skip local player
                                    if (Config.bSkipLocalPlayer && (pLocalPlayerChar == pPlayerChar))
                                        continue;
                                }

                                //  skip non players
                                if (Config.filterPlayers && !bIsPlayer)
                                    continue;

                                std::string sname;
                                GetActorNickName(pChar, &sname);

                                ImGui::PushID(i);
                                ImGui::Text(sname.c_str());
                                ImGui::SameLine();
                                if (ImGui::Button("KILL"))
                                    SendDamageToActor(pChar, 99999999999);
                                ImGui::SameLine();
                                if (ImGui::Button("TELEPORT"))
                                {
                                    SDK::FVector vector = pChar->K2_GetActorLocation();
                                    AnyWhereTP(vector, Config.IsSafe);
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
                                if (bIsPlayer)
                                {
                                    ImGui::SameLine();
                                    if (ImGui::Button("MASK NAME")) // updates local player nickname ?? also potential crash due to nullptr
                                    {
                                        if (Config.GetPalPlayerCharacter() != NULL)
                                        {
                                            auto controller = Config.GetPalPlayerCharacter()->GetPalPlayerController();
                                            if (controller != NULL)
                                            {
                                                auto player = (SDK::APalPlayerCharacter*)pChar;
                                                SDK::FString fakename;
                                                player->CharacterParameterComponent->GetNickname(&fakename);
                                                Config.GetPalPlayerCharacter()->GetPalPlayerController()->Transmitter->NetworkIndividualComponent->UpdateCharacterNickName_ToServer(Config.GetPalPlayerCharacter()->CharacterParameterComponent->IndividualHandle->ID, fakename);
                                            }
                                        }
                                    }
                                }
                                ImGui::SameLine();
                                if (ImGui::Button("SELECT TARGET"))
                                {
                                    g_Menu->pTargetEntity = UnMenu::STargetEntity(pChar);
                                    if (g_Menu->pTargetEntity.bIsValid)
                                        g_Menu->bSelectedTarget = true;
                                    else
                                        g_Menu->pTargetEntity.Clear();
                                }
                                ImGui::PopID();
                            }
                            ImGui::EndChild();
                        }
                    }
                    else
                    {
                         //  Name
                         SDK::APalPlayerCharacter* pLocalPlayerChar = Config.GetPalPlayerCharacter();
                         UnMenu::STargetEntity pTarget = g_Menu->pTargetEntity;
                         if (pLocalPlayerChar && pTarget.bIsValid)
                         {
                             SDK::APalCharacter* entChar = pTarget.pEntCharacter;
                             std::string sname;
                             GetActorNickName(entChar, &sname);
                             UnGUI::TextCenteredf("%s", sname.c_str());

                             //  Position
                             SDK::FVector location = pTarget.entLocation;
                             ImGui::Text("LOCATION: { %f, %f, %f }", location.X, location.Y, location.Z);

                             //  Rotation
                             SDK::FRotator rotation = pTarget.entRotation;
                             ImGui::Text("ROTATION: { %f, %f, %f }", rotation.Pitch, rotation.Yaw, rotation.Roll);

                             //  Bounds
                             SDK::FVector bounds = pTarget.entBounds;
                             ImGui::Text("BOUNDS: { %f, %f, %f }", bounds.X, bounds.Y, bounds.Z);

                             //  Forward Direction
                             SDK::FVector fwdDir = pTarget.entFwdDir;
                             ImGui::Text("FWD: { %f, %f, %f }", fwdDir.X, fwdDir.Y, fwdDir.Z);

                             //  Distance
                             float dist = GetDistanceToActor(pLocalPlayerChar, pTarget.pEntCharacter);
                             ImGui::Text("DIST: %f", dist);

                             //  Class Name
                             std::string czClassName = pTarget.pEntCharacter->GetFullName();
                             ImGui::Text("CLASS NAME: %s", czClassName.c_str());

                             // 
                             if (ImGui::Button("CLEAR TARGET", ImVec2(ImGui::GetContentRegionAvail().x, 40.0f)))
                             {
                                 g_Menu->pTargetEntity.Clear();
                                 g_Menu->bSelectedTarget = false;
                             }
                         }
                         else
                         {
                             g_Menu->pTargetEntity.Clear();
                             g_Menu->bSelectedTarget = false;
                         }
                    }
                }

                ImGui::EndChild();
            }

        }

        void TABTeleportManager()
        {
            if (ImGui::BeginChild("CHILD WINDOW", ImVec2(0.0f, 200.0f), ImGuiChildFlags_AutoResizeY | ImGuiChildFlags_Border))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;

                ImGui::Checkbox("SafeTeleport", &Config.IsSafe);
                ImGui::SameLine();
                if (ImGui::Button("Home", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                    RespawnLocalPlayer(Config.IsSafe);

                ImGui::Text("POS");
                ImGui::SameLine();
                ImGui::InputFloat3("##INPUT_FLOAT_POS", Config.Pos);
                ImGui::SameLine();
                if (ImGui::Button("TELEPORT", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                {
                    SDK::FVector vector = { Config.Pos[0],Config.Pos[1],Config.Pos[2] };
                    AnyWhereTP(vector, Config.IsSafe);
                }


                static int selected_boss = 0;
                static std::vector<const char*> boss_locations;
                if (boss_locations.size() <= 0)
                {
                    for (const auto& pair : database::locationMap)
                        boss_locations.push_back(pair.first.c_str());
                }

                ImGui::Combo("##BOSS LOCATIONS", &selected_boss, boss_locations.data(), static_cast<int>(boss_locations.size()));
                ImGui::SameLine();
                if (ImGui::Button("TELEPORT TO BOSS", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                {
                    auto pair = database::locationMap.find(boss_locations[selected_boss]);
                    SDK::FVector location = SDK::FVector(pair->second[0], pair->second[1], pair->second[2]);
                    AnyWhereTP(location, Config.IsSafe);
                }

                //  if (ImGui::CollapsingHeader("BOSS LOCATIONS"))
                //  {
                //      for (const auto& pair : database::locationMap)
                //      {
                //          const std::string& locationName = pair.first;
                //          if (ImGui::Button(locationName.c_str(), ImVec2(0, 40.f)))
                //          {
                //              SDK::FVector location = SDK::FVector(pair.second[0], pair.second[1], pair.second[2]);
                //              AnyWhereTP(location, Config.IsSafe);
                //          }
                //      }
                //  }
                ImGui::EndChild();
            }

            if (ImGui::BeginChild("WAYPOINT MANAGER", ImVec2(0.0f, 100.0f)))
            {
                ImGuiWindow* gWindow = ImGui::GetCurrentWindow();
                float cursorX = 0.f;

                ImGui::InputTextWithHint("##INPUT_SETWAYPOINT", "CUSTOM WAYPOINT NAME", inputBuffer_setWaypoint, 32);
                ImGui::SameLine();
                if (ImGui::Button("SET", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                {
                    std::string wpName = inputBuffer_setWaypoint;
                    if (wpName.size() > 0)
                    {
                        AddWaypointLocation(wpName);
                        memset(inputBuffer_setWaypoint, 0, 32);
                    }
                }

                ImGui::SeparatorText("CUSTOM WAYPOINTS");
                if (Config.db_waypoints.size() > 0)
                {
                    DWORD index = -1;
                    for (auto waypoint : Config.db_waypoints)
                    {
                        index++;
                        ImGui::PushID(index);
                        //  ImGui::Checkbox("SHOW", &waypoint.bIsShown);
                        //  ImGui::SameLine();
                        if (ImGui::Button(waypoint.waypointName.c_str(), ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                            AnyWhereTP(waypoint.waypointLocation, false);
                        ImGui::PopID();
                    }
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

                if (ImGui::Button("Basic Items stack", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                    SpawnMultiple_ItemsToInventory(config::QuickItemSet::basic_items_stackable);

                if (ImGui::Button("Basic Items single", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                    SpawnMultiple_ItemsToInventory(config::QuickItemSet::basic_items_single);

                if (ImGui::Button("Unlock Pal skills", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                    SpawnMultiple_ItemsToInventory(config::QuickItemSet::pal_unlock_skills);

                if (ImGui::Button("Spheres", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                    SpawnMultiple_ItemsToInventory(config::QuickItemSet::spheres);

                if (ImGui::Button("Tools", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
                    SpawnMultiple_ItemsToInventory(config::QuickItemSet::tools);

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

            ImGui::Checkbox("SHOW IMGUI DEMO", &g_Menu->b_ShowDemoWindow);
            ImGui::Checkbox("SHOW STYLE EDITOR", &g_Menu->b_ShowStyleEditor);
            //  ImGui::Checkbox("Quick Settings Tab", &Config.IsQuick);
            //  ImGui::Checkbox("Entity Manager Tab", &Config.bisOpenManager);
            //  ImGui::Checkbox("Teleport Manager Tab", &Config.bisTeleporter);

            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();

            if (ImGui::Button("UNHOOK DLL", ImVec2(ImGui::GetContentRegionAvail().x, 40.f))) {
#if CONSOLE_OUTPUT
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

        void TABDebug()
        {

            if (ImGui::Checkbox("DEBUG ESP", &Config.isDebugESP) && !Config.isDebugESP)
                Config.mDebugESPDistance = 10.f;
            if (Config.isDebugESP)
            {
                ImGui::SameLine();
                ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
                ImGui::SliderFloat("##DISTANCE", &Config.mDebugESPDistance, 1.0f, 100.f, "%.0f", ImGuiSliderFlags_AlwaysClamp);
            }

#if CONSOLE_OUTPUT
            if (ImGui::Checkbox("CONSOLE", &g_Console->bShowConsole))
                g_Console->SetConsoleVisibility(g_Console->bShowConsole);

            if (ImGui::Button("PRINT ENGINE GLOBALS", ImVec2(ImGui::GetContentRegionAvail().x, 40.f)))
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
            if (ImGui::Button("GET fn", ImVec2(ImGui::GetContentRegionAvail().x, 40.0f)))
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
            if (ImGui::Button("GET CLASS", ImVec2(ImGui::GetContentRegionAvail().x, 40.0f)))
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
#endif

        }
    }

    void Menu::Draw()
    {

        if (b_ShowMenu)
            MainMenu();

        if (b_ShowHud && !b_ShowMenu)
        {
            Styles::SetNavigationMenuViewState(false);
            HUD(&b_ShowHud);
        }

        if (b_ShowDemoWindow && b_ShowMenu)
            ImGui::ShowDemoWindow();

        if (b_ShowStyleEditor && b_ShowMenu)
            ImGui::ShowStyleEditor();
    }

    void Menu::MainMenu()
    {
        if (!b_ShowDemoWindow && !b_ShowStyleEditor)
            Styles::InitStyle();

        if (g_Menu->dbg_RAINBOW_THEME) {
            ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(g_Menu->dbg_RAINBOW));
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(g_Menu->dbg_RAINBOW));
            ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(g_Menu->dbg_RAINBOW));
        }
        if (!ImGui::Begin("PalWorld Internal Base", &b_ShowMenu, 96))
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
        if (ImGui::BeginTabBar("##tabs", ImGuiTabBarFlags_None))
        {
            if (ImGui::BeginTabItem("PLAYER"))
            {
                Tabs::TABPlayer();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("EXPLOITS"))
            {
                Tabs::TABExploit();
                ImGui::EndTabItem();
            }
#if _DEBUG
            if (ImGui::BeginTabItem("Database"))
            {
                Tabs::TABDatabase();
                ImGui::EndTabItem();
            }
#endif
            if (ImGui::BeginTabItem("ITEMS"))
            {
                Tabs::TABItemSpawner();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("ENTITIES"))
            {
                Tabs::TABEntityManager();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("WAYPOINTS"))
            {
                Tabs::TABTeleportManager();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("QUICK"))
            {
                Tabs::TABQuick();
                ImGui::EndTabItem();
            }
            //  if (Config.bisOpenManager && ImGui::BeginTabItem("Entity Manager"))
            //  {
            //      Tabs::TABTeleportManager();
            //      ImGui::EndTabItem();
            //  }
            //  if (Config.bisTeleporter && ImGui::BeginTabItem("TELEPORT MAN"))
            //  {
            //      Tabs::TABTeleportManager();
            //      ImGui::EndTabItem();
            //  }
            //  if (Config.IsQuick && ImGui::BeginTabItem("QUICK"))
            //  {
            //      Tabs::TABQuick();
            //      ImGui::EndTabItem();
            //  }
            if (ImGui::BeginTabItem("CONFIG"))
            {
                Tabs::TABConfig();
                ImGui::EndTabItem();
            }
#if _DEBUG
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
            ImGui::PopStyleVar();
            ImGui::PopStyleColor();
            ImGui::End();
            return;
        }
        ImGui::PopStyleVar();
        ImGui::PopStyleColor();

        auto ImDraw = ImGui::GetWindowDrawList();
        auto draw_size = g_D3D11Window->pViewport->WorkSize;
        auto center = ImVec2({ draw_size.x * .5f, draw_size.y * .5f });
        auto top_center = ImVec2({ draw_size.x * .5f, draw_size.y * 0.0f });

        //  Render a watermark for the module
        UnGUI::DrawTextCentered(top_center, g_Menu->dbg_RAINBOW, "PalWorld-NetCrack", 16.0f);

        if (Config.bIsValidInstance)
        {
            //  Display nearby NPC nametags on the canvas
            if (Config.isNPCTags)
                RenderNearbyNPCTags(ImColor(1.0f, 0.0f, 0.0f, 1.0f), Config.mNPCTagDistance, 12.f, Config.isNPCTags2Dbox);

            //  Display nearby pal nametags on the canvas
            if (Config.isPalTags)
                RenderNearbyPalTags(ImColor(0.0f, 1.0f, 0.0f, 1.0f), Config.mPALTagDistance, 12.f, Config.isPalTags2DBox);

            if (Config.isPartyTags)
                RenderPartyMemberTags(ImColor(0.0f, 1.0f, 1.0f, 1.0f), Config.mPartyTagDistance, 12.f);

            if (Config.isBaseWorkerTags)
                RenderBaseMemberTags(ImColor(1.0f, 1.0f, 0.0f, 1.0f), Config.mBaseWorkerTagDistance, 12.f);

            if (g_Menu->bSelectedTarget && g_Menu->pTargetEntity.bIsValid)
                UnGUI::DrawActor(g_Menu->pTargetEntity.renderCTX);

            //  Display custom player waypoints on the canvas
            if (Config.db_waypoints.size() > 0)
                RenderWaypointsToScreen(12.f);

#if _DEBUG
            if (Config.IsESP)
                ESP();

            if (Config.isDebugESP)
                ESP_DEBUG(Config.mDebugESPDistance);
#endif
        }


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

        //  Update Target Entity Information
        if (g_Menu->bSelectedTarget && g_Menu->pTargetEntity.bIsValid)
        {
            g_Menu->pTargetEntity.Update();
        
            //  Control Target Transforms
        }

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

        if (Config.IsInfinAmmo)
            SetInfiniteAmmo(Config.IsInfinAmmo);
    }

    void GUI::TextCentered(const char* pText)
    {
        float textWidth = ImGui::CalcTextSize(pText).x;
        float windowWidth = ImGui::GetWindowSize().x;
        ImGui::SetCursorPosX((windowWidth - textWidth) * 0.5f);
        ImGui::Text("%s", pText);
    }

    //  @ATTN: max buffer is 256chars
    void GUI::TextCenteredf(const char* pText, ...)
    {
        va_list args;
        va_start(args, pText);
        char buffer[256];
        vsnprintf(buffer, sizeof(buffer), pText, args);
        va_end(args);

        TextCentered(buffer);
    }

    void GUI::DrawText_(ImVec2 pos, ImColor color, const char* pText, float fontSize)
    {
        ImGui::GetWindowDrawList()->AddText(ImGui::GetFont(), fontSize, pos, color, pText, pText + strlen(pText), 800, 0);
    }

    //  @ATTN: max buffer is 256chars
    void GUI::DrawTextf(ImVec2 pos, ImColor color, const char* pText, float fontSize, ...)
    {
        va_list args;
        va_start(args, fontSize);
        char buffer[256];
        vsnprintf(buffer, sizeof(buffer), pText, args);
        va_end(args);

        DrawText_(pos, color, buffer, fontSize);
    }

    void GUI::DrawTextCentered(ImVec2 pos, ImColor color, const char* pText, float fontSize)
    {
        float textSize = ImGui::CalcTextSize(pText).x;
        ImVec2 textPosition = ImVec2(pos.x - (textSize * 0.5f), pos.y);
        DrawText_(textPosition, color, pText, fontSize);
    }

    //  @ATTN: max buffer is 256chars
    void GUI::DrawTextCenteredf(ImVec2 pos, ImColor color, const char* pText, float fontSize, ...)
    {
        va_list args;
        va_start(args, fontSize);
        char buffer[256];
        vsnprintf(buffer, sizeof(buffer), pText, args);
        va_end(args);

        DrawTextCentered(pos, color, pText, fontSize);
    }

    bool UnGUI::ProjectWorldLocationToScreen(SDK::APlayerController* pPlayerController, SDK::FVector worldLocation, SDK::FVector2D* screen2D)
    {
        return pPlayerController->ProjectWorldLocationToScreen(worldLocation, screen2D, true);
    }

    bool UnGUI::WorldToScreen(SDK::FVector location, SDK::FVector2D* screen2D)
    {
        SDK::APalPlayerController* pController = Config.GetPalPlayerController();
        if (!pController)
            return false;

        return ProjectWorldLocationToScreen(pController, location, screen2D);
    }

    void UnGUI::DrawActorNickName(SDK::APalCharacter* pActor, ImColor color, float fontSize)
    {
        if (!pActor)
            return;

        STransforms actorTrans = STransforms(pActor);
        if (!actorTrans.bOnScreen)
            return;

        std::string actorName;
        SDK::FVector2D screenName;
        if (GetActorNickName(pActor, &actorName))
            DrawTextCentered(ImVec2(actorTrans.screenOrigin.X, actorTrans.screenOrigin.Y), color, actorName.c_str(), fontSize);
    }

    void UnGUI::DrawActor2DBoundingBox(SDK::APalCharacter* pActor, ImColor color)
    {
        if (!pActor)
            return;

        STransforms actorTrans = STransforms(pActor);
        if (!actorTrans.bOnScreen)
            return;

        ImGui::GetWindowDrawList()->AddRect(ImVec2(actorTrans.screenMin.X, actorTrans.screenMin.Y), ImVec2(actorTrans.screenMax.X, actorTrans.screenMax.Y), color);
    }

    void UnGUI::DrawActor(SRenderOptions ctx)
    {
        if (!ctx.bRenderReady)
            return;

        std::string nameTag;
        SDK::APalCharacter* pCharacter = ctx.GetPalCharacter();

        if (ctx.bNameTag && pCharacter && GetActorNickName(pCharacter, &nameTag))
            DrawTextCentered(ctx.GetOriginPoint(), ctx.mColor, nameTag.c_str(), ctx.mFontSize);

        if (ctx.b2DBox)
            ImGui::GetWindowDrawList()->AddRect(ctx.GetMinPoint(), ctx.GetMaxPoint(), ctx.mColor);
    }
}