#include "../pch.h"
#include "../include/Hooking.hpp"
namespace DX11_Base {
	Hooking::Hooking()
	{
		MH_Initialize();
#if CONSOLE_OUTPUT
		g_Console->printdbg("Hooking::Initialized\n", Console::Colors::pink);
#endif
		return;
	}

	Hooking::~Hooking()
	{
		MH_RemoveHook(MH_ALL_HOOKS);
		MH_Uninitialize();
	}

	void Hooking::Init()
	{
		MH_EnableHook(MH_ALL_HOOKS);
#if CONSOLE_OUTPUT
		g_Console->printdbg("Hooking::Hook Initialized\n", Console::Colors::green);
#endif
		return;
	}

	void Hooking::Shutdown()
	{
		g_D3D11Window->UnhookD3D();
#if CONSOLE_OUTPUT
		g_Console->DestroyConsole();
#endif
		g_Running = FALSE;
		return;
	}
}
