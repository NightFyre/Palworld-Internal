#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C
// (None)

class UClass* UBP_PalIncidentRandomActionBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalIncidentRandomActionBase_C");

	return Clss;
}


// BP_PalIncidentRandomActionBase_C BP_PalIncidentRandomActionBase.Default__BP_PalIncidentRandomActionBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalIncidentRandomActionBase_C* UBP_PalIncidentRandomActionBase_C::GetDefaultObj()
{
	static class UBP_PalIncidentRandomActionBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalIncidentRandomActionBase_C*>(UBP_PalIncidentRandomActionBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.GetSpawner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APalRandomIncidentNPCSpawner*Spawmer                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalIncidentRandom_C*     K2Node_DynamicCast_AsBP_Pal_Incident_Random                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionBase_C::GetSpawner(class APalRandomIncidentNPCSpawner** Spawmer, class UObject* CallFunc_GetOuterObject_ReturnValue, class UBP_PalIncidentRandom_C* K2Node_DynamicCast_AsBP_Pal_Incident_Random, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionBase_C", "GetSpawner");

	Params::UBP_PalIncidentRandomActionBase_C_GetSpawner_Params Parms{};

	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_Incident_Random = K2Node_DynamicCast_AsBP_Pal_Incident_Random;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Spawmer != nullptr)
		*Spawmer = Parms.Spawmer;

}


// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.GetSettingTableRow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSettings  Data                                                             (Parm, OutParm)
// class UBP_PalIncidentRandom_C*     CallFunc_GetOwnerIncident_Incident                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Setting_Table_Row_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSettings  CallFunc_Get_Setting_Table_Row_Data                              (None)
// class UBP_PalIncidentRandom_C*     CallFunc_GetOwnerIncident_Incident_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionBase_C::GetSettingTableRow(bool* Result, struct FPalRandomIncidentSettings* Data, class UBP_PalIncidentRandom_C* CallFunc_GetOwnerIncident_Incident, bool CallFunc_Get_Setting_Table_Row_Result, const struct FPalRandomIncidentSettings& CallFunc_Get_Setting_Table_Row_Data, class UBP_PalIncidentRandom_C* CallFunc_GetOwnerIncident_Incident_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionBase_C", "GetSettingTableRow");

	Params::UBP_PalIncidentRandomActionBase_C_GetSettingTableRow_Params Parms{};

	Parms.CallFunc_GetOwnerIncident_Incident = CallFunc_GetOwnerIncident_Incident;
	Parms.CallFunc_Get_Setting_Table_Row_Result = CallFunc_Get_Setting_Table_Row_Result;
	Parms.CallFunc_Get_Setting_Table_Row_Data = CallFunc_Get_Setting_Table_Row_Data;
	Parms.CallFunc_GetOwnerIncident_Incident_1 = CallFunc_GetOwnerIncident_Incident_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

}


// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.GetParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPalIncidentDynamicParameterRandom*DynamicParameter                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalIncidentRandom_C*     CallFunc_GetOwnerIncident_Incident                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterRandom*K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Random       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionBase_C::GetParameter(class UPalIncidentDynamicParameterRandom** DynamicParameter, class UBP_PalIncidentRandom_C* CallFunc_GetOwnerIncident_Incident, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class UPalIncidentDynamicParameterRandom* K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Random, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionBase_C", "GetParameter");

	Params::UBP_PalIncidentRandomActionBase_C_GetParameter_Params Parms{};

	Parms.CallFunc_GetOwnerIncident_Incident = CallFunc_GetOwnerIncident_Incident;
	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Random = K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Random;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (DynamicParameter != nullptr)
		*DynamicParameter = Parms.DynamicParameter;

}


// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.GetOwnerIncident
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBP_PalIncidentRandom_C*     Incident                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalIncidentRandom_C*     K2Node_DynamicCast_AsBP_Pal_Incident_Random                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionBase_C::GetOwnerIncident(class UBP_PalIncidentRandom_C** Incident, class UObject* CallFunc_GetOuterObject_ReturnValue, class UBP_PalIncidentRandom_C* K2Node_DynamicCast_AsBP_Pal_Incident_Random, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionBase_C", "GetOwnerIncident");

	Params::UBP_PalIncidentRandomActionBase_C_GetOwnerIncident_Params Parms{};

	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_Incident_Random = K2Node_DynamicCast_AsBP_Pal_Incident_Random;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Incident != nullptr)
		*Incident = Parms.Incident;

}


// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalIncidentRandomActionBase_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionBase_C", "OnTerminate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.ExecuteUbergraph_BP_PalIncidentRandomActionBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionBase_C::ExecuteUbergraph_BP_PalIncidentRandomActionBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionBase_C", "ExecuteUbergraph_BP_PalIncidentRandomActionBase");

	Params::UBP_PalIncidentRandomActionBase_C_ExecuteUbergraph_BP_PalIncidentRandomActionBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


