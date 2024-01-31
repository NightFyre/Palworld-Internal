#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x418 - 0x408)
// WidgetBlueprintGeneratedClass WBP_GameOver_Rescue.WBP_GameOver_Rescue_C
class UWBP_GameOver_Rescue_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                          ProgressBar_Rescue;                                // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_GameOver_Rescue_C* GetDefaultObj();

	void UpdateRescue(double Remain);
	void ExecuteUbergraph_WBP_GameOver_Rescue(int32 EntryPoint, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, double K2Node_CustomEvent_Remain, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
};

}


