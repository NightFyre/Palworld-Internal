#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BI_PalInteractHUDInterface.BI_PalInteractHUDInterface_C
// (None)

class UClass* IBI_PalInteractHUDInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BI_PalInteractHUDInterface_C");

	return Clss;
}


// BI_PalInteractHUDInterface_C BI_PalInteractHUDInterface.Default__BI_PalInteractHUDInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBI_PalInteractHUDInterface_C* IBI_PalInteractHUDInterface_C::GetDefaultObj()
{
	static class IBI_PalInteractHUDInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBI_PalInteractHUDInterface_C*>(IBI_PalInteractHUDInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BI_PalInteractHUDInterface.BI_PalInteractHUDInterface_C.GetInteractWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUserWidget*              CreatedWidget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBI_PalInteractHUDInterface_C::GetInteractWidget(class UPalUserWidget** CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_PalInteractHUDInterface_C", "GetInteractWidget");

	Params::IBI_PalInteractHUDInterface_C_GetInteractWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

}

}


