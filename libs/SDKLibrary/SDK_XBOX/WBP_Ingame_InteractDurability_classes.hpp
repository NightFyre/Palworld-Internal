#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x440 - 0x408)
// WidgetBlueprintGeneratedClass WBP_Ingame_InteractDurability.WBP_Ingame_InteractDurability_C
class UWBP_Ingame_InteractDurability_C : public UPalUIMapObjectHPWorldHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Color_NormalToLittle;                          // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_HP;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_HP_Current;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_HP_MAX;                                       // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         DamegeReacted;                                     // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_564B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentHP;                                         // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectModel*                    Model;                                             // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Ingame_InteractDurability_C* GetDefaultObj();

	void OnSetup();
	void ShowHP(class APalMapObject* MapObject, enum class EPalHUDDisplayType DisplayType);
	void UpdateHP(class UPalMapObjectModel* Model);
	void CollapsePanel();
	void ExecuteUbergraph_WBP_Ingame_InteractDurability(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalMapObjectHPWorldHUDParameter* K2Node_DynamicCast_AsPal_Map_Object_HPWorld_HUDParameter, bool K2Node_DynamicCast_bSuccess, class APalMapObject* K2Node_CustomEvent_MapObject, enum class EPalHUDDisplayType K2Node_CustomEvent_DisplayType, bool K2Node_SwitchEnum_CmpSuccess, class UPalMapObjectModel* CallFunc_GetModel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalMapObjectModel* K2Node_CustomEvent_Model, const struct FPalMapObjectStatusValue& CallFunc_GetHP_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_SetPercent_InPercent_ImplicitCast);
};

}


