#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x88 - 0x88)
// BlueprintGeneratedClass BP_AINPC_CombatGunState_FireMove_Shotgun.BP_AINPC_CombatGunState_FireMove_Shotgun_C
class UBP_AINPC_CombatGunState_FireMove_Shotgun_C : public UBP_AINPC_CombatGunState_FireMove_C
{
public:

	static class UClass* StaticClass();
	static class UBP_AINPC_CombatGunState_FireMove_Shotgun_C* GetDefaultObj();

	void MoveDIrectionWorldSpace(struct FVector* Direction, class APalCharacter* CallFunc_GetSelfActor_SelfActor, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue);
};

}


