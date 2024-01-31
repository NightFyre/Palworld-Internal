#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x40 - 0x31)
// BlueprintGeneratedClass BP_AINPC_CombatGunState_Reload.BP_AINPC_CombatGunState_Reload_C
class UBP_AINPC_CombatGunState_Reload_C : public UBP_AINPC_CombatState_Base_C
{
public:
	uint8                                        Pad_24[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AINPC_CombatGunState_Reload_C* GetDefaultObj();

	void StateEnter();
	void StateExit();
	void ExecuteUbergraph_BP_AINPC_CombatGunState_Reload(int32 EntryPoint, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, float CallFunc_GetReloadTime_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor, const struct FVector& CallFunc_MakeVector_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_1, class AActor* CallFunc_GetTargetActor_TargetActor, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_2, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_2, double CallFunc_MakeVector_X_ImplicitCast);
};

}


