#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Work_Wait.BP_AIAction_Work_Wait_C
// (None)

class UClass* UBP_AIAction_Work_Wait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Work_Wait_C");

	return Clss;
}


// BP_AIAction_Work_Wait_C BP_AIAction_Work_Wait.Default__BP_AIAction_Work_Wait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Work_Wait_C* UBP_AIAction_Work_Wait_C::GetDefaultObj()
{
	static class UBP_AIAction_Work_Wait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Work_Wait_C*>(UBP_AIAction_Work_Wait_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Work_Wait.BP_AIAction_Work_Wait_C.ReturnToDefaultPosition
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_Work_Wait_C::ReturnToDefaultPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Work_Wait_C", "ReturnToDefaultPosition");



	UObject::ProcessEvent(Func, nullptr);

}

}


