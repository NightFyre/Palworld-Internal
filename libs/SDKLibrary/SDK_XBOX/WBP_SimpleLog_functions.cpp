#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SimpleLog.WBP_SimpleLog_C
// (None)

class UClass* UWBP_SimpleLog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SimpleLog_C");

	return Clss;
}


// WBP_SimpleLog_C WBP_SimpleLog.Default__WBP_SimpleLog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SimpleLog_C* UWBP_SimpleLog_C::GetDefaultObj()
{
	static class UWBP_SimpleLog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SimpleLog_C*>(UWBP_SimpleLog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SimpleLog.WBP_SimpleLog_C.OverrideBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalLogContentToneType  ToneType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SimpleLog_C::OverrideBgColor(enum class EPalLogContentToneType ToneType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleLog_C", "OverrideBgColor");

	Params::UWBP_SimpleLog_C_OverrideBgColor_Params Parms{};

	Parms.ToneType = ToneType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SimpleLog.WBP_SimpleLog_C.OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SimpleLog_C::OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleLog_C", "OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A");

	Params::UWBP_SimpleLog_C_OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SimpleLog.WBP_SimpleLog_C.OnFinishOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleLog_C::OnFinishOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleLog_C", "OnFinishOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleLog.WBP_SimpleLog_C.OnFinishClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleLog_C::OnFinishClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleLog_C", "OnFinishClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleLog.WBP_SimpleLog_C.SetLogText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SimpleLog_C::SetLogText(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleLog_C", "SetLogText");

	Params::UWBP_SimpleLog_C_SetLogText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SimpleLog.WBP_SimpleLog_C.RequestInAnime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleLog_C::RequestInAnime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleLog_C", "RequestInAnime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleLog.WBP_SimpleLog_C.RequestOutAnime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleLog_C::RequestOutAnime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleLog_C", "RequestOutAnime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleLog.WBP_SimpleLog_C.RequestLoadIconTexture
// (HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexturePtr                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void UWBP_SimpleLog_C::RequestLoadIconTexture(TSoftObjectPtr<class UTexture2D>& SoftTexturePtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleLog_C", "RequestLoadIconTexture");

	Params::UWBP_SimpleLog_C_RequestLoadIconTexture_Params Parms{};

	Parms.SoftTexturePtr = SoftTexturePtr;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SimpleLog.WBP_SimpleLog_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SimpleLog_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleLog_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleLog.WBP_SimpleLog_C.SetAdditionalData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalLogAdditionalData       InAdditionalData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SimpleLog_C::SetAdditionalData(struct FPalLogAdditionalData& InAdditionalData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleLog_C", "SetAdditionalData");

	Params::UWBP_SimpleLog_C_SetAdditionalData_Params Parms{};

	Parms.InAdditionalData = InAdditionalData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SimpleLog.WBP_SimpleLog_C.ExecuteUbergraph_WBP_SimpleLog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_inText                                              (ConstParm)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_softTexturePtr                                      (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalLogAdditionalData       K2Node_Event_inAdditionalData                                    (ConstParm)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SimpleLog_C::ExecuteUbergraph_WBP_SimpleLog(int32 EntryPoint, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Event_inText, TSoftObjectPtr<class UTexture2D> K2Node_Event_softTexturePtr, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FPalLogAdditionalData& K2Node_Event_inAdditionalData, class UObject* K2Node_CustomEvent_Loaded, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleLog_C", "ExecuteUbergraph_WBP_SimpleLog");

	Params::UWBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_inText = K2Node_Event_inText;
	Parms.K2Node_Event_softTexturePtr = K2Node_Event_softTexturePtr;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_Event_inAdditionalData = K2Node_Event_inAdditionalData;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


