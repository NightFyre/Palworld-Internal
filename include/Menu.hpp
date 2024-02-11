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


		//	FORWARD DECLARE FUNCTIONS
		void Draw();
		void MainMenu();
		void HUD(bool* p_open);
		void Loops();

		//	INITIALIZE CLASS
		Menu()  noexcept = default;
		~Menu() noexcept = default;
		Menu(Menu const&) = delete;
		Menu(Menu&&) = delete;
		Menu& operator=(Menu const&) = delete;
		Menu& operator=(Menu&&) = delete;

	private:
		bool m_StyleInit{};
	};

	class GUI
	{
	public:
		//	WIDGETS
		static void TextCentered(const char* pText);
		static void TextCenteredf(const char* pText, ...);

	public:
		//	CANVAS
		static void DrawText_(ImVec2 pos, ImColor color, const char* pText, float fontSize);
		static void DrawTextf(ImVec2 pos, ImColor color, const char* pText, float fontSize, ...);
		static void DrawTextCentered(ImVec2 pos, ImColor color, const char* pText, float fontsize);
		static void DrawTextCenteredf(ImVec2 pos, ImColor color, const char* pText, float fontsize, ...);
	};

	class UnGUI : public GUI
	{
	public:
		struct AABB
		{
			SDK::FVector Min;
			SDK::FVector Max;

			//	helpers
			float GetWidth() { return (Max.X - Min.X); }
			float GetHeight() { return (Max.Y - Min.Y); }
			float GetDepth() { return (Max.Z - Min.Z); }
			SDK::FVector GetExtents() { return Max-Min; }

			//	constructors
			AABB() {}
			
			AABB(SDK::FVector origin, SDK::FVector boxExtent)	//	Center Half Extents
			{
				Min = origin - boxExtent;
				Max = origin + boxExtent;
			}
		};

		struct STransforms
		{
		private:
			SDK::AActor* pActor{ nullptr };
			SDK::FVector origin;
			SDK::FVector bounds;

		public:
			bool bIsValid{ false };
			SDK::FVector location;
			SDK::FRotator rotation;
			AABB aabb;

			//	screen properties { should be moved to SRendering }
			bool bOnScreen{ false };
			SDK::FVector2D screenOrigin;
			SDK::FVector2D screenMin;
			SDK::FVector2D screenMax;

			//	
			SDK::AActor* GetActor() { return pActor; }
			void TransformsUpdate()
			{
				if (!pActor)
				{
					bIsValid = false;
					bOnScreen = false;
					return;
				}

				location = pActor->K2_GetActorLocation();
				rotation = pActor->K2_GetActorRotation();
				pActor->GetActorBounds(true, &origin, &bounds, false);
				aabb = AABB(origin, bounds);
				bOnScreen = WorldToScreen(location, &screenOrigin);
				if (!bOnScreen)
					return;

				WorldToScreen(aabb.Min, &screenMin);
				WorldToScreen(aabb.Max, &screenMax);

			}


			//
			STransforms() {};
			STransforms(SDK::AActor* actor)
			{
				if (!actor)
					return;
				bIsValid = true;

				pActor = actor;
				location = pActor->K2_GetActorLocation();
				rotation = pActor->K2_GetActorRotation();
				pActor->GetActorBounds(true, &origin, &bounds, false);
				aabb = AABB(origin, bounds);
				bOnScreen = WorldToScreen(location, &screenOrigin);
				if (!bOnScreen)
					return;

				WorldToScreen(aabb.Min, &screenMin);
				WorldToScreen(aabb.Max, &screenMax);

			}
		};

		struct SRenderOptions
		{
			bool bNameTag{ false };
			bool b2DBox{ false };
			float mFontSize{ 8.0f };
			ImColor mColor{ 1.0f, 1.0f, 1.0f, 1.0f };
			STransforms entTransforms;
			bool bRenderReady{ false };

			//	
			ImVec2 GetOriginPoint() { return ImVec2(entTransforms.screenOrigin.X, entTransforms.screenOrigin.Y); }
			ImVec2 GetMinPoint() { return ImVec2(entTransforms.screenMin.X, entTransforms.screenMin.Y); }
			ImVec2 GetMaxPoint() { return ImVec2(entTransforms.screenMax.X, entTransforms.screenMax.Y); }
			SDK::APalCharacter* GetPalCharacter()
			{
				SDK::AActor* pActor = entTransforms.GetActor();
				if (!pActor)
					return nullptr;

				if (!pActor->IsA(SDK::APalCharacter::StaticClass()))
					return nullptr;

				return static_cast<SDK::APalCharacter*>(pActor);
				
			}
			void RenderUpdate()
			{
				entTransforms.TransformsUpdate();
				bRenderReady = entTransforms.bOnScreen;
			}

			//	
			SRenderOptions() {}
			SRenderOptions(SDK::AActor* pChar)
			{
				if (!pChar)
					return;
				
				entTransforms = STransforms(pChar);
				bRenderReady = entTransforms.bOnScreen;
			}

			SRenderOptions(SDK::AActor* pChar, bool bText, bool bBox, float fontSize, ImColor color)
			{
				if (!pChar)
					return;

				bNameTag = bText;
				b2DBox = bBox;
				mFontSize = fontSize;
				mColor = color;
				entTransforms = STransforms(pChar);
				bRenderReady = entTransforms.bOnScreen;
			}
		};



	public:
		//	HELPERS
		static bool ProjectWorldLocationToScreen(SDK::APlayerController* pPlayerController, SDK::FVector worldLocation, SDK::FVector2D* screen2D);
		static bool WorldToScreen(SDK::FVector location, SDK::FVector2D* screen2D);

	public:
		//	CANVAS
		static void DrawActor(SRenderOptions ctx);
		static void DrawActorNickName(SDK::APalCharacter* pActor, ImColor color, float fontSize);
		static void DrawActor2DBoundingBox(SDK::APalCharacter* pActor, ImColor color);
	};

	class UnMenu : public Menu
	{
	public:
		struct STargetEntity
		{
			//	
			SDK::APalCharacter* pEntCharacter;
			SDK::FVector entLocation;
			SDK::FRotator entRotation;
			SDK::FVector entFwdDir;
			SDK::FVector entOrigin;
			SDK::FVector entBounds;
			DX11_Base::UnGUI::SRenderOptions renderCTX;
			bool bIsValid = false;

			//	
			void Update()
			{
				if (!bIsValid || !pEntCharacter)
				{
					bIsValid = false;
					pEntCharacter = nullptr;
					return;
				}

				entLocation = pEntCharacter->K2_GetActorLocation();
				entRotation = pEntCharacter->K2_GetActorRotation();
				entFwdDir = pEntCharacter->GetActorForwardVector();
				pEntCharacter->GetActorBounds(true, &entOrigin, &entBounds, true);
				renderCTX.RenderUpdate();
			}

			void Clear()
			{
				pEntCharacter = nullptr;
				bIsValid = false;
			}

			//	
			STargetEntity() {};
			STargetEntity(SDK::APalCharacter* pChar)
			{
				if (!pChar)
					return;

				pEntCharacter = pChar;
				entLocation = pChar->K2_GetActorLocation();
				entRotation = pChar->K2_GetActorRotation();
				entFwdDir = pChar->GetActorForwardVector();
				pChar->GetActorBounds(true, &entOrigin, &entBounds, true);
				renderCTX = DX11_Base::UnGUI::SRenderOptions(pEntCharacter, true, true, 16.f, ImColor(1.0f, 1.0f, 1.0f, 1.0f));
				bIsValid = true;
			}
		};

		//	
	public:
		bool bSelectedTarget = false;
		STargetEntity pTargetEntity;
	};
	inline std::unique_ptr<UnMenu> g_Menu;
}
