#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenuConstruction_TabSub.WBP_IngameMenuConstruction_TabSub_C
// (None)

class UClass* UWBP_IngameMenuConstruction_TabSub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenuConstruction_TabSub_C");

	return Clss;
}


// WBP_IngameMenuConstruction_TabSub_C WBP_IngameMenuConstruction_TabSub.Default__WBP_IngameMenuConstruction_TabSub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenuConstruction_TabSub_C* UWBP_IngameMenuConstruction_TabSub_C::GetDefaultObj()
{
	static class UWBP_IngameMenuConstruction_TabSub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenuConstruction_TabSub_C*>(UWBP_IngameMenuConstruction_TabSub_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenuConstruction_TabSub.WBP_IngameMenuConstruction_TabSub_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenuConstruction_TabSub_C::SetActive(bool IsActive, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_TabSub_C", "SetActive");

	Params::UWBP_IngameMenuConstruction_TabSub_C_SetActive_Params Parms{};

	Parms.IsActive = IsActive;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


