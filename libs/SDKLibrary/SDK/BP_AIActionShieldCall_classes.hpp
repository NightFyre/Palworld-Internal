#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x180 - 0x178)
// BlueprintGeneratedClass BP_AIActionShieldCall.BP_AIActionShieldCall_C
class UBP_AIActionShieldCall_C : public UBP_AIAction_CallBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x178(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIActionShieldCall_C* GetDefaultObj();

	void DoRide(class APawn* ControlledPawn, class AController* CallFunc_GetController_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class UBP_AIActionProtecting_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_PushChildAction_ReturnValue);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIActionShieldCall(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_IsNearTwoActor_ReturnValue);
};

}


