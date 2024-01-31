#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NoticeLog.WBP_NoticeLog_C
// (None)

class UClass* UWBP_NoticeLog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NoticeLog_C");

	return Clss;
}


// WBP_NoticeLog_C WBP_NoticeLog.Default__WBP_NoticeLog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NoticeLog_C* UWBP_NoticeLog_C::GetDefaultObj()
{
	static class UWBP_NoticeLog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NoticeLog_C*>(UWBP_NoticeLog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NoticeLog.WBP_NoticeLog_C.Close_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NoticeLog_C::Close_Internal(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoticeLog_C", "Close_Internal");

	Params::UWBP_NoticeLog_C_Close_Internal_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NoticeLog.WBP_NoticeLog_C.Open_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NoticeLog_C::Open_Internal(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoticeLog_C", "Open_Internal");

	Params::UWBP_NoticeLog_C_Open_Internal_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NoticeLog.WBP_NoticeLog_C.OnLoaded_19AB6838498B19451FE6AEAD31DEA803
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_NoticeLog_C::OnLoaded_19AB6838498B19451FE6AEAD31DEA803(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoticeLog_C", "OnLoaded_19AB6838498B19451FE6AEAD31DEA803");

	Params::UWBP_NoticeLog_C_OnLoaded_19AB6838498B19451FE6AEAD31DEA803_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NoticeLog.WBP_NoticeLog_C.RequestLoadIconTexture
// (HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexturePtr                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void UWBP_NoticeLog_C::RequestLoadIconTexture(TSoftObjectPtr<class UTexture2D>& SoftTexturePtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoticeLog_C", "RequestLoadIconTexture");

	Params::UWBP_NoticeLog_C_RequestLoadIconTexture_Params Parms{};

	Parms.SoftTexturePtr = SoftTexturePtr;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NoticeLog.WBP_NoticeLog_C.SetLogText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_NoticeLog_C::SetLogText(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoticeLog_C", "SetLogText");

	Params::UWBP_NoticeLog_C_SetLogText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NoticeLog.WBP_NoticeLog_C.RequestInAnime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NoticeLog_C::RequestInAnime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoticeLog_C", "RequestInAnime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NoticeLog.WBP_NoticeLog_C.OnFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NoticeLog_C::OnFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoticeLog_C", "OnFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NoticeLog.WBP_NoticeLog_C.RequestOutAnime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NoticeLog_C::RequestOutAnime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoticeLog_C", "RequestOutAnime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NoticeLog.WBP_NoticeLog_C.OnFinishedClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NoticeLog_C::OnFinishedClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoticeLog_C", "OnFinishedClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NoticeLog.WBP_NoticeLog_C.SetAdditionalData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalLogAdditionalData       InAdditionalData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_NoticeLog_C::SetAdditionalData(struct FPalLogAdditionalData& InAdditionalData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoticeLog_C", "SetAdditionalData");

	Params::UWBP_NoticeLog_C_SetAdditionalData_Params Parms{};

	Parms.InAdditionalData = InAdditionalData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NoticeLog.WBP_NoticeLog_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_NoticeLog_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoticeLog_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NoticeLog.WBP_NoticeLog_C.ExecuteUbergraph_WBP_NoticeLog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_softTexturePtr                                      (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_inText                                              (ConstParm)
// struct FPalLogAdditionalData       K2Node_Event_inAdditionalData                                    (ConstParm)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_NoticeLog_C::ExecuteUbergraph_WBP_NoticeLog(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TSoftObjectPtr<class UTexture2D> K2Node_Event_softTexturePtr, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class FText K2Node_Event_inText, const struct FPalLogAdditionalData& K2Node_Event_inAdditionalData, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NoticeLog_C", "ExecuteUbergraph_WBP_NoticeLog");

	Params::UWBP_NoticeLog_C_ExecuteUbergraph_WBP_NoticeLog_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_softTexturePtr = K2Node_Event_softTexturePtr;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_Event_inText = K2Node_Event_inText;
	Parms.K2Node_Event_inAdditionalData = K2Node_Event_inAdditionalData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


