#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x158 - 0x138)
// BlueprintGeneratedClass BP_ActionSurprised.BP_ActionSurprised_C
class UBP_ActionSurprised_C : public UPalActionBase
{
public:
	uint8                                        Pad_40E2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagra;                                            // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Timer;                                             // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionSurprised_C* GetDefaultObj();

	void ChangeFace(bool Angry, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_ActionSurprised(int32 EntryPoint, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
};

}


