#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C
// (None)

class UClass* UBP_AIActionFunnel_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionFunnel_Default_C");

	return Clss;
}


// BP_AIActionFunnel_Default_C BP_AIActionFunnel_Default.Default__BP_AIActionFunnel_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionFunnel_Default_C* UBP_AIActionFunnel_Default_C::GetDefaultObj()
{
	static class UBP_AIActionFunnel_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionFunnel_Default_C*>(UBP_AIActionFunnel_Default_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.CreateSkillActionModule
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UPalFunnelSkillModule>FunnelSkillModuleClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalFunnelSkillModule*       CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionFunnel_Default_C::CreateSkillActionModule(TSubclassOf<class UPalFunnelSkillModule> FunnelSkillModuleClass, bool CallFunc_IsValidClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalFunnelSkillModule* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "CreateSkillActionModule");

	Params::UBP_AIActionFunnel_Default_C_CreateSkillActionModule_Params Parms{};

	Parms.FunnelSkillModuleClass = FunnelSkillModuleClass;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.ShouldSetSkillAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldSetSkillAction_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTrainer_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLive_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AIActionFunnel_Default_C::ShouldSetSkillAction(bool CallFunc_ShouldSetSkillAction_ReturnValue, class APalCharacter* CallFunc_GetTrainer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "ShouldSetSkillAction");

	Params::UBP_AIActionFunnel_Default_C_ShouldSetSkillAction_Params Parms{};

	Parms.CallFunc_ShouldSetSkillAction_ReturnValue = CallFunc_ShouldSetSkillAction_ReturnValue;
	Parms.CallFunc_GetTrainer_ReturnValue = CallFunc_GetTrainer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLive_ReturnValue = CallFunc_IsLive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.SetAction
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetOwnerComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionFunnelSkillBase* K2Node_DynamicCast_AsPal_AIAction_Funnel_Skill_Base              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPalAIActionBase* UBP_AIActionFunnel_Default_C::SetAction(class UClass* Class, class AController* CallFunc_GetController_ReturnValue, class UPalAIActionComponent* CallFunc_GetOwnerComponent_ReturnValue, class UPalAIActionBase* CallFunc_SpawnObject_ReturnValue, class UPalAIActionFunnelSkillBase* K2Node_DynamicCast_AsPal_AIAction_Funnel_Skill_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "SetAction");

	Params::UBP_AIActionFunnel_Default_C_SetAction_Params Parms{};

	Parms.Class = Class;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetOwnerComponent_ReturnValue = CallFunc_GetOwnerComponent_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Funnel_Skill_Base = K2Node_DynamicCast_AsPal_AIAction_Funnel_Skill_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.SetActionSkill
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_FunnelCharacterAIController_C*K2Node_DynamicCast_AsBP_Funnel_Character_AIController            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalFunnelCharacter*         K2Node_DynamicCast_AsPal_Funnel_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetAction_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionFunnel_Default_C::SetActionSkill(class AController* CallFunc_GetController_ReturnValue, class ABP_FunnelCharacterAIController_C* K2Node_DynamicCast_AsBP_Funnel_Character_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalFunnelCharacter* K2Node_DynamicCast_AsPal_Funnel_Character, bool K2Node_DynamicCast_bSuccess_1, class UPalAIActionBase* CallFunc_SetAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "SetActionSkill");

	Params::UBP_AIActionFunnel_Default_C_SetActionSkill_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Funnel_Character_AIController = K2Node_DynamicCast_AsBP_Funnel_Character_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Funnel_Character = K2Node_DynamicCast_AsPal_Funnel_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SetAction_ReturnValue = CallFunc_SetAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.SetActionFollowTrainer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBase*            CallFunc_SetAction_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionFunnel_Default_C::SetActionFollowTrainer(class UPalAIActionBase* CallFunc_SetAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "SetActionFollowTrainer");

	Params::UBP_AIActionFunnel_Default_C_SetActionFollowTrainer_Params Parms{};

	Parms.CallFunc_SetAction_ReturnValue = CallFunc_SetAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.SetOtomoFollowAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_AIActionFunnel_Default_C::SetOtomoFollowAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "SetOtomoFollowAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.SetSkillAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_AIActionFunnel_Default_C::SetSkillAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "SetSkillAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.OnTick_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionFunnel_Default_C::OnTick_BP(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "OnTick_BP");

	Params::UBP_AIActionFunnel_Default_C_OnTick_BP_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.ExecuteUbergraph_BP_AIActionFunnel_Default
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionFunnel_Default_C::ExecuteUbergraph_BP_AIActionFunnel_Default(int32 EntryPoint, float K2Node_Event_DeltaTime, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "ExecuteUbergraph_BP_AIActionFunnel_Default");

	Params::UBP_AIActionFunnel_Default_C_ExecuteUbergraph_BP_AIActionFunnel_Default_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


