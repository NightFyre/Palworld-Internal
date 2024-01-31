#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AISightResponsePreset_Citizen.BP_AISightResponsePreset_Citizen_C
// (None)

class UClass* UBP_AISightResponsePreset_Citizen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AISightResponsePreset_Citizen_C");

	return Clss;
}


// BP_AISightResponsePreset_Citizen_C BP_AISightResponsePreset_Citizen.Default__BP_AISightResponsePreset_Citizen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AISightResponsePreset_Citizen_C* UBP_AISightResponsePreset_Citizen_C::GetDefaultObj()
{
	static class UBP_AISightResponsePreset_Citizen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AISightResponsePreset_Citizen_C*>(UBP_AISightResponsePreset_Citizen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AISightResponsePreset_Citizen.BP_AISightResponsePreset_Citizen_C.BlueprintDelegateSetup
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_AISightResponsePreset_Citizen_C::BlueprintDelegateSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AISightResponsePreset_Citizen_C", "BlueprintDelegateSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AISightResponsePreset_Citizen.BP_AISightResponsePreset_Citizen_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               SelfCharacter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               FoundCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AISightResponsePreset_Citizen_C::_________0(class APalCharacter* SelfCharacter, class APalCharacter* FoundCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AISightResponsePreset_Citizen_C", "«¹¿à¤ÙóÈ_0");

	Params::UBP_AISightResponsePreset_Citizen_C__________0_Params Parms{};

	Parms.SelfCharacter = SelfCharacter;
	Parms.FoundCharacter = FoundCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AISightResponsePreset_Citizen.BP_AISightResponsePreset_Citizen_C.ExecuteUbergraph_BP_AISightResponsePreset_Citizen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_SelfCharacter                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_FoundCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UBP_AISightResponsePreset_Citizen_C::ExecuteUbergraph_BP_AISightResponsePreset_Citizen(int32 EntryPoint, class APalCharacter* K2Node_CustomEvent_SelfCharacter, class APalCharacter* K2Node_CustomEvent_FoundCharacter, const class FString& CallFunc_GetDisplayName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AISightResponsePreset_Citizen_C", "ExecuteUbergraph_BP_AISightResponsePreset_Citizen");

	Params::UBP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SelfCharacter = K2Node_CustomEvent_SelfCharacter;
	Parms.K2Node_CustomEvent_FoundCharacter = K2Node_CustomEvent_FoundCharacter;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


