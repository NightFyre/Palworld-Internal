#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameDamageVinette.WBP_IngameDamageVinette_C
// (None)

class UClass* UWBP_IngameDamageVinette_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameDamageVinette_C");

	return Clss;
}


// WBP_IngameDamageVinette_C WBP_IngameDamageVinette.Default__WBP_IngameDamageVinette_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameDamageVinette_C* UWBP_IngameDamageVinette_C::GetDefaultObj()
{
	static class UWBP_IngameDamageVinette_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameDamageVinette_C*>(UWBP_IngameDamageVinette_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameDamageVinette.WBP_IngameDamageVinette_C.AnmEvent_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameDamageVinette_C::AnmEvent_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameDamageVinette_C", "AnmEvent_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameDamageVinette.WBP_IngameDamageVinette_C.AnmEvent_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameDamageVinette_C::AnmEvent_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameDamageVinette_C", "AnmEvent_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameDamageVinette.WBP_IngameDamageVinette_C.ExecuteUbergraph_WBP_IngameDamageVinette
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameDamageVinette_C::ExecuteUbergraph_WBP_IngameDamageVinette(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameDamageVinette_C", "ExecuteUbergraph_WBP_IngameDamageVinette");

	Params::UWBP_IngameDamageVinette_C_ExecuteUbergraph_WBP_IngameDamageVinette_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


