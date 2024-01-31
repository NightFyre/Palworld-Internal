#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x4A8 - 0x440)
// WidgetBlueprintGeneratedClass WBP_PalDamageText.WBP_PalDamageText_C
class UWBP_PalDamageText_C : public UPalUIDamageTextBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Out;                                               // 0x448(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      In;                                                // 0x450(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_DamageValue;                                  // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        TotalDamage;                                       // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AnimeSpeedScale;                                   // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalDamageTextType                TextType;                                          // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       InterpolationLength;                               // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             OffsetPosition;                                    // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             RandomizeOffset;                                   // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalDamageText_C* GetDefaultObj();

	void GetPadding(double* Padding, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double K2Node_FunctionResult_padding_ImplicitCast);
	void SetDamageTextType(enum class EPalDamageTextType TextType, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_GetPadding_padding, const struct FMargin& K2Node_MakeStruct_Margin, float K2Node_MakeStruct_Right_ImplicitCast);
	void UpdatePosition(struct FVector& TargetWorldLocation, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, double CallFunc_FMax_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1);
	void SetDamageColor(struct FSlateColor& InColor);
	void SetDamageValue(int32 InValue, int32 StringFetchIndex, class FText CallFunc_Conv_IntToText_ReturnValue);
	void Finished_450E32A44BB84A7C14A5248BD3F03F85();
	void OnRequestClose();
	void OnInitialized();
	void ExecuteUbergraph_WBP_PalDamageText(int32 EntryPoint, double CallFunc_RandomFloatInRange_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, float CallFunc_CreatePlayAnimationProxyObject_PlaybackSpeed_ImplicitCast, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast, double K2Node_VariableSet_interpolationLength_ImplicitCast);
};

}


