#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x428 - 0x410)
// WidgetBlueprintGeneratedClass WBP_SimpleColorFade.WBP_SimpleColorFade_C
class UWBP_SimpleColorFade_C : public UWBP_PalFadeWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      In;                                                // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_14;                                          // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SimpleColorFade_C* GetDefaultObj();

	void Setup_ForOverride();
	void FadeOut();
	void FadeIn();
	void Finished_DE82E8EE4E2FF74CE3788F9F262A873A();
	void Finished_212EE08E4C1C909EB4116D9853386FC5();
	void AnmEvent_In();
	void AnmEvent_Out();
	void Construct();
	void ToggleVisibility(bool Visiable);
	void ExecuteUbergraph_WBP_SimpleColorFade(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_CustomEvent_Visiable, enum class ESlateVisibility K2Node_Select_Default, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast);
};

}


