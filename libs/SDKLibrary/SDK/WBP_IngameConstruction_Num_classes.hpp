#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x294 - 0x278)
// WidgetBlueprintGeneratedClass WBP_IngameConstruction_Num.WBP_IngameConstruction_Num_C
class UWBP_IngameConstruction_Num_C : public UUserWidget
{
public:
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_C_1;                               // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    BPPalTextBlock_Num4;                               // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    BPPalTextBlock_Num5;                               // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FColor                                ErrorColor;                                        // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_IngameConstruction_Num_C* GetDefaultObj();

	void SetNumInternal(class UBP_PalTextBlock_C* TargetText, int32 InNum, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void SetNums(int32 RequiredNum, int32 MaxNum, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 CallFunc_Min_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_1);
};

}


