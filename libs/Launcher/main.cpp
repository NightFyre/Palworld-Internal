#include "pch.h"

static const char* PROCESS_NAME = (isXbox) ? "Palworld-WinGDK-Shipping.exe" : "Palworld-Win64-Shipping.exe";	//	process name
static const char* DLL_NAME = (isDebug) ? "palcrackd.dll" : "palcrack.dll";										//	dll name
static const auto& WAIT_TIME = 500 * 10;																		//	wait time in ms
static const std::filesystem::path& path = std::filesystem::current_path() / DLL_NAME;							//	path to dll to inject

int main()
{
	///	GET CONSOLE WINDOW & FIND PROCESS
	procInfo_t proc;										//	process info
	modInfo_t modInfo;										//	module info
	HWND hwnd = GetConsoleWindow();							//	get console window handle
	printf("[+][Palcrack::exMemory] searching for process: %s\n", PROCESS_NAME);			//	print process name
	while (!exMemory::FindProcessEx(PROCESS_NAME, &proc, true, PROCESS_ALL_ACCESS))			//	find process							
		Sleep(WAIT_TIME * .01);																//	wait a bit , but not too long as we want to inject as soon as possible ( ~50 cycles ) @ todo: make this a bit more dynamic
	printf("[+][Palcrack::exMemory][%d] found and attached to process: %s, preparing to inject.\n", proc.dwPID, proc.mProcName.c_str());	//	print process info

	///	INJECT DLL
	if (exMemory::LoadLibraryInjectorEx(proc.hProc, path.string()))							//	inject dll
	{
		printf("[+][Palcrack::exMemory][%d] injected module %s into process.\n", proc.dwPID, DLL_NAME);		//	print success
		Sleep(WAIT_TIME * .3);																//	wait a bit
		ShowWindow(hwnd, SW_HIDE);															//	hide console window

		do
		{
			if (!exMemory::FindModuleEx(PROCESS_NAME, DLL_NAME, &modInfo))					//	find module
			{
				printf("[+][Palcrack::exMemory][%d] module %s unloaded. exiting.\n", proc.dwPID, DLL_NAME);	//  print error
				CloseHandle(proc.hProc);													//	free handle to process
				break;																		//	break if found
			}

			Sleep(WAIT_TIME);																//	check every x cycles
		} while (WaitForSingleObject(proc.hProc, WAIT_TIME) == WAIT_TIMEOUT);				//	wait for process to exit ( 5s )

		ShowWindow(hwnd, SW_SHOW);															//	show console window
	}
	else
		printf("[!][Palcrack::exMemory] failed to inject module into process.\n");

	///	EXIT
	printf("[+][Palcrack] exiting.\n");														//	print exit message
	Sleep(WAIT_TIME);																		//	wait a bit
	CloseHandle(hwnd);																		//	close handle to console window
	proc = procInfo_t();																	//	clear process info		
	return 0;
}