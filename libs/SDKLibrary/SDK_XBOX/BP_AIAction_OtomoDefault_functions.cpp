#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C
// (None)

class UClass* UBP_AIAction_OtomoDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_OtomoDefault_C");

	return Clss;
}


// BP_AIAction_OtomoDefault_C BP_AIAction_OtomoDefault.Default__BP_AIAction_OtomoDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_OtomoDefault_C* UBP_AIAction_OtomoDefault_C::GetDefaultObj()
{
	static class UBP_AIAction_OtomoDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_OtomoDefault_C*>(UBP_AIAction_OtomoDefault_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetActionComposite
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetOwnerComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_OtomoDefault_C::SetActionComposite(class UClass* Class, class UPalAIActionComponent* CallFunc_GetOwnerComponent_ReturnValue, class UPalAIActionCompositeBase* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetActionComposite");

	Params::UBP_AIAction_OtomoDefault_C_SetActionComposite_Params Parms{};

	Parms.Class = Class;
	Parms.CallFunc_GetOwnerComponent_ReturnValue = CallFunc_GetOwnerComponent_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetOwnerComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_OtomoDefault_C::SetAction(class UClass* Class, class AController* CallFunc_GetController_ReturnValue, class UPalAIActionComponent* CallFunc_GetOwnerComponent_ReturnValue, class UPalAIActionBase* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetAction");

	Params::UBP_AIAction_OtomoDefault_C_SetAction_Params Parms{};

	Parms.Class = Class;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetOwnerComponent_ReturnValue = CallFunc_GetOwnerComponent_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetActionCombat
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Otomo_C*K2Node_DynamicCast_AsBP_Monster_AIController_Otomo               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCombatBase*      CallFunc_SetCombatAction_AIAction                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*K2Node_DynamicCast_AsPal_Character_Movement_Component            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_OtomoDefault_C::SetActionCombat(class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalAIActionCombatBase* CallFunc_SetCombatAction_AIAction, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UPalCharacterMovementComponent* K2Node_DynamicCast_AsPal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetActionCombat");

	Params::UBP_AIAction_OtomoDefault_C_SetActionCombat_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Otomo = K2Node_DynamicCast_AsBP_Monster_AIController_Otomo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_SetCombatAction_AIAction = CallFunc_SetCombatAction_AIAction;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character_Movement_Component = K2Node_DynamicCast_AsPal_Character_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetActionBaseCampWork
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_OtomoDefault_C::SetActionBaseCampWork()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetActionBaseCampWork");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetActionWork
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_OtomoDefault_C::SetActionWork()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetActionWork");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetActionFollowTrainer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_OtomoDefault_C::SetActionFollowTrainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetActionFollowTrainer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.ShouldSetCombatAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               Trainer                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_DynamicCast_AsPal_Player_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        CallFunc_GetPalPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalOtomoPalOrderType   CallFunc_GetOtomoOrder_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleMode_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AIAction_OtomoDefault_C::ShouldSetCombatAction(class APalCharacter* Trainer, class AController* CallFunc_GetController_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalPlayerController* CallFunc_GetPalPlayerController_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, enum class EPalOtomoPalOrderType CallFunc_GetOtomoOrder_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetBattleMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "ShouldSetCombatAction");

	Params::UBP_AIAction_OtomoDefault_C_ShouldSetCombatAction_Params Parms{};

	Parms.Trainer = Trainer;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Character = K2Node_DynamicCast_AsPal_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetPalPlayerController_ReturnValue = CallFunc_GetPalPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOtomoOrder_ReturnValue = CallFunc_GetOtomoOrder_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetBattleMode_ReturnValue = CallFunc_GetBattleMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetOtomoCombatAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_AIAction_OtomoDefault_C::SetOtomoCombatAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetOtomoCombatAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetOtomoFollowAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_AIAction_OtomoDefault_C::SetOtomoFollowAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetOtomoFollowAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetOtomoWorkAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_AIAction_OtomoDefault_C::SetOtomoWorkAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetOtomoWorkAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.SetOtomoBaseCampAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_AIAction_OtomoDefault_C::SetOtomoBaseCampAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "SetOtomoBaseCampAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C.ExecuteUbergraph_BP_AIAction_OtomoDefault
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_OtomoDefault_C::ExecuteUbergraph_BP_AIAction_OtomoDefault(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_OtomoDefault_C", "ExecuteUbergraph_BP_AIAction_OtomoDefault");

	Params::UBP_AIAction_OtomoDefault_C_ExecuteUbergraph_BP_AIAction_OtomoDefault_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


