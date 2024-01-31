#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x460 - 0x408)
// WidgetBlueprintGeneratedClass WBP_BuildObjectIndicator_PowerSufficiency.WBP_BuildObjectIndicator_PowerSufficiency_C
class UWBP_BuildObjectIndicator_PowerSufficiency_C : public UPalUserWidgetWorldHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Base;                                              // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          ElectricPower;                                     // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LIne;                                              // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          RootCanvas;                                        // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Electric;                                     // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_MapObjectEnergyModule* Parameter;                                         // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   PowerOnlineMSGID;                                  // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   PowerOfflineMSGID;                                 // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_BuildObjectIndicator_PowerSufficiency_C* GetDefaultObj();

	void OnUpdateEnergyModuleState(class UPalMapObjectEnergyModule* Module, bool Temp_bool_Variable, bool CallFunc_CanConsumeEnergy_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_Select_Default_1, class FText CallFunc_GetLocalizedTextFromHandle_Text);
	void SetupUI(class UPalMapObjectEnergyModule* EnergyModule, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_MapObjectEnergyModule* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object_Energy_Module, bool K2Node_DynamicCast_bSuccess);
	void OnSetup();
	void ExecuteUbergraph_WBP_BuildObjectIndicator_PowerSufficiency(int32 EntryPoint);
};

}


