#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C
// (Actor)

class UClass* ABP_MonsterAIController_Otomo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MonsterAIController_Otomo_C");

	return Clss;
}


// BP_MonsterAIController_Otomo_C BP_MonsterAIController_Otomo.Default__BP_MonsterAIController_Otomo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MonsterAIController_Otomo_C* ABP_MonsterAIController_Otomo_C::GetDefaultObj()
{
	static class ABP_MonsterAIController_Otomo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MonsterAIController_Otomo_C*>(ABP_MonsterAIController_Otomo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.GetWorkerModuleClass
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UPalAIControllerWorkerModule>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UPalAIControllerWorkerModule> ABP_MonsterAIController_Otomo_C::GetWorkerModuleClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "GetWorkerModuleClass");

	Params::ABP_MonsterAIController_Otomo_C_GetWorkerModuleClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnDamageOtomo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult            DamageResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_DynamicCast_AsPal_Player_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        CallFunc_GetPalPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetSpawnedOtomo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActiveActorFlag_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleMode_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Otomo_C*K2Node_DynamicCast_AsBP_Monster_AIController_Otomo               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::OnDamageOtomo(const struct FPalDamageResult& DamageResult, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APalPlayerController* CallFunc_GetPalPlayerController_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_GetActiveActorFlag_ReturnValue, bool CallFunc_GetBattleMode_ReturnValue, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnDamageOtomo");

	Params::ABP_MonsterAIController_Otomo_C_OnDamageOtomo_Params Parms{};

	Parms.DamageResult = DamageResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Character = K2Node_DynamicCast_AsPal_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPalPlayerController_ReturnValue = CallFunc_GetPalPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_TryGetSpawnedOtomo_ReturnValue = CallFunc_TryGetSpawnedOtomo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetActiveActorFlag_ReturnValue = CallFunc_GetActiveActorFlag_ReturnValue;
	Parms.CallFunc_GetBattleMode_ReturnValue = CallFunc_GetBattleMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Otomo = K2Node_DynamicCast_AsBP_Monster_AIController_Otomo;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_GetBattleManager_ReturnValue_1 = CallFunc_GetBattleManager_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.CanCoop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanCoop                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPartnerSkillParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRestrictedByItems_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIActionType        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UPalAIActionBase>CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPartnerSkillParameterComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanExec_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::CanCoop(bool* CanCoop, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsRestrictedByItems_ReturnValue, enum class EPalAIActionType Temp_byte_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TSubclassOf<class UPalAIActionBase> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_CanExec_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "CanCoop");

	Params::ABP_MonsterAIController_Otomo_C_CanCoop_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsRestrictedByItems_ReturnValue = CallFunc_IsRestrictedByItems_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_CanExec_ReturnValue = CallFunc_CanExec_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CanCoop != nullptr)
		*CanCoop = Parms.CanCoop;

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.Play Otomo Default Composite Action
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_OtomoDefault_C* CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::Play_Otomo_Default_Composite_Action(class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UBP_AIAction_OtomoDefault_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "Play Otomo Default Composite Action");

	Params::ABP_MonsterAIController_Otomo_C_Play_Otomo_Default_Composite_Action_Params Parms{};

	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.SetCombatAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionCombatBase*      AIAction                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CastedActionComp                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCombat_Standard* CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::SetCombatAction(class UPalAIActionCombatBase** AIAction, class UPalAIActionComponent* CastedActionComp, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionCombat_Standard* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "SetCombatAction");

	Params::ABP_MonsterAIController_Otomo_C_SetCombatAction_Params Parms{};

	Parms.CastedActionComp = CastedActionComp;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AIAction != nullptr)
		*AIAction = Parms.AIAction;

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.SetHateEnemiesToOtomo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HitR1Enemy                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHate*                    CallFunc_GetHateSystem_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetConflictEnemies_OutEnemyes                           (ReferenceParm)
// bool                               CallFunc_GetConflictEnemies_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHate*                    CallFunc_GetHateSystem_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::SetHateEnemiesToOtomo(bool HitR1Enemy, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalHate* CallFunc_GetHateSystem_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, TArray<class AActor*>& CallFunc_GetConflictEnemies_OutEnemyes, bool CallFunc_GetConflictEnemies_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class APalAIController* K2Node_DynamicCast_AsPal_AIController_1, bool K2Node_DynamicCast_bSuccess_1, class UPalHate* CallFunc_GetHateSystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "SetHateEnemiesToOtomo");

	Params::ABP_MonsterAIController_Otomo_C_SetHateEnemiesToOtomo_Params Parms{};

	Parms.HitR1Enemy = HitR1Enemy;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHateSystem_ReturnValue = CallFunc_GetHateSystem_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.CallFunc_GetConflictEnemies_OutEnemyes = CallFunc_GetConflictEnemies_OutEnemyes;
	Parms.CallFunc_GetConflictEnemies_ReturnValue = CallFunc_GetConflictEnemies_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsPal_AIController_1 = K2Node_DynamicCast_AsPal_AIController_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetHateSystem_ReturnValue_1 = CallFunc_GetHateSystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.Set Combat Action and Target
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCombatBase*      AIAction                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCombatBase*      CallFunc_SetCombatAction_AIAction                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::Set_Combat_Action_and_Target(class AActor* Target, class UPalAIActionCombatBase** AIAction, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalAIActionCombatBase* CallFunc_SetCombatAction_AIAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "Set Combat Action and Target");

	Params::ABP_MonsterAIController_Otomo_C_Set_Combat_Action_and_Target_Params Parms{};

	Parms.Target = Target;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetCombatAction_AIAction = CallFunc_SetCombatAction_AIAction;

	UObject::ProcessEvent(Func, &Parms);

	if (AIAction != nullptr)
		*AIAction = Parms.AIAction;

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.Attack For Enemy With Parameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              SkillSlotID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCombatBase*      CallFunc_Set_Combat_Action_and_Target_AIAction                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::Attack_For_Enemy_With_Parameter(class AActor* Target, int32 SkillSlotID, class UPalAIActionCombatBase* CallFunc_Set_Combat_Action_and_Target_AIAction, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "Attack For Enemy With Parameter");

	Params::ABP_MonsterAIController_Otomo_C_Attack_For_Enemy_With_Parameter_Params Parms{};

	Parms.Target = Target;
	Parms.SkillSlotID = SkillSlotID;
	Parms.CallFunc_Set_Combat_Action_and_Target_AIAction = CallFunc_Set_Combat_Action_and_Target_AIAction;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.AttackForEnemy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageResult            NewLocalVar                                                      (Edit, BlueprintVisible, NoDestructor)
