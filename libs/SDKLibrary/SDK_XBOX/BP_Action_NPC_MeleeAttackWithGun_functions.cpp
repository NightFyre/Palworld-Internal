#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C
// (None)

class UClass* UBP_Action_NPC_MeleeAttackWithGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_NPC_MeleeAttackWithGun_C");

	return Clss;
}


// BP_Action_NPC_MeleeAttackWithGun_C BP_Action_NPC_MeleeAttackWithGun.Default__BP_Action_NPC_MeleeAttackWithGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_NPC_MeleeAttackWithGun_C* UBP_Action_NPC_MeleeAttackWithGun_C::GetDefaultObj()
{
	static class UBP_Action_NPC_MeleeAttackWithGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_NPC_MeleeAttackWithGun_C*>(UBP_Action_NPC_MeleeAttackWithGun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_NPC_MeleeAttackWithGun_C::OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttackWithGun_C", "OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D");

	Params::UBP_Action_NPC_MeleeAttackWithGun_C_OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_NPC_MeleeAttackWithGun_C::OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttackWithGun_C", "OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D");

	Params::UBP_Action_NPC_MeleeAttackWithGun_C_OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_NPC_MeleeAttackWithGun_C::OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttackWithGun_C", "OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D");

	Params::UBP_Action_NPC_MeleeAttackWithGun_C_OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_NPC_MeleeAttackWithGun_C::OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttackWithGun_C", "OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D");

	Params::UBP_Action_NPC_MeleeAttackWithGun_C_OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_NPC_MeleeAttackWithGun_C::OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttackWithGun_C", "OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D");

	Params::UBP_Action_NPC_MeleeAttackWithGun_C_OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_NPC_MeleeAttackWithGun_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttackWithGun_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C.ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun
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

void UBP_Action_NPC_MeleeAttackWithGun_C::ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_MeleeAttackWithGun_C", "ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun");

	Params::UBP_Action_NPC_MeleeAttackWithGun_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun_Params Parms{};

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

	UObject::ProcessEvent(Func, &Parms);

}

}


