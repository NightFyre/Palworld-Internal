#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x2E1 - 0x278)
// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_State.WBP_MainMenu_Pal_State_C
class UWBP_MainMenu_Pal_State_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_State_2;                                       // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_State_1;                                       // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_State_0;                                       // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          MainCanvas;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_StatusName;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWidgetAnimation*>              AnimationArray;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EPalUIConditionType               CurrentCondition;                                  // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_Pal_State_C* GetDefaultObj();

	void Clear();
	void Set_Condition(enum class EPalUIConditionType DisplayCondition, class FText CallFunc_GetPalConditionName_outName, int32 CallFunc_GetPalConditionUrgency_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidgetAnimation* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnInitialized();
	void BndEvt__WBP_MainMenu_Pal_State_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Pal_State_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_MainMenu_Pal_State(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, TArray<class UWidgetAnimation*>& K2Node_MakeArray_Array, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void OnUnhovered__DelegateSignature(class UWBP_MainMenu_Pal_State_C* StateWidget);
	void OnHovered__DelegateSignature(class UWBP_MainMenu_Pal_State_C* StateWidget);
};

}


