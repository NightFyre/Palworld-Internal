#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C
// (Actor)

class UClass* ABP_PalPlayerCaptureSet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalPlayerCaptureSet_C");

	return Clss;
}


// BP_PalPlayerCaptureSet_C BP_PalPlayerCaptureSet.Default__BP_PalPlayerCaptureSet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalPlayerCaptureSet_C* ABP_PalPlayerCaptureSet_C::GetDefaultObj()
{
	static class ABP_PalPlayerCaptureSet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalPlayerCaptureSet_C*>(ABP_PalPlayerCaptureSet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.ResetCameraLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PalPlayerCaptureSet_C::ResetCameraLocation(const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "ResetCameraLocation");

	Params::ABP_PalPlayerCaptureSet_C_ResetCameraLocation_Params Parms{};

	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.UpdateShowOnlyActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm)
// TArray<class AActor*>              CallFunc_GetAllChildActors_ChildActors                           (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerCaptureSet_C::UpdateShowOnlyActors(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "UpdateShowOnlyActors");

	Params::ABP_PalPlayerCaptureSet_C_UpdateShowOnlyActors_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_GetAllChildActors_ChildActors = CallFunc_GetAllChildActors_ChildActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.Add Camera Relative Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AddLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PalPlayerCaptureSet_C::Add_Camera_Relative_Location(const struct FVector& AddLocation, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "Add Camera Relative Location");

	Params::ABP_PalPlayerCaptureSet_C_Add_Camera_Relative_Location_Params Parms{};

	Parms.AddLocation = AddLocation;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult = CallFunc_K2_AddRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.ResetRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PalPlayerCaptureSet_C::ResetRotation(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "ResetRotation");

	Params::ABP_PalPlayerCaptureSet_C_ResetRotation_Params Parms{};

	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.AddRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    AddRotator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PalPlayerCaptureSet_C::AddRotation(const struct FRotator& AddRotator, const struct FRotator& CallFunc_ComposeRotators_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "AddRotation");

	Params::ABP_PalPlayerCaptureSet_C_AddRotation_Params Parms{};

	Parms.AddRotator = AddRotator;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.GetDisplayCharacterActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_Player_ForUI_C*          UIDisplayPlayer                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Player_ForUI_C*          K2Node_DynamicCast_AsBP_Player_for_UI                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerCaptureSet_C::GetDisplayCharacterActor(class ABP_Player_ForUI_C** UIDisplayPlayer, class ABP_Player_ForUI_C* K2Node_DynamicCast_AsBP_Player_for_UI, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "GetDisplayCharacterActor");

	Params::ABP_PalPlayerCaptureSet_C_GetDisplayCharacterActor_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Player_for_UI = K2Node_DynamicCast_AsBP_Player_for_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (UIDisplayPlayer != nullptr)
		*UIDisplayPlayer = Parms.UIDisplayPlayer;

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.RequestMyPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Player_ForUI_C*          CallFunc_GetDisplayCharacterActor_UIDisplayPlayer                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerCaptureSet_C::RequestMyPlayer(class ABP_Player_ForUI_C* CallFunc_GetDisplayCharacterActor_UIDisplayPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "RequestMyPlayer");

	Params::ABP_PalPlayerCaptureSet_C_RequestMyPlayer_Params Parms{};

	Parms.CallFunc_GetDisplayCharacterActor_UIDisplayPlayer = CallFunc_GetDisplayCharacterActor_UIDisplayPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.RequestByCharacterMakeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfoMakeInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class ABP_Player_ForUI_C*          CallFunc_GetDisplayCharacterActor_UIDisplayPlayer                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerCaptureSet_C::RequestByCharacterMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo, class ABP_Player_ForUI_C* CallFunc_GetDisplayCharacterActor_UIDisplayPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "RequestByCharacterMakeInfo");

	Params::ABP_PalPlayerCaptureSet_C_RequestByCharacterMakeInfo_Params Parms{};

	Parms.MakeInfo = MakeInfo;
	Parms.CallFunc_GetDisplayCharacterActor_UIDisplayPlayer = CallFunc_GetDisplayCharacterActor_UIDisplayPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.CancelDelayHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PalPlayerCaptureSet_C::CancelDelayHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "CancelDelayHandle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.DelayCompleteSetup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PalPlayerCaptureSet_C::DelayCompleteSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "DelayCompleteSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.SetupDelayHandle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerCaptureSet_C::SetupDelayHandle(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "SetupDelayHandle");

	Params::ABP_PalPlayerCaptureSet_C_SetupDelayHandle_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.AdjustCamera
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetActorBoundSize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DegSin_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerCaptureSet_C::AdjustCamera(double TargetActorBoundSize, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_DegSin_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "AdjustCamera");

	Params::ABP_PalPlayerCaptureSet_C_AdjustCamera_Params Parms{};

	Parms.TargetActorBoundSize = TargetActorBoundSize;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_DegSin_ReturnValue = CallFunc_DegSin_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult = CallFunc_K2_AddRelativeLocation_SweepHitResult;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PalPlayerCaptureSet_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PalPlayerCaptureSet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerCaptureSet_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "ReceiveEndPlay");

	Params::ABP_PalPlayerCaptureSet_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerCaptureSet_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "ReceiveTick");

	Params::ABP_PalPlayerCaptureSet_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.ExecuteUbergraph_BP_PalPlayerCaptureSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Player_ForUI_C*          CallFunc_GetDisplayCharacterActor_UIDisplayPlayer                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_RLerp_Alpha_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalPlayerCaptureSet_C::ExecuteUbergraph_BP_PalPlayerCaptureSet(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ABP_Player_ForUI_C* CallFunc_GetDisplayCharacterActor_UIDisplayPlayer, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float K2Node_Event_DeltaSeconds, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FRotator& CallFunc_RLerp_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_RLerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "ExecuteUbergraph_BP_PalPlayerCaptureSet");

	Params::ABP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetDisplayCharacterActor_UIDisplayPlayer = CallFunc_GetDisplayCharacterActor_UIDisplayPlayer;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_RLerp_Alpha_ImplicitCast = CallFunc_RLerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.OnCompletedSetup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PalPlayerCaptureSet_C::OnCompletedSetup__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerCaptureSet_C", "OnCompletedSetup__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


