#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x58 - 0x48)
// BlueprintGeneratedClass BP_Status_StepCoolDown.BP_Status_StepCoolDown_C
class UBP_Status_StepCoolDown_C : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Timer;                                             // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_StepCoolDown_C* GetDefaultObj();

	void TickStatus(float DeltaTime);
	void OnBeginStatus();
	void ExecuteUbergraph_BP_Status_StepCoolDown(int32 EntryPoint, float K2Node_Event_DeltaTime, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_IsServer_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_Timer_ImplicitCast);
};

}


