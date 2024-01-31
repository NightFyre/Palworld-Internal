#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameHungerGauge.WBP_IngameHungerGauge_C
// (None)

class UClass* UWBP_IngameHungerGauge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameHungerGauge_C");

	return Clss;
}


// WBP_IngameHungerGauge_C WBP_IngameHungerGauge.Default__WBP_IngameHungerGauge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameHungerGauge_C* UWBP_IngameHungerGauge_C::GetDefaultObj()
{
	static class UWBP_IngameHungerGauge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameHungerGauge_C*>(UWBP_IngameHungerGauge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.SetHunger_ByRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Rate                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameHungerGauge_C::SetHunger_ByRate(double Rate, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameHungerGauge_C", "SetHunger_ByRate");

	Params::UWBP_IngameHungerGauge_C_SetHunger_ByRate_Params Parms{};

	Parms.Rate = Rate;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.SetHunger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint                 NowHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint                 MaxHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint                 CallFunc_Divide_FixedPointFixedPoint_ReturnValue                 (NoDestructor)
// float                              CallFunc_Convert_FixedPointToFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameHungerGauge_C::SetHunger(const struct FFixedPoint& NowHunger, const struct FFixedPoint& MaxHunger, const struct FFixedPoint& CallFunc_Divide_FixedPointFixedPoint_ReturnValue, float CallFunc_Convert_FixedPointToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameHungerGauge_C", "SetHunger");

	Params::UWBP_IngameHungerGauge_C_SetHunger_Params Parms{};

	Parms.NowHunger = NowHunger;
	Parms.MaxHunger = MaxHunger;
	Parms.CallFunc_Divide_FixedPointFixedPoint_ReturnValue = CallFunc_Divide_FixedPointFixedPoint_ReturnValue;
	Parms.CallFunc_Convert_FixedPointToFloat_ReturnValue = CallFunc_Convert_FixedPointToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.AnmEvent_Debuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameHungerGauge_C::AnmEvent_Debuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameHungerGauge_C", "AnmEvent_Debuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.AnmEvent_Normal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameHungerGauge_C::AnmEvent_Normal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameHungerGauge_C", "AnmEvent_Normal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameHungerGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameHungerGauge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.ExecuteUbergraph_WBP_IngameHungerGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameHungerGauge_C::ExecuteUbergraph_WBP_IngameHungerGauge(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameHungerGauge_C", "ExecuteUbergraph_WBP_IngameHungerGauge");

	Params::UWBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


