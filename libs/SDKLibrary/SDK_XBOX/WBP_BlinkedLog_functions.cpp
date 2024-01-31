#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BlinkedLog.WBP_BlinkedLog_C
// (None)

class UClass* UWBP_BlinkedLog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BlinkedLog_C");

	return Clss;
}


// WBP_BlinkedLog_C WBP_BlinkedLog.Default__WBP_BlinkedLog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BlinkedLog_C* UWBP_BlinkedLog_C::GetDefaultObj()
{
	static class UWBP_BlinkedLog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BlinkedLog_C*>(UWBP_BlinkedLog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.OverrideBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalLogContentToneType  ToneType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BlinkedLog_C::OverrideBgColor(enum class EPalLogContentToneType ToneType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "OverrideBgColor");

	Params::UWBP_BlinkedLog_C_OverrideBgColor_Params Parms{};

	Parms.ToneType = ToneType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BlinkedLog_C::OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1");

	Params::UWBP_BlinkedLog_C_OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.OnFinishOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BlinkedLog_C::OnFinishOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "OnFinishOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.OnFinishClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BlinkedLog_C::OnFinishClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "OnFinishClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.SetLogText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_BlinkedLog_C::SetLogText(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "SetLogText");

	Params::UWBP_BlinkedLog_C_SetLogText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.RequestInAnime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BlinkedLog_C::RequestInAnime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "RequestInAnime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.RequestOutAnime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BlinkedLog_C::RequestOutAnime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "RequestOutAnime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.RequestLoadIconTexture
// (HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexturePtr                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void UWBP_BlinkedLog_C::RequestLoadIconTexture(TSoftObjectPtr<class UTexture2D>& SoftTexturePtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "RequestLoadIconTexture");

	Params::UWBP_BlinkedLog_C_RequestLoadIconTexture_Params Parms{};

	Parms.SoftTexturePtr = SoftTexturePtr;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BlinkedLog_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.SetAdditionalData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalLogAdditionalData       InAdditionalData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_BlinkedLog_C::SetAdditionalData(struct FPalLogAdditionalData& InAdditionalData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "SetAdditionalData");

	Params::UWBP_BlinkedLog_C_SetAdditionalData_Params Parms{};

	Parms.InAdditionalData = InAdditionalData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BlinkedLog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BlinkedLog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "Tick");

	Params::UWBP_BlinkedLog_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BlinkedLog.WBP_BlinkedLog_C.ExecuteUbergraph_WBP_BlinkedLog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_inText                                              (ConstParm)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_softTexturePtr                                      (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalLogAdditionalData       K2Node_Event_inAdditionalData                                    (ConstParm)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BlinkedLog_C::ExecuteUbergraph_WBP_BlinkedLog(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_Event_inText, TSoftObjectPtr<class UTexture2D> K2Node_Event_softTexturePtr, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalLogAdditionalData& K2Node_Event_inAdditionalData, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BlinkedLog_C", "ExecuteUbergraph_WBP_BlinkedLog");

	Params::UWBP_BlinkedLog_C_ExecuteUbergraph_WBP_BlinkedLog_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_inText = K2Node_Event_inText;
	Parms.K2Node_Event_softTexturePtr = K2Node_Event_softTexturePtr;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_inAdditionalData = K2Node_Event_inAdditionalData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


