#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_GetPalAIBlackboard.BPI_GetPalAIBlackboard_C
// (None)

class UClass* IBPI_GetPalAIBlackboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_GetPalAIBlackboard_C");

	return Clss;
}


// BPI_GetPalAIBlackboard_C BPI_GetPalAIBlackboard.Default__BPI_GetPalAIBlackboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_GetPalAIBlackboard_C* IBPI_GetPalAIBlackboard_C::GetDefaultObj()
{
	static class IBPI_GetPalAIBlackboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_GetPalAIBlackboard_C*>(IBPI_GetPalAIBlackboard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_GetPalAIBlackboard.BPI_GetPalAIBlackboard_C.GetLeaderBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*LeaderPalBrackboard                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_GetPalAIBlackboard_C::GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_GetPalAIBlackboard_C", "GetLeaderBB");

	Params::IBPI_GetPalAIBlackboard_C_GetLeaderBB_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LeaderPalBrackboard != nullptr)
		*LeaderPalBrackboard = Parms.LeaderPalBrackboard;

}


// Function BPI_GetPalAIBlackboard.BPI_GetPalAIBlackboard_C.GetMyBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*PalBrackboard                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_GetPalAIBlackboard_C::GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_GetPalAIBlackboard_C", "GetMyBB");

	Params::IBPI_GetPalAIBlackboard_C_GetMyBB_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PalBrackboard != nullptr)
		*PalBrackboard = Parms.PalBrackboard;

}

}


