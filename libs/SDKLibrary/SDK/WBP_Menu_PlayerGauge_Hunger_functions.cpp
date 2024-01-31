#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Menu_PlayerGauge_Hunger.WBP_Menu_PlayerGauge_Hunger_C
// (None)

class UClass* UWBP_Menu_PlayerGauge_Hunger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Menu_PlayerGauge_Hunger_C");

	return Clss;
}


// WBP_Menu_PlayerGauge_Hunger_C WBP_Menu_PlayerGauge_Hunger.Default__WBP_Menu_PlayerGauge_Hunger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Menu_PlayerGauge_Hunger_C* UWBP_Menu_PlayerGauge_Hunger_C::GetDefaultObj()
{
	static class UWBP_Menu_PlayerGauge_Hunger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Menu_PlayerGauge_Hunger_C*>(UWBP_Menu_PlayerGauge_Hunger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Menu_PlayerGauge_Hunger.WBP_Menu_PlayerGauge_Hunger_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Menu_PlayerGauge_Hunger_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_PlayerGauge_Hunger_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_PlayerGauge_Hunger.WBP_Menu_PlayerGauge_Hunger_C.ExecuteUbergraph_WBP_Menu_PlayerGauge_Hunger
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_PlayerGauge_Hunger_C::ExecuteUbergraph_WBP_Menu_PlayerGauge_Hunger(int32 EntryPoint, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_PlayerGauge_Hunger_C", "ExecuteUbergraph_WBP_Menu_PlayerGauge_Hunger");

	Params::UWBP_Menu_PlayerGauge_Hunger_C_ExecuteUbergraph_WBP_Menu_PlayerGauge_Hunger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


