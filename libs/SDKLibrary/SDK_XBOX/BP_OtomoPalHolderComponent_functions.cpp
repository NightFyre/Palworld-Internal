#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C
// (None)

class UClass* UBP_OtomoPalHolderComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OtomoPalHolderComponent_C");

	return Clss;
}


// BP_OtomoPalHolderComponent_C BP_OtomoPalHolderComponent.Default__BP_OtomoPalHolderComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OtomoPalHolderComponent_C* UBP_OtomoPalHolderComponent_C::GetDefaultObj()
{
	static class UBP_OtomoPalHolderComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OtomoPalHolderComponent_C*>(UBP_OtomoPalHolderComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.SetOtomoInvokerDisable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Otomo                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsDisable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNavigationInvokerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::SetOtomoInvokerDisable(class AActor* Otomo, bool IsDisable, class UPalNavigationInvokerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "SetOtomoInvokerDisable");

	Params::UBP_OtomoPalHolderComponent_C_SetOtomoInvokerDisable_Params Parms{};

	Parms.Otomo = Otomo;
	Parms.IsDisable = IsDisable;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.Update Reserve Pal Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetOwnerCharacter_Character                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::Update_Reserve_Pal_Location(double DeltaTime, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APalCharacter* CallFunc_GetOwnerCharacter_Character, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_Array_Get_Item, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "Update Reserve Pal Location");

	Params::UBP_OtomoPalHolderComponent_C_Update_Reserve_Pal_Location_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwnerCharacter_Character = CallFunc_GetOwnerCharacter_Character;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.IncrementActiveOtomoCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalPlayerRecordData*        PlayerRecordData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::IncrementActiveOtomoCount(class UPalPlayerRecordData* PlayerRecordData, class FName CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "IncrementActiveOtomoCount");

	Params::UBP_OtomoPalHolderComponent_C_IncrementActiveOtomoCount_Params Parms{};

	Parms.PlayerRecordData = PlayerRecordData;
	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.GetNextValidSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OtomoPalHolderComponent_C::GetNextValidSlotIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "GetNextValidSlotIndex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.IsValidCurrentSelectPalActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetCurrentSelectPalActor_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_OtomoPalHolderComponent_C::IsValidCurrentSelectPalActor(class APalCharacter* CallFunc_TryGetCurrentSelectPalActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "IsValidCurrentSelectPalActor");

	Params::UBP_OtomoPalHolderComponent_C_IsValidCurrentSelectPalActor_Params Parms{};

	Parms.CallFunc_TryGetCurrentSelectPalActor_ReturnValue = CallFunc_TryGetCurrentSelectPalActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.TryGetCurrentSelectPalActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class APalCharacter* UBP_OtomoPalHolderComponent_C::TryGetCurrentSelectPalActor(class APalCharacter* CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "TryGetCurrentSelectPalActor");

	Params::UBP_OtomoPalHolderComponent_C_TryGetCurrentSelectPalActor_Params Parms{};

	Parms.CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue = CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.SetTrainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetDefaultPlayerCharacter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsControlledByPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::SetTrainer(class APalCharacter* Character, class AActor* CallFunc_GetOwner_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetDefaultPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsControlledByPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "SetTrainer");

	Params::UBP_OtomoPalHolderComponent_C_SetTrainer_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetDefaultPlayerCharacter_ReturnValue = CallFunc_GetDefaultPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsControlledByPlayer_ReturnValue = CallFunc_IsControlledByPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.RemovePalFromParty
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*RemoveHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>CallFunc_GetSlots_Slots                                          (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterSlotId         CallFunc_GetSlotId_ReturnValue                                   (NoDestructor)
// class UPalIndividualCharacterHandle*CallFunc_GetHandle_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::RemovePalFromParty(class UPalIndividualCharacterHandle* RemoveHandle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetSlots_Slots, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalCharacterSlotId& CallFunc_GetSlotId_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "RemovePalFromParty");

	Params::UBP_OtomoPalHolderComponent_C_RemovePalFromParty_Params Parms{};

	Parms.RemoveHandle = RemoveHandle;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSlots_Slots = CallFunc_GetSlots_Slots;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSlotId_ReturnValue = CallFunc_GetSlotId_ReturnValue;
	Parms.CallFunc_GetHandle_ReturnValue = CallFunc_GetHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.GetOwnerCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*               Character                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::GetOwnerCharacter(class APalCharacter** Character, class AActor* CallFunc_GetOwner_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "GetOwnerCharacter");

	Params::UBP_OtomoPalHolderComponent_C_GetOwnerCharacter_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.FindNearstEnemy
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetEnemyWhenOtomoThrow_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::FindNearstEnemy(const struct FVector& Location, class AActor** Actor, class APalCharacter* CallFunc_GetEnemyWhenOtomoThrow_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "FindNearstEnemy");

	Params::UBP_OtomoPalHolderComponent_C_FindNearstEnemy_Params Parms{};

	Parms.Location = Location;
	Parms.CallFunc_GetEnemyWhenOtomoThrow_ReturnValue = CallFunc_GetEnemyWhenOtomoThrow_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.ActivateCurrentOtomoFromBall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  BallTransform                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      BallHitActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::ActivateCurrentOtomoFromBall(const struct FTransform& BallTransform, class AActor* BallHitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "ActivateCurrentOtomoFromBall");

	Params::UBP_OtomoPalHolderComponent_C_ActivateCurrentOtomoFromBall_Params Parms{};

	Parms.BallTransform = BallTransform;
	Parms.BallHitActor = BallHitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.ActivateCurrentOtomoNearThePlayer
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_SpawnPalNearTrainer_ReturnValue            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActivateCurrentOtomo_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_OtomoPalHolderComponent_C::ActivateCurrentOtomoNearThePlayer(const struct FTransform& CallFunc_GetTransform_SpawnPalNearTrainer_ReturnValue, bool CallFunc_ActivateCurrentOtomo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "ActivateCurrentOtomoNearThePlayer");

	Params::UBP_OtomoPalHolderComponent_C_ActivateCurrentOtomoNearThePlayer_Params Parms{};

	Parms.CallFunc_GetTransform_SpawnPalNearTrainer_ReturnValue = CallFunc_GetTransform_SpawnPalNearTrainer_ReturnValue;
	Parms.CallFunc_ActivateCurrentOtomo_ReturnValue = CallFunc_ActivateCurrentOtomo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.ActivateCurrentOtomo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Inactivate_Otomo_isSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRidingByOtomoSlotID_isRiding                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActivateOtomo_isSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_OtomoPalHolderComponent_C::ActivateCurrentOtomo(const struct FTransform& SpawnTransform, bool CallFunc_Inactivate_Otomo_isSuccess, bool CallFunc_IsRidingByOtomoSlotID_isRiding, bool CallFunc_ActivateOtomo_isSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "ActivateCurrentOtomo");

	Params::UBP_OtomoPalHolderComponent_C_ActivateCurrentOtomo_Params Parms{};

	Parms.SpawnTransform = SpawnTransform;
	Parms.CallFunc_Inactivate_Otomo_isSuccess = CallFunc_Inactivate_Otomo_isSuccess;
	Parms.CallFunc_IsRidingByOtomoSlotID_isRiding = CallFunc_IsRidingByOtomoSlotID_isRiding;
	Parms.CallFunc_ActivateOtomo_isSuccess = CallFunc_ActivateOtomo_isSuccess;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.GetSpawnedOtomoID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_OtomoPalHolderComponent_C::GetSpawnedOtomoID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "GetSpawnedOtomoID");

	Params::UBP_OtomoPalHolderComponent_C_GetSpawnedOtomoID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.TryFixAssignNearestWorkSelectedOtomo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Otomo_C*K2Node_DynamicCast_AsBP_Monster_AIController_Otomo               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_GetCompositeRoot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionOtomoDefault*    K2Node_DynamicCast_AsPal_AIAction_Otomo_Default                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::TryFixAssignNearestWorkSelectedOtomo(class AActor* HitActor, class APalCharacter* CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess_1, class UPalAIActionCompositeBase* CallFunc_GetCompositeRoot_ReturnValue, class UPalAIActionOtomoDefault* K2Node_DynamicCast_AsPal_AIAction_Otomo_Default, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "TryFixAssignNearestWorkSelectedOtomo");

	Params::UBP_OtomoPalHolderComponent_C_TryFixAssignNearestWorkSelectedOtomo_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue = CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Otomo = K2Node_DynamicCast_AsBP_Monster_AIController_Otomo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCompositeRoot_ReturnValue = CallFunc_GetCompositeRoot_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Otomo_Default = K2Node_DynamicCast_AsPal_AIAction_Otomo_Default;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.SetSelectOtomoID_Internal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::SetSelectOtomoID_Internal(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "SetSelectOtomoID_Internal");

	Params::UBP_OtomoPalHolderComponent_C_SetSelectOtomoID_Internal_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.DecrementSelectOtomoID_Internal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxOtomoNum_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsALLEmpty_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedOtomoID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxOtomoNum_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::DecrementSelectOtomoID_Internal(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetMaxOtomoNum_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsALLEmpty_ReturnValue, int32 CallFunc_GetSelectedOtomoID_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetMaxOtomoNum_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "DecrementSelectOtomoID_Internal");

	Params::UBP_OtomoPalHolderComponent_C_DecrementSelectOtomoID_Internal_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMaxOtomoNum_ReturnValue = CallFunc_GetMaxOtomoNum_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue = CallFunc_GetOtomoIndividualHandle_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsALLEmpty_ReturnValue = CallFunc_IsALLEmpty_ReturnValue;
	Parms.CallFunc_GetSelectedOtomoID_ReturnValue = CallFunc_GetSelectedOtomoID_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetMaxOtomoNum_ReturnValue_1 = CallFunc_GetMaxOtomoNum_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.IncrementSelectOtomoID_Internal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TempStartIndex                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxOtomoNum_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxOtomoNum_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::IncrementSelectOtomoID_Internal(int32 TempStartIndex, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetMaxOtomoNum_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetMaxOtomoNum_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "IncrementSelectOtomoID_Internal");

	Params::UBP_OtomoPalHolderComponent_C_IncrementSelectOtomoID_Internal_Params Parms{};

	Parms.TempStartIndex = TempStartIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue = CallFunc_GetOtomoIndividualHandle_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMaxOtomoNum_ReturnValue = CallFunc_GetMaxOtomoNum_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetMaxOtomoNum_ReturnValue_1 = CallFunc_GetMaxOtomoNum_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.InactiveActor
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               StayVisible                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Otomo_C*K2Node_DynamicCast_AsBP_Monster_AIController_Otomo               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::InactiveActor(class APalCharacter* Actor, bool StayVisible, bool* IsSuccess, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "InactiveActor");

	Params::UBP_OtomoPalHolderComponent_C_InactiveActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.StayVisible = StayVisible;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Otomo = K2Node_DynamicCast_AsBP_Monster_AIController_Otomo;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.InitializeSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OtomoPalHolderComponent_C::InitializeSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "InitializeSlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.IsActivatedSelectOtomo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_OtomoPalHolderComponent_C::IsActivatedSelectOtomo(bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "IsActivatedSelectOtomo");

	Params::UBP_OtomoPalHolderComponent_C_IsActivatedSelectOtomo_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.GetMaxOtomoNum
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_OtomoPalHolderComponent_C::GetMaxOtomoNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "GetMaxOtomoNum");

	Params::UBP_OtomoPalHolderComponent_C_GetMaxOtomoNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.GetPreviousOtomoSlotID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WorkIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartIndex                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxOtomoNum_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsALLEmpty_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_OtomoPalHolderComponent_C::GetPreviousOtomoSlotID(int32 WorkIndex, int32 StartIndex, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetMaxOtomoNum_ReturnValue, bool CallFunc_IsALLEmpty_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "GetPreviousOtomoSlotID");

	Params::UBP_OtomoPalHolderComponent_C_GetPreviousOtomoSlotID_Params Parms{};

	Parms.WorkIndex = WorkIndex;
	Parms.StartIndex = StartIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue = CallFunc_GetOtomoIndividualHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetMaxOtomoNum_ReturnValue = CallFunc_GetMaxOtomoNum_ReturnValue;
	Parms.CallFunc_IsALLEmpty_ReturnValue = CallFunc_IsALLEmpty_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.GetNextOtomoSlotID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TempWorkIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TempStartIndex                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CalcSlotID                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxOtomoNum_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxOtomoNum_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_OtomoPalHolderComponent_C::GetNextOtomoSlotID(int32 TempWorkIndex, int32 TempStartIndex, int32 CalcSlotID, bool IsLoop, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetMaxOtomoNum_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_GetMaxOtomoNum_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "GetNextOtomoSlotID");

	Params::UBP_OtomoPalHolderComponent_C_GetNextOtomoSlotID_Params Parms{};

	Parms.TempWorkIndex = TempWorkIndex;
	Parms.TempStartIndex = TempStartIndex;
	Parms.CalcSlotID = CalcSlotID;
	Parms.IsLoop = IsLoop;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMaxOtomoNum_ReturnValue = CallFunc_GetMaxOtomoNum_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetMaxOtomoNum_ReturnValue_1 = CallFunc_GetMaxOtomoNum_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue = CallFunc_GetOtomoIndividualHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.GetSelectedOtomoID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_OtomoPalHolderComponent_C::GetSelectedOtomoID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "GetSelectedOtomoID");

	Params::UBP_OtomoPalHolderComponent_C_GetSelectedOtomoID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.IsRidingBySelectSlotID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedOtomoID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRidingByOtomoSlotID_isRiding                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_OtomoPalHolderComponent_C::IsRidingBySelectSlotID(int32 CallFunc_GetSelectedOtomoID_ReturnValue, bool CallFunc_IsRidingByOtomoSlotID_isRiding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "IsRidingBySelectSlotID");

	Params::UBP_OtomoPalHolderComponent_C_IsRidingBySelectSlotID_Params Parms{};

	Parms.CallFunc_GetSelectedOtomoID_ReturnValue = CallFunc_GetSelectedOtomoID_ReturnValue;
	Parms.CallFunc_IsRidingByOtomoSlotID_isRiding = CallFunc_IsRidingByOtomoSlotID_isRiding;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.IsRidingBySpawnSlotID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRidingByOtomoSlotID_isRiding                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_OtomoPalHolderComponent_C::IsRidingBySpawnSlotID(bool CallFunc_IsRidingByOtomoSlotID_isRiding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "IsRidingBySpawnSlotID");

	Params::UBP_OtomoPalHolderComponent_C_IsRidingBySpawnSlotID_Params Parms{};

	Parms.CallFunc_IsRidingByOtomoSlotID_isRiding = CallFunc_IsRidingByOtomoSlotID_isRiding;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.CallCancelCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetSelectedOtomoID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Otomo_C*K2Node_DynamicCast_AsBP_Monster_AIController_Otomo               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetAIActionComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIActionCategory    CallFunc_GetCurrentAIActionCategory_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::CallCancelCommand(int32 CallFunc_GetSelectedOtomoID_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess_1, class UPalAIActionComponent* CallFunc_GetAIActionComponent_ReturnValue, enum class EPalAIActionCategory CallFunc_GetCurrentAIActionCategory_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "CallCancelCommand");

	Params::UBP_OtomoPalHolderComponent_C_CallCancelCommand_Params Parms{};

	Parms.CallFunc_GetSelectedOtomoID_ReturnValue = CallFunc_GetSelectedOtomoID_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue = CallFunc_GetOtomoIndividualHandle_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Otomo = K2Node_DynamicCast_AsBP_Monster_AIController_Otomo;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAIActionComponent_ReturnValue = CallFunc_GetAIActionComponent_ReturnValue;
	Parms.CallFunc_GetCurrentAIActionCategory_ReturnValue = CallFunc_GetCurrentAIActionCategory_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.CoopCallCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotID                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Otomo_C*K2Node_DynamicCast_AsBP_Monster_AIController_Otomo               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetAIActionComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIActionCategory    CallFunc_GetCurrentAIActionCategory_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::CoopCallCommand(int32 SlotID, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPalAIActionComponent* CallFunc_GetAIActionComponent_ReturnValue, enum class EPalAIActionCategory CallFunc_GetCurrentAIActionCategory_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "CoopCallCommand");

	Params::UBP_OtomoPalHolderComponent_C_CoopCallCommand_Params Parms{};

	Parms.SlotID = SlotID;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue = CallFunc_GetOtomoIndividualHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Otomo = K2Node_DynamicCast_AsBP_Monster_AIController_Otomo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAIActionComponent_ReturnValue = CallFunc_GetAIActionComponent_ReturnValue;
	Parms.CallFunc_GetCurrentAIActionCategory_ReturnValue = CallFunc_GetCurrentAIActionCategory_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.Dummy Despawn Callback
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::Dummy_Despawn_Callback(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "Dummy Despawn Callback");

	Params::UBP_OtomoPalHolderComponent_C_Dummy_Despawn_Callback_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.Try Get Current Active Pal Actor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               Otomo                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetSpawnedOtomo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::Try_Get_Current_Active_Pal_Actor(class APalCharacter** Otomo, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "Try Get Current Active Pal Actor");

	Params::UBP_OtomoPalHolderComponent_C_Try_Get_Current_Active_Pal_Actor_Params Parms{};

	Parms.CallFunc_TryGetSpawnedOtomo_ReturnValue = CallFunc_TryGetSpawnedOtomo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Otomo != nullptr)
		*Otomo = Parms.Otomo;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.ActiveAndAttackCurrentPal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Otomo_C*K2Node_DynamicCast_AsBP_Monster_AIController_Otomo               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::ActiveAndAttackCurrentPal(class AActor* Target, class APalCharacter* CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "ActiveAndAttackCurrentPal");

	Params::UBP_OtomoPalHolderComponent_C_ActiveAndAttackCurrentPal_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue = CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Otomo = K2Node_DynamicCast_AsBP_Monster_AIController_Otomo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.Update Otomo Slot in Local
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*LastHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::Update_Otomo_Slot_in_Local(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "Update Otomo Slot in Local");

	Params::UBP_OtomoPalHolderComponent_C_Update_Otomo_Slot_in_Local_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.LastHandle = LastHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.Update Otomo Slot In Server
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*LastHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Inactivate_Otomo_By_Handle_isSuccess                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::Update_Otomo_Slot_In_Server(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Inactivate_Otomo_By_Handle_isSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "Update Otomo Slot In Server");

	Params::UBP_OtomoPalHolderComponent_C_Update_Otomo_Slot_In_Server_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.LastHandle = LastHandle;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Inactivate_Otomo_By_Handle_isSuccess = CallFunc_Inactivate_Otomo_By_Handle_isSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.Inactivate Otomo By Handle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*IndividualHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               TempOtomoActor                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UPalAbilitySkillParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCooping_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPartnerSkillParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActiveActorFlag_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InactiveActor_isSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ReturnPalEffect_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetOwnerControlledCharacter_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::Inactivate_Otomo_By_Handle(class UPalIndividualCharacterHandle* IndividualHandle, bool* IsSuccess, class APalCharacter* TempOtomoActor, class UPalAbilitySkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsCooping_ReturnValue, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_GetActiveActorFlag_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_InactiveActor_isSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ReturnPalEffect_C* CallFunc_FinishSpawningActor_ReturnValue, class APalCharacter* CallFunc_TryGetOwnerControlledCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "Inactivate Otomo By Handle");

	Params::UBP_OtomoPalHolderComponent_C_Inactivate_Otomo_By_Handle_Params Parms{};

	Parms.IndividualHandle = IndividualHandle;
	Parms.TempOtomoActor = TempOtomoActor;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsCooping_ReturnValue = CallFunc_IsCooping_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetActiveActorFlag_ReturnValue = CallFunc_GetActiveActorFlag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_InactiveActor_isSuccess = CallFunc_InactiveActor_isSuccess;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_TryGetOwnerControlledCharacter_ReturnValue = CallFunc_TryGetOwnerControlledCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.Inactivate Otomo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Inactivate_Otomo_By_Handle_isSuccess                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::Inactivate_Otomo(bool* IsSuccess, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, bool CallFunc_Inactivate_Otomo_By_Handle_isSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "Inactivate Otomo");

	Params::UBP_OtomoPalHolderComponent_C_Inactivate_Otomo_Params Parms{};

	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue = CallFunc_GetOtomoIndividualHandle_ReturnValue;
	Parms.CallFunc_Inactivate_Otomo_By_Handle_isSuccess = CallFunc_Inactivate_Otomo_By_Handle_isSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.ActivateOtomo
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  StartTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               TempPal                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               IsDead                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TempAngle                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               Trainer                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UPalAbilitySkillParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalVisualEffectBase*        CallFunc_AddVisualEffectForActor_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_NPCOtomo_C*K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIControllerBase_C*K2Node_DynamicCast_AsBP_Monster_AIController_Base                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPartnerSkillParameterComponent*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLive_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetPalPlayerState_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerRecordData*        CallFunc_GetRecordData_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsControlledByPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::ActivateOtomo(int32 SlotID, const struct FTransform& StartTransform, bool* IsSuccess, class APalCharacter* TempPal, bool IsDead, double TempAngle, class APalCharacter* Trainer, class UPalAbilitySkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_1, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalVisualEffectBase* CallFunc_AddVisualEffectForActor_ReturnValue, class ABP_MonsterAIController_NPCOtomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo, bool K2Node_DynamicCast_bSuccess_1, class ABP_MonsterAIControllerBase_C* K2Node_DynamicCast_AsBP_Monster_AIController_Base, bool K2Node_DynamicCast_bSuccess_2, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsLive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess_3, class APalPlayerState* CallFunc_GetPalPlayerState_ReturnValue, bool CallFunc_IsDead_ReturnValue, class UPalPlayerRecordData* CallFunc_GetRecordData_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsControlledByPlayer_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class FName CallFunc_GetCharacterID_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue_1, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class AActor* CallFunc_GetOwner_ReturnValue_1, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "ActivateOtomo");

	Params::UBP_OtomoPalHolderComponent_C_ActivateOtomo_Params Parms{};

	Parms.SlotID = SlotID;
	Parms.StartTransform = StartTransform;
	Parms.TempPal = TempPal;
	Parms.IsDead = IsDead;
	Parms.TempAngle = TempAngle;
	Parms.Trainer = Trainer;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddVisualEffectForActor_ReturnValue = CallFunc_AddVisualEffectForActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo = K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Base = K2Node_DynamicCast_AsBP_Monster_AIController_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_IsLive_ReturnValue = CallFunc_IsLive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetPalPlayerState_ReturnValue = CallFunc_GetPalPlayerState_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_GetRecordData_ReturnValue = CallFunc_GetRecordData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue = CallFunc_GetOtomoIndividualHandle_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsControlledByPlayer_ReturnValue = CallFunc_IsControlledByPlayer_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetCharacterID_ReturnValue = CallFunc_GetCharacterID_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue_1 = CallFunc_GetOtomoIndividualHandle_ReturnValue_1;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue_2 = CallFunc_GetOtomoIndividualHandle_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue_1 = CallFunc_TryGetIndividualActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.IsRidingByOtomoSlotID
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              SlotID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRiding                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectedSlotID                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ControlledPawn                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::IsRidingByOtomoSlotID(int32 SlotID, bool* IsRiding, int32 SelectedSlotID, class AActor* ControlledPawn, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "IsRidingByOtomoSlotID");

	Params::UBP_OtomoPalHolderComponent_C_IsRidingByOtomoSlotID_Params Parms{};

	Parms.SlotID = SlotID;
	Parms.SelectedSlotID = SelectedSlotID;
	Parms.ControlledPawn = ControlledPawn;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue = CallFunc_GetOtomoIndividualHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRiding != nullptr)
		*IsRiding = Parms.IsRiding;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.Add Otomo Down Log
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               CallFunc_IsControlledByPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FPalLogAdditionalData       K2Node_MakeStruct_PalLogAdditionalData                           (None)
// class FText                        CallFunc_CreateLogText_outText                                   (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UPalLogManager*              CallFunc_GetLogManager_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_AddLog_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::Add_Otomo_Down_Log(const struct FPalDeadInfo& Actor, bool CallFunc_IsControlledByPlayer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetNickName_outName, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FPalLogAdditionalData& K2Node_MakeStruct_PalLogAdditionalData, class FText CallFunc_CreateLogText_outText, class FText CallFunc_Format_ReturnValue, class UPalLogManager* CallFunc_GetLogManager_ReturnValue, const struct FGuid& CallFunc_AddLog_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "Add Otomo Down Log");

	Params::UBP_OtomoPalHolderComponent_C_Add_Otomo_Down_Log_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_IsControlledByPlayer_ReturnValue = CallFunc_IsControlledByPlayer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_PalLogAdditionalData = K2Node_MakeStruct_PalLogAdditionalData;
	Parms.CallFunc_CreateLogText_outText = CallFunc_CreateLogText_outText;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetLogManager_ReturnValue = CallFunc_GetLogManager_ReturnValue;
	Parms.CallFunc_AddLog_ReturnValue = CallFunc_AddLog_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.FindSlotByIndividualID
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              SlotID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TempSlotID                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>CallFunc_GetSlots_Slots                                          (ReferenceParm)
// class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandle_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              CallFunc_GetIndividualID_ReturnValue                             (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::FindSlotByIndividualID(const struct FPalInstanceID& ID, int32* SlotID, int32 TempSlotID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetSlots_Slots, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "FindSlotByIndividualID");

	Params::UBP_OtomoPalHolderComponent_C_FindSlotByIndividualID_Params Parms{};

	Parms.ID = ID;
	Parms.TempSlotID = TempSlotID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetSlots_Slots = CallFunc_GetSlots_Slots;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetHandle_ReturnValue = CallFunc_GetHandle_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIndividualID_ReturnValue = CallFunc_GetIndividualID_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue = CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotID != nullptr)
		*SlotID = Parms.SlotID;

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.SpawnCharacterCallback
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              SlotID                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               Trainer                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               TempSpawnedMonster                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindSlotByIndividualID_SlotID                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPartnerSkillParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsControlledByPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsControlledByPlayer_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsControlledByPlayer_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalRideMarkerComponent*     CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNavigationInvokerComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Otomo_C*K2Node_DynamicCast_AsBP_Monster_AIController_Otomo               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_AdjustActorToFloor_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Otomo_C*K2Node_DynamicCast_AsBP_Monster_AIController_Otomo_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::SpawnCharacterCallback(const struct FPalInstanceID& ID, int32 SlotID, class APalCharacter* Trainer, class APalCharacter* TempSpawnedMonster, int32 CallFunc_FindSlotByIndividualID_SlotID, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsControlledByPlayer_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsControlledByPlayer_ReturnValue_1, bool CallFunc_IsControlledByPlayer_ReturnValue_2, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPalNavigationInvokerComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_AddUnique_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, class AActor* CallFunc_AdjustActorToFloor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AController* K2Node_DynamicCast_AsController_1, bool K2Node_DynamicCast_bSuccess_3, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_4, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "SpawnCharacterCallback");

	Params::UBP_OtomoPalHolderComponent_C_SpawnCharacterCallback_Params Parms{};

	Parms.ID = ID;
	Parms.SlotID = SlotID;
	Parms.Trainer = Trainer;
	Parms.TempSpawnedMonster = TempSpawnedMonster;
	Parms.CallFunc_FindSlotByIndividualID_SlotID = CallFunc_FindSlotByIndividualID_SlotID;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsControlledByPlayer_ReturnValue = CallFunc_IsControlledByPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsControlledByPlayer_ReturnValue_1 = CallFunc_IsControlledByPlayer_ReturnValue_1;
	Parms.CallFunc_IsControlledByPlayer_ReturnValue_2 = CallFunc_IsControlledByPlayer_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue = CallFunc_GetOtomoIndividualHandle_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue_1 = CallFunc_GetOtomoIndividualHandle_ReturnValue_1;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Otomo = K2Node_DynamicCast_AsBP_Monster_AIController_Otomo;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_AdjustActorToFloor_ReturnValue = CallFunc_AdjustActorToFloor_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsController_1 = K2Node_DynamicCast_AsController_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Otomo_1 = K2Node_DynamicCast_AsBP_Monster_AIController_Otomo_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.SpawnOtomo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TempAngle                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               Trainer                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FNetworkActorSpawnParametersK2Node_MakeStruct_NetworkActorSpawnParameters                    (NoDestructor)

