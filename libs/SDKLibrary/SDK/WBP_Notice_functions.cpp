#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Notice.WBP_Notice_C
// (None)

class UClass* UWBP_Notice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Notice_C");

	return Clss;
}


// WBP_Notice_C WBP_Notice.Default__WBP_Notice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Notice_C* UWBP_Notice_C::GetDefaultObj()
{
	static class UWBP_Notice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Notice_C*>(UWBP_Notice_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Notice.WBP_Notice_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Notice_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "SetText");

	Params::UWBP_Notice_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Notice.WBP_Notice_C.HideIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Notice_C::HideIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "HideIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Notice.WBP_Notice_C.SetIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Notice_C::SetIconTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "SetIconTexture");

	Params::UWBP_Notice_C_SetIconTexture_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Notice.WBP_Notice_C.Finished_77B22E4B4836BC8AB8B4A08F2691F416
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Notice_C::Finished_77B22E4B4836BC8AB8B4A08F2691F416()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "Finished_77B22E4B4836BC8AB8B4A08F2691F416");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Notice.WBP_Notice_C.Finished_6DE1EEED4A47BC160DDFEBA700165427
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Notice_C::Finished_6DE1EEED4A47BC160DDFEBA700165427()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "Finished_6DE1EEED4A47BC160DDFEBA700165427");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Notice.WBP_Notice_C.Finished_6F0CFBFE4FFC647FC29A08AD10869738
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Notice_C::Finished_6F0CFBFE4FFC647FC29A08AD10869738()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "Finished_6F0CFBFE4FFC647FC29A08AD10869738");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Notice.WBP_Notice_C.Finished_1C35836941B88D2824102B8E8EC65295
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Notice_C::Finished_1C35836941B88D2824102B8E8EC65295()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "Finished_1C35836941B88D2824102B8E8EC65295");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Notice.WBP_Notice_C.AnmEvent_Open_Negative
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Notice_C::AnmEvent_Open_Negative()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "AnmEvent_Open_Negative");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Notice.WBP_Notice_C.AnmEvent_Close_Negative
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Notice_C::AnmEvent_Close_Negative()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "AnmEvent_Close_Negative");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Notice.WBP_Notice_C.AnmEvent_Open_Positive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Notice_C::AnmEvent_Open_Positive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "AnmEvent_Open_Positive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Notice.WBP_Notice_C.AnmEvent_Close_Positive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Notice_C::AnmEvent_Close_Positive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "AnmEvent_Close_Positive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Notice.WBP_Notice_C.ExecuteUbergraph_WBP_Notice
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_3        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_3   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Notice_C::ExecuteUbergraph_WBP_Notice(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_3, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "ExecuteUbergraph_WBP_Notice");

	Params::UWBP_Notice_C_ExecuteUbergraph_WBP_Notice_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_3 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_3;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_3 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Notice.WBP_Notice_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Notice_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "OnClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Notice.WBP_Notice_C.OnOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Notice_C::OnOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Notice_C", "OnOpened__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


