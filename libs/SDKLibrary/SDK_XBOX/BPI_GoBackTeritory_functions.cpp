#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_GoBackTeritory.BPI_GoBackTeritory_C
// (None)

class UClass* IBPI_GoBackTeritory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_GoBackTeritory_C");

	return Clss;
}


// BPI_GoBackTeritory_C BPI_GoBackTeritory.Default__BPI_GoBackTeritory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_GoBackTeritory_C* IBPI_GoBackTeritory_C::GetDefaultObj()
{
	static class IBPI_GoBackTeritory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_GoBackTeritory_C*>(IBPI_GoBackTeritory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_GoBackTeritory.BPI_GoBackTeritory_C.GoBack_Teritory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_GoBackTeritory_C::GoBack_Teritory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_GoBackTeritory_C", "GoBack_Teritory");



	UObject::ProcessEvent(Func, nullptr);

}

}


