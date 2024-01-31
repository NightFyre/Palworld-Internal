#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x5B8 - 0x578)
// WidgetBlueprintGeneratedClass WBP_PalLoupe.WBP_PalLoupe_C
class UWBP_PalLoupe_C : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Loupe_Angle;                                       // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Loupe_Circle;                                      // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pal_base;                                          // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*         WBP_PalCommonCharacterSlot;                        // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalLoupe_GaugeHP_C*               WBP_PalLoupe_GaugeHP;                              // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalLoupe_GaugeHunger_C*           WBP_PalLoupe_GaugeHunger;                          // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         TargetHandle;                                      // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalLoupe_C* GetDefaultObj();

	void UpdateHunger(double NowHunger, double NowMaxHunger, double CallFunc_Divide_DoubleDouble_ReturnValue);
	void UpdateHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP, const struct FFixedPoint64& CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, double CallFunc_SetPercent_percent_ImplicitCast);
	void Clear();
	void SetTargetPal(class UPalIndividualCharacterSlot* TargetSlot, bool CallFunc_IsValid_ReturnValue);
	void OnInitialized();
	void ExecuteUbergraph_WBP_PalLoupe(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


