#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C
// (None)

class UClass* UBP_AINPC_CombatState_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_CombatState_Base_C");

	return Clss;
}


// BP_AINPC_CombatState_Base_C BP_AINPC_CombatState_Base.Default__BP_AINPC_CombatState_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_CombatState_Base_C* UBP_AINPC_CombatState_Base_C::GetDefaultObj()
{
	static class UBP_AINPC_CombatState_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_CombatState_Base_C*>(UBP_AINPC_CombatState_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.IsEndSelfState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEnd                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatState_Base_C::IsEndSelfState(bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatState_Base_C", "IsEndSelfState");

	Params::UBP_AINPC_CombatState_Base_C_IsEndSelfState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;

}


// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.ShootAbleSlefForwardDot
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShootAble                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InFanShapAimTarget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatState_Base_C::ShootAbleSlefForwardDot(bool* ShootAble, class APalCharacter* CallFunc_GetSelfActor_SelfActor, class AActor* CallFunc_GetTargetActor_TargetActor, bool CallFunc_InFanShapAimTarget_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTargetActor_TargetActor_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatState_Base_C", "ShootAbleSlefForwardDot");

	Params::UBP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot_Params Parms{};

	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;
	Parms.CallFunc_GetTargetActor_TargetActor = CallFunc_GetTargetActor_TargetActor;
	Parms.CallFunc_InFanShapAimTarget_ReturnValue = CallFunc_InFanShapAimTarget_ReturnValue;
	Parms.CallFunc_GetSelfActor_SelfActor_1 = CallFunc_GetSelfActor_SelfActor_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTargetActor_TargetActor_1 = CallFunc_GetTargetActor_TargetActor_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ShootAble != nullptr)
		*ShootAble = Parms.ShootAble;

}


// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.AttackAblePlayerCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               AttackAble                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAIAttackAbleByPlayerCamera_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatState_Base_C::AttackAblePlayerCamera(bool* AttackAble, class APalCharacter* CallFunc_GetSelfActor_SelfActor, class AActor* CallFunc_GetTargetActor_TargetActor, bool CallFunc_IsAIAttackAbleByPlayerCamera_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatState_Base_C", "AttackAblePlayerCamera");

	Params::UBP_AINPC_CombatState_Base_C_AttackAblePlayerCamera_Params Parms{};

	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;
	Parms.CallFunc_GetTargetActor_TargetActor = CallFunc_GetTargetActor_TargetActor;
	Parms.CallFunc_IsAIAttackAbleByPlayerCamera_ReturnValue = CallFunc_IsAIAttackAbleByPlayerCamera_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AttackAble != nullptr)
		*AttackAble = Parms.AttackAble;

}


// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetControllerRef
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_NPCAIController_C*       NPCAICon                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatState_Base_C::GetControllerRef(class ABP_NPCAIController_C** NPCAICon, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatState_Base_C", "GetControllerRef");

	Params::UBP_AINPC_CombatState_Base_C_GetControllerRef_Params Parms{};

	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat;
	Parms.CallFunc_GetControllerRef_NPCAICon = CallFunc_GetControllerRef_NPCAICon;

	UObject::ProcessEvent(Func, &Parms);

	if (NPCAICon != nullptr)
		*NPCAICon = Parms.NPCAICon;

}


// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetShooterComponent
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalShooterComponent*        ShooterComp                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatState_Base_C::GetShooterComponent(class UPalShooterComponent** ShooterComp, class APalCharacter* CallFunc_GetSelfActor_SelfActor, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatState_Base_C", "GetShooterComponent");

	Params::UBP_AINPC_CombatState_Base_C_GetShooterComponent_Params Parms{};

	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShooterComp != nullptr)
		*ShooterComp = Parms.ShooterComp;

}


// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetSelfActor
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*               SelfActor                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_AINPC_CombatState_Base_C::GetSelfActor(class APalCharacter** SelfActor, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatState_Base_C", "GetSelfActor");

	Params::UBP_AINPC_CombatState_Base_C_GetSelfActor_Params Parms{};

	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat;

	UObject::ProcessEvent(Func, &Parms);

	if (SelfActor != nullptr)
		*SelfActor = Parms.SelfActor;

}


// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetTargetActor
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_AINPC_CombatState_Base_C::GetTargetActor(class AActor** TargetActor, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatState_Base_C", "GetTargetActor");

	Params::UBP_AINPC_CombatState_Base_C_GetTargetActor_Params Parms{};

	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetActor != nullptr)
		*TargetActor = Parms.TargetActor;

}


// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetCombatAIActionRef
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_AIAction_NPC_CombatBase_C*BPAIActionNPCCombat                                              (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatState_Base_C::GetCombatAIActionRef(class UBP_AIAction_NPC_CombatBase_C** BPAIActionNPCCombat, class UObject* CallFunc_GetOuterObject_ReturnValue, class UBP_AIAction_NPC_CombatBase_C* K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatState_Base_C", "GetCombatAIActionRef");

	Params::UBP_AINPC_CombatState_Base_C_GetCombatAIActionRef_Params Parms{};

	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base = K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (BPAIActionNPCCombat != nullptr)
		*BPAIActionNPCCombat = Parms.BPAIActionNPCCombat;

}

}


