#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCommonButtonBase.WBP_PalCommonButtonBase_C
// (None)

class UClass* UWBP_PalCommonButtonBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCommonButtonBase_C");

	return Clss;
}


// WBP_PalCommonButtonBase_C WBP_PalCommonButtonBase.Default__WBP_PalCommonButtonBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCommonButtonBase_C* UWBP_PalCommonButtonBase_C::GetDefaultObj()
{
	static class UWBP_PalCommonButtonBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCommonButtonBase_C*>(UWBP_PalCommonButtonBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCommonButtonBase.WBP_PalCommonButtonBase_C.PlayAkSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AudioEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonButtonBase_C::PlayAkSound(class UAkAudioEvent* AudioEvent, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonButtonBase_C", "PlayAkSound");

	Params::UWBP_PalCommonButtonBase_C_PlayAkSound_Params Parms{};

	Parms.AudioEvent = AudioEvent;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonButtonBase.WBP_PalCommonButtonBase_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PalCommonButtonBase_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonButtonBase_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonButtonBase.WBP_PalCommonButtonBase_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PalCommonButtonBase_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonButtonBase_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonButtonBase.WBP_PalCommonButtonBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCommonButtonBase_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonButtonBase_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonButtonBase.WBP_PalCommonButtonBase_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PalCommonButtonBase_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonButtonBase_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonButtonBase.WBP_PalCommonButtonBase_C.ExecuteUbergraph_WBP_PalCommonButtonBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonButtonBase_C::ExecuteUbergraph_WBP_PalCommonButtonBase(int32 EntryPoint, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonButtonBase_C", "ExecuteUbergraph_WBP_PalCommonButtonBase");

	Params::UWBP_PalCommonButtonBase_C_ExecuteUbergraph_WBP_PalCommonButtonBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


