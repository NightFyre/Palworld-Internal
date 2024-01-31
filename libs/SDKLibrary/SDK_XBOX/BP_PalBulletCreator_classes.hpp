#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// BlueprintGeneratedClass BP_PalBulletCreator.BP_PalBulletCreator_C
class UBP_PalBulletCreator_C : public UPalBulletCreator
{
public:
	TMap<enum class EPalPassiveSkillEffectType, class UClass*> ModifierMap;                                       // 0x28(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_PalBulletCreator_C* GetDefaultObj();

	class APalBullet* CreateBullet(class UObject* WorldContextObject, class APalWeaponBase* Weapon, TSubclassOf<class APalBullet> bulletClass, struct FTransform& SpawnTransform, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class APawn* Instigator, class APalBullet* CreatedBullet, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FPalPassiveSkillEffect>& CallFunc_GetSkillEffectList_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetSneakAttackRate_ReturnValue, TArray<struct FPalPassiveSkillEffect>& CallFunc_GetSkillEffectList_ReturnValue_1, class APalWeaponBase* K2Node_DynamicCast_AsPal_Weapon_Base, bool K2Node_DynamicCast_bSuccess, class APalBullet* CallFunc_SpawnBullet_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetWeaponDamage_ReturnValue, const struct FPalPassiveSkillEffect& CallFunc_Array_Get_Item, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalBulletModifierComponent* CallFunc_AddComponentByClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


