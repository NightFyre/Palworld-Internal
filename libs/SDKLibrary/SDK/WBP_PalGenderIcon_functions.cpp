#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalGenderIcon.WBP_PalGenderIcon_C
// (None)

class UClass* UWBP_PalGenderIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalGenderIcon_C");

	return Clss;
}


// WBP_PalGenderIcon_C WBP_PalGenderIcon.Default__WBP_PalGenderIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalGenderIcon_C* UWBP_PalGenderIcon_C::GetDefaultObj()
{
	static class UWBP_PalGenderIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalGenderIcon_C*>(UWBP_PalGenderIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalGenderIcon.WBP_PalGenderIcon_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalGenderType          GenderType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGenderIcon_C::Setup(enum class EPalGenderType GenderType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalGenderIcon_C", "Setup");

	Params::UWBP_PalGenderIcon_C_Setup_Params Parms{};

	Parms.GenderType = GenderType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


