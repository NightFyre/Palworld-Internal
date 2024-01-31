#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x291 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Crime_Scene.WBP_Crime_Scene_C
class UWBP_Crime_Scene_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Open;                                          // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Loop;                                          // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentEnable;                                     // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Crime_Scene_C* GetDefaultObj();

	void Finished_4B4F0B354CEB0EB1043AE5B3C6D7077A();
	void Finished_F33B774D46BB4A7E03FF64B35586069D();
	void SetCrimeSceneEnable(bool Enable);
	void ExecuteUbergraph_WBP_Crime_Scene(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_Enable, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_SelectFloat_A_ImplicitCast, float CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast_1, float CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast_1);
};

}


