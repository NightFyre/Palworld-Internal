#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x450 - 0x430)
// WidgetBlueprintGeneratedClass WBP_WebBrowser_News.WBP_WebBrowser_News_C
class UWBP_WebBrowser_News_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CommonButton_C*                   WBP_CommonButton;                                  // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               WebBrowser;                                        // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_WebBrowser_News_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void BndEvt__WBP_WebBrowserTest_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_WebBrowser_News_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_WebBrowser_News(int32 EntryPoint);
};

}


