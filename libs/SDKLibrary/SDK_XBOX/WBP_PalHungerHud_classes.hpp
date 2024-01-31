#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x430 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalHungerHud.WBP_PalHungerHud_C
class UWBP_PalHungerHud_C : public UPalUserWidgetWorldHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalHungerIcon_C*                  WBP_PalHungerIcon;                                 // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuid                                 Belong_Group_Id;                                   // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CheckGroupTimer;                                   // 0x428(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalHungerHud_C* GetDefaultObj();

	void GetLocalPlayerGroupID(struct FGuid* GroupID, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, const struct FGuid& CallFunc_GetGroupId_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void RemoveSelf_In();
	void OnRequestRemove();
	void OnInitialized();
	void OnSetup();
	void CheckGroup();
	void Destruct();
	void ExecuteUbergraph_WBP_PalHungerHud(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalHUDDispatchParameter_HungerIcon* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Hunger_Icon, bool K2Node_DynamicCast_bSuccess, const struct FGuid& CallFunc_GetLocalPlayerGroupID_GroupID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


