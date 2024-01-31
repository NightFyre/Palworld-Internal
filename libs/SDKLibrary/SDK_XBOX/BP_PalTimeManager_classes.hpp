#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x140 - 0x130)
// BlueprintGeneratedClass BP_PalTimeManager.BP_PalTimeManager_C
class UBP_PalTimeManager_C : public UPalTimeManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       NPCSetTime;                                        // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PalTimeManager_C* GetDefaultObj();

	void Tick_BP(float DeltaTime);
	void ExecuteUbergraph_BP_PalTimeManager(int32 EntryPoint, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, int32 CallFunc_GetCurrentPalWorldTime_Minute_ReturnValue, int32 CallFunc_GetCurrentPalWorldTime_Hour_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInStage_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetFloatParameter_InValue_ImplicitCast);
};

}


