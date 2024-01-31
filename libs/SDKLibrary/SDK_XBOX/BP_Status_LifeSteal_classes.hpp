#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x70 - 0x48)
// BlueprintGeneratedClass BP_Status_LifeSteal.BP_Status_LifeSteal_C
class UBP_Status_LifeSteal_C : public UPalStatusLifeSteal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                OutText;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	double                                       EffectIntervalTimeSec;                             // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpawnEffectWaitTimer;                              // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_LifeSteal_C* GetDefaultObj();

	void OnBeginStatus();
	void OnEndStatus();
	void OnLifeSteal(int32 Damage);
	void TickStatus(float DeltaTime);
	void ExecuteUbergraph_BP_Status_LifeSteal(int32 EntryPoint, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 K2Node_Event_damage, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_CalucRecoverPoint_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_2, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, float K2Node_Event_DeltaTime, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_4, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
};

}


