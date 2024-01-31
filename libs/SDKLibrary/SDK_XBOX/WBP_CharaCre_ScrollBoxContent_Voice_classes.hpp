#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x4B0 - 0x428)
// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C
class UWBP_CharaCre_ScrollBoxContent_Voice_C : public UWBP_CharaCre_ScrollBoxContentBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Chara_Cre_VoiceTypeSlider_C*      WBP_Chara_Cre_VoiceTypeSlider;                     // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              WrapBox_Body;                                      // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnChangedVoiceID;                                  // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UAkAudioEvent*>                 SampleVoiceArray;                                  // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, int32>                           PlayVoiceMap;                                      // 0x460(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_ScrollBoxContent_Voice_C* GetDefaultObj();

	void PlaySampleVoice(int32 VoiceID, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, int32 Temp_int_Variable, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, class UAkAudioEvent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UPalSoundPlayer* CallFunc_GetSoundPlayer_ReturnValue, int32 CallFunc_PlaySound_ReturnValue);
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void GetRestoreFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget);
	void GetTopFocusTarget(class UWidget** Widget);
	void BndEvt__WBP_CharaCre_ScrollBoxContent_Voice_WBP_Chara_Cre_VoiceTypeSlider_K2Node_ComponentBoundEvent_1_OnChangedValue__DelegateSignature(double Value);
	void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice(int32 EntryPoint, double K2Node_ComponentBoundEvent_Value, int64 CallFunc_Conv_DoubleToInt64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue);
	void OnChangedVoiceID__DelegateSignature(int32 VoiceID);
};

}


