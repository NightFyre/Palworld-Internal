#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngamePlaceName.WBP_IngamePlaceName_C
// (None)

class UClass* UWBP_IngamePlaceName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngamePlaceName_C");

	return Clss;
}


// WBP_IngamePlaceName_C WBP_IngamePlaceName.Default__WBP_IngamePlaceName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngamePlaceName_C* UWBP_IngamePlaceName_C::GetDefaultObj()
{
	static class UWBP_IngamePlaceName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngamePlaceName_C*>(UWBP_IngamePlaceName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.OnCloseTimerEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngamePlaceName_C::OnCloseTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngamePlaceName_C", "OnCloseTimerEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.DisplayRegion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RegionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWBP_IngamePlaceName_C::DisplayRegion(class FName RegionNameID, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngamePlaceName_C", "DisplayRegion");

	Params::UWBP_IngamePlaceName_C_DisplayRegion_Params Parms{};

	Parms.RegionNameID = RegionNameID;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.AnmEvent_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngamePlaceName_C::AnmEvent_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngamePlaceName_C", "AnmEvent_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.AnmEvent_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngamePlaceName_C::AnmEvent_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngamePlaceName_C", "AnmEvent_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngamePlaceName_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngamePlaceName_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.ExecuteUbergraph_WBP_IngamePlaceName
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngamePlaceName_C::ExecuteUbergraph_WBP_IngamePlaceName(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngamePlaceName_C", "ExecuteUbergraph_WBP_IngamePlaceName");

	Params::UWBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


