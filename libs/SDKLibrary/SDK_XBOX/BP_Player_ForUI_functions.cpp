#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Player_ForUI.BP_Player_ForUI_C
// (Actor)

class UClass* ABP_Player_ForUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Player_ForUI_C");

	return Clss;
}


// BP_Player_ForUI_C BP_Player_ForUI.Default__BP_Player_ForUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Player_ForUI_C* ABP_Player_ForUI_C::GetDefaultObj()
{
	static class ABP_Player_ForUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Player_ForUI_C*>(ABP_Player_ForUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Player_ForUI.BP_Player_ForUI_C.OnAppliedHairMesh_Binded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalSkeletalMeshComponent*   SkeletalMeshComponent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetHairBaseColor_OutColor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_ForUI_C::OnAppliedHairMesh_Binded(class UPalSkeletalMeshComponent* SkeletalMeshComponent, const struct FLinearColor& CallFunc_GetHairBaseColor_OutColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Player_ForUI_C", "OnAppliedHairMesh_Binded");

	Params::ABP_Player_ForUI_C_OnAppliedHairMesh_Binded_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.CallFunc_GetHairBaseColor_OutColor = CallFunc_GetHairBaseColor_OutColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Player_ForUI.BP_Player_ForUI_C.OnAppliedHeadMesh_Binded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalSkeletalMeshComponent*   SkeletalMeshComponent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetEyeBaseColor_OutColor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBrowBaseColor_OutColor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_ForUI_C::OnAppliedHeadMesh_Binded(class UPalSkeletalMeshComponent* SkeletalMeshComponent, const struct FLinearColor& CallFunc_GetEyeBaseColor_OutColor, const struct FLinearColor& CallFunc_GetBrowBaseColor_OutColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Player_ForUI_C", "OnAppliedHeadMesh_Binded");

	Params::ABP_Player_ForUI_C_OnAppliedHeadMesh_Binded_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.CallFunc_GetEyeBaseColor_OutColor = CallFunc_GetEyeBaseColor_OutColor;
	Parms.CallFunc_GetBrowBaseColor_OutColor = CallFunc_GetBrowBaseColor_OutColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Player_ForUI.BP_Player_ForUI_C.OnAppliedBodyMesh_Binded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalSkeletalMeshComponent*   SkeletalMeshComponent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBodyBaseColor_OutColor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_ForUI_C::OnAppliedBodyMesh_Binded(class UPalSkeletalMeshComponent* SkeletalMeshComponent, const struct FLinearColor& CallFunc_GetBodyBaseColor_OutColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Player_ForUI_C", "OnAppliedBodyMesh_Binded");

	Params::ABP_Player_ForUI_C_OnAppliedBodyMesh_Binded_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.CallFunc_GetBodyBaseColor_OutColor = CallFunc_GetBodyBaseColor_OutColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Player_ForUI.BP_Player_ForUI_C.CopyWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      WeaponClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAnimationPoseTypeTemp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponAnimationInfo        CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue               (ConstParm)
// class FName                        CallFunc_GetEquipSocketName_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              K2Node_DynamicCast_AsPal_Weapon_Base                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_ForUI_C::CopyWeapon(class UClass* WeaponClass, enum class EWeaponAnimationPoseType Temp_byte_Variable, bool CallFunc_IsValidClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APalWeaponBase* CallFunc_FinishSpawningActor_ReturnValue, class USceneComponent* CallFunc_GetMainMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, const struct FWeaponAnimationInfo& CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue, class FName CallFunc_GetEquipSocketName_ReturnValue, class UAnimSequence* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APalWeaponBase* K2Node_DynamicCast_AsPal_Weapon_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Player_ForUI_C", "CopyWeapon");

	Params::ABP_Player_ForUI_C_CopyWeapon_Params Parms{};

	Parms.WeaponClass = WeaponClass;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue = CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue;
	Parms.CallFunc_GetEquipSocketName_ReturnValue = CallFunc_GetEquipSocketName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Weapon_Base = K2Node_DynamicCast_AsPal_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Player_ForUI.BP_Player_ForUI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Player_ForUI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Player_ForUI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Player_ForUI.BP_Player_ForUI_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_ForUI_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Player_ForUI_C", "ReceiveEndPlay");

	Params::ABP_Player_ForUI_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Player_ForUI.BP_Player_ForUI_C.ExecuteUbergraph_BP_Player_ForUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Player_ForUI_C::ExecuteUbergraph_BP_Player_ForUI(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Player_ForUI_C", "ExecuteUbergraph_BP_Player_ForUI");

	Params::ABP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Player_ForUI.BP_Player_ForUI_C.OnAppliedHairMesh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                HairMeshBaseColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_ForUI_C::OnAppliedHairMesh__DelegateSignature(const struct FLinearColor& HairMeshBaseColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Player_ForUI_C", "OnAppliedHairMesh__DelegateSignature");

	Params::ABP_Player_ForUI_C_OnAppliedHairMesh__DelegateSignature_Params Parms{};

	Parms.HairMeshBaseColor = HairMeshBaseColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Player_ForUI.BP_Player_ForUI_C.OnAppliedHeadMesh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                BrowMeshBaseColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                EyeMeshBaseColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_ForUI_C::OnAppliedHeadMesh__DelegateSignature(const struct FLinearColor& BrowMeshBaseColor, const struct FLinearColor& EyeMeshBaseColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Player_ForUI_C", "OnAppliedHeadMesh__DelegateSignature");

	Params::ABP_Player_ForUI_C_OnAppliedHeadMesh__DelegateSignature_Params Parms{};

	Parms.BrowMeshBaseColor = BrowMeshBaseColor;
	Parms.EyeMeshBaseColor = EyeMeshBaseColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Player_ForUI.BP_Player_ForUI_C.OnAppliedBodyMesh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                BodyMeshBasColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_ForUI_C::OnAppliedBodyMesh__DelegateSignature(const struct FLinearColor& BodyMeshBasColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Player_ForUI_C", "OnAppliedBodyMesh__DelegateSignature");

	Params::ABP_Player_ForUI_C_OnAppliedBodyMesh__DelegateSignature_Params Parms{};

	Parms.BodyMeshBasColor = BodyMeshBasColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


