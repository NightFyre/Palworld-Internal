#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShooterAnime_ThrowBase.BP_ShooterAnime_ThrowBase_C
// (None)

class UClass* UBP_ShooterAnime_ThrowBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShooterAnime_ThrowBase_C");

	return Clss;
}


// BP_ShooterAnime_ThrowBase_C BP_ShooterAnime_ThrowBase.Default__BP_ShooterAnime_ThrowBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ShooterAnime_ThrowBase_C* UBP_ShooterAnime_ThrowBase_C::GetDefaultObj()
{
	static class UBP_ShooterAnime_ThrowBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ShooterAnime_ThrowBase_C*>(UBP_ShooterAnime_ThrowBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ShooterAnime_ThrowBase.BP_ShooterAnime_ThrowBase_C.ChangeRidePullTriggerAnime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalStepAxisType        Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ShooterAnime_ThrowBase_C::ChangeRidePullTriggerAnime(enum class EPalStepAxisType Direction, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShooterAnime_ThrowBase_C", "ChangeRidePullTriggerAnime");

	Params::UBP_ShooterAnime_ThrowBase_C_ChangeRidePullTriggerAnime_Params Parms{};

	Parms.Direction = Direction;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


