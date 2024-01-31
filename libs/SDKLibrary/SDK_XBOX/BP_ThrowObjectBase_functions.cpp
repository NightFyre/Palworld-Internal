#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThrowObjectBase.BP_ThrowObjectBase_C
// (Actor)

class UClass* ABP_ThrowObjectBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThrowObjectBase_C");

	return Clss;
}


// BP_ThrowObjectBase_C BP_ThrowObjectBase.Default__BP_ThrowObjectBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThrowObjectBase_C* ABP_ThrowObjectBase_C::GetDefaultObj()
{
	static class ABP_ThrowObjectBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThrowObjectBase_C*>(ABP_ThrowObjectBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.Play Throw Sound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDataTableRowName_SoundIDK2Node_MakeStruct_PalDataTableRowName_SoundID                    (NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::Play_Throw_Sound(const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "Play Throw Sound");

	Params::ABP_ThrowObjectBase_C_Play_Throw_Sound_Params Parms{};

	Parms.K2Node_MakeStruct_PalDataTableRowName_SoundID = K2Node_MakeStruct_PalDataTableRowName_SoundID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.GetAkOwnerComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USceneComponent* ABP_ThrowObjectBase_C::GetAkOwnerComponent(class UStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "GetAkOwnerComponent");

	Params::ABP_ThrowObjectBase_C_GetAkOwnerComponent_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.PlaySoundWithMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDataTableRowName_SoundIDID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        PhysicalMaterial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::PlaySoundWithMaterial(const struct FPalDataTableRowName_SoundID& ID, enum class EPhysicalSurface PhysicalMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "PlaySoundWithMaterial");

	Params::ABP_ThrowObjectBase_C_PlaySoundWithMaterial_Params Parms{};

	Parms.ID = ID;
	Parms.PhysicalMaterial = PhysicalMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.PlaySound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDataTableRowName_SoundIDID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FPalSoundOptions            Options                                                          (Edit, BlueprintVisible, NoDestructor)
// struct FPalSoundOptions            K2Node_MakeStruct_PalSoundOptions                                (NoDestructor)

void ABP_ThrowObjectBase_C::PlaySound(const struct FPalDataTableRowName_SoundID& ID, const struct FPalSoundOptions& Options, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "PlaySound");

	Params::ABP_ThrowObjectBase_C_PlaySound_Params Parms{};

	Parms.ID = ID;
	Parms.Options = Options;
	Parms.K2Node_MakeStruct_PalSoundOptions = K2Node_MakeStruct_PalSoundOptions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.IsCountDestroy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsDestroy                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::IsCountDestroy(bool* IsDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "IsCountDestroy");

	Params::ABP_ThrowObjectBase_C_IsCountDestroy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDestroy != nullptr)
		*IsDestroy = Parms.IsDestroy;

}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.IncrementBoundCountAndCheckDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsCountDestroy_IsDestroy                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxBoundCount_Count                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::IncrementBoundCountAndCheckDestroy(bool CallFunc_IsCountDestroy_IsDestroy, int32 CallFunc_GetMaxBoundCount_Count, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "IncrementBoundCountAndCheckDestroy");

	Params::ABP_ThrowObjectBase_C_IncrementBoundCountAndCheckDestroy_Params Parms{};

	Parms.CallFunc_IsCountDestroy_IsDestroy = CallFunc_IsCountDestroy_IsDestroy;
	Parms.CallFunc_GetMaxBoundCount_Count = CallFunc_GetMaxBoundCount_Count;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.GetMaxBoundCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::GetMaxBoundCount(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "GetMaxBoundCount");

	Params::ABP_ThrowObjectBase_C_GetMaxBoundCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.IsDestroy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ThrowObjectBase_C::IsDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "IsDestroy");

	Params::ABP_ThrowObjectBase_C_IsDestroy_Params Parms{};

	Parms.HitComp = HitComp;
	Parms.OtherCharacter = OtherCharacter;
	Parms.OtherComp = OtherComp;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.OnEnableGravity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThrowObjectBase_C::OnEnableGravity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "OnEnableGravity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.OnBlock
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ThrowObjectBase_C::OnBlock(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "OnBlock");

	Params::ABP_ThrowObjectBase_C_OnBlock_Params Parms{};

	Parms.HitComp = HitComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "ReceiveActorBeginOverlap");

	Params::ABP_ThrowObjectBase_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ThrowObjectBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThrowObjectBase.BP_ThrowObjectBase_C.ExecuteUbergraph_BP_ThrowObjectBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_HitComp                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_ProjectileGravityScale_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DefaultGravityScale_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObjectBase_C::ExecuteUbergraph_BP_ThrowObjectBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, class UPrimitiveComponent* K2Node_Event_HitComp, class AActor* K2Node_Event_OtherActor_1, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class AActor* K2Node_Event_OtherActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float K2Node_VariableSet_ProjectileGravityScale_ImplicitCast, double K2Node_VariableSet_DefaultGravityScale_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObjectBase_C", "ExecuteUbergraph_BP_ThrowObjectBase");

	Params::ABP_ThrowObjectBase_C_ExecuteUbergraph_BP_ThrowObjectBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_HitComp = K2Node_Event_HitComp;
	Parms.K2Node_Event_OtherActor_1 = K2Node_Event_OtherActor_1;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.K2Node_VariableSet_ProjectileGravityScale_ImplicitCast = K2Node_VariableSet_ProjectileGravityScale_ImplicitCast;
	Parms.K2Node_VariableSet_DefaultGravityScale_ImplicitCast = K2Node_VariableSet_DefaultGravityScale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


