#pragma once
#include "helper.h"
#include "Game.hpp"
#include "D3D11Window.hpp"
namespace DX11_Base 
{
	class Menu
	{
	public:
		bool b_ShowMenu = false;
		bool b_ShowHud = false;
		bool b_ShowDemoWindow = false;
		bool b_ShowStyleEditor = false;
		ImColor dbg_RAINBOW{};				//	RAINBOW THEME COLORS
		bool dbg_RAINBOW_THEME = FALSE;		//	RAINBOW THEME BOOLEAN
		float sOpacity = 0.80;				//	Opacity for SunShade Window
		bool dbg_ALERTS = TRUE;

		//	INITIALIZE CLASS
		Menu()  noexcept = default;
		~Menu() noexcept = default;
		Menu(Menu const&) = delete;
		Menu(Menu&&) = delete;
		Menu& operator=(Menu const&) = delete;
		Menu& operator=(Menu&&) = delete;

		//	FORWARD DECLARE FUNCTIONS
		void Draw();
		void MainMenu();
		void HUD(bool* p_open);
		void Loops();

	private:
		bool m_StyleInit{};
	};
	inline std::unique_ptr<Menu> g_Menu;

	class GUI
	{
	public:
		//	WIDGETS
		static void TextCentered(const char* pText);
		static void TextCenteredf(const char* pText, ...);
		static bool ToggleButton(const char* pText, bool* p);

	public:
		//	CANVAS
		static void DrawText_(ImVec2 pos, ImColor color, const char* pText, float fontSize);
		static void DrawTextf(ImVec2 pos, ImColor color, const char* pText, float fontSize, ...);
		static void DrawTextCentered(ImVec2 pos, ImColor color, const char* pText, float fontsize);
		static void DrawTextCenteredf(ImVec2 pos, ImColor color, const char* pText, float fontsize, ...);

	};

	class UnGUI : public GUI
	{
		struct STransforms
		{
			SDK::FVector location;
			SDK::FRotator rotation;
			SDK::FVector origin;
			SDK::FVector bounds;
			SDK::AActor* pActor;
			SDK::FVector2D screenOrigin;
			bool bOnScreen;

			STransforms() {};
			STransforms(SDK::AActor* actor)
			{
				if (!actor)
					return;

				pActor = actor;
				location = pActor->K2_GetActorLocation();
				rotation = pActor->K2_GetActorRotation();
				pActor->GetActorBounds(true, &origin, &bounds, false);
				bOnScreen = WorldToScreen(location, &screenOrigin);
			}
		};

	public:
		//	HELPERS
		static bool ProjectWorldLocationToScreen(SDK::APlayerController* pPlayerController, SDK::FVector worldLocation, SDK::FVector2D* screen2D);
		static bool WorldToScreen(SDK::FVector location, SDK::FVector2D* screen2D);

	public:
		//	CANVAS
		static void DrawActorNickName(SDK::APalCharacter* pActor, ImColor color, float fontSize);
	};
}
