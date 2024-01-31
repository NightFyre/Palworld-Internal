#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IconPalWork.WBP_IconPalWork_C
// (None)

class UClass* UWBP_IconPalWork_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IconPalWork_C");

	return Clss;
}


// WBP_IconPalWork_C WBP_IconPalWork.Default__WBP_IconPalWork_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IconPalWork_C* UWBP_IconPalWork_C::GetDefaultObj()
{
	static class UWBP_IconPalWork_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IconPalWork_C*>(UWBP_IconPalWork_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IconPalWork.WBP_IconPalWork_C.SetSuitability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalWorkSuitability     Suitability                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IconPalWork_C::SetSuitability(enum class EPalWorkSuitability Suitability, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IconPalWork_C", "SetSuitability");

	Params::UWBP_IconPalWork_C_SetSuitability_Params Parms{};

	Parms.Suitability = Suitability;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


