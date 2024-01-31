#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C
// (None)

class UClass* UBP_UIIndividualParameterInitializeWaiter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIIndividualParameterInitializeWaiter_C");

	return Clss;
}


// BP_UIIndividualParameterInitializeWaiter_C BP_UIIndividualParameterInitializeWaiter.Default__BP_UIIndividualParameterInitializeWaiter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UIIndividualParameterInitializeWaiter_C* UBP_UIIndividualParameterInitializeWaiter_C::GetDefaultObj()
{
	static class UBP_UIIndividualParameterInitializeWaiter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UIIndividualParameterInitializeWaiter_C*>(UBP_UIIndividualParameterInitializeWaiter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C.CheckIndividual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualCharacterParameterByActor_ReturnValue      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIIndividualParameterInitializeWaiter_C::CheckIndividual(bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualCharacterParameterByActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIIndividualParameterInitializeWaiter_C", "CheckIndividual");

	Params::UBP_UIIndividualParameterInitializeWaiter_C_CheckIndividual_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIndividualCharacterParameterByActor_ReturnValue = CallFunc_GetIndividualCharacterParameterByActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C.OnCompleteInitiaize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterOnCompleteInitializeParameterWrapper*CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIIndividualParameterInitializeWaiter_C::OnCompleteInitiaize(class APalCharacter* Character, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIIndividualParameterInitializeWaiter_C", "OnCompleteInitiaize");

	Params::UBP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize_Params Parms{};

	Parms.Character = Character;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue = CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C.Register
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterOnCompleteInitializeParameterWrapper*CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UBP_UIIndividualParameterInitializeWaiter_C::Register(class APalCharacter* TargetCharacter, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIIndividualParameterInitializeWaiter_C", "Register");

	Params::UBP_UIIndividualParameterInitializeWaiter_C_Register_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue = CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C.OnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UIIndividualParameterInitializeWaiter_C*SelfObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UIIndividualParameterInitializeWaiter_C::OnComplete__DelegateSignature(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* SelfObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIIndividualParameterInitializeWaiter_C", "OnComplete__DelegateSignature");

	Params::UBP_UIIndividualParameterInitializeWaiter_C_OnComplete__DelegateSignature_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.SelfObject = SelfObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


