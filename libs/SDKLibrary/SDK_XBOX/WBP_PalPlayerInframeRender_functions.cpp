#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C
// (None)

class UClass* UWBP_PalPlayerInframeRender_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalPlayerInframeRender_C");

	return Clss;
}


// WBP_PalPlayerInframeRender_C WBP_PalPlayerInframeRender.Default__WBP_PalPlayerInframeRender_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalPlayerInframeRender_C* UWBP_PalPlayerInframeRender_C::GetDefaultObj()
{
	static class UWBP_PalPlayerInframeRender_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalPlayerInframeRender_C*>(UWBP_PalPlayerInframeRender_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.OnTimer_CaptureScene
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalPlayerInframeRender_C::OnTimer_CaptureScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "OnTimer_CaptureScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.OnUpdateEquipmentSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                ItemSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalPlayerEquipItemSlotTypeSlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInframeRender_C::OnUpdateEquipmentSlot(class UPalItemSlot* ItemSlot, enum class EPalPlayerEquipItemSlotType SlotType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "OnUpdateEquipmentSlot");

	Params::UWBP_PalPlayerInframeRender_C_OnUpdateEquipmentSlot_Params Parms{};

	Parms.ItemSlot = ItemSlot;
	Parms.SlotType = SlotType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.ResetCameraLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInframeRender_C::ResetCameraLocation(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "ResetCameraLocation");

	Params::UWBP_PalPlayerInframeRender_C_ResetCameraLocation_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.AddCameraRelativeLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AddLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInframeRender_C::AddCameraRelativeLocation(const struct FVector& AddLocation, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "AddCameraRelativeLocation");

	Params::UWBP_PalPlayerInframeRender_C_AddCameraRelativeLocation_Params Parms{};

	Parms.AddLocation = AddLocation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.ResetRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalPlayerInframeRender_C::ResetRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "ResetRotation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.AddRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    AddRotator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PalPlayerInframeRender_C::AddRotation(const struct FRotator& AddRotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "AddRotation");

	Params::UWBP_PalPlayerInframeRender_C_AddRotation_Params Parms{};

	Parms.AddRotator = AddRotator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.On Changed Weapon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Player_ForUI_C*          DisplayCharacter                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              CallFunc_GetHasWeapon_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Player_ForUI_C*          CallFunc_GetDisplayCharacterActor_UIDisplayPlayer                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInframeRender_C::On_Changed_Weapon(class APalWeaponBase* Weapon, class ABP_Player_ForUI_C* DisplayCharacter, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_Player_ForUI_C* CallFunc_GetDisplayCharacterActor_UIDisplayPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "On Changed Weapon");

	Params::UWBP_PalPlayerInframeRender_C_On_Changed_Weapon_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.DisplayCharacter = DisplayCharacter;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetHasWeapon_ReturnValue = CallFunc_GetHasWeapon_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetDisplayCharacterActor_UIDisplayPlayer = CallFunc_GetDisplayCharacterActor_UIDisplayPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.UnregisterEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInframeRender_C::UnregisterEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "UnregisterEvent");

	Params::UWBP_PalPlayerInframeRender_C_UnregisterEvent_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.RegisterEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              CallFunc_GetHasWeapon_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInframeRender_C::RegisterEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "RegisterEvent");

	Params::UWBP_PalPlayerInframeRender_C_RegisterEvent_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetHasWeapon_ReturnValue = CallFunc_GetHasWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.RequestCaptureByMakeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfoMakeInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInframeRender_C::RequestCaptureByMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "RequestCaptureByMakeInfo");

	Params::UWBP_PalPlayerInframeRender_C_RequestCaptureByMakeInfo_Params Parms{};

	Parms.MakeInfo = MakeInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.RequestCaptureMyPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInframeRender_C::RequestCaptureMyPlayer(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "RequestCaptureMyPlayer");

	Params::UWBP_PalPlayerInframeRender_C_RequestCaptureMyPlayer_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInframeRender_C::Reset(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "Reset");

	Params::UWBP_PalPlayerInframeRender_C_Reset_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TextureSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneCaptureComponent2D*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PalPlayerCaptureSet_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInframeRender_C::Initialize(int32 TextureSize, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class USceneCaptureComponent2D* CallFunc_GetComponentByClass_ReturnValue, class ABP_PalPlayerCaptureSet_C* CallFunc_FinishSpawningActor_ReturnValue, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "Initialize");

	Params::UWBP_PalPlayerInframeRender_C_Initialize_Params Parms{};

	Parms.TextureSize = TextureSize;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue_1 = CallFunc_GetPalmi_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalPlayerInframeRender_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalPlayerInframeRender_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.DelayUpdatePlayerMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DelayTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInframeRender_C::DelayUpdatePlayerMesh(double DelayTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "DelayUpdatePlayerMesh");

	Params::UWBP_PalPlayerInframeRender_C_DelayUpdatePlayerMesh_Params Parms{};

	Parms.DelayTime = DelayTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.UpdateMeshEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalPlayerInframeRender_C::UpdateMeshEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "UpdateMeshEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C.ExecuteUbergraph_WBP_PalPlayerInframeRender
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_DelayTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class ABP_Player_ForUI_C*          CallFunc_GetDisplayCharacterActor_UIDisplayPlayer                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerInframeRender_C::ExecuteUbergraph_WBP_PalPlayerInframeRender(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, double K2Node_CustomEvent_DelayTime, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ABP_Player_ForUI_C* CallFunc_GetDisplayCharacterActor_UIDisplayPlayer, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerInframeRender_C", "ExecuteUbergraph_WBP_PalPlayerInframeRender");

	Params::UWBP_PalPlayerInframeRender_C_ExecuteUbergraph_WBP_PalPlayerInframeRender_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_DelayTime = K2Node_CustomEvent_DelayTime;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetDisplayCharacterActor_UIDisplayPlayer = CallFunc_GetDisplayCharacterActor_UIDisplayPlayer;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


