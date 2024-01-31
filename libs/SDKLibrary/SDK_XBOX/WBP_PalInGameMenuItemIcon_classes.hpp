#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x458 - 0x440)
// WidgetBlueprintGeneratedClass WBP_PalInGameMenuItemIcon.WBP_PalInGameMenuItemIcon_C
class UWBP_PalInGameMenuItemIcon_C : public UWBP_PalItemIconBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                     CircularThrobber_363;                              // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_57;                                          // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalInGameMenuItemIcon_C* GetDefaultObj();

	void OnInitialized();
	void StartLoadEvent();
	void LoadedTextureEvent(class UTexture2D* LoadedTexture);
	void EmptyEvent();
	void ExecuteUbergraph_WBP_PalInGameMenuItemIcon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTexture2D* K2Node_CustomEvent_loadedTexture);
};

}


