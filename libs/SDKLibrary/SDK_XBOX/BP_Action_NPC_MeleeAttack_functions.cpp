#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C
// (None)

class UClass* UBP_Action_NPC_MeleeAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_NPC_MeleeAttack_C");

	return Clss;
}


// BP_Action_NPC_MeleeAttack_C BP_Action_NPC_MeleeAttack.Default__BP_Action_NPC_MeleeAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_NPC_MeleeAttack_C* UBP_Action_NPC_MeleeAttack_C::GetDefaultObj()
{
	static class UBP_Action_NPC_MeleeAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_NPC_MeleeAttack_C*>(UBP_Action_NPC_MeleeAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_NPC_MeleeAttack_C::OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttack_C", "OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237");

	Params::UBP_Action_NPC_MeleeAttack_C_OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_NPC_MeleeAttack_C::OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttack_C", "OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237");

	Params::UBP_Action_NPC_MeleeAttack_C_OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.OnInterrupted_B1694066412380A7CADF2F9E8FC00237
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_NPC_MeleeAttack_C::OnInterrupted_B1694066412380A7CADF2F9E8FC00237(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttack_C", "OnInterrupted_B1694066412380A7CADF2F9E8FC00237");

	Params::UBP_Action_NPC_MeleeAttack_C_OnInterrupted_B1694066412380A7CADF2F9E8FC00237_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.OnBlendOut_B1694066412380A7CADF2F9E8FC00237
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_NPC_MeleeAttack_C::OnBlendOut_B1694066412380A7CADF2F9E8FC00237(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttack_C", "OnBlendOut_B1694066412380A7CADF2F9E8FC00237");

	Params::UBP_Action_NPC_MeleeAttack_C_OnBlendOut_B1694066412380A7CADF2F9E8FC00237_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.OnCompleted_B1694066412380A7CADF2F9E8FC00237
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_NPC_MeleeAttack_C::OnCompleted_B1694066412380A7CADF2F9E8FC00237(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttack_C", "OnCompleted_B1694066412380A7CADF2F9E8FC00237");

	Params::UBP_Action_NPC_MeleeAttack_C_OnCompleted_B1694066412380A7CADF2F9E8FC00237_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_NPC_MeleeAttack_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttack_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.ExecuteUbergraph_BP_Action_NPC_MeleeAttack
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
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGeneralPurposeIndex_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_NPC_MeleeAttack_C::ExecuteUbergraph_BP_Action_NPC_MeleeAttack(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetGeneralPurposeIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttack_C", "ExecuteUbergraph_BP_Action_NPC_MeleeAttack");

	Params::UBP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Params Parms{};

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
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGeneralPurposeIndex_ReturnValue = CallFunc_GetGeneralPurposeIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


