#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C
// (Actor)

class UClass* ABP_MonsterAIController_BaseCamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MonsterAIController_BaseCamp_C");

	return Clss;
}


// BP_MonsterAIController_BaseCamp_C BP_MonsterAIController_BaseCamp.Default__BP_MonsterAIController_BaseCamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MonsterAIController_BaseCamp_C* ABP_MonsterAIController_BaseCamp_C::GetDefaultObj()
{
	static class ABP_MonsterAIController_BaseCamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MonsterAIController_BaseCamp_C*>(ABP_MonsterAIController_BaseCamp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.GetWorkerModuleClass
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UPalAIControllerWorkerModule>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UPalAIControllerWorkerModule> ABP_MonsterAIController_BaseCamp_C::GetWorkerModuleClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "GetWorkerModuleClass");

	Params::ABP_MonsterAIController_BaseCamp_C_GetWorkerModuleClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionByClass
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UPalAIActionBase>ActionClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalAIActionBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAIRequestPriority      CallFunc_GetRequestPriority_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPalAIActionBase* ABP_MonsterAIController_BaseCamp_C::SetBaseCampActionByClass(TSubclassOf<class UPalAIActionBase> ActionClass, class UPalAIActionBase* CallFunc_SpawnObject_ReturnValue, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, enum class EAIRequestPriority CallFunc_GetRequestPriority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampActionByClass");

	Params::ABP_MonsterAIController_BaseCamp_C_SetBaseCampActionByClass_Params Parms{};

	Parms.ActionClass = ActionClass;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRequestPriority_ReturnValue = CallFunc_GetRequestPriority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionSleep
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBaseCampSleep*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetBaseCampActionByClass_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIActionBaseCamp_Sleep_C*K2Node_DynamicCast_AsBP_AIAction_Base_Camp_Sleep                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPalAIActionBaseCampSleep* ABP_MonsterAIController_BaseCamp_C::SetBaseCampActionSleep(class UPalAIActionBase* CallFunc_SetBaseCampActionByClass_ReturnValue, class UBP_AIActionBaseCamp_Sleep_C* K2Node_DynamicCast_AsBP_AIAction_Base_Camp_Sleep, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampActionSleep");

	Params::ABP_MonsterAIController_BaseCamp_C_SetBaseCampActionSleep_Params Parms{};

	Parms.CallFunc_SetBaseCampActionByClass_ReturnValue = CallFunc_SetBaseCampActionByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AIAction_Base_Camp_Sleep = K2Node_DynamicCast_AsBP_AIAction_Base_Camp_Sleep;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.TerminateBaseCampActionByClass_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ActionClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::TerminateBaseCampActionByClass_Internal(class UClass* ActionClass, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "TerminateBaseCampActionByClass_Internal");

	Params::ABP_MonsterAIController_BaseCamp_C_TerminateBaseCampActionByClass_Internal_Params Parms{};

	Parms.ActionClass = ActionClass;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionComponent*       AIActionComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*    NewAction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAIRequestPriority      CallFunc_GetRequestPriority_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_Internal(class UPalAIActionComponent* AIActionComponent, class UPalAIActionBaseCampBase* NewAction, enum class EAIRequestPriority CallFunc_GetRequestPriority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_Internal");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_Internal_Params Parms{};

	Parms.AIActionComponent = AIActionComponent;
	Parms.NewAction = NewAction;
	Parms.CallFunc_GetRequestPriority_ReturnValue = CallFunc_GetRequestPriority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_SpawningForWorker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_AIAction_BaseCampSpawningForWorker_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_SpawningForWorker(class UBP_AIAction_BaseCampSpawningForWorker_C* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_SpawningForWorker");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_SpawningForWorker_Params Parms{};

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.FindFixedAssignableObject
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       WorkId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Range                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFound                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalBaseCampAssignableObjectInterface>FoundObject                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*IndividualHandle                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*           BaseCamp                                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRadius_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalBaseCampAssignableObjectInterface>CallFunc_FindNearestAssignableObject_FoundObject                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_FindNearestAssignableObject_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetBaseCampId_Base_Camp_Id                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWorkBase*                CallFunc_FindWorkAssignableObject_FoundObject                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindWorkAssignableObject_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampManager*         CallFunc_GetBaseCampManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*           CallFunc_TryGetModel_OutModel                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetModel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindNearestAssignableObject_Range_ImplicitCast          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::FindFixedAssignableObject(const struct FGuid& WorkId, double Range, bool* bFound, TScriptInterface<class IPalBaseCampAssignableObjectInterface>* FoundObject, class UPalIndividualCharacterHandle* IndividualHandle, class UPalBaseCampModel* BaseCamp, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, float CallFunc_GetRadius_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, TScriptInterface<class IPalBaseCampAssignableObjectInterface> CallFunc_FindNearestAssignableObject_FoundObject, bool CallFunc_FindNearestAssignableObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetBaseCampId_Base_Camp_Id, class UPalWorkBase* CallFunc_FindWorkAssignableObject_FoundObject, bool CallFunc_FindWorkAssignableObject_ReturnValue, class UPalBaseCampManager* CallFunc_GetBaseCampManager_ReturnValue, class UPalBaseCampModel* CallFunc_TryGetModel_OutModel, bool CallFunc_TryGetModel_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_FindNearestAssignableObject_Range_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "FindFixedAssignableObject");

	Params::ABP_MonsterAIController_BaseCamp_C_FindFixedAssignableObject_Params Parms{};

	Parms.WorkId = WorkId;
	Parms.Range = Range;
	Parms.IndividualHandle = IndividualHandle;
	Parms.BaseCamp = BaseCamp;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetRadius_ReturnValue = CallFunc_GetRadius_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_FindNearestAssignableObject_FoundObject = CallFunc_FindNearestAssignableObject_FoundObject;
	Parms.CallFunc_FindNearestAssignableObject_ReturnValue = CallFunc_FindNearestAssignableObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBaseCampId_Base_Camp_Id = CallFunc_GetBaseCampId_Base_Camp_Id;
	Parms.CallFunc_FindWorkAssignableObject_FoundObject = CallFunc_FindWorkAssignableObject_FoundObject;
	Parms.CallFunc_FindWorkAssignableObject_ReturnValue = CallFunc_FindWorkAssignableObject_ReturnValue;
	Parms.CallFunc_GetBaseCampManager_ReturnValue = CallFunc_GetBaseCampManager_ReturnValue;
	Parms.CallFunc_TryGetModel_OutModel = CallFunc_TryGetModel_OutModel;
	Parms.CallFunc_TryGetModel_ReturnValue = CallFunc_TryGetModel_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_FindNearestAssignableObject_Range_ImplicitCast = CallFunc_FindNearestAssignableObject_Range_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bFound != nullptr)
		*bFound = Parms.bFound;

	if (FoundObject != nullptr)
		*FoundObject = Parms.FoundObject;

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.FailedFixedAssign
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalCharacterParameterComponent*CharacterParameter                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalNetworkTransmitter*      CallFunc_GetNetworkTransmitter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNetworkBaseCampComponent*CallFunc_GetBaseCamp_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_SetAction_BaseCamp_Worker_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeWorker* K2Node_DynamicCast_AsPal_AIAction_Composite_Worker               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              CallFunc_GetIndividualID_ReturnValue                             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalMonsterControllerBaseCampLogContentK2Node_MakeStruct_PalMonsterControllerBaseCampLogContent         (None)

void ABP_MonsterAIController_BaseCamp_C::FailedFixedAssign(class UPalCharacterParameterComponent* CharacterParameter, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalNetworkTransmitter* CallFunc_GetNetworkTransmitter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalNetworkBaseCampComponent* CallFunc_GetBaseCamp_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionCompositeBase* CallFunc_SetAction_BaseCamp_Worker_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalAIActionCompositeWorker* K2Node_DynamicCast_AsPal_AIAction_Composite_Worker, bool K2Node_DynamicCast_bSuccess, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FPalMonsterControllerBaseCampLogContent& K2Node_MakeStruct_PalMonsterControllerBaseCampLogContent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "FailedFixedAssign");

	Params::ABP_MonsterAIController_BaseCamp_C_FailedFixedAssign_Params Parms{};

	Parms.CharacterParameter = CharacterParameter;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetNetworkTransmitter_ReturnValue = CallFunc_GetNetworkTransmitter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBaseCamp_ReturnValue = CallFunc_GetBaseCamp_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SetAction_BaseCamp_Worker_ReturnValue = CallFunc_SetAction_BaseCamp_Worker_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Composite_Worker = K2Node_DynamicCast_AsPal_AIAction_Composite_Worker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIndividualID_ReturnValue = CallFunc_GetIndividualID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeStruct_PalMonsterControllerBaseCampLogContent = K2Node_MakeStruct_PalMonsterControllerBaseCampLogContent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetCompositeActionBaseCamp
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CompositeActionClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       AIActionComp                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetAIActionComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_AIActionComposite_BaseCamp_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_GetCompositeRoot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_GetCompositeRoot_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UPalAIActionCompositeBase* ABP_MonsterAIController_BaseCamp_C::SetCompositeActionBaseCamp(class UClass* CompositeActionClass, class UPalAIActionComponent* AIActionComp, class UPalAIActionComponent* CallFunc_GetAIActionComponent_ReturnValue, class UBP_AIActionComposite_BaseCamp_C* CallFunc_SpawnObject_ReturnValue, class UPalAIActionCompositeBase* CallFunc_GetCompositeRoot_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class UPalAIActionCompositeBase* CallFunc_GetCompositeRoot_ReturnValue_1, class UPalAIActionCompositeBase* CallFunc_SpawnObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetCompositeActionBaseCamp");

	Params::ABP_MonsterAIController_BaseCamp_C_SetCompositeActionBaseCamp_Params Parms{};

	Parms.CompositeActionClass = CompositeActionClass;
	Parms.AIActionComp = AIActionComp;
	Parms.CallFunc_GetAIActionComponent_ReturnValue = CallFunc_GetAIActionComponent_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetCompositeRoot_ReturnValue = CallFunc_GetCompositeRoot_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_GetCompositeRoot_ReturnValue_1 = CallFunc_GetCompositeRoot_ReturnValue_1;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.GetBaseCampId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGuid                       Base_Camp_Id                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetBaseCampId_ReturnValue                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::GetBaseCampId(struct FGuid* Base_Camp_Id, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGuid& CallFunc_GetBaseCampId_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "GetBaseCampId");

	Params::ABP_MonsterAIController_BaseCamp_C_GetBaseCampId_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetBaseCampId_ReturnValue = CallFunc_GetBaseCampId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Base_Camp_Id != nullptr)
		*Base_Camp_Id = std::move(Parms.Base_Camp_Id);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_WorkerEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBase*            Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAIRequestPriority      Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetAIActionComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_WorkerEvent(class UPalAIActionBase* Action, enum class EAIRequestPriority Priority, class UPalAIActionComponent* CallFunc_GetAIActionComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_WorkerEvent");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_WorkerEvent_Params Parms{};

	Parms.Action = Action;
	Parms.Priority = Priority;
	Parms.CallFunc_GetAIActionComponent_ReturnValue = CallFunc_GetAIActionComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_Sleep
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_AIActionBaseCamp_Sleep_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_Sleep(class UBP_AIActionBaseCamp_Sleep_C* CallFunc_SpawnObject_ReturnValue, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_Sleep");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_Sleep_Params Parms{};

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_SleepActively
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalAIActionBaseCampSleepActivelyParameterParameter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UBP_AIActionBaseCamp_SleepActively_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_SleepActively(struct FPalAIActionBaseCampSleepActivelyParameter& Parameter, class UBP_AIActionBaseCamp_SleepActively_C* CallFunc_SpawnObject_ReturnValue, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_SleepActively");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_SleepActively_Params Parms{};

	Parms.Parameter = Parameter;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_RecoverHungry
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalMonsterControllerBaseCampHungryParameterParameter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UPalAIActionBaseCampBase*    Action                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*    CallFunc_SetAction_BaseCamp_Action                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalMonsterControllerBaseCampHungryParameterCallFunc_SetHungryParameterToDefault_ReturnValue                 (NoDestructor)
// class UPalAIActionBaseCampRecoverHungry*K2Node_DynamicCast_AsPal_AIAction_Base_Camp_Recover_Hungry       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_RecoverHungry(const struct FPalMonsterControllerBaseCampHungryParameter& Parameter, class UPalAIActionBaseCampBase** Action, class UPalAIActionBaseCampBase* CallFunc_SetAction_BaseCamp_Action, const struct FPalMonsterControllerBaseCampHungryParameter& CallFunc_SetHungryParameterToDefault_ReturnValue, class UPalAIActionBaseCampRecoverHungry* K2Node_DynamicCast_AsPal_AIAction_Base_Camp_Recover_Hungry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_RecoverHungry");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_RecoverHungry_Params Parms{};

	Parms.Parameter = Parameter;
	Parms.CallFunc_SetAction_BaseCamp_Action = CallFunc_SetAction_BaseCamp_Action;
	Parms.CallFunc_SetHungryParameterToDefault_ReturnValue = CallFunc_SetHungryParameterToDefault_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Base_Camp_Recover_Hungry = K2Node_DynamicCast_AsPal_AIAction_Base_Camp_Recover_Hungry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.NotifyOrderCommandToCurrentRootAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalMapBaseCampWorkerOrderTypeOrderType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_GetCompositeRoot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBaseCamp*K2Node_DynamicCast_AsPal_AIAction_Composite_Base_Camp            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::NotifyOrderCommandToCurrentRootAction(enum class EPalMapBaseCampWorkerOrderType OrderType, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionCompositeBase* CallFunc_GetCompositeRoot_ReturnValue, class UPalAIActionCompositeBaseCamp* K2Node_DynamicCast_AsPal_AIAction_Composite_Base_Camp, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "NotifyOrderCommandToCurrentRootAction");

	Params::ABP_MonsterAIController_BaseCamp_C_NotifyOrderCommandToCurrentRootAction_Params Parms{};

	Parms.OrderType = OrderType;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetCompositeRoot_ReturnValue = CallFunc_GetCompositeRoot_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Composite_Base_Camp = K2Node_DynamicCast_AsPal_AIAction_Composite_Base_Camp;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp_FighterGunner
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBaseCampBase*    Action                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*    CallFunc_SetAction_BaseCamp_Action                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_BaseCamp_FighterGunner(class UPalAIActionBaseCampBase** Action, class UPalAIActionBaseCampBase* CallFunc_SetAction_BaseCamp_Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_BaseCamp_FighterGunner");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_FighterGunner_Params Parms{};

	Parms.CallFunc_SetAction_BaseCamp_Action = CallFunc_SetAction_BaseCamp_Action;

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp_Fighter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBaseCampBase*    Action                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*    CallFunc_SetAction_BaseCamp_Action                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_BaseCamp_Fighter(class UPalAIActionBaseCampBase** Action, class UPalAIActionBaseCampBase* CallFunc_SetAction_BaseCamp_Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_BaseCamp_Fighter");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_Fighter_Params Parms{};

	Parms.CallFunc_SetAction_BaseCamp_Action = CallFunc_SetAction_BaseCamp_Action;

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp_Fighter_ByDefenseType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalMapObjectDefenseTypeDefenseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampFighter* FighterAction                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*    Action                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampFighter* K2Node_DynamicCast_AsPal_AIAction_Base_Camp_Fighter              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*    CallFunc_SetAction_BaseCamp_FighterGunner_Action                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*    CallFunc_SetAction_BaseCamp_Fighter_Action                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_BaseCamp_Fighter_ByDefenseType(enum class EPalMapObjectDefenseType DefenseType, class UPalAIActionBaseCampFighter** FighterAction, class UPalAIActionBaseCampBase* Action, class UPalAIActionBaseCampFighter* K2Node_DynamicCast_AsPal_AIAction_Base_Camp_Fighter, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UPalAIActionBaseCampBase* CallFunc_SetAction_BaseCamp_FighterGunner_Action, class UPalAIActionBaseCampBase* CallFunc_SetAction_BaseCamp_Fighter_Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_BaseCamp_Fighter_ByDefenseType");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_Fighter_ByDefenseType_Params Parms{};

	Parms.DefenseType = DefenseType;
	Parms.Action = Action;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Base_Camp_Fighter = K2Node_DynamicCast_AsPal_AIAction_Base_Camp_Fighter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetAction_BaseCamp_FighterGunner_Action = CallFunc_SetAction_BaseCamp_FighterGunner_Action;
	Parms.CallFunc_SetAction_BaseCamp_Fighter_Action = CallFunc_SetAction_BaseCamp_Fighter_Action;

	UObject::ProcessEvent(Func, &Parms);

	if (FighterAction != nullptr)
		*FighterAction = Parms.FighterAction;

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp_Worker
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionCompositeBase*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeWorker* CompositeAction                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_SetCompositeActionBaseCamp_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UPalAIActionCompositeBase* ABP_MonsterAIController_BaseCamp_C::SetAction_BaseCamp_Worker(class UPalAIActionCompositeWorker* CompositeAction, class UPalAIActionCompositeBase* CallFunc_SetCompositeActionBaseCamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_BaseCamp_Worker");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_Worker_Params Parms{};

	Parms.CompositeAction = CompositeAction;
	Parms.CallFunc_SetCompositeActionBaseCamp_ReturnValue = CallFunc_SetCompositeActionBaseCamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_WithFixAssignRange
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       TargetWorkProgressId                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Range                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalBaseCampAssignableObjectInterface>FoundAssignableObject                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*           BaseCamp                                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_SetAction_BaseCamp_Worker_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindFixedAssignableObject_bFound                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalBaseCampAssignableObjectInterface>CallFunc_FindFixedAssignableObject_FoundObject                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeWorker* K2Node_DynamicCast_AsPal_AIAction_Composite_Worker               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalMapObjectModelInterface>CallFunc_ToMapObjectModel_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalWorkBase*                K2Node_DynamicCast_AsPal_Work_Base                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetModelId_ReturnValue                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetWorkId_ReturnValue                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBaseCampAssignType  CallFunc_GetAssignType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_SetAction_BaseCamp_Worker_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeWorker* K2Node_DynamicCast_AsPal_AIAction_Composite_Worker_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_WithFixAssignRange(struct FGuid& TargetWorkProgressId, double Range, TScriptInterface<class IPalBaseCampAssignableObjectInterface> FoundAssignableObject, class UPalIndividualCharacterSlot* NewLocalVar_0, class UPalBaseCampModel* BaseCamp, class UPalAIActionCompositeBase* CallFunc_SetAction_BaseCamp_Worker_ReturnValue, bool CallFunc_FindFixedAssignableObject_bFound, TScriptInterface<class IPalBaseCampAssignableObjectInterface> CallFunc_FindFixedAssignableObject_FoundObject, class UPalAIActionCompositeWorker* K2Node_DynamicCast_AsPal_AIAction_Composite_Worker, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IPalMapObjectModelInterface> CallFunc_ToMapObjectModel_ReturnValue, class UPalWorkBase* K2Node_DynamicCast_AsPal_Work_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FGuid& CallFunc_GetModelId_ReturnValue, const struct FGuid& CallFunc_GetWorkId_ReturnValue, enum class EPalBaseCampAssignType CallFunc_GetAssignType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPalAIActionCompositeBase* CallFunc_SetAction_BaseCamp_Worker_ReturnValue_1, class UPalAIActionCompositeWorker* K2Node_DynamicCast_AsPal_AIAction_Composite_Worker_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_WithFixAssignRange");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_WithFixAssignRange_Params Parms{};

	Parms.TargetWorkProgressId = TargetWorkProgressId;
	Parms.Range = Range;
	Parms.FoundAssignableObject = FoundAssignableObject;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.BaseCamp = BaseCamp;
	Parms.CallFunc_SetAction_BaseCamp_Worker_ReturnValue = CallFunc_SetAction_BaseCamp_Worker_ReturnValue;
	Parms.CallFunc_FindFixedAssignableObject_bFound = CallFunc_FindFixedAssignableObject_bFound;
	Parms.CallFunc_FindFixedAssignableObject_FoundObject = CallFunc_FindFixedAssignableObject_FoundObject;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Composite_Worker = K2Node_DynamicCast_AsPal_AIAction_Composite_Worker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ToMapObjectModel_ReturnValue = CallFunc_ToMapObjectModel_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Work_Base = K2Node_DynamicCast_AsPal_Work_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetModelId_ReturnValue = CallFunc_GetModelId_ReturnValue;
	Parms.CallFunc_GetWorkId_ReturnValue = CallFunc_GetWorkId_ReturnValue;
	Parms.CallFunc_GetAssignType_ReturnValue = CallFunc_GetAssignType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetAction_BaseCamp_Worker_ReturnValue_1 = CallFunc_SetAction_BaseCamp_Worker_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Composite_Worker_1 = K2Node_DynamicCast_AsPal_AIAction_Composite_Worker_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AIActionClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAIRequestPriority      Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*    Action                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetAIActionComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*    CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_BaseCamp(class UClass* AIActionClass, enum class EAIRequestPriority Priority, class UPalAIActionBaseCampBase** Action, class UPalAIActionComponent* CallFunc_GetAIActionComponent_ReturnValue, class UPalAIActionBaseCampBase* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_BaseCamp");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_Params Parms{};

	Parms.AIActionClass = AIActionClass;
	Parms.Priority = Priority;
	Parms.CallFunc_GetAIActionComponent_ReturnValue = CallFunc_GetAIActionComponent_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_DefaultPos
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionComponent*       ActionComp                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalBaseCampManager*         CallFunc_GetBaseCampManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetBaseCampId_Base_Camp_Id                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*           CallFunc_TryGetModel_OutModel                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetModel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_ReturnToDefaultPosition_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRange_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Setup_MoveEndDistance_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_DefaultPos(class UPalAIActionComponent* ActionComp, class UPalBaseCampManager* CallFunc_GetBaseCampManager_ReturnValue, const struct FGuid& CallFunc_GetBaseCampId_Base_Camp_Id, class UPalBaseCampModel* CallFunc_TryGetModel_OutModel, bool CallFunc_TryGetModel_ReturnValue, class UBP_AIAction_ReturnToDefaultPosition_C* CallFunc_SpawnObject_ReturnValue, float CallFunc_GetRange_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, double CallFunc_Setup_MoveEndDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_DefaultPos");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_DefaultPos_Params Parms{};

	Parms.ActionComp = ActionComp;
	Parms.CallFunc_GetBaseCampManager_ReturnValue = CallFunc_GetBaseCampManager_ReturnValue;
	Parms.CallFunc_GetBaseCampId_Base_Camp_Id = CallFunc_GetBaseCampId_Base_Camp_Id;
	Parms.CallFunc_TryGetModel_OutModel = CallFunc_TryGetModel_OutModel;
	Parms.CallFunc_TryGetModel_ReturnValue = CallFunc_TryGetModel_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetRange_ReturnValue = CallFunc_GetRange_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Setup_MoveEndDistance_ImplicitCast = CallFunc_Setup_MoveEndDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_Liftup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionLiftup*          CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_PushAction_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_Liftup(class UPalAIActionLiftup* CallFunc_SpawnObject_ReturnValue, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_PushAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_Liftup");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_Liftup_Params Parms{};

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_PushAction_ReturnValue = CallFunc_K2_PushAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_CapturedStorage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_AIAction_WanderingCage_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetAction_CapturedStorage(class UBP_AIAction_WanderingCage_C* CallFunc_SpawnObject_ReturnValue, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetAction_CapturedStorage");

	Params::ABP_MonsterAIController_BaseCamp_C_SetAction_CapturedStorage_Params Parms{};

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetCapturedStorageAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIController_BaseCamp_C::SetCapturedStorageAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetCapturedStorageAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampFighterAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampFighterAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampFighterAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionWithFixAssign
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       TargetWorkProgressId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DistanceFixAssignTargetting                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampActionWithFixAssign(struct FGuid& TargetWorkProgressId, float DistanceFixAssignTargetting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampActionWithFixAssign");

	Params::ABP_MonsterAIController_BaseCamp_C_SetBaseCampActionWithFixAssign_Params Parms{};

	Parms.TargetWorkProgressId = TargetWorkProgressId;
	Parms.DistanceFixAssignTargetting = DistanceFixAssignTargetting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.NotifyOrderCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalMapBaseCampWorkerOrderTypeOrderType                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::NotifyOrderCommand(enum class EPalMapBaseCampWorkerOrderType OrderType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "NotifyOrderCommand");

	Params::ABP_MonsterAIController_BaseCamp_C_NotifyOrderCommand_Params Parms{};

	Parms.OrderType = OrderType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "ReceivePossess");

	Params::ABP_MonsterAIController_BaseCamp_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.InterruptReturnBackToBaseCamp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIController_BaseCamp_C::InterruptReturnBackToBaseCamp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "InterruptReturnBackToBaseCamp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampFighterGunnerAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampFighterGunnerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampFighterGunnerAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.OnDeadDelegate_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonsterAIController_BaseCamp_C::OnDeadDelegate______0(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "OnDeadDelegate_¤ÙóÈ_0");

	Params::ABP_MonsterAIController_BaseCamp_C_OnDeadDelegate______0_Params Parms{};

	Parms.DeadInfo = DeadInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.InterruptRecoverHungryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalMonsterControllerBaseCampHungryParameterParameter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonsterAIController_BaseCamp_C::InterruptRecoverHungryAction(const struct FPalMonsterControllerBaseCampHungryParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "InterruptRecoverHungryAction");

	Params::ABP_MonsterAIController_BaseCamp_C_InterruptRecoverHungryAction_Params Parms{};

	Parms.Parameter = Parameter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetDefaultPositionAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIController_BaseCamp_C::SetDefaultPositionAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetDefaultPositionAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionSleepMedicalBed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       TargetBedConcreteModelId                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampActionSleepMedicalBed(struct FGuid& TargetBedConcreteModelId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampActionSleepMedicalBed");

	Params::ABP_MonsterAIController_BaseCamp_C_SetBaseCampActionSleepMedicalBed_Params Parms{};

	Parms.TargetBedConcreteModelId = TargetBedConcreteModelId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.InterruptPlayWorkerEventAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBase*            Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAIRequestPriority      Priority                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::InterruptPlayWorkerEventAction(class UPalAIActionBase* Action, enum class EAIRequestPriority Priority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "InterruptPlayWorkerEventAction");

	Params::ABP_MonsterAIController_BaseCamp_C_InterruptPlayWorkerEventAction_Params Parms{};

	Parms.Action = Action;
	Parms.Priority = Priority;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionLift
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampActionLift()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampActionLift");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.ShowBaseCampLog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalMonsterControllerBaseCampLogContentContent                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MonsterAIController_BaseCamp_C::ShowBaseCampLog(struct FPalMonsterControllerBaseCampLogContent& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "ShowBaseCampLog");

	Params::ABP_MonsterAIController_BaseCamp_C_ShowBaseCampLog_Params Parms{};

	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionSpawningForWork
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIController_BaseCamp_C::SetBaseCampActionSpawningForWork()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "SetBaseCampActionSpawningForWork");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.InterruptSleepActivelyAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalAIActionBaseCampSleepActivelyParameterParameter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_MonsterAIController_BaseCamp_C::InterruptSleepActivelyAction(struct FPalAIActionBaseCampSleepActivelyParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "InterruptSleepActivelyAction");

	Params::ABP_MonsterAIController_BaseCamp_C_InterruptSleepActivelyAction_Params Parms{};

	Parms.Parameter = Parameter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.TerminateBaseCampActionByClass
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UPalAIActionBase>ActionClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::TerminateBaseCampActionByClass(TSubclassOf<class UPalAIActionBase> ActionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "TerminateBaseCampActionByClass");

	Params::ABP_MonsterAIController_BaseCamp_C_TerminateBaseCampActionByClass_Params Parms{};

	Parms.ActionClass = ActionClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.ExecuteUbergraph_BP_MonsterAIController_BaseCamp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UPalAIActionBase>K2Node_Event_ActionClass                                         (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_Event_TargetWorkProgressId                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DistanceFixAssignTargetting                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_SetAction_BaseCamp_Worker_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*    CallFunc_SetAction_BaseCamp_Fighter_Action                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalMapBaseCampWorkerOrderTypeK2Node_Event_OrderType                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampBase*    CallFunc_SetAction_BaseCamp_FighterGunner_Action                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDeadInfo                K2Node_CustomEvent_DeadInfo                                      (NoDestructor)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalMonsterControllerBaseCampHungryParameterK2Node_Event_parameter_1                                         (ConstParm, NoDestructor)
// class UPalAIActionBaseCampBase*    CallFunc_SetAction_RecoverHungry_Action                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_Event_TargetBedConcreteModelId                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            K2Node_Event_Action                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAIRequestPriority      K2Node_Event_Priority                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalMonsterControllerBaseCampLogContentK2Node_Event_Content                                             (ConstParm)
// struct FPalAIActionBaseCampSleepActivelyParameterK2Node_Event_parameter                                           (ConstParm, NoDestructor)
// double                             CallFunc_SetAction_WithFixAssignRange_Range_ImplicitCast         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_BaseCamp_C::ExecuteUbergraph_BP_MonsterAIController_BaseCamp(int32 EntryPoint, TSubclassOf<class UPalAIActionBase> K2Node_Event_ActionClass, TArray<class AActor*>& Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FGuid& K2Node_Event_TargetWorkProgressId, float K2Node_Event_DistanceFixAssignTargetting, class UPalAIActionCompositeBase* CallFunc_SetAction_BaseCamp_Worker_ReturnValue, class UPalAIActionBaseCampBase* CallFunc_SetAction_BaseCamp_Fighter_Action, enum class EPalMapBaseCampWorkerOrderType K2Node_Event_OrderType, class APawn* K2Node_Event_PossessedPawn, class UPalAIActionBaseCampBase* CallFunc_SetAction_BaseCamp_FighterGunner_Action, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FPalMonsterControllerBaseCampHungryParameter& K2Node_Event_parameter_1, class UPalAIActionBaseCampBase* CallFunc_SetAction_RecoverHungry_Action, const struct FGuid& K2Node_Event_TargetBedConcreteModelId, class UPalAIActionBase* K2Node_Event_Action, enum class EAIRequestPriority K2Node_Event_Priority, const struct FPalMonsterControllerBaseCampLogContent& K2Node_Event_Content, const struct FPalAIActionBaseCampSleepActivelyParameter& K2Node_Event_parameter, double CallFunc_SetAction_WithFixAssignRange_Range_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_BaseCamp_C", "ExecuteUbergraph_BP_MonsterAIController_BaseCamp");

	Params::ABP_MonsterAIController_BaseCamp_C_ExecuteUbergraph_BP_MonsterAIController_BaseCamp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionClass = K2Node_Event_ActionClass;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_Event_TargetWorkProgressId = K2Node_Event_TargetWorkProgressId;
	Parms.K2Node_Event_DistanceFixAssignTargetting = K2Node_Event_DistanceFixAssignTargetting;
	Parms.CallFunc_SetAction_BaseCamp_Worker_ReturnValue = CallFunc_SetAction_BaseCamp_Worker_ReturnValue;
	Parms.CallFunc_SetAction_BaseCamp_Fighter_Action = CallFunc_SetAction_BaseCamp_Fighter_Action;
	Parms.K2Node_Event_OrderType = K2Node_Event_OrderType;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.CallFunc_SetAction_BaseCamp_FighterGunner_Action = CallFunc_SetAction_BaseCamp_FighterGunner_Action;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.K2Node_CustomEvent_DeadInfo = K2Node_CustomEvent_DeadInfo;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.K2Node_Event_parameter_1 = K2Node_Event_parameter_1;
	Parms.CallFunc_SetAction_RecoverHungry_Action = CallFunc_SetAction_RecoverHungry_Action;
	Parms.K2Node_Event_TargetBedConcreteModelId = K2Node_Event_TargetBedConcreteModelId;
	Parms.K2Node_Event_Action = K2Node_Event_Action;
	Parms.K2Node_Event_Priority = K2Node_Event_Priority;
	Parms.K2Node_Event_Content = K2Node_Event_Content;
	Parms.K2Node_Event_parameter = K2Node_Event_parameter;
	Parms.CallFunc_SetAction_WithFixAssignRange_Range_ImplicitCast = CallFunc_SetAction_WithFixAssignRange_Range_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


