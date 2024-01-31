#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WorldSecurityLaw_AreaInvasion.BP_WorldSecurityLaw_AreaInvasion_C
// (None)

class UClass* UBP_WorldSecurityLaw_AreaInvasion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WorldSecurityLaw_AreaInvasion_C");

	return Clss;
}


// BP_WorldSecurityLaw_AreaInvasion_C BP_WorldSecurityLaw_AreaInvasion.Default__BP_WorldSecurityLaw_AreaInvasion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WorldSecurityLaw_AreaInvasion_C* UBP_WorldSecurityLaw_AreaInvasion_C::GetDefaultObj()
{
	static class UBP_WorldSecurityLaw_AreaInvasion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WorldSecurityLaw_AreaInvasion_C*>(UBP_WorldSecurityLaw_AreaInvasion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WorldSecurityLaw_AreaInvasion.BP_WorldSecurityLaw_AreaInvasion_C.Condition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InvasionActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CriminalHandle                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlActor_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_WorldSecurityLaw_AreaInvasion_C::Condition(class AActor* InvasionActor, class UPalIndividualCharacterHandle** CriminalHandle, bool CallFunc_IsPlayerControlActor_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WorldSecurityLaw_AreaInvasion_C", "Condition");

	Params::UBP_WorldSecurityLaw_AreaInvasion_C_Condition_Params Parms{};

	Parms.InvasionActor = InvasionActor;
	Parms.CallFunc_IsPlayerControlActor_ReturnValue = CallFunc_IsPlayerControlActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CriminalHandle != nullptr)
		*CriminalHandle = Parms.CriminalHandle;

	return Parms.ReturnValue;

}


// Function BP_WorldSecurityLaw_AreaInvasion.BP_WorldSecurityLaw_AreaInvasion_C.ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WorldSecurityLaw_AreaInvasion_C::ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WorldSecurityLaw_AreaInvasion_C", "ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion");

	Params::UBP_WorldSecurityLaw_AreaInvasion_C_ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


