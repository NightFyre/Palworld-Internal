#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x85 (0x2FD - 0x278)
// WidgetBlueprintGeneratedClass WBP_IngameThermometerEff.WBP_IngameThermometerEff_C
class UWBP_IngameThermometerEff_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_OffToOn;                                       // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Cold2To0;                                      // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Hot2To0;                                       // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanelCold;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanelHot;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Cold0;                                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Cold1;                                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Hot;                                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Hot_1;                                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HotSpark;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EPalBodyTemperatureState          CachedBodyState;                                   // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5128[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CachedDisplayTemperature;                          // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LimitTenperature;                                  // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectAnimeEndTime;                                // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstSetup;                                      // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5129[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TargetEffectAnimeTime;                             // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NowEffectAnimtTime;                                // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviousDisplayTemperature;                        // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalBodyTemperatureState          PreviousBodyState;                                 // 0x2FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_IngameThermometerEff_C* GetDefaultObj();

	void PlayTemperatureSound(class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, class UAkAudioEvent* Temp_object_Variable_3, int32 Temp_int_Variable, class UAkAudioEvent* Temp_object_Variable_4, class UAkAudioEvent* Temp_object_Variable_5, class UAkAudioEvent* Temp_object_Variable_6, class UAkAudioEvent* Temp_object_Variable_7, class UAkAudioEvent* Temp_object_Variable_8, enum class EPalBodyTemperatureState Temp_byte_Variable, class UAkAudioEvent* Temp_object_Variable_9, class UAkAudioEvent* Temp_object_Variable_10, int32 Temp_int_Variable_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UAkAudioEvent* K2Node_Select_Default, int32 CallFunc_Multiply_IntInt_ReturnValue, class UAkAudioEvent* K2Node_Select_Default_1, class UAkAudioEvent* K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue);
	void Calc_Thermomater_Anime_Target_Time(int32 TargetTenperature, double* TargetTime, int32 CallFunc_Abs_Int_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Max_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeClamped_OutRangeB_ImplicitCast);
	void SetTemperantureBodyState(enum class EPalBodyTemperatureState NewBodyState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void SetTemperanture(int32 Temperanture);
	void AnmEvent_On();
	void AnmEvent_Off();
	void AnmEvent_Effect(int32 Temperanture);
	void Construct();
	void OnInitialized();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_IngameThermometerEff(int32 EntryPoint, enum class EPalBodyTemperatureState Temp_byte_Variable, class UWidgetAnimation* Temp_object_Variable, int32 K2Node_CustomEvent_Temperanture, float CallFunc_GetAnimationCurrentTime_ReturnValue, double CallFunc_Calc_Thermomater_Anime_Target_Time_TargetTime, bool CallFunc_IsAnimationPlaying_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, double CallFunc_SelectFloat_A_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1, float CallFunc_SetAnimationCurrentTime_InTime_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
};

}


