#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C
// (None)

class UClass* UBP_ActionPalLiftupThrow_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionPalLiftupThrow_Player_C");

	return Clss;
}


// BP_ActionPalLiftupThrow_Player_C BP_ActionPalLiftupThrow_Player.Default__BP_ActionPalLiftupThrow_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionPalLiftupThrow_Player_C* UBP_ActionPalLiftupThrow_Player_C::GetDefaultObj()
{
	static class UBP_ActionPalLiftupThrow_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionPalLiftupThrow_Player_C*>(UBP_ActionPalLiftupThrow_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C.MovementSetFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FlagName                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*Movement                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPalLiftupThrow_Player_C::MovementSetFlag(bool Disable, class FName FlagName, class UPalCharacterMovementComponent* Movement, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftupThrow_Player_C", "MovementSetFlag");

	Params::UBP_ActionPalLiftupThrow_Player_C_MovementSetFlag_Params Parms{};

	Parms.Disable = Disable;
	Parms.FlagName = FlagName;
	Parms.Movement = Movement;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C.WeaponSetFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        ShooterComp                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        FlagName                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPalLiftupThrow_Player_C::WeaponSetFlag(bool Disable, class UPalShooterComponent* ShooterComp, class FName FlagName, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftupThrow_Player_C", "WeaponSetFlag");

	Params::UBP_ActionPalLiftupThrow_Player_C_WeaponSetFlag_Params Parms{};

	Parms.Disable = Disable;
	Parms.ShooterComp = ShooterComp;
	Parms.FlagName = FlagName;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C.OnNotifyEnd_83D404E9464088172E21308730EE3926
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPalLiftupThrow_Player_C::OnNotifyEnd_83D404E9464088172E21308730EE3926(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftupThrow_Player_C", "OnNotifyEnd_83D404E9464088172E21308730EE3926");

	Params::UBP_ActionPalLiftupThrow_Player_C_OnNotifyEnd_83D404E9464088172E21308730EE3926_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C.OnNotifyBegin_83D404E9464088172E21308730EE3926
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPalLiftupThrow_Player_C::OnNotifyBegin_83D404E9464088172E21308730EE3926(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftupThrow_Player_C", "OnNotifyBegin_83D404E9464088172E21308730EE3926");

	Params::UBP_ActionPalLiftupThrow_Player_C_OnNotifyBegin_83D404E9464088172E21308730EE3926_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C.OnInterrupted_83D404E9464088172E21308730EE3926
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPalLiftupThrow_Player_C::OnInterrupted_83D404E9464088172E21308730EE3926(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftupThrow_Player_C", "OnInterrupted_83D404E9464088172E21308730EE3926");

	Params::UBP_ActionPalLiftupThrow_Player_C_OnInterrupted_83D404E9464088172E21308730EE3926_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C.OnBlendOut_83D404E9464088172E21308730EE3926
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPalLiftupThrow_Player_C::OnBlendOut_83D404E9464088172E21308730EE3926(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftupThrow_Player_C", "OnBlendOut_83D404E9464088172E21308730EE3926");

	Params::UBP_ActionPalLiftupThrow_Player_C_OnBlendOut_83D404E9464088172E21308730EE3926_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C.OnCompleted_83D404E9464088172E21308730EE3926
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPalLiftupThrow_Player_C::OnCompleted_83D404E9464088172E21308730EE3926(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftupThrow_Player_C", "OnCompleted_83D404E9464088172E21308730EE3926");

	Params::UBP_ActionPalLiftupThrow_Player_C_OnCompleted_83D404E9464088172E21308730EE3926_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C.PlayPlayerThrowMontage
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ActionPalLiftupThrow_Player_C::PlayPlayerThrowMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftupThrow_Player_C", "PlayPlayerThrowMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionPalLiftupThrow_Player_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftupThrow_Player_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionPalLiftupThrow_Player_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftupThrow_Player_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C.ExecuteUbergraph_BP_ActionPalLiftupThrow_Player
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPalLiftupThrow_Player_C::ExecuteUbergraph_BP_ActionPalLiftupThrow_Player(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftupThrow_Player_C", "ExecuteUbergraph_BP_ActionPalLiftupThrow_Player");

	Params::UBP_ActionPalLiftupThrow_Player_C_ExecuteUbergraph_BP_ActionPalLiftupThrow_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


