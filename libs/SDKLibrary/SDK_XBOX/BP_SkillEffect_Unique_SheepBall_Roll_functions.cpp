#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_Unique_SheepBall_Roll.BP_SkillEffect_Unique_SheepBall_Roll_C
// (Actor)

class UClass* ABP_SkillEffect_Unique_SheepBall_Roll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_Unique_SheepBall_Roll_C");

	return Clss;
}


// BP_SkillEffect_Unique_SheepBall_Roll_C BP_SkillEffect_Unique_SheepBall_Roll.Default__BP_SkillEffect_Unique_SheepBall_Roll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_Unique_SheepBall_Roll_C* ABP_SkillEffect_Unique_SheepBall_Roll_C::GetDefaultObj()
{
	static class ABP_SkillEffect_Unique_SheepBall_Roll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_Unique_SheepBall_Roll_C*>(ABP_SkillEffect_Unique_SheepBall_Roll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkillEffect_Unique_SheepBall_Roll.BP_SkillEffect_Unique_SheepBall_Roll_C.SetOwnerCapsuleHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_SheepBall_Roll_C::SetOwnerCapsuleHeight(double Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_SheepBall_Roll_C", "SetOwnerCapsuleHeight");

	Params::ABP_SkillEffect_Unique_SheepBall_Roll_C_SetOwnerCapsuleHeight_Params Parms{};

	Parms.Height = Height;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_Unique_SheepBall_Roll.BP_SkillEffect_Unique_SheepBall_Roll_C.GetRollEffectLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetOwnerCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_SheepBall_Roll_C::GetRollEffectLocation(struct FVector* Location, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_SheepBall_Roll_C", "GetRollEffectLocation");

	Params::ABP_SkillEffect_Unique_SheepBall_Roll_C_GetRollEffectLocation_Params Parms{};

	Parms.CallFunc_GetOwnerCharacter_ReturnValue = CallFunc_GetOwnerCharacter_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BP_SkillEffect_Unique_SheepBall_Roll.BP_SkillEffect_Unique_SheepBall_Roll_C.ActivateEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EffectName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_SheepBall_Roll_C::ActivateEffect(class FName EffectName, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_SheepBall_Roll_C", "ActivateEffect");

	Params::ABP_SkillEffect_Unique_SheepBall_Roll_C_ActivateEffect_Params Parms{};

	Parms.EffectName = EffectName;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_Unique_SheepBall_Roll.BP_SkillEffect_Unique_SheepBall_Roll_C.InitializeEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>   K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_SheepBall_Roll_C::InitializeEffects(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UNiagaraComponent*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_SheepBall_Roll_C", "InitializeEffects");

	Params::ABP_SkillEffect_Unique_SheepBall_Roll_C_InitializeEffects_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_Unique_SheepBall_Roll.BP_SkillEffect_Unique_SheepBall_Roll_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_Unique_SheepBall_Roll_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_SheepBall_Roll_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_Unique_SheepBall_Roll.BP_SkillEffect_Unique_SheepBall_Roll_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaSecond                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_SheepBall_Roll_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_SheepBall_Roll_C", "FadeOutEffect");

	Params::ABP_SkillEffect_Unique_SheepBall_Roll_C_FadeOutEffect_Params Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_Unique_SheepBall_Roll.BP_SkillEffect_Unique_SheepBall_Roll_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_SheepBall_Roll_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_SheepBall_Roll_C", "ReceiveTick");

	Params::ABP_SkillEffect_Unique_SheepBall_Roll_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_Unique_SheepBall_Roll.BP_SkillEffect_Unique_SheepBall_Roll_C.HitAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Defencer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo              DamageInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              HitCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         AttackerComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_SheepBall_Roll_C::HitAttack(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_SheepBall_Roll_C", "HitAttack");

	Params::ABP_SkillEffect_Unique_SheepBall_Roll_C_HitAttack_Params Parms{};

	Parms.Defencer = Defencer;
	Parms.DamageInfo = DamageInfo;
	Parms.HitCount = HitCount;
	Parms.AttackerComponent = AttackerComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_Unique_SheepBall_Roll.BP_SkillEffect_Unique_SheepBall_Roll_C.ExecuteUbergraph_BP_SkillEffect_Unique_SheepBall_Roll
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_DeltaSecond                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTargetActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Defencer                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo              K2Node_CustomEvent_DamageInfo                                    (None)
// int32                              K2Node_CustomEvent_HitCount                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_AttackerComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRollEffectLocation_Location                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_SheepBall_Roll_C::ExecuteUbergraph_BP_SkillEffect_Unique_SheepBall_Roll(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_2, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_IsClosed_Variable_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_FClamp_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_3, float CallFunc_GetFloatValue_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4, double CallFunc_Divide_DoubleDouble_ReturnValue_4, double CallFunc_FClamp_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_4, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_4, double K2Node_Event_DeltaSecond, class AActor* CallFunc_GetActionTargetActor_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* K2Node_CustomEvent_Defencer, const struct FPalDamageInfo& K2Node_CustomEvent_DamageInfo, int32 K2Node_CustomEvent_HitCount, class UPrimitiveComponent* K2Node_CustomEvent_AttackerComponent, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_5, const struct FVector& CallFunc_GetRollEffectLocation_Location, bool Temp_bool_IsClosed_Variable_5, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_3, float CallFunc_GetFloatValue_InTime_ImplicitCast_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_SheepBall_Roll_C", "ExecuteUbergraph_BP_SkillEffect_Unique_SheepBall_Roll");

	Params::ABP_SkillEffect_Unique_SheepBall_Roll_C_ExecuteUbergraph_BP_SkillEffect_Unique_SheepBall_Roll_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_3 = CallFunc_Subtract_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_4 = CallFunc_Subtract_DoubleDouble_ReturnValue_4;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_4 = CallFunc_Divide_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_FClamp_ReturnValue_4 = CallFunc_FClamp_ReturnValue_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;
	Parms.K2Node_Event_DeltaSecond = K2Node_Event_DeltaSecond;
	Parms.CallFunc_GetActionTargetActor_ReturnValue = CallFunc_GetActionTargetActor_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_Defencer = K2Node_CustomEvent_Defencer;
	Parms.K2Node_CustomEvent_DamageInfo = K2Node_CustomEvent_DamageInfo;
	Parms.K2Node_CustomEvent_HitCount = K2Node_CustomEvent_HitCount;
	Parms.K2Node_CustomEvent_AttackerComponent = K2Node_CustomEvent_AttackerComponent;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_5 = Temp_bool_Has_Been_Initd_Variable_5;
	Parms.CallFunc_GetRollEffectLocation_Location = CallFunc_GetRollEffectLocation_Location;
	Parms.Temp_bool_IsClosed_Variable_5 = Temp_bool_IsClosed_Variable_5;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_1 = CallFunc_GetFloatValue_InTime_ImplicitCast_1;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_2 = CallFunc_GetFloatValue_InTime_ImplicitCast_2;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_3 = CallFunc_GetFloatValue_InTime_ImplicitCast_3;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast_4 = CallFunc_GetFloatValue_InTime_ImplicitCast_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_Unique_SheepBall_Roll.BP_SkillEffect_Unique_SheepBall_Roll_C.OnHitAttack_Roll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_Unique_SheepBall_Roll_C::OnHitAttack_Roll__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_SheepBall_Roll_C", "OnHitAttack_Roll__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


