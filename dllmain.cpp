#pragma once
#include "pch.h"
#include "include/initialize.hpp"

extern DWORD WINAPI MainThread_Initialize(LPVOID dwModule);
BOOL APIENTRY DllMain(HMODULE hModule, DWORD  dwCallReason, LPVOID lpReserved)
{
    g_hModule = hModule;

    switch (dwCallReason) 
    {
        case (DLL_PROCESS_ATTACH): 
        {
            DisableThreadLibraryCalls(hModule);
            CloseHandle(CreateThread(0, 0, MainThread_Initialize, g_hModule, 0, 0));
            break;
        }
        case (DLL_PROCESS_DETACH): 
        {
            g_KillSwitch = true;
            break;
        }
    }
    return true;
}