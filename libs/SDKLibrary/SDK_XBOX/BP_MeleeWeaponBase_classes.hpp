#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x548 - 0x538)
// BlueprintGeneratedClass BP_MeleeWeaponBase.BP_MeleeWeaponBase_C
class ABP_MeleeWeaponBase_C : public APalWeaponBase
{
public:
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x538(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MeleeWeaponBase_C* GetDefaultObj();

	bool SeekRightHandOpen();
	bool SeekLeftHandOpen();
	struct FTransform GetLeftHandTransform(const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	bool IsUseLeftHandAttach();
	class FName GetEquipSocketName();
};

}


