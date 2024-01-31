#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Status_Muddy.BP_Status_Muddy_C
// (None)

class UClass* UBP_Status_Muddy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Status_Muddy_C");

	return Clss;
}


// BP_Status_Muddy_C BP_Status_Muddy.Default__BP_Status_Muddy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Status_Muddy_C* UBP_Status_Muddy_C::GetDefaultObj()
{
	static class UBP_Status_Muddy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Status_Muddy_C*>(UBP_Status_Muddy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Status_Muddy.BP_Status_Muddy_C.OnBeginStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_Muddy_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Muddy_C", "OnBeginStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_Muddy.BP_Status_Muddy_C.OnEndStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_Muddy_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Muddy_C", "OnEndStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_Muddy.BP_Status_Muddy_C.«¹¿à¤ÙóÈ_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Status_Muddy_C::_________2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Muddy_C", "«¹¿à¤ÙóÈ_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_Muddy.BP_Status_Muddy_C.ExecuteUbergraph_BP_Status_Muddy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSelfPalElement_Has                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Muddy_C::ExecuteUbergraph_BP_Status_Muddy(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasSelfPalElement_Has, class APalCharacter* K2Node_DynamicCast_AsPal_Character_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Muddy_C", "ExecuteUbergraph_BP_Status_Muddy");

	Params::UBP_Status_Muddy_C_ExecuteUbergraph_BP_Status_Muddy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_HasSelfPalElement_Has = CallFunc_HasSelfPalElement_Has;
	Parms.K2Node_DynamicCast_AsPal_Character_1 = K2Node_DynamicCast_AsPal_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


