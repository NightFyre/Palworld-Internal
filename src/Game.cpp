#include "../pch.h"
#include "../include/Game.hpp"
namespace DX11_Base {
	GameData::GameData()
	{
#if CONSOLE_OUTPUT
		g_Console->printdbg("GameData::Initialized\n", Console::Colors::pink);
#endif
		return;
	}
	
	bool GameData::GamePadGetKeyState(WORD combinationButtons)
	{
		XINPUT_STATE state;
		ZeroMemory(&state, sizeof(XINPUT_STATE));
		DWORD result = XInputGetState(0, &state);
		if (result == ERROR_SUCCESS)
		{
			if ((state.Gamepad.wButtons & combinationButtons) == combinationButtons)
				return true;
		}
		return false;
	}



	GameVariables::GameVariables()
	{
#if CONSOLE_OUTPUT
		g_Console->printdbg("GameVariables::Initialized\n", Console::Colors::pink);
#endif
		return;
	}

	//	Get Process Window Information
	void GameVariables::Init()
	{
		g_GamePid = GetCurrentProcessId();
		g_GameHandle = GetCurrentProcess();
		g_GameWindow = GetForegroundWindow();

		RECT tempRECT;
		GetWindowRect(g_GameWindow, &tempRECT);
		g_GameWidth = tempRECT.right - tempRECT.left;
		g_GameHeight = tempRECT.bottom - tempRECT.top;

		char tempTitle[MAX_PATH];
		GetWindowTextA(g_GameWindow, tempTitle, sizeof(tempTitle));
		g_GameTitle = tempTitle;

		char tempClassName[MAX_PATH];
		GetClassNameA(g_GameWindow, tempClassName, sizeof(tempClassName));
		g_ClassName = tempClassName;

		char tempPath[MAX_PATH];
		GetModuleFileNameExA(g_GameHandle, NULL, tempPath, sizeof(tempPath));
		g_GamePath = tempPath;
#if CONSOLE_OUTPUT
		g_Console->printdbg("GameData::Init - Process Window Info Established\n", Console::Colors::pink);
#endif
	}

}