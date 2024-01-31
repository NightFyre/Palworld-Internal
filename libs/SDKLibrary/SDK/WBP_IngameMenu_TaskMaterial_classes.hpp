#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x2A9 - 0x278)
// WidgetBlueprintGeneratedClass WBP_IngameMenu_TaskMaterial.WBP_IngameMenu_TaskMaterial_C
class UWBP_IngameMenu_TaskMaterial_C : public UUserWidget
{
public:
	class UImage*                                Image;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_56;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_34;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_ItemNum;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*              WBP_PalCommonItemIcon;                             // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCurveLinearColor*                     GaugeColor;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Hide_when_Zero;                                 // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_IngameMenu_TaskMaterial_C* GetDefaultObj();

	void SetHIdeWhenZeroFlag(bool IsHideWhenZero);
	void SetItemNum(int64 ItemNum, int64 GaugeMaxBorderNum, double CallFunc_Conv_Int64ToDouble_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, double CallFunc_Conv_Int64ToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_GetLinearColorValue_InTime_ImplicitCast);
	void SetupTexture(class FName StaticItemId);
};

}


