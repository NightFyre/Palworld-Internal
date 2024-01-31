#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalLocalPlayerSystemSound.BP_PalLocalPlayerSystemSound_C
// (None)

class UClass* UBP_PalLocalPlayerSystemSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalLocalPlayerSystemSound_C");

	return Clss;
}


// BP_PalLocalPlayerSystemSound_C BP_PalLocalPlayerSystemSound.Default__BP_PalLocalPlayerSystemSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalLocalPlayerSystemSound_C* UBP_PalLocalPlayerSystemSound_C::GetDefaultObj()
{
	static class UBP_PalLocalPlayerSystemSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalLocalPlayerSystemSound_C*>(UBP_PalLocalPlayerSystemSound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalLocalPlayerSystemSound.BP_PalLocalPlayerSystemSound_C.OnChangeHunger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalStatusHungerType    Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalStatusHungerType    Last                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalLocalPlayerSystemSound_C::OnChangeHunger(enum class EPalStatusHungerType Current, enum class EPalStatusHungerType Last, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalLocalPlayerSystemSound_C", "OnChangeHunger");

	Params::UBP_PalLocalPlayerSystemSound_C_OnChangeHunger_Params Parms{};

	Parms.Current = Current;
	Parms.Last = Last;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalLocalPlayerSystemSound.BP_PalLocalPlayerSystemSound_C.SetupLocalPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualParameter_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalLocalPlayerSystemSound_C::SetupLocalPlayer(class APalPlayerCharacter* Player, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalLocalPlayerSystemSound_C", "SetupLocalPlayer");

	Params::UBP_PalLocalPlayerSystemSound_C_SetupLocalPlayer_Params Parms{};

	Parms.Player = Player;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetIndividualParameter_ReturnValue = CallFunc_GetIndividualParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


