#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C
// (None)

class UClass* UBP_HitEffectSlot_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HitEffectSlot_Player_C");

	return Clss;
}


// BP_HitEffectSlot_Player_C BP_HitEffectSlot_Player.Default__BP_HitEffectSlot_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HitEffectSlot_Player_C* UBP_HitEffectSlot_Player_C::GetDefaultObj()
{
	static class UBP_HitEffectSlot_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HitEffectSlot_Player_C*>(UBP_HitEffectSlot_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.SpawnElementalHitEffectBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalElementType         Element                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EffectScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EffectScale                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>EffectPath                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_FloatToVector_InFloat_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_Player_C::SpawnElementalHitEffectBullet(enum class EPalElementType Element, const struct FVector& Location, double EffectScale, double EffectScale, TSoftObjectPtr<class UNiagaraSystem> EffectPath, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, float CallFunc_Conv_FloatToVector_InFloat_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitEffectSlot_Player_C", "SpawnElementalHitEffectBullet");

	Params::UBP_HitEffectSlot_Player_C_SpawnElementalHitEffectBullet_Params Parms{};

	Parms.Element = Element;
	Parms.Location = Location;
	Parms.EffectScale = EffectScale;
	Parms.EffectScale = EffectScale;
	Parms.EffectPath = EffectPath;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_InFloat_ImplicitCast = CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.SpawnElementalHitEffectNear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalElementType         Element                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EffectScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>EffectPath                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_FloatToVector_InFloat_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_Player_C::SpawnElementalHitEffectNear(enum class EPalElementType Element, const struct FVector& Location, double EffectScale, TSoftObjectPtr<class UNiagaraSystem> EffectPath, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_Conv_FloatToVector_InFloat_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitEffectSlot_Player_C", "SpawnElementalHitEffectNear");

	Params::UBP_HitEffectSlot_Player_C_SpawnElementalHitEffectNear_Params Parms{};

	Parms.Element = Element;
	Parms.Location = Location;
	Parms.EffectScale = EffectScale;
	Parms.EffectPath = EffectPath;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_InFloat_ImplicitCast = CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.SpawnSneakAttackEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_Player_C::SpawnSneakAttackEffect(const struct FVector& Location, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitEffectSlot_Player_C", "SpawnSneakAttackEffect");

	Params::UBP_HitEffectSlot_Player_C_SpawnSneakAttackEffect_Params Parms{};

	Parms.Location = Location;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.SpawnElementalHitEffectFar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalElementType         Element                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EffectScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPoison                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EffectScale                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>EffectPath                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_FloatToVector_InFloat_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_Player_C::SpawnElementalHitEffectFar(enum class EPalElementType Element, const struct FVector& Location, double EffectScale, bool IsPoison, double EffectScale, TSoftObjectPtr<class UNiagaraSystem> EffectPath, bool K2Node_SwitchEnum_CmpSuccess, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_Conv_FloatToVector_InFloat_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitEffectSlot_Player_C", "SpawnElementalHitEffectFar");

	Params::UBP_HitEffectSlot_Player_C_SpawnElementalHitEffectFar_Params Parms{};

	Parms.Element = Element;
	Parms.Location = Location;
	Parms.EffectScale = EffectScale;
	Parms.IsPoison = IsPoison;
	Parms.EffectScale = EffectScale;
	Parms.EffectPath = EffectPath;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue_1 = CallFunc_FindOwnerPalCharacter_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Conv_FloatToVector_InFloat_ImplicitCast = CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_Player_C::OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitEffectSlot_Player_C", "OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770");

	Params::UBP_HitEffectSlot_Player_C_OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.PlayHitEffect
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo              Info                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_HitEffectSlot_Player_C::PlayHitEffect(struct FPalDamageInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitEffectSlot_Player_C", "PlayHitEffect");

	Params::UBP_HitEffectSlot_Player_C_PlayHitEffect_Params Parms{};

	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.LoadAndPlayEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UNiagaraSystem>EffectPath                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_Player_C::LoadAndPlayEffect(TSoftObjectPtr<class UNiagaraSystem> EffectPath, const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitEffectSlot_Player_C", "LoadAndPlayEffect");

	Params::UBP_HitEffectSlot_Player_C_LoadAndPlayEffect_Params Parms{};

	Parms.EffectPath = EffectPath;
	Parms.Transform = Transform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C.ExecuteUbergraph_BP_HitEffectSlot_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_DynamicCast_AsNiagara_System                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo              K2Node_Event_info                                                (ConstParm)
// TSoftObjectPtr<class UNiagaraSystem>K2Node_CustomEvent_EffectPath                                    (HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_Transform                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_HitEffectSlot_Player_C::ExecuteUbergraph_BP_HitEffectSlot_Player(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, const struct FPalDamageInfo& K2Node_Event_info, TSoftObjectPtr<class UNiagaraSystem> K2Node_CustomEvent_EffectPath, const struct FTransform& K2Node_CustomEvent_Transform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitEffectSlot_Player_C", "ExecuteUbergraph_BP_HitEffectSlot_Player");

	Params::UBP_HitEffectSlot_Player_C_ExecuteUbergraph_BP_HitEffectSlot_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsNiagara_System = K2Node_DynamicCast_AsNiagara_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_info = K2Node_Event_info;
	Parms.K2Node_CustomEvent_EffectPath = K2Node_CustomEvent_EffectPath;
	Parms.K2Node_CustomEvent_Transform = K2Node_CustomEvent_Transform;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


