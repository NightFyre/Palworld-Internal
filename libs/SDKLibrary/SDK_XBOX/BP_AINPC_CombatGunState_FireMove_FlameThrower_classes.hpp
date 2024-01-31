#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x68 - 0x58)
// BlueprintGeneratedClass BP_AINPC_CombatGunState_FireMove_FlameThrower.BP_AINPC_CombatGunState_FireMove_FlameThrower_C
class UBP_AINPC_CombatGunState_FireMove_FlameThrower_C : public UBP_AINPC_CombatGunState_AimMove_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Timer;                                             // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AINPC_CombatGunState_FireMove_FlameThrower_C* GetDefaultObj();

	void StateEnter();
	void StateExit();
	void ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower(int32 EntryPoint, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_1, float CallFunc_GetRandomMoveTimeMin_ReturnValue);
};

}


