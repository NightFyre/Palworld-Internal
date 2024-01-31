#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C
// (Actor)

class UClass* ABP_PalCaptureBodyBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalCaptureBodyBase_C");

	return Clss;
}


// BP_PalCaptureBodyBase_C BP_PalCaptureBodyBase.Default__BP_PalCaptureBodyBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalCaptureBodyBase_C* ABP_PalCaptureBodyBase_C::GetDefaultObj()
{
	static class ABP_PalCaptureBodyBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalCaptureBodyBase_C*>(ABP_PalCaptureBodyBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.GetOwnerCharacterOrRiderCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Character                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalRideMarkerComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetRiderCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::GetOwnerCharacterOrRiderCharacter(class AActor** Character, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetRiderCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "GetOwnerCharacterOrRiderCharacter");

	Params::ABP_PalCaptureBodyBase_C_GetOwnerCharacterOrRiderCharacter_Params Parms{};

	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRiderCharacter_ReturnValue = CallFunc_GetRiderCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetSneakBonusFlagToALL
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSneak                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::SetSneakBonusFlagToALL(bool IsSneak)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "SetSneakBonusFlagToALL");

	Params::ABP_PalCaptureBodyBase_C_SetSneakBonusFlagToALL_Params Parms{};

	Parms.IsSneak = IsSneak;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetTargetHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              CallFunc_GetIndividualID_ReturnValue                             (HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::SetTargetHandle(class UPalIndividualCharacterHandle* TargetHandle, bool CallFunc_IsValid_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "SetTargetHandle");

	Params::ABP_PalCaptureBodyBase_C_SetTargetHandle_Params Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIndividualID_ReturnValue = CallFunc_GetIndividualID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetupInServer
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::SetupInServer(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "SetupInServer");

	Params::ABP_PalCaptureBodyBase_C_SetupInServer_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetupToALL
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::SetupToALL(class APalCharacter* Target, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "SetupToALL");

	Params::ABP_PalCaptureBodyBase_C_SetupToALL_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetCaptureLevelToALL
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::SetCaptureLevelToALL(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "SetCaptureLevelToALL");

	Params::ABP_PalCaptureBodyBase_C_SetCaptureLevelToALL_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.Get Is Into Ball
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IntoBall                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::Get_Is_Into_Ball(bool* IntoBall)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "Get Is Into Ball");

	Params::ABP_PalCaptureBodyBase_C_Get_Is_Into_Ball_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IntoBall != nullptr)
		*IntoBall = Parms.IntoBall;

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetIsIntoBall
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IntoBall                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalDataTableRowName_SoundIDSoundId                                                          (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::SetIsIntoBall(bool IntoBall, const struct FPalDataTableRowName_SoundID& SoundId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "SetIsIntoBall");

	Params::ABP_PalCaptureBodyBase_C_SetIsIntoBall_Params Parms{};

	Parms.IntoBall = IntoBall;
	Parms.SoundId = SoundId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.GetAkOwnerComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USceneComponent* ABP_PalCaptureBodyBase_C::GetAkOwnerComponent(class UStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "GetAkOwnerComponent");

	Params::ABP_PalCaptureBodyBase_C_GetAkOwnerComponent_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.PlaySound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDataTableRowName_SoundIDID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FPalSoundOptions            K2Node_MakeStruct_PalSoundOptions                                (NoDestructor)

void ABP_PalCaptureBodyBase_C::PlaySound(const struct FPalDataTableRowName_SoundID& ID, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "PlaySound");

	Params::ABP_PalCaptureBodyBase_C_PlaySound_Params Parms{};

	Parms.ID = ID;
	Parms.K2Node_MakeStruct_PalSoundOptions = K2Node_MakeStruct_PalSoundOptions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.IsSneakBonusEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::IsSneakBonusEnabled(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "IsSneakBonusEnabled");

	Params::ABP_PalCaptureBodyBase_C_IsSneakBonusEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetSneakBonusFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Flag                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNetworkMulticastGateComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::SetSneakBonusFlag(bool Flag, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalNetworkMulticastGateComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "SetSneakBonusFlag");

	Params::ABP_PalCaptureBodyBase_C_SetSneakBonusFlag_Params Parms{};

	Parms.Flag = Flag;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNetworkMulticastGateComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::Setup(class APalCharacter* TargetCharacter, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalNetworkMulticastGateComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "Setup");

	Params::ABP_PalCaptureBodyBase_C_Setup_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.GetTargetActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*               TargetActor                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetTargetHandle_targetHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::GetTargetActor(class APalCharacter** TargetActor, class UPalIndividualCharacterHandle* CallFunc_GetTargetHandle_targetHandle, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "GetTargetActor");

	Params::ABP_PalCaptureBodyBase_C_GetTargetActor_Params Parms{};

	Parms.CallFunc_GetTargetHandle_targetHandle = CallFunc_GetTargetHandle_targetHandle;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetActor != nullptr)
		*TargetActor = Parms.TargetActor;

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.GetCaptureLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::GetCaptureLevel(int32* Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "GetCaptureLevel");

	Params::ABP_PalCaptureBodyBase_C_GetCaptureLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetCaptureLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNetworkMulticastGateComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::SetCaptureLevel(int32 NewParam, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalNetworkMulticastGateComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "SetCaptureLevel");

	Params::ABP_PalCaptureBodyBase_C_SetCaptureLevel_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.GetTargetHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::GetTargetHandle(class UPalIndividualCharacterHandle** TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "GetTargetHandle");

	Params::ABP_PalCaptureBodyBase_C_GetTargetHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetHandle != nullptr)
		*TargetHandle = Parms.TargetHandle;

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PalCaptureBodyBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "ReceiveTick");

	Params::ABP_PalCaptureBodyBase_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetTargetIDToALL
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              TargetId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::SetTargetIDToALL(const struct FPalInstanceID& TargetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "SetTargetIDToALL");

	Params::ABP_PalCaptureBodyBase_C_SetTargetIDToALL_Params Parms{};

	Parms.TargetId = TargetId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.ExecuteUbergraph_BP_PalCaptureBodyBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetTargetHandle_targetHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              K2Node_CustomEvent_TargetID                                      (HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetIndividualHandle_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTargetActor_TargetActor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::ExecuteUbergraph_BP_PalCaptureBodyBase(int32 EntryPoint, class UPalIndividualCharacterHandle* CallFunc_GetTargetHandle_targetHandle, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalInstanceID& K2Node_CustomEvent_TargetID, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetIndividualHandle_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetTargetActor_TargetActor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsServer_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "ExecuteUbergraph_BP_PalCaptureBodyBase");

	Params::ABP_PalCaptureBodyBase_C_ExecuteUbergraph_BP_PalCaptureBodyBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTargetHandle_targetHandle = CallFunc_GetTargetHandle_targetHandle;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetID = K2Node_CustomEvent_TargetID;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;
	Parms.CallFunc_GetIndividualHandle_ReturnValue = CallFunc_GetIndividualHandle_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetTargetActor_TargetActor = CallFunc_GetTargetActor_TargetActor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.OnBouncedBody__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PalCaptureSphereBouncedReasonReasonType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::OnBouncedBody__DelegateSignature(enum class E_PalCaptureSphereBouncedReason ReasonType, class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "OnBouncedBody__DelegateSignature");

	Params::ABP_PalCaptureBodyBase_C_OnBouncedBody__DelegateSignature_Params Parms{};

	Parms.ReasonType = ReasonType;
	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.OnShakeBody__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PalCaptureBodyBase_C*    ShakedBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::OnShakeBody__DelegateSignature(class ABP_PalCaptureBodyBase_C* ShakedBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "OnShakeBody__DelegateSignature");

	Params::ABP_PalCaptureBodyBase_C_OnShakeBody__DelegateSignature_Params Parms{};

	Parms.ShakedBody = ShakedBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.OnPassingCapturePhase__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PhaseCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::OnPassingCapturePhase__DelegateSignature(int32 PhaseCount, class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "OnPassingCapturePhase__DelegateSignature");

	Params::ABP_PalCaptureBodyBase_C_OnPassingCapturePhase__DelegateSignature_Params Parms{};

	Parms.PhaseCount = PhaseCount;
	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.OnFailedCapture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalSphereCaptureFailedReasonFailedReason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::OnFailedCapture__DelegateSignature(class UPalIndividualCharacterHandle* TargetHandle, enum class EPalSphereCaptureFailedReason FailedReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "OnFailedCapture__DelegateSignature");

	Params::ABP_PalCaptureBodyBase_C_OnFailedCapture__DelegateSignature_Params Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.FailedReason = FailedReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.OnSuccessedCapture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalCaptureBodyBase_C::OnSuccessedCapture__DelegateSignature(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCaptureBodyBase_C", "OnSuccessedCapture__DelegateSignature");

	Params::ABP_PalCaptureBodyBase_C_OnSuccessedCapture__DelegateSignature_Params Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);

}

}


