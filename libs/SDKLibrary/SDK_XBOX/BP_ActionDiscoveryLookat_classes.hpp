#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x150 - 0x138)
// BlueprintGeneratedClass BP_ActionDiscoveryLookat.BP_ActionDiscoveryLookat_C
class UBP_ActionDiscoveryLookat_C : public UPalActionBase
{
public:
	uint8                                        Pad_42AC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagra;                                            // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionDiscoveryLookat_C* GetDefaultObj();

	void TurnToTargetOneFrame();
	void OnFinishedFX(class UNiagaraComponent* PSystem);
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void OnEndAction();
	void ExecuteUbergraph_BP_ActionDiscoveryLookat(int32 EntryPoint, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, bool CallFunc_IsDedicatedServer_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, bool CallFunc_IsDedicatedServer_ReturnValue_1);
};

}


