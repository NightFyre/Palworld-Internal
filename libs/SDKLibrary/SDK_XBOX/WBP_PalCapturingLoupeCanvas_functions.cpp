#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C
// (None)

class UClass* UWBP_PalCapturingLoupeCanvas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCapturingLoupeCanvas_C");

	return Clss;
}


// WBP_PalCapturingLoupeCanvas_C WBP_PalCapturingLoupeCanvas.Default__WBP_PalCapturingLoupeCanvas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCapturingLoupeCanvas_C* UWBP_PalCapturingLoupeCanvas_C::GetDefaultObj()
{
	static class UWBP_PalCapturingLoupeCanvas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCapturingLoupeCanvas_C*>(UWBP_PalCapturingLoupeCanvas_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.CheckWidgetEnded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterHandle*>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CapturingPalLoupe_C*    CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::CheckWidgetEnded(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UPalIndividualCharacterHandle*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UWBP_CapturingPalLoupe_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "CheckWidgetEnded");

	Params::UWBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.CreateLoupeWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PalCaptureBodyBase_C*    TargetCaptureBody                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_CapturingPalLoupe_C*    CreatedWidget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_CapturingPalLoupe_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::CreateLoupeWidget(class UPalIndividualCharacterHandle* TargetHandle, class ABP_PalCaptureBodyBase_C* TargetCaptureBody, class UWBP_CapturingPalLoupe_C** CreatedWidget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CapturingPalLoupe_C* CallFunc_Create_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "CreateLoupeWidget");

	Params::UWBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget_Params Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.TargetCaptureBody = TargetCaptureBody;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.OnStartedCapture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CreatedBodyActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsBonus                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PalCaptureBodyBase_C*    K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CapturingPalLoupe_C*    CallFunc_CreateLoupeWidget_createdWidget                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::OnStartedCapture(class AActor* CreatedBodyActor, class UPalIndividualCharacterHandle* TargetHandle, bool IsBonus, class ABP_PalCaptureBodyBase_C* K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base, bool K2Node_DynamicCast_bSuccess, class UWBP_CapturingPalLoupe_C* CallFunc_CreateLoupeWidget_createdWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "OnStartedCapture");

	Params::UWBP_PalCapturingLoupeCanvas_C_OnStartedCapture_Params Parms{};

	Parms.CreatedBodyActor = CreatedBodyActor;
	Parms.TargetHandle = TargetHandle;
	Parms.IsBonus = IsBonus;
	Parms.K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base = K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateLoupeWidget_createdWidget = CallFunc_CreateLoupeWidget_createdWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.OnThrowCaptureWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Bullet                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ThrowCaptureObjectBase_C*K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::OnThrowCaptureWeapon(class AActor* Bullet, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_ThrowCaptureObjectBase_C* K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "OnThrowCaptureWeapon");

	Params::UWBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon_Params Parms{};

	Parms.Bullet = Bullet;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base = K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.RegisterWeaponEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePrism_C*          CaptureWeapon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::RegisterWeaponEvent(class ABP_CapturePrism_C* CaptureWeapon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "RegisterWeaponEvent");

	Params::UWBP_PalCapturingLoupeCanvas_C_RegisterWeaponEvent_Params Parms{};

	Parms.CaptureWeapon = CaptureWeapon;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.UnregisterWeaponEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CapturePrism_C*          K2Node_DynamicCast_AsBP_Capture_Prism                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::UnregisterWeaponEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_CapturePrism_C* K2Node_DynamicCast_AsBP_Capture_Prism, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "UnregisterWeaponEvent");

	Params::UWBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Capture_Prism = K2Node_DynamicCast_AsBP_Capture_Prism;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.OnChangedWeaponEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CapturePrism_C*          K2Node_DynamicCast_AsBP_Capture_Prism                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class ABP_CapturePrism_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::OnChangedWeaponEvent(class APalWeaponBase* Weapon, bool CallFunc_IsValid_ReturnValue, class ABP_CapturePrism_C* K2Node_DynamicCast_AsBP_Capture_Prism, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class ABP_CapturePrism_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "OnChangedWeaponEvent");

	Params::UWBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Capture_Prism = K2Node_DynamicCast_AsBP_Capture_Prism;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "Tick");

	Params::UWBP_PalCapturingLoupeCanvas_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.OnSetup_AfterCreatedPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCapturingLoupeCanvas_C::OnSetup_AfterCreatedPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "OnSetup_AfterCreatedPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.ExecuteUbergraph_WBP_PalCapturingLoupeCanvas
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCapturingLoupeCanvas_C::ExecuteUbergraph_WBP_PalCapturingLoupeCanvas(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCapturingLoupeCanvas_C", "ExecuteUbergraph_WBP_PalCapturingLoupeCanvas");

	Params::UWBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


