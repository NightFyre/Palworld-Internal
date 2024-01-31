#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x43A - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalCommonScrollList.WBP_PalCommonScrollList_C
class UWBP_PalCommonScrollList_C : public UPalCommonScrollListBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          Canvas_Root;                                       // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryArrow_C*                 WBP_InventoryArrow_Bottom;                         // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryArrow_C*                 WBP_InventoryArrow_Top;                            // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       LastScrollOffset;                                  // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDisplayArrow;                                    // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScrollWhenFocusChanges           GamePadFocusChangeScrollType;                      // 0x439(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalCommonScrollList_C* GetDefaultObj();

	void GetScrollBox(class UScrollBox** ScrollBox);
	void AddWidget(class UUserWidget* Widget, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void GetAllChildrenNum(int32* Index, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue);
	void GetIndexFromWidget(class UWidget* Widget, int32* Index, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
	void AddScrollOffset(double Offset, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_FMin_B_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType, bool K2Node_SwitchEnum_CmpSuccess);
	void ClearAllChildren();
	void UpdateArrowVisibilityAndAnimation(double CurrentOffset, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1);
	void Construct();
	void Destruct();
	void BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void ExecuteUbergraph_WBP_PalCommonScrollList(int32 EntryPoint, float K2Node_ComponentBoundEvent_CurrentOffset, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast, double K2Node_VariableSet_lastScrollOffset_ImplicitCast, double CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast_1, double K2Node_VariableSet_lastScrollOffset_ImplicitCast_1);
};

}


