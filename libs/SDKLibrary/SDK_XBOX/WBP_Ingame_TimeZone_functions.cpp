#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Ingame_TimeZone.WBP_Ingame_TimeZone_C
// (None)

class UClass* UWBP_Ingame_TimeZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Ingame_TimeZone_C");

	return Clss;
}


// WBP_Ingame_TimeZone_C WBP_Ingame_TimeZone.Default__WBP_Ingame_TimeZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Ingame_TimeZone_C* UWBP_Ingame_TimeZone_C::GetDefaultObj()
{
	static class UWBP_Ingame_TimeZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Ingame_TimeZone_C*>(UWBP_Ingame_TimeZone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Ingame_TimeZone.WBP_Ingame_TimeZone_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Ingame_TimeZone_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_TimeZone_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_TimeZone.WBP_Ingame_TimeZone_C.UpdateTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_TimeZone_C::UpdateTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_TimeZone_C", "UpdateTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_TimeZone.WBP_Ingame_TimeZone_C.ExecuteUbergraph_WBP_Ingame_TimeZone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalTimeManager*             CallFunc_GetTimeManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalTimeManager*             CallFunc_GetTimeManager_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalOneDayTimeType      CallFunc_GetCurrentDayTimeType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDayTimePassRate_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_TimeZone_C::ExecuteUbergraph_WBP_Ingame_TimeZone(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue_1, enum class EPalOneDayTimeType CallFunc_GetCurrentDayTimeType_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetDayTimePassRate_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_TimeZone_C", "ExecuteUbergraph_WBP_Ingame_TimeZone");

	Params::UWBP_Ingame_TimeZone_C_ExecuteUbergraph_WBP_Ingame_TimeZone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetTimeManager_ReturnValue = CallFunc_GetTimeManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTimeManager_ReturnValue_1 = CallFunc_GetTimeManager_ReturnValue_1;
	Parms.CallFunc_GetCurrentDayTimeType_ReturnValue = CallFunc_GetCurrentDayTimeType_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetDayTimePassRate_ReturnValue = CallFunc_GetDayTimePassRate_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


