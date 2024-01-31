#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// WidgetBlueprintGeneratedClass WBP_PalLoupe_GaugeHP.WBP_PalLoupe_GaugeHP_C
class UWBP_PalLoupe_GaugeHP_C : public UUserWidget
{
public:
	class UProgressBar*                          ProgressBar_39;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalLoupe_GaugeHP_C* GetDefaultObj();

	void SetPercent(double Percent, float CallFunc_SetPercent_InPercent_ImplicitCast);
};

}