void UBP_OtomoPalHolderComponent_C::SpawnOtomo(int32 SlotID, double TempAngle, class APalCharacter* Trainer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FNetworkActorSpawnParameters& K2Node_MakeStruct_NetworkActorSpawnParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "SpawnOtomo");

	Params::UBP_OtomoPalHolderComponent_C_SpawnOtomo_Params Parms{};

	Parms.SlotID = SlotID;
	Parms.TempAngle = TempAngle;
	Parms.Trainer = Trainer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue = CallFunc_GetOtomoIndividualHandle_ReturnValue;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeStruct_NetworkActorSpawnParameters = K2Node_MakeStruct_NetworkActorSpawnParameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.ActivateCurrentOtomoFromBall_ToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  BallTransform                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::ActivateCurrentOtomoFromBall_ToServer(const struct FTransform& BallTransform, class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "ActivateCurrentOtomoFromBall_ToServer");

	Params::UBP_OtomoPalHolderComponent_C_ActivateCurrentOtomoFromBall_ToServer_Params Parms{};

	Parms.BallTransform = BallTransform;
	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.SetActivateOtomoID_ToALL
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::SetActivateOtomoID_ToALL(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "SetActivateOtomoID_ToALL");

	Params::UBP_OtomoPalHolderComponent_C_SetActivateOtomoID_ToALL_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.CallOnActivateOtomo_ToALL
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OtomoPalHolderComponent_C::CallOnActivateOtomo_ToALL()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "CallOnActivateOtomo_ToALL");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.CallOnInactivateOtomo_ToALL
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OtomoPalHolderComponent_C::CallOnInactivateOtomo_ToALL()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "CallOnInactivateOtomo_ToALL");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.SetLocationOtomoForActive_ToAll
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Otomo                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  TF                                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::SetLocationOtomoForActive_ToAll(class AActor* Otomo, const struct FTransform& TF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "SetLocationOtomoForActive_ToAll");

	Params::UBP_OtomoPalHolderComponent_C_SetLocationOtomoForActive_ToAll_Params Parms{};

	Parms.Otomo = Otomo;
	Parms.TF = TF;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "ReceiveEndPlay");

	Params::UBP_OtomoPalHolderComponent_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.UpdateSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*LastHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::UpdateSlot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "UpdateSlot");

	Params::UBP_OtomoPalHolderComponent_C_UpdateSlot_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.LastHandle = LastHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.Otomo_DeathEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_OtomoPalHolderComponent_C::Otomo_DeathEvent(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "Otomo_DeathEvent");

	Params::UBP_OtomoPalHolderComponent_C_Otomo_DeathEvent_Params Parms{};

	Parms.DeadInfo = DeadInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.InactivateCurrentOtomo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OtomoPalHolderComponent_C::InactivateCurrentOtomo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "InactivateCurrentOtomo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OtomoPalHolderComponent_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.Setup_ToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OtomoPalHolderComponent_C::Setup_ToServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "Setup_ToServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.UpdateSlotInServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*LastHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::UpdateSlotInServer(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "UpdateSlotInServer");

	Params::UBP_OtomoPalHolderComponent_C_UpdateSlotInServer_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.LastHandle = LastHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.SpawnOtomoByLoad
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::SpawnOtomoByLoad(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "SpawnOtomoByLoad");

	Params::UBP_OtomoPalHolderComponent_C_SpawnOtomoByLoad_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "ReceiveTick");

	Params::UBP_OtomoPalHolderComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.DelayAddOtomoForReserverList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               Otomo                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::DelayAddOtomoForReserverList(class APalCharacter* Otomo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "DelayAddOtomoForReserverList");

	Params::UBP_OtomoPalHolderComponent_C_DelayAddOtomoForReserverList_Params Parms{};

	Parms.Otomo = Otomo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.ExecuteUbergraph_BP_OtomoPalHolderComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalTutorialManager*         CallFunc_GetTutorialManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_BallTransform                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_HitActor                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActivateCurrentOtomo_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindNearstEnemy_Actor                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetCurrentSelectPalActor_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Otomo_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_TF                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_slotIndex_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_CustomEvent_LastHandle_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDeadInfo                K2Node_CustomEvent_DeadInfo                                      (NoDestructor)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Inactivate_Otomo_isSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Inactivate_Otomo_isSuccess_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_slotIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_CustomEvent_LastHandle                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_slotIndex                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_Otomo                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Update_Reserve_Pal_Location_DeltaTime_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponent_C::ExecuteUbergraph_BP_OtomoPalHolderComponent(int32 EntryPoint, class UPalTutorialManager* CallFunc_GetTutorialManager_ReturnValue, const struct FTransform& K2Node_CustomEvent_BallTransform, class AActor* K2Node_CustomEvent_HitActor, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_ActivateCurrentOtomo_ReturnValue, class AActor* CallFunc_FindNearstEnemy_Actor, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_ID, class APalCharacter* CallFunc_TryGetCurrentSelectPalActor_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_Otomo_1, const struct FTransform& K2Node_CustomEvent_TF, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 K2Node_CustomEvent_slotIndex_1, class UPalIndividualCharacterHandle* K2Node_CustomEvent_LastHandle_1, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Inactivate_Otomo_isSuccess, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Inactivate_Otomo_isSuccess_1, int32 K2Node_CustomEvent_slotIndex, class UPalIndividualCharacterHandle* K2Node_CustomEvent_LastHandle, int32 K2Node_Event_slotIndex, float K2Node_Event_DeltaSeconds, class APalCharacter* K2Node_CustomEvent_Otomo, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Update_Reserve_Pal_Location_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "ExecuteUbergraph_BP_OtomoPalHolderComponent");

	Params::UBP_OtomoPalHolderComponent_C_ExecuteUbergraph_BP_OtomoPalHolderComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTutorialManager_ReturnValue = CallFunc_GetTutorialManager_ReturnValue;
	Parms.K2Node_CustomEvent_BallTransform = K2Node_CustomEvent_BallTransform;
	Parms.K2Node_CustomEvent_HitActor = K2Node_CustomEvent_HitActor;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_ActivateCurrentOtomo_ReturnValue = CallFunc_ActivateCurrentOtomo_ReturnValue;
	Parms.CallFunc_FindNearstEnemy_Actor = CallFunc_FindNearstEnemy_Actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.CallFunc_TryGetCurrentSelectPalActor_ReturnValue = CallFunc_TryGetCurrentSelectPalActor_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Otomo_1 = K2Node_CustomEvent_Otomo_1;
	Parms.K2Node_CustomEvent_TF = K2Node_CustomEvent_TF;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_slotIndex_1 = K2Node_CustomEvent_slotIndex_1;
	Parms.K2Node_CustomEvent_LastHandle_1 = K2Node_CustomEvent_LastHandle_1;
	Parms.K2Node_CustomEvent_DeadInfo = K2Node_CustomEvent_DeadInfo;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Inactivate_Otomo_isSuccess = CallFunc_Inactivate_Otomo_isSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Inactivate_Otomo_isSuccess_1 = CallFunc_Inactivate_Otomo_isSuccess_1;
	Parms.K2Node_CustomEvent_slotIndex = K2Node_CustomEvent_slotIndex;
	Parms.K2Node_CustomEvent_LastHandle = K2Node_CustomEvent_LastHandle;
	Parms.K2Node_Event_slotIndex = K2Node_Event_slotIndex;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_Otomo = K2Node_CustomEvent_Otomo;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Update_Reserve_Pal_Location_DeltaTime_ImplicitCast = CallFunc_Update_Reserve_Pal_Location_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.OnInactiveOtomoEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OtomoPalHolderComponent_C::OnInactiveOtomoEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "OnInactiveOtomoEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.OnUsedActiveSkill__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OtomoPalHolderComponent_C::OnUsedActiveSkill__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "OnUsedActiveSkill__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.OnActivateOtomo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OtomoPalHolderComponent_C::OnActivateOtomo__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "OnActivateOtomo__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C.OnChangedSelectOtomoIndexEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OtomoPalHolderComponent_C::OnChangedSelectOtomoIndexEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponent_C", "OnChangedSelectOtomoIndexEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


