#include "../pch.h"
#include "../include/D3D11Window.hpp"

IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

float HSV_RAINBOW_SPEED = 0.001;
static float HSV_RAINBOW_HUE = 0;
void SV_RAINBOW(float saturation, float value, float opacity)
{
	using namespace DX11_Base;
	HSV_RAINBOW_HUE -= HSV_RAINBOW_SPEED;
	if (HSV_RAINBOW_HUE < -1.f) HSV_RAINBOW_HUE += 1.f;
	for (int i = 0; i < 860; i++)
	{
		float hue = HSV_RAINBOW_HUE + (1.f / (float)860) * i;
		if (hue < 0.f) hue += 1.f;
		g_Menu->dbg_RAINBOW = ImColor::HSV(hue, (saturation / 255), (value / 255), (opacity / 255));
	}
}

namespace DX11_Base 
{
	static uint64_t* MethodsTable = NULL;

	D3D11Window::D3D11Window() { }
	D3D11Window::~D3D11Window() { }

	//	@TODO: boolean for active window
	LRESULT D3D11Window::WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
	{
		//	@TODO: block gamepad messages being sent to the game when the menu is shown
		if (g_Menu->b_ShowMenu) {
			ImGui_ImplWin32_WndProcHandler((HWND)g_D3D11Window->m_OldWndProc, msg, wParam, lParam);
			return TRUE;
		}
		return CallWindowProc((WNDPROC)g_D3D11Window->m_OldWndProc, hWnd, msg, wParam, lParam);
	}

	HRESULT APIENTRY D3D11Window::HookPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
	{
		g_D3D11Window->Overlay(pSwapChain);
		return g_D3D11Window->oIDXGISwapChainPresent(pSwapChain, SyncInterval, Flags);
	}

	void APIENTRY D3D11Window::MJDrawIndexed(ID3D11DeviceContext* pContext, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation) { return; }

	bool D3D11Window::HookD3D()
	{
		if (GetD3DContext()) 
		{
			CreateHook(8, (void**)&oIDXGISwapChainPresent, HookPresent);
			CreateHook(12, (void**)&oID3D11DrawIndexed, MJDrawIndexed);
			Sleep(1000);
#if CONSOLE_OUTPUT
			g_Console->printdbg("[+][D3D11Window::Hook] Initialized\n", Console::Colors::green);
#endif
			return TRUE;
		}
#if CONSOLE_OUTPUT
		g_Console->printdbg("[+][D3D11Window::Hook] Failed to Initialize\n", Console::Colors::red);
#endif
		return FALSE;
	}

	bool D3D11Window::CreateHook(uint16_t Index, void** Original, void* Function)
	{
		assert(Index >= 0 && Original != NULL && Function != NULL);
		void* target = (void*)MethodsTable[Index];
		if (MH_CreateHook(target, Function, Original) != MH_OK || MH_EnableHook(target) != MH_OK) {
			return FALSE;
		}
		return TRUE;
	}

	bool D3D11Window::GetD3DContext()
	{
		if (!InitWindow())
			return FALSE;

		HMODULE D3D11Module = GetModuleHandleA("d3d11.dll");

		D3D_FEATURE_LEVEL FeatureLevel;
		const D3D_FEATURE_LEVEL FeatureLevels[] = { D3D_FEATURE_LEVEL_10_1, D3D_FEATURE_LEVEL_11_0 };

		DXGI_RATIONAL RefreshRate;
		RefreshRate.Numerator = 60;
		RefreshRate.Denominator = 1;

		DXGI_MODE_DESC BufferDesc;
		BufferDesc.Width = 100;
		BufferDesc.Height = 100;
		BufferDesc.RefreshRate = RefreshRate;
		BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
		BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
		BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;

		DXGI_SAMPLE_DESC SampleDesc;
		SampleDesc.Count = 1;
		SampleDesc.Quality = 0;

		DXGI_SWAP_CHAIN_DESC SwapChainDesc;
		SwapChainDesc.BufferDesc = BufferDesc;
		SwapChainDesc.SampleDesc = SampleDesc;
		SwapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
		SwapChainDesc.BufferCount = 1;
		SwapChainDesc.OutputWindow = WindowHwnd;
		SwapChainDesc.Windowed = 1;
		SwapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
		SwapChainDesc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

		IDXGISwapChain* SwapChain;
		ID3D11Device* Device;
		ID3D11DeviceContext* Context;
		if (D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0, FeatureLevels, 1, D3D11_SDK_VERSION, &SwapChainDesc, &SwapChain, &Device, &FeatureLevel, &Context) < 0)
		{
			DeleteWindow();
			return FALSE;
		}

		MethodsTable = (uint64_t*)::calloc(205, sizeof(uint64_t));
		memcpy(MethodsTable, *(uint64_t**)SwapChain, 18 * sizeof(uint64_t));
		memcpy(MethodsTable + 18, *(uint64_t**)Device, 43 * sizeof(uint64_t));
		memcpy(MethodsTable + 18 + 43, *(uint64_t**)Context, 144 * sizeof(uint64_t));
		Sleep(1000);

