#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2C0 - 0x278)
// WidgetBlueprintGeneratedClass WBP_IngameMenu_Monitoring_WorkInfo.WBP_IngameMenu_Monitoring_WorkInfo_C
class UWBP_IngameMenu_Monitoring_WorkInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_TextColor;                                     // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Category;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Category_1;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        EffectID;                                          // 0x298(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_427B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           EffectMsgIDs;                                      // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>           EffectLevelMsgIDs;                                 // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_IngameMenu_Monitoring_WorkInfo_C* GetDefaultObj();

	void Construct();
	void ChangeLevelText(int32 NewLevel);
	void ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkInfo(int32 EntryPoint, class UMaterialInterface* Temp_object_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* K2Node_Select_Default, bool Temp_bool_Variable_1, int32 K2Node_CustomEvent_NewLevel, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UMaterialInterface* K2Node_Select_Default_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_1);
};

}


