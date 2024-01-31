#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x578 - 0x558)
// BlueprintGeneratedClass BP_ThrowPalWeapon.BP_ThrowPalWeapon_C
class ABP_ThrowPalWeapon_C : public ABP_ThrowWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SK_Weapon_PalSphere_001;                           // 0x560(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayedThrowMotion;                               // 0x568(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_CAE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Const_WalkSpeedRate;                               // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ThrowPalWeapon_C* GetDefaultObj();

	bool IsEmptyMagazine();
	void Set_Flags(bool Disable, double Speed, class FName FlagName, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast);
	void OnThrow();
	void IsNotEmptyOtomo(bool* NotEmpty, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetOtomoCount_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	class FName GetEquipSocketName();
	void GetThrowObjectClass(class UClass** ThrowObject);
	void OnAttachWeapon(class AActor* AttachActor);
	void OnDetachWeapon(class AActor* DetachActor);
	void ExecuteUbergraph_BP_ThrowPalWeapon(int32 EntryPoint, bool CallFunc_IsNotEmptyOtomo_NotEmpty, class AActor* K2Node_Event_attachActor, class AActor* K2Node_Event_detachActor);
};

}