		//	INIT NOTICE
		Beep(300, 300);

		MH_Initialize();
		SwapChain->Release();
		SwapChain = NULL;
		Device->Release();
		Device = NULL;
		Context->Release();
		Context = NULL;
		DeleteWindow();
		return TRUE;
	}

	bool D3D11Window::InitWindow()
	{
		WindowClass.cbSize = sizeof(WNDCLASSEX);
		WindowClass.style = CS_HREDRAW | CS_VREDRAW;
		WindowClass.lpfnWndProc = DefWindowProc;
		WindowClass.cbClsExtra = 0;
		WindowClass.cbWndExtra = 0;
		WindowClass.hInstance = GetModuleHandle(NULL);
		WindowClass.hIcon = NULL;
		WindowClass.hCursor = NULL;
		WindowClass.hbrBackground = NULL;
		WindowClass.lpszMenuName = NULL;
		WindowClass.lpszClassName = L"MJ";
		WindowClass.hIconSm = NULL;
		RegisterClassEx(&WindowClass);
		WindowHwnd = CreateWindow(WindowClass.lpszClassName, L"DX11 Window", WS_OVERLAPPEDWINDOW, 0, 0, 100, 100, NULL, NULL, WindowClass.hInstance, NULL);
		if (WindowHwnd == NULL) {
			return FALSE;
		}
#if CONSOLE_OUTPUT
		g_Console->printdbg("[+][D3D11Window::InitWindow]\n", Console::Colors::green);
#endif
		return TRUE;
	}

	bool D3D11Window::DeleteWindow()
	{
		DestroyWindow(WindowHwnd);
		UnregisterClass(WindowClass.lpszClassName, WindowClass.hInstance);
		if (WindowHwnd != NULL) {
			return FALSE;
		}
#if CONSOLE_OUTPUT
		g_Console->printdbg("[+][D3D11Window::DeleteWindow]\n", Console::Colors::green);
#endif
		return TRUE;
	}

	bool D3D11Window::InitializeImGui(IDXGISwapChain* swapChain)
	{
		if (SUCCEEDED(swapChain->GetDevice(__uuidof(ID3D11Device), (void**)&m_Device))) {
			ImGui::CreateContext();
			ImGuiIO& io = ImGui::GetIO(); (void)io;
			ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantTextInput || ImGui::GetIO().WantCaptureKeyboard;
			//	io.FontGlobalScale = 2.0f; // scale font by 100%
			io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
			io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;
			io.IniFilename = NULL;
			ImGui::StyleColorsDark();
			m_Device->GetImmediateContext(&m_DeviceContext);

			DXGI_SWAP_CHAIN_DESC Desc;
			swapChain->GetDesc(&Desc);
			g_GameData->pHwnd = Desc.OutputWindow;

			ID3D11Texture2D* BackBuffer;
			swapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&BackBuffer);
			m_Device->CreateRenderTargetView(BackBuffer, NULL, &m_RenderTargetView);
			BackBuffer->Release();

			ImGui_ImplWin32_Init(g_GameData->pHwnd);
			ImGui_ImplDX11_Init(m_Device, m_DeviceContext);
			ImGui_ImplDX11_CreateDeviceObjects();
			ImGui::GetIO().ImeWindowHandle = g_GameData->pHwnd;
			m_OldWndProc = (WNDPROC)SetWindowLongPtr(g_GameData->pHwnd, GWLP_WNDPROC, (__int3264)(LONG_PTR)WndProc);
			b_ImGui_Initialized = TRUE;
			pImGui = GImGui;
			pViewport = pImGui->Viewports[0];
#if CONSOLE_OUTPUT
			g_Console->printdbg("[+][D3D11Window::InitializeImGui]\n", Console::Colors::green);
#endif
			return 1;
		}
		b_ImGui_Initialized = FALSE;
		return 0;
	}

	void D3D11Window::Overlay(IDXGISwapChain* pSwapChain)
	{
		if (!b_ImGui_Initialized)
			InitializeImGui(pSwapChain);

		SV_RAINBOW(169, 169, 200);
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();
		ImGui::GetIO().MouseDrawCursor = g_Menu->b_ShowMenu;

		//	Render Menu Loop
		g_Menu->Draw();
		ImGui::EndFrame();
		ImGui::Render();
		m_DeviceContext->OMSetRenderTargets(1, &m_RenderTargetView, NULL);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	}

	/// <summary>
	/// UNHOOK
	/// </summary>
	void D3D11Window::UnhookD3D()
	{
		SetWindowLongPtr(g_GameData->pHwnd, GWLP_WNDPROC, (LONG_PTR)m_OldWndProc);
		DisableAll();
		return;
	}
	
	void D3D11Window::DisableHook(uint16_t Index)
	{
		assert(Index >= 0);
		MH_DisableHook((void*)MethodsTable[Index]);
		return;
	}

	void D3D11Window::DisableAll()
	{
		DisableHook(8);
		DisableHook(12);
		free(MethodsTable);
		MethodsTable = NULL;
		return;
	}
}