#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Ingame_PlayerGauge_ThworObjectNone.WBP_Ingame_PlayerGauge_ThworObjectNone_C
// (None)

class UClass* UWBP_Ingame_PlayerGauge_ThworObjectNone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Ingame_PlayerGauge_ThworObjectNone_C");

	return Clss;
}


// WBP_Ingame_PlayerGauge_ThworObjectNone_C WBP_Ingame_PlayerGauge_ThworObjectNone.Default__WBP_Ingame_PlayerGauge_ThworObjectNone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Ingame_PlayerGauge_ThworObjectNone_C* UWBP_Ingame_PlayerGauge_ThworObjectNone_C::GetDefaultObj()
{
	static class UWBP_Ingame_PlayerGauge_ThworObjectNone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Ingame_PlayerGauge_ThworObjectNone_C*>(UWBP_Ingame_PlayerGauge_ThworObjectNone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Ingame_PlayerGauge_ThworObjectNone.WBP_Ingame_PlayerGauge_ThworObjectNone_C.SetDisplayMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PalUIThrowObjectNoneMessageTypeDisplayType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_Ingame_PlayerGauge_ThworObjectNone_C::SetDisplayMode(enum class E_PalUIThrowObjectNoneMessageType DisplayType, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_ThworObjectNone_C", "SetDisplayMode");

	Params::UWBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode_Params Parms{};

	Parms.DisplayType = DisplayType;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


