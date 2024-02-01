#pragma once
#include "helper.h"

namespace DX11_Base {

	class Console
	{
	public:
		enum Colors
		{
			dark_blue = 1,
			dark_green,
			dark_teal,
			dark_red,
			dark_pink,
			dark_yellow,
			dark_white,
			dark_gray,
			blue,
			green,
			teal,
			red,
			pink,
			yellow ,
			white,
			DEFAULT = white,
		};
		
	public:
		FILE* stream_in{};
		FILE* stream_out{};
		FILE* stream_error{};
		Colors color;
		HANDLE g_Handle{};
		HWND g_hWnd{};
		bool verbose{};
		bool bShowConsole = true;

		//	INPUT BUFFERS
		char input[32]{};
		char input2[32]{};

		explicit Console();
		~Console() noexcept = default;
		Console(Console const&) = delete;
		Console(Console&&) = delete;
		Console& operator=(Console const&) = delete;
		Console& operator=(Console&&) = delete;

		void InitializeConsole(const char* ConsoleName);
		void printdbg(const char* Text, int Color = {}, ...);
		void scandbg(const char* Text, ...);
		void LogEvent(std::string TEXT, bool FLAG);
		void DestroyConsole();
		void SetConsoleVisibility(bool bShow);

		//	FUNCTIONS
		bool writeFile(const char* Path, const char* Text, unsigned int Length, DWORD * out = {});
		bool readFile(const char* Path, char* Text, unsigned int Length, DWORD * out = {});
	};
	inline std::unique_ptr<Console> g_Console;
}