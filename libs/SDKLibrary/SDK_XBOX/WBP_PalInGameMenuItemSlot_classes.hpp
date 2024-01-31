#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4B8 - 0x4A0)
// WidgetBlueprintGeneratedClass WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C
class UWBP_PalInGameMenuItemSlot_C : public UWBP_PalItemSlotBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                    Text_ItemNum;                                      // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemIcon_C*          WBP_PalInGameMenuItemIcon;                         // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalInGameMenuItemSlot_C* GetDefaultObj();

	void RegisterItemIconWidget(class UWBP_PalItemIconBase_C** IconWidget);
	void OnInitialized();
	void UpdateSlotEvent(class UPalItemSlot* TargetSlot);
	void EmptySlotEvent();
	void ValidSlotEvent();
	void ExecuteUbergraph_WBP_PalInGameMenuItemSlot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalItemSlot* K2Node_CustomEvent_targetSlot, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, int32 CallFunc_GetStackCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, const struct FPalItemData& CallFunc_GetItemData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue);
};

}