// class UPalAIActionComponent*       CastedActionComp                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCombatBase*      CallFunc_Set_Combat_Action_and_Target_AIAction                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_DynamicCast_AsPal_Player_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleMode_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Otomo_C*K2Node_DynamicCast_AsBP_Monster_AIController_Otomo               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCombatBase*      CallFunc_Set_Combat_Action_and_Target_AIAction_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::AttackForEnemy(class AActor* Target, const struct FPalDamageResult& NewLocalVar, class UPalAIActionComponent* CastedActionComp, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionCombatBase* CallFunc_Set_Combat_Action_and_Target_AIAction, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetBattleMode_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UPalAIActionCombatBase* CallFunc_Set_Combat_Action_and_Target_AIAction_1, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "AttackForEnemy");

	Params::ABP_MonsterAIController_Otomo_C_AttackForEnemy_Params Parms{};

	Parms.Target = Target;
	Parms.NewLocalVar = NewLocalVar;
	Parms.CastedActionComp = CastedActionComp;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Set_Combat_Action_and_Target_AIAction = CallFunc_Set_Combat_Action_and_Target_AIAction;
	Parms.K2Node_DynamicCast_AsPal_Player_Character = K2Node_DynamicCast_AsPal_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBattleMode_ReturnValue = CallFunc_GetBattleMode_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Otomo = K2Node_DynamicCast_AsBP_Monster_AIController_Otomo;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_Set_Combat_Action_and_Target_AIAction_1 = CallFunc_Set_Combat_Action_and_Target_AIAction_1;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnCoopCanceled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAIActionType        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionAbortState   CallFunc_K2_AbortAction_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::OnCoopCanceled(enum class EPalAIActionType Temp_byte_Variable, class UPalAIActionBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class EPawnActionAbortState CallFunc_K2_AbortAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnCoopCanceled");

	Params::ABP_MonsterAIController_Otomo_C_OnCoopCanceled_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_K2_AbortAction_ReturnValue = CallFunc_K2_AbortAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnCoopFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBase*            Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIActionType        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::OnCoopFinished(class UPalAIActionBase* Action, enum class EPalAIActionType Temp_byte_Variable, bool CallFunc_Map_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnCoopFinished");

	Params::ABP_MonsterAIController_Otomo_C_OnCoopFinished_Params Parms{};

	Parms.Action = Action;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnCoopRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanCoop_CanCoop                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIActionType        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// enum class EPalAIActionType        Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIActionType        Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UPalAIActionBase>CallFunc_Map_Find_Value_1                                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnAction*                 CallFunc_CreateActionInstanceFixName_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            K2Node_DynamicCast_AsPal_AIAction_Base                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::OnCoopRequest(bool CallFunc_CanCoop_CanCoop, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPalAIActionType Temp_byte_Variable, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, enum class EPalAIActionType Temp_byte_Variable_1, enum class EPalAIActionType Temp_byte_Variable_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalAIActionBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class UPalAIActionBase> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue, class UPawnAction* CallFunc_CreateActionInstanceFixName_ReturnValue, class UPalAIActionBase* K2Node_DynamicCast_AsPal_AIAction_Base, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnCoopRequest");

	Params::ABP_MonsterAIController_Otomo_C_OnCoopRequest_Params Parms{};

	Parms.CallFunc_CanCoop_CanCoop = CallFunc_CanCoop_CanCoop;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_CreateActionInstanceFixName_ReturnValue = CallFunc_CreateActionInstanceFixName_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Base = K2Node_DynamicCast_AsPal_AIAction_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnPressCoopButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAIActionType        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActiveActorFlag_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::OnPressCoopButton(enum class EPalAIActionType Temp_byte_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetActiveActorFlag_ReturnValue, class UPalAIActionBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnPressCoopButton");

	Params::ABP_MonsterAIController_Otomo_C_OnPressCoopButton_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveActorFlag_ReturnValue = CallFunc_GetActiveActorFlag_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HolderSlotID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::Setup(int32 HolderSlotID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "Setup");

	Params::ABP_MonsterAIController_Otomo_C_Setup_Params Parms{};

	Parms.HolderSlotID = HolderSlotID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "ReceiveEndPlay");

	Params::ABP_MonsterAIController_Otomo_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.Regene_CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIController_Otomo_C::Regene_CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "Regene_CustomEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnDeadDelegate_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonsterAIController_Otomo_C::OnDeadDelegate______0(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnDeadDelegate_¤ÙóÈ_0");

	Params::ABP_MonsterAIController_Otomo_C_OnDeadDelegate______0_Params Parms{};

	Parms.DeadInfo = DeadInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.ShowBaseCampLog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalMonsterControllerBaseCampLogContentContent                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MonsterAIController_Otomo_C::ShowBaseCampLog(struct FPalMonsterControllerBaseCampLogContent& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "ShowBaseCampLog");

	Params::ABP_MonsterAIController_Otomo_C_ShowBaseCampLog_Params Parms{};

	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnSetTrainer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               InCharacter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::OnSetTrainer(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnSetTrainer");

	Params::ABP_MonsterAIController_Otomo_C_OnSetTrainer_Params Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.FinishCoopAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIController_Otomo_C::FinishCoopAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "FinishCoopAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "ReceivePossess");

	Params::ABP_MonsterAIController_Otomo_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.OnTrainer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               InCharacter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::OnTrainer(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "OnTrainer");

	Params::ABP_MonsterAIController_Otomo_C_OnTrainer_Params Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C.ExecuteUbergraph_BP_MonsterAIController_Otomo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UPalActionBase>  Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EPalWazaID              Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDeadInfo                K2Node_CustomEvent_DeadInfo                                      (NoDestructor)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalMonsterControllerBaseCampLogContentK2Node_Event_Content                                             (ConstParm)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_InCharacter_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterOnCompleteInitializeParameterWrapper*CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_5                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_InCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterOnCompleteInitializeParameterWrapper*CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue_1  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        CallFunc_GetTrainerPlayerController_ForServer_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_5                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPC_Base_C*              K2Node_DynamicCast_AsBP_NPC_Base                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_6                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Otomo_C::ExecuteUbergraph_BP_MonsterAIController_Otomo(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TSubclassOf<class UPalActionBase> Temp_class_Variable, enum class EPalWazaID Temp_byte_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPalMonsterControllerBaseCampLogContent& K2Node_Event_Content, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* K2Node_CustomEvent_InCharacter_1, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_5, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class APawn* K2Node_Event_PossessedPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class APalCharacter* K2Node_DynamicCast_AsPal_Character_1, bool K2Node_DynamicCast_bSuccess_2, class APalCharacter* K2Node_CustomEvent_InCharacter, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue_1, class APalPlayerController* CallFunc_GetTrainerPlayerController_ForServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, class ABP_NPC_Base_C* K2Node_DynamicCast_AsBP_NPC_Base, bool K2Node_DynamicCast_bSuccess_3, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_6, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Otomo_C", "ExecuteUbergraph_BP_MonsterAIController_Otomo");

	Params::ABP_MonsterAIController_Otomo_C_ExecuteUbergraph_BP_MonsterAIController_Otomo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_CustomEvent_DeadInfo = K2Node_CustomEvent_DeadInfo;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_Content = K2Node_Event_Content;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_InCharacter_1 = K2Node_CustomEvent_InCharacter_1;
	Parms.CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue = CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_5 = CallFunc_GetComponentByClass_ReturnValue_5;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.CallFunc_K2_GetPawn_ReturnValue_4 = CallFunc_K2_GetPawn_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsPal_Character_1 = K2Node_DynamicCast_AsPal_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_InCharacter = K2Node_CustomEvent_InCharacter;
	Parms.CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue_1 = CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue_1;
	Parms.CallFunc_GetTrainerPlayerController_ForServer_ReturnValue = CallFunc_GetTrainerPlayerController_ForServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_K2_GetPawn_ReturnValue_5 = CallFunc_K2_GetPawn_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_NPC_Base = K2Node_DynamicCast_AsBP_NPC_Base;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_6 = CallFunc_GetComponentByClass_ReturnValue_6;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


