#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C
// (None)

class UClass* UWBP_CharaCre_ScrollBoxContentBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_ScrollBoxContentBase_C");

	return Clss;
}


// WBP_CharaCre_ScrollBoxContentBase_C WBP_CharaCre_ScrollBoxContentBase.Default__WBP_CharaCre_ScrollBoxContentBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_ScrollBoxContentBase_C* UWBP_CharaCre_ScrollBoxContentBase_C::GetDefaultObj()
{
	static class UWBP_CharaCre_ScrollBoxContentBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_ScrollBoxContentBase_C*>(UWBP_CharaCre_ScrollBoxContentBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.GetRestoreFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContentBase_C::GetRestoreFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentBase_C", "GetRestoreFocusTarget");

	Params::UWBP_CharaCre_ScrollBoxContentBase_C_GetRestoreFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.OnClosedSelectColorWindow_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContentBase_C::OnClosedSelectColorWindow_Internal(class UPalHUDDispatchParameterBase* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentBase_C", "OnClosedSelectColorWindow_Internal");

	Params::UWBP_CharaCre_ScrollBoxContentBase_C_OnClosedSelectColorWindow_Internal_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.OpenColorSelectWindow
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CharaCre_ColorSelectWindowDispatchParameter_C*Parameter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContentBase_C::OpenColorSelectWindow(class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* Parameter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentBase_C", "OpenColorSelectWindow");

	Params::UWBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow_Params Parms{};

	Parms.Parameter = Parameter;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContentBase_C::GetTopFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentBase_C", "GetTopFocusTarget");

	Params::UWBP_CharaCre_ScrollBoxContentBase_C_GetTopFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.ApplyMakeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfoMakeInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CharaCre_ScrollBoxContentBase_C::ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentBase_C", "ApplyMakeInfo");

	Params::UWBP_CharaCre_ScrollBoxContentBase_C_ApplyMakeInfo_Params Parms{};

	Parms.MakeInfo = MakeInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.OnNotifyCloseSelectColorWIndow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContentBase_C::OnNotifyCloseSelectColorWIndow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentBase_C", "OnNotifyCloseSelectColorWIndow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.OnNotifyOpenSelectColorWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContentBase_C::OnNotifyOpenSelectColorWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentBase_C", "OnNotifyOpenSelectColorWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


