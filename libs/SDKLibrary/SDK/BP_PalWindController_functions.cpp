#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalWindController.BP_PalWindController_C
// (Actor)

class UClass* ABP_PalWindController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalWindController_C");

	return Clss;
}


// BP_PalWindController_C BP_PalWindController.Default__BP_PalWindController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalWindController_C* ABP_PalWindController_C::GetDefaultObj()
{
	static class ABP_PalWindController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalWindController_C*>(ABP_PalWindController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalWindController.BP_PalWindController_C.UpdateNPC
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalWindInfo                WindInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalWindController_C::UpdateNPC(struct FPalWindInfo& WindInfo, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalWindController_C", "UpdateNPC");

	Params::ABP_PalWindController_C_UpdateNPC_Params Parms{};

	Parms.WindInfo = WindInfo;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue = CallFunc_GetNiagaraParameterCollection_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalWindController.BP_PalWindController_C.UpdateNiagaraParameterCollection
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPalWindInfo                WindInfo                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PalWindController_C::UpdateNiagaraParameterCollection(struct FPalWindInfo& WindInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalWindController_C", "UpdateNiagaraParameterCollection");

	Params::ABP_PalWindController_C_UpdateNiagaraParameterCollection_Params Parms{};

	Parms.WindInfo = WindInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalWindController.BP_PalWindController_C.ExecuteUbergraph_BP_PalWindController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalWindInfo                K2Node_Event_WindInfo                                            (ConstParm, NoDestructor)

void ABP_PalWindController_C::ExecuteUbergraph_BP_PalWindController(int32 EntryPoint, const struct FPalWindInfo& K2Node_Event_WindInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalWindController_C", "ExecuteUbergraph_BP_PalWindController");

	Params::ABP_PalWindController_C_ExecuteUbergraph_BP_PalWindController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_WindInfo = K2Node_Event_WindInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


