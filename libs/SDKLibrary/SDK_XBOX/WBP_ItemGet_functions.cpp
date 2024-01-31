#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ItemGet.WBP_ItemGet_C
// (None)

class UClass* UWBP_ItemGet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ItemGet_C");

	return Clss;
}


// WBP_ItemGet_C WBP_ItemGet.Default__WBP_ItemGet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ItemGet_C* UWBP_ItemGet_C::GetDefaultObj()
{
	static class UWBP_ItemGet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ItemGet_C*>(UWBP_ItemGet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ItemGet.WBP_ItemGet_C.SetDefaultFontStyleName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StyleName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemGet_C::SetDefaultFontStyleName(class FName StyleName, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemGet_C", "SetDefaultFontStyleName");

	Params::UWBP_ItemGet_C_SetDefaultFontStyleName_Params Parms{};

	Parms.StyleName = StyleName;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemGet.WBP_ItemGet_C.ChangeBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemGet_C::ChangeBgColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemGet_C", "ChangeBgColor");

	Params::UWBP_ItemGet_C_ChangeBgColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemGet.WBP_ItemGet_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ItemGet_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemGet_C", "SetText");

	Params::UWBP_ItemGet_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemGet.WBP_ItemGet_C.HideIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ItemGet_C::HideIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemGet_C", "HideIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemGet.WBP_ItemGet_C.SetIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemGet_C::SetIconTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemGet_C", "SetIconTexture");

	Params::UWBP_ItemGet_C_SetIconTexture_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemGet.WBP_ItemGet_C.Finished_1F002FD94DF611BBD1EF47BE09B9889B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ItemGet_C::Finished_1F002FD94DF611BBD1EF47BE09B9889B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemGet_C", "Finished_1F002FD94DF611BBD1EF47BE09B9889B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemGet.WBP_ItemGet_C.Finished_841401E94A6018595306E0AC3B421AB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ItemGet_C::Finished_841401E94A6018595306E0AC3B421AB7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemGet_C", "Finished_841401E94A6018595306E0AC3B421AB7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemGet.WBP_ItemGet_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ItemGet_C::AnmEvent_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemGet_C", "AnmEvent_Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemGet.WBP_ItemGet_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ItemGet_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemGet_C", "AnmEvent_Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemGet.WBP_ItemGet_C.ExecuteUbergraph_WBP_ItemGet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemGet_C::ExecuteUbergraph_WBP_ItemGet(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemGet_C", "ExecuteUbergraph_WBP_ItemGet");

	Params::UWBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemGet.WBP_ItemGet_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ItemGet_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemGet_C", "OnClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ItemGet.WBP_ItemGet_C.OnOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ItemGet_C::OnOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemGet_C", "OnOpened__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


