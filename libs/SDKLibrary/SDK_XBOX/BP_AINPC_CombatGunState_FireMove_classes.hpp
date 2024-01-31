#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x88 - 0x58)
// BlueprintGeneratedClass BP_AINPC_CombatGunState_FireMove.BP_AINPC_CombatGunState_FireMove_C
class UBP_AINPC_CombatGunState_FireMove_C : public UBP_AINPC_CombatGunState_AimMove_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Timer;                                             // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                        ShootCount;                                        // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_39AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Interval;                                          // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       ShootAbleTimer;                                    // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_DeltaTime;                                    // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AINPC_CombatGunState_FireMove_C* GetDefaultObj();

	void AddShootTimer(double CallFunc_Add_DoubleDouble_ReturnValue);
	void StateEnter();
	void StateTick(float DeltaTime);
	void ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove(int32 EntryPoint, int32 Temp_int_Variable, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, float K2Node_Event_DeltaTime, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_1, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 CallFunc_GetMaxShootCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsMagazineEmpty_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_2, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_2, float CallFunc_GetShootInterval_ReturnValue, bool CallFunc_AttackAblePlayerCamera_AttackAble, bool CallFunc_ShootAbleSlefForwardDot_ShootAble, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_StateTick_DeltaTime_ImplicitCast, double K2Node_VariableSet_Temp_DeltaTime_ImplicitCast, double K2Node_VariableSet_Interval_ImplicitCast);
};

}


