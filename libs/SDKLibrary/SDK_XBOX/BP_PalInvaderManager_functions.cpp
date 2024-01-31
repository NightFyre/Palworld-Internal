#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalInvaderManager.BP_PalInvaderManager_C
// (None)

class UClass* UBP_PalInvaderManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalInvaderManager_C");

	return Clss;
}


// BP_PalInvaderManager_C BP_PalInvaderManager.Default__BP_PalInvaderManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalInvaderManager_C* UBP_PalInvaderManager_C::GetDefaultObj()
{
	static class UBP_PalInvaderManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalInvaderManager_C*>(UBP_PalInvaderManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalInvaderManager.BP_PalInvaderManager_C.RequestIncidentVisitorNPC_BP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     OccuredBaseCamp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterInvader*Parameter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInvaderIncidentBase*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UPalInvaderIncidentBase*     CallFunc_RequestIncident_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UPalInvaderIncidentBase* UBP_PalInvaderManager_C::RequestIncidentVisitorNPC_BP(class UObject* OccuredBaseCamp, class UPalIncidentDynamicParameterInvader* Parameter, class UPalInvaderIncidentBase* CallFunc_RequestIncident_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalInvaderManager_C", "RequestIncidentVisitorNPC_BP");

	Params::UBP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP_Params Parms{};

	Parms.OccuredBaseCamp = OccuredBaseCamp;
	Parms.Parameter = Parameter;
	Parms.CallFunc_RequestIncident_ReturnValue = CallFunc_RequestIncident_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalInvaderManager.BP_PalInvaderManager_C.RequestIncidentInvaderEnemy_BP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     OccuredBaseCamp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterInvader*Parameter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInvaderIncidentBase*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UPalInvaderIncidentBase*     CallFunc_RequestIncident_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UPalInvaderIncidentBase* UBP_PalInvaderManager_C::RequestIncidentInvaderEnemy_BP(class UObject* OccuredBaseCamp, class UPalIncidentDynamicParameterInvader* Parameter, class UPalInvaderIncidentBase* CallFunc_RequestIncident_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalInvaderManager_C", "RequestIncidentInvaderEnemy_BP");

	Params::UBP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP_Params Parms{};

	Parms.OccuredBaseCamp = OccuredBaseCamp;
	Parms.Parameter = Parameter;
	Parms.CallFunc_RequestIncident_ReturnValue = CallFunc_RequestIncident_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalInvaderManager.BP_PalInvaderManager_C.RequestIncident
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        IncidentName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OccuredBaseCamp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterInvader*Parameter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInvaderIncidentBase*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentBase*            NewIncident                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInvaderIncidentBase*     K2Node_DynamicCast_AsPal_Invader_Incident_Base                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentSystem*          CallFunc_GetIncidentSystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentBase*            CallFunc_RequestIncident_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentSystem*          CallFunc_GetIncidentSystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPalInvaderIncidentBase* UBP_PalInvaderManager_C::RequestIncident(class FName IncidentName, class UObject* OccuredBaseCamp, class UPalIncidentDynamicParameterInvader* Parameter, class UPalIncidentBase* NewIncident, class UPalInvaderIncidentBase* K2Node_DynamicCast_AsPal_Invader_Incident_Base, bool K2Node_DynamicCast_bSuccess, class UPalIncidentSystem* CallFunc_GetIncidentSystem_ReturnValue, class UPalIncidentBase* CallFunc_RequestIncident_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIncidentSystem* CallFunc_GetIncidentSystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalInvaderManager_C", "RequestIncident");

	Params::UBP_PalInvaderManager_C_RequestIncident_Params Parms{};

	Parms.IncidentName = IncidentName;
	Parms.OccuredBaseCamp = OccuredBaseCamp;
	Parms.Parameter = Parameter;
	Parms.NewIncident = NewIncident;
	Parms.K2Node_DynamicCast_AsPal_Invader_Incident_Base = K2Node_DynamicCast_AsPal_Invader_Incident_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIncidentSystem_ReturnValue = CallFunc_GetIncidentSystem_ReturnValue;
	Parms.CallFunc_RequestIncident_ReturnValue = CallFunc_RequestIncident_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIncidentSystem_ReturnValue_1 = CallFunc_GetIncidentSystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalInvaderManager.BP_PalInvaderManager_C.OnIncidentStateNotify
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIncidentNotifyListener*  Listener                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalIncidentState       IncidentState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalIncidentNotifyParameter Parameter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_PalInvaderManager_C::OnIncidentStateNotify(class UPalIncidentNotifyListener* Listener, enum class EPalIncidentState IncidentState, struct FPalIncidentNotifyParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalInvaderManager_C", "OnIncidentStateNotify");

	Params::UBP_PalInvaderManager_C_OnIncidentStateNotify_Params Parms{};

	Parms.Listener = Listener;
	Parms.IncidentState = IncidentState;
	Parms.Parameter = Parameter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalInvaderManager.BP_PalInvaderManager_C.RegisterIncidentListener
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalInvaderManager_C::RegisterIncidentListener()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalInvaderManager_C", "RegisterIncidentListener");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalInvaderManager.BP_PalInvaderManager_C.UnregisterIncidentListener
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalInvaderManager_C::UnregisterIncidentListener()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalInvaderManager_C", "UnregisterIncidentListener");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalInvaderManager.BP_PalInvaderManager_C.ExecuteUbergraph_BP_PalInvaderManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentNotifyListener*  K2Node_CustomEvent_Listener                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalIncidentState       K2Node_CustomEvent_IncidentState                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalIncidentNotifyParameter K2Node_CustomEvent_Parameter                                     (ConstParm, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalIncidentNotifyListener_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalInvaderManager_C::ExecuteUbergraph_BP_PalInvaderManager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalIncidentNotifyListener* K2Node_CustomEvent_Listener, enum class EPalIncidentState K2Node_CustomEvent_IncidentState, const struct FPalIncidentNotifyParameter& K2Node_CustomEvent_Parameter, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_PalIncidentNotifyListener_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalInvaderManager_C", "ExecuteUbergraph_BP_PalInvaderManager");

	Params::UBP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Listener = K2Node_CustomEvent_Listener;
	Parms.K2Node_CustomEvent_IncidentState = K2Node_CustomEvent_IncidentState;
	Parms.K2Node_CustomEvent_Parameter = K2Node_CustomEvent_Parameter;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


