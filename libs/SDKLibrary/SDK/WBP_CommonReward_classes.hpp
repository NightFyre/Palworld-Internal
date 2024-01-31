#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x4B0 - 0x408)
// WidgetBlueprintGeneratedClass WBP_CommonReward.WBP_CommonReward_C
class UWBP_CommonReward_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_PurpleColor;                                   // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_DefaultColor;                                  // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Close;                                         // 0x420(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Open;                                          // 0x428(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_RewardInfo;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Title;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FPalUICommonRewardDisplayData> RewardInfos;                                       // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Queuing;                                           // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPalUIRewardDisplayType, struct FDataTableRowHandle> TitleMap;                                          // 0x460(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_CommonReward_C* GetDefaultObj();

	void Finished_8B86E03B4C9B039B2D1E43872343E0D8();
	void Finished_99C931904947D8826978CE8B6DE53642();
	void OnSetup();
	void ShowInfo();
	void QueueRewardInfo(const struct FPalUICommonRewardDisplayData& Info);
	void SetInfo(const struct FPalUICommonRewardDisplayData& Info);
	void ChangeColor(bool IsPurple);
	void ExecuteUbergraph_WBP_CommonReward(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, const struct FPalUICommonRewardDisplayData& K2Node_CustomEvent_Info_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FPalUICommonRewardDisplayData& CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, const struct FPalUICommonRewardDisplayData& K2Node_CustomEvent_Info, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FDataTableRowHandle& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool K2Node_CustomEvent_IsPurple, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWidgetAnimation* K2Node_Select_Default_1, double CallFunc_SelectFloat_A_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast);
};

}


