#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ControllerDebugInterface.BPI_ControllerDebugInterface_C
// (None)

class UClass* IBPI_ControllerDebugInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ControllerDebugInterface_C");

	return Clss;
}


// BPI_ControllerDebugInterface_C BPI_ControllerDebugInterface.Default__BPI_ControllerDebugInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ControllerDebugInterface_C* IBPI_ControllerDebugInterface_C::GetDefaultObj()
{
	static class IBPI_ControllerDebugInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ControllerDebugInterface_C*>(IBPI_ControllerDebugInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ControllerDebugInterface.BPI_ControllerDebugInterface_C.DebugBattleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_ControllerDebugInterface_C::DebugBattleStart(class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ControllerDebugInterface_C", "DebugBattleStart");

	Params::IBPI_ControllerDebugInterface_C_DebugBattleStart_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}

}


