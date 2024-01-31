#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x568 - 0x558)
// BlueprintGeneratedClass BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C
class ABP_ThrowWeapon_GrenadeBase_C : public ABP_ThrowWeaponBase_C
{
public:
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemName;                                          // 0x560(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ThrowWeapon_GrenadeBase_C* GetDefaultObj();

	bool IsEnableAutoAim();
	int32 GetRemainBulletCount(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class UPalItemContainer* CallFunc_TryGetContainerFromInventoryType_outContainer, bool CallFunc_TryGetContainerFromInventoryType_ReturnValue, int32 CallFunc_GetNowSelectedIndex_ReturnValue, class UPalItemSlot* CallFunc_Array_Get_Item, int32 CallFunc_GetStackCount_ReturnValue);
	void GetShootPitch(double* Pitch);
	void ComsumeItem();
	void OnThrow();
	void GetBulletShootRotation(struct FRotator* BulletRotate, double CallFunc_GetShootPitch_Pitch, const struct FRotator& CallFunc_GetBulletShootRotation_BulletRotate, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
	void GetThrowObjectClass(class UClass** ThrowObject);
	class FName GetEquipSocketName();
};

}


