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

            HANDLE hThread = CreateThread(nullptr, 0, MainThread_Initialize, hModule, 0, nullptr);
            if (hThread)
                CloseHandle(hThread);
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