#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x418 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalHudInvader.WBP_PalHudInvader_C
class UWBP_PalHudInvader_C : public UPalUserWidgetWorldHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                MI_Icon;                                           // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalHudInvader_C* GetDefaultObj();

	void OnSetup();
	void ParentDestroyEvent(class AActor* DestroyedActor);
	void ParentDeadEvent(const struct FPalDeadInfo& DeadInfo);
	void ExecuteUbergraph_WBP_PalHudInvader(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalHUDDispatchParameter_Invader* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Invader, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_DestroyedActor, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo);
};

}


