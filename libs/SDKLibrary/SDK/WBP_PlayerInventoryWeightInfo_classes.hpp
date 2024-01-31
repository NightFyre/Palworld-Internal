#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x2AC - 0x278)
// WidgetBlueprintGeneratedClass WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C
class UWBP_PlayerInventoryWeightInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_NormalToFull;                                  // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_ParamArrow;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_ItemWeight;                            // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_MaxWeight;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_NowWeight;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        CachedInventoryWeightRate;                         // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerInventoryWeightInfo_C* GetDefaultObj();

	void OnUpdateMaxWeightBuff(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UMaterialInterface* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void UpdateWeight_Internal(double NowWeight, double MaxWeight, bool ForceSkipAnim, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_CachedInventoryWeightRate_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void OnUpdateMaxWeight(float MaxWeight, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, double CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast, double CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast);
	void OnUpdateWeight(float NowWeight, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, double CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast, double CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast);
	void AnmEvent_ForceNormal();
	void AnmEvent_ForceFull();
	void AnmEvent_FullToNormal();
	void AnmEvent_NormalToFull();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_PlayerInventoryWeightInfo(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, float CallFunc_GetNowItemWeight_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast, double CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast);
};

}


