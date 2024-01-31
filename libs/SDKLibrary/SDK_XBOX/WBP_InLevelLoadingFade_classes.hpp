#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x428 - 0x410)
// WidgetBlueprintGeneratedClass WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C
class UWBP_InLevelLoadingFade_C : public UWBP_PalFadeWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      In;                                                // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_LoadingScreen_C*                  WBP_LoadingScreen;                                 // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_InLevelLoadingFade_C* GetDefaultObj();

	void FadeOut();
	void FadeIn();
	void Setup_ForOverride();
	void Finished_50648C2D41952F044CFD8F9629D4027A();
	void Finished_BCA2D9DB46EBD8925174F885E2A96DAA();
	void AnmEvent_In();
	void AnmEvent_Out();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_InLevelLoadingFade(int32 EntryPoint, const class FString& CallFunc_GetObjectName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName CallFunc_Conv_StringToName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetObjectName_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_CreatePlayAnimationProxyObject_PlaybackSpeed_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast_1, float CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast);
};

}


