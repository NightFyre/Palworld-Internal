#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x298 - 0x278)
// WidgetBlueprintGeneratedClass WBP_GuildMemberGauge.WBP_GuildMemberGauge_C
class UWBP_GuildMemberGauge_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_Name;                              // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gauge;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Loupe_Angle;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_GuildMemberGauge_C* GetDefaultObj();

	void EnableAdditionalWidget(bool IsEnable);
	void UpdateDying(double Remain, double Max);
	void SetName(const class FString& Name);
	void EnableName(bool IsEnable);
	void ExecuteUbergraph_WBP_GuildMemberGauge(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool K2Node_CustomEvent_IsEnable_1, double K2Node_CustomEvent_Remain, double K2Node_CustomEvent_Max, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, double CallFunc_Divide_DoubleDouble_ReturnValue_1, int32 CallFunc_Round_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const class FString& K2Node_CustomEvent_Name, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_CustomEvent_IsEnable, enum class ESlateVisibility K2Node_Select_Default_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
};

}


