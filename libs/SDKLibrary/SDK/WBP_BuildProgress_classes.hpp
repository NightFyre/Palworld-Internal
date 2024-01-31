#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x421 - 0x410)
// WidgetBlueprintGeneratedClass WBP_BuildProgress.WBP_BuildProgress_C
class UWBP_BuildProgress_C : public UPalUIBuildProgressWorldHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_IngameProgress_C*                 WBP_IngameProgress;                                // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ProgressFinished;                                  // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_BuildProgress_C* GetDefaultObj();

	void Finished_0A8F9BE3461D19DEC9F1BDA5236BDDCA();
	void Finished_C8A38F31462C1BFD0CAC6CAE7285A7E3();
	void OnUpdatedAssignCharacter(class UPalWorkBase* TargetWork);
	void SetProgress(class UPalWorkProgress* Work);
	void ClosePanel();
	void OnRequestClose(class UPalBuildProcess* Process);
	void Destruct();
	void OnSetup();
	void ShowProgress(enum class EPalHUDDisplayType DisplayType);
	void ExecuteUbergraph_WBP_BuildProgress(int32 EntryPoint, bool CallFunc_IsCompleted_ReturnValue, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalWorkBase* K2Node_Event_targetWork, bool CallFunc_IsValid_ReturnValue_3, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetAssignedCharacters_IndividualSlots, class UPalWorkProgress* K2Node_Event_Work, float CallFunc_GetRemainWorkAmount_ReturnValue, int32 CallFunc_GetRemainWorkPredicateTime_ReturnValue, float CallFunc_GetProgressRate_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UPalBuildProcess* K2Node_Event_Process, bool Temp_bool_IsClosed_Variable, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalBuildProgressWorldHUDParameter* K2Node_DynamicCast_AsPal_Build_Progress_World_HUDParameter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPalHUDDisplayType K2Node_CustomEvent_DisplayType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Set_Work_Amount_workAmount_ImplicitCast);
};

}


