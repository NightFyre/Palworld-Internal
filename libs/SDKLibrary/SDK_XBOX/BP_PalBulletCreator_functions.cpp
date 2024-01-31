#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalBulletCreator.BP_PalBulletCreator_C
// (None)

class UClass* UBP_PalBulletCreator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalBulletCreator_C");

	return Clss;
}


// BP_PalBulletCreator_C BP_PalBulletCreator.Default__BP_PalBulletCreator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalBulletCreator_C* UBP_PalBulletCreator_C::GetDefaultObj()
{
	static class UBP_PalBulletCreator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalBulletCreator_C*>(UBP_PalBulletCreator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalBulletCreator.BP_PalBulletCreator_C.CreateBullet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class APalBullet>      bulletClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FTransform                  SpawnTransform                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpawnActorCollisionHandlingMethodCollisionHandlingOverride                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalBullet*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class APalBullet*                  CreatedBullet                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalPassiveSkillEffect>CallFunc_GetSkillEffectList_ReturnValue                          (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSneakAttackRate_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalPassiveSkillEffect>CallFunc_GetSkillEffectList_ReturnValue_1                        (ReferenceParm)
// class APalWeaponBase*              K2Node_DynamicCast_AsPal_Weapon_Base                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalBullet*                  CallFunc_SpawnBullet_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetWeaponDamage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPassiveSkillEffect      CallFunc_Array_Get_Item                                          (None)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBulletModifierComponent* CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class APalBullet* UBP_PalBulletCreator_C::CreateBullet(class UObject* WorldContextObject, class APalWeaponBase* Weapon, TSubclassOf<class APalBullet> bulletClass, struct FTransform& SpawnTransform, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class APawn* Instigator, class APalBullet* CreatedBullet, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FPalPassiveSkillEffect>& CallFunc_GetSkillEffectList_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetSneakAttackRate_ReturnValue, TArray<struct FPalPassiveSkillEffect>& CallFunc_GetSkillEffectList_ReturnValue_1, class APalWeaponBase* K2Node_DynamicCast_AsPal_Weapon_Base, bool K2Node_DynamicCast_bSuccess, class APalBullet* CallFunc_SpawnBullet_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetWeaponDamage_ReturnValue, const struct FPalPassiveSkillEffect& CallFunc_Array_Get_Item, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalBulletModifierComponent* CallFunc_AddComponentByClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalBulletCreator_C", "CreateBullet");

	Params::UBP_PalBulletCreator_C_CreateBullet_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Weapon = Weapon;
	Parms.bulletClass = bulletClass;
	Parms.SpawnTransform = SpawnTransform;
	Parms.CollisionHandlingOverride = CollisionHandlingOverride;
	Parms.Owner = Owner;
	Parms.Instigator = Instigator;
	Parms.CreatedBullet = CreatedBullet;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSkillEffectList_ReturnValue = CallFunc_GetSkillEffectList_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSneakAttackRate_ReturnValue = CallFunc_GetSneakAttackRate_ReturnValue;
	Parms.CallFunc_GetSkillEffectList_ReturnValue_1 = CallFunc_GetSkillEffectList_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Weapon_Base = K2Node_DynamicCast_AsPal_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnBullet_ReturnValue = CallFunc_SpawnBullet_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetWeaponDamage_ReturnValue = CallFunc_GetWeaponDamage_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


