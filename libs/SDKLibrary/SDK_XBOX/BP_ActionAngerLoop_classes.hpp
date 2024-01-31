#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x158 - 0x138)
// BlueprintGeneratedClass BP_ActionAngerLoop.BP_ActionAngerLoop_C
class UBP_ActionAngerLoop_C : public UPalActionBase
{
public:
	uint8                                        Pad_40C6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x150(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionAngerLoop_C* GetDefaultObj();

	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void _________0();
	void ExecuteUbergraph_BP_ActionAngerLoop(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTime, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_RandomFloatInRange_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast);
};

}


