#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Player_Female_ShooterAnime_PalCarry.BP_Player_Female_ShooterAnime_PalCarry_C
// (None)

class UClass* UBP_Player_Female_ShooterAnime_PalCarry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Player_Female_ShooterAnime_PalCarry_C");

	return Clss;
}


// BP_Player_Female_ShooterAnime_PalCarry_C BP_Player_Female_ShooterAnime_PalCarry.Default__BP_Player_Female_ShooterAnime_PalCarry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Player_Female_ShooterAnime_PalCarry_C* UBP_Player_Female_ShooterAnime_PalCarry_C::GetDefaultObj()
{
	static class UBP_Player_Female_ShooterAnime_PalCarry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Player_Female_ShooterAnime_PalCarry_C*>(UBP_Player_Female_ShooterAnime_PalCarry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Player_Female_ShooterAnime_PalCarry.BP_Player_Female_ShooterAnime_PalCarry_C.ChangeRidePullTriggerAnime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalStepAxisType        Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Player_Female_ShooterAnime_PalCarry_C::ChangeRidePullTriggerAnime(enum class EPalStepAxisType Direction, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Player_Female_ShooterAnime_PalCarry_C", "ChangeRidePullTriggerAnime");

	Params::UBP_Player_Female_ShooterAnime_PalCarry_C_ChangeRidePullTriggerAnime_Params Parms{};

	Parms.Direction = Direction;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


