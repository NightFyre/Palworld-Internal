#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x180 - 0x178)
// BlueprintGeneratedClass BP_AIActionRideCall.BP_AIActionRideCall_C
class UBP_AIActionRideCall_C : public UBP_AIAction_CallBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x178(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIActionRideCall_C* GetDefaultObj();

	void CanRide(bool* CanRide, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDisableRide_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void DoRide(class APawn* ControlledPawn, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBP_AIActionRiding_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_PushChildAction_ReturnValue);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIActionRideCall(int32 EntryPoint, bool CallFunc_CanRide_CanRide, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, float CallFunc_GetCharacterRadius_ReturnValue, float CallFunc_GetCharacterRadius_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsInteractingPlayer_IsInteracting, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_IsNearTwoActor_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_IsNearTwoActor_distance_ImplicitCast);
};

}


