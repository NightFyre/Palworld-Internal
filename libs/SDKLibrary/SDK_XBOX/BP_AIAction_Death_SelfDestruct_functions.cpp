#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Death_SelfDestruct.BP_AIAction_Death_SelfDestruct_C
// (None)

class UClass* UBP_AIAction_Death_SelfDestruct_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Death_SelfDestruct_C");

	return Clss;
}


// BP_AIAction_Death_SelfDestruct_C BP_AIAction_Death_SelfDestruct.Default__BP_AIAction_Death_SelfDestruct_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Death_SelfDestruct_C* UBP_AIAction_Death_SelfDestruct_C::GetDefaultObj()
{
	static class UBP_AIAction_Death_SelfDestruct_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Death_SelfDestruct_C*>(UBP_AIAction_Death_SelfDestruct_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Death_SelfDestruct.BP_AIAction_Death_SelfDestruct_C.GetDeathActionClass
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      DeathAction                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Death_SelfDestruct_C::GetDeathActionClass(class UClass** DeathAction, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Death_SelfDestruct_C", "GetDeathActionClass");

	Params::UBP_AIAction_Death_SelfDestruct_C_GetDeathActionClass_Params Parms{};

	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DeathAction != nullptr)
		*DeathAction = Parms.DeathAction;

}

}


