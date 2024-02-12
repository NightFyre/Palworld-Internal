#pragma once
#include "config.h"
#include "include/helper.h"
#include "include/Console.hpp"
#include "include/Game.hpp"
#include "include/D3D11Window.hpp"
#include "include/Hooking.hpp"
using namespace DX11_Base;

//  please dont remove , this is useful for a variety of things
void ClientBGThread()
{
    while (g_Running) 
    {
        //  test cache runners

        std::this_thread::sleep_for(1ms);
        std::this_thread::yield();
    }
}

static int LastTick = 0;
DWORD WINAPI MainThread_Initialize(LPVOID dwModule)
{
    //  WAIT FOR USER INPUT
    while (!g_GameData->GamePadGetKeyState(XINPUT_GAMEPAD_RIGHT_THUMB | XINPUT_GAMEPAD_LEFT_THUMB) && GetAsyncKeyState(VK_INSERT) == 0)
        Sleep(60);

    //  CREATE CLASS INSTANCES
#if CONSOLE_OUTPUT
    g_Console = std::make_unique<Console>("DEBUG CONSOLE", true);       //  
#else                                                                   
    g_Console = std::make_unique<Console>("DEBUG CONSOLE", false);      //  
#endif
    g_GameData      = std::make_unique<GameData>();
    g_D3D11Window   = std::make_unique<D3D11Window>();
    g_Hooking       = std::make_unique<Hooking>();
    g_Menu          = std::make_unique<UnMenu>();

    if (Config.Init())
    {
        ///  ESTABLISH GAME DATA   
        g_GameData->Init();                                         //
        g_D3D11Window->HookD3D();                                   //
        g_Hooking->Init();                                          //

#if CONSOLE_OUTPUT
        g_Console->printdbg("Main::Initialized\nUWorld:\t0x%llX\n", Console::Colors::green, Config.gWorld);
#endif

        g_Running = true;
        std::thread WCMUpdate(ClientBGThread);
        while (g_Running)
        {
            if ((g_GameData->GamePadGetKeyState(XINPUT_GAMEPAD_RIGHT_THUMB | XINPUT_GAMEPAD_LEFT_THUMB) || GetAsyncKeyState(VK_INSERT) & 1) && ((GetTickCount64() - LastTick) > 500))
            {
                g_Menu->b_ShowMenu = !g_Menu->b_ShowMenu;
                g_Menu->b_ShowHud = !g_Menu->b_ShowMenu;
                LastTick = GetTickCount64();
            }

            if (g_KillSwitch)
            {
                g_KillSwitch = false;
                g_Hooking->Shutdown();
            }

            std::this_thread::sleep_for(1ms);
            std::this_thread::yield();
        }
        WCMUpdate.join(); // Exit Loops Thread
    }
    FreeLibraryAndExitThread(g_hModule, EXIT_SUCCESS);
    return EXIT_SUCCESS;
}