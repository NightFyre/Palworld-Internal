#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalActionBar.WBP_PalActionBar_C
// (None)

class UClass* UWBP_PalActionBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalActionBar_C");

	return Clss;
}


// WBP_PalActionBar_C WBP_PalActionBar.Default__WBP_PalActionBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalActionBar_C* UWBP_PalActionBar_C::GetDefaultObj()
{
	static class UWBP_PalActionBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalActionBar_C*>(UWBP_PalActionBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalActionBar.WBP_PalActionBar_C.OnAddedAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalActionBar_C::OnAddedAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalActionBar_C", "OnAddedAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalActionBar.WBP_PalActionBar_C.OnRemovedAllAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalActionBar_C::OnRemovedAllAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalActionBar_C", "OnRemovedAllAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalActionBar.WBP_PalActionBar_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalActionBar_C::AnmEvent_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalActionBar_C", "AnmEvent_Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalActionBar.WBP_PalActionBar_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalActionBar_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalActionBar_C", "AnmEvent_Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalActionBar.WBP_PalActionBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalActionBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalActionBar_C", "Tick");

	Params::UWBP_PalActionBar_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalActionBar.WBP_PalActionBar_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalActionBar_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalActionBar_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalActionBar.WBP_PalActionBar_C.ExecuteUbergraph_WBP_PalActionBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumEntries_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalActionBar_C::ExecuteUbergraph_WBP_PalActionBar(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_GetNumEntries_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalActionBar_C", "ExecuteUbergraph_WBP_PalActionBar");

	Params::UWBP_PalActionBar_C_ExecuteUbergraph_WBP_PalActionBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetNumEntries_ReturnValue = CallFunc_GetNumEntries_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


