#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CapturePrism.BP_CapturePrism_C
// (Actor)

class UClass* ABP_CapturePrism_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CapturePrism_C");

	return Clss;
}


// BP_CapturePrism_C BP_CapturePrism.Default__BP_CapturePrism_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CapturePrism_C* ABP_CapturePrism_C::GetDefaultObj()
{
	static class ABP_CapturePrism_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CapturePrism_C*>(ABP_CapturePrism_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CapturePrism.BP_CapturePrism_C.OnThrowInternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Bullet                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCaptureLevel_level                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ThrowCaptureObjectBase_C*K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CapturePrism_C::OnThrowInternal(class AActor* Bullet, int32 CallFunc_GetCaptureLevel_level, class ABP_ThrowCaptureObjectBase_C* K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapturePrism_C", "OnThrowInternal");

	Params::ABP_CapturePrism_C_OnThrowInternal_Params Parms{};

	Parms.Bullet = Bullet;
	Parms.CallFunc_GetCaptureLevel_level = CallFunc_GetCaptureLevel_level;
	Parms.K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base = K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapturePrism.BP_CapturePrism_C.GetCaptureLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCaptureLevelBySphereType_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CapturePrism_C::GetCaptureLevel(int32* Level, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, int32 CallFunc_GetCaptureLevelBySphereType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapturePrism_C", "GetCaptureLevel");

	Params::ABP_CapturePrism_C_GetCaptureLevel_Params Parms{};

	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_GetCaptureLevelBySphereType_ReturnValue = CallFunc_GetCaptureLevelBySphereType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function BP_CapturePrism.BP_CapturePrism_C.OnEndShootAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmptyMagazine_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CapturePrism_C::OnEndShootAnimation(class UAnimMontage* Montage, bool CallFunc_IsEmptyMagazine_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapturePrism_C", "OnEndShootAnimation");

	Params::ABP_CapturePrism_C_OnEndShootAnimation_Params Parms{};

	Parms.Montage = Montage;
	Parms.CallFunc_IsEmptyMagazine_ReturnValue = CallFunc_IsEmptyMagazine_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapturePrism.BP_CapturePrism_C.OnThrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CapturePrism_C::OnThrow(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapturePrism_C", "OnThrow");

	Params::ABP_CapturePrism_C_OnThrow_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapturePrism.BP_CapturePrism_C.DecrementBullet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemContainer*           CallFunc_TryGetContainerFromInventoryType_outContainer           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetContainerFromInventoryType_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNowSelectedIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_Get_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemId                  CallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_CapturePrism_C::DecrementBullet(class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalItemContainer* CallFunc_TryGetContainerFromInventoryType_outContainer, bool CallFunc_TryGetContainerFromInventoryType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetNowSelectedIndex_ReturnValue, class UPalItemSlot* CallFunc_Get_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_GetStackCount_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapturePrism_C", "DecrementBullet");

	Params::ABP_CapturePrism_C_DecrementBullet_Params Parms{};

	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_TryGetContainerFromInventoryType_outContainer = CallFunc_TryGetContainerFromInventoryType_outContainer;
	Parms.CallFunc_TryGetContainerFromInventoryType_ReturnValue = CallFunc_TryGetContainerFromInventoryType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetNowSelectedIndex_ReturnValue = CallFunc_GetNowSelectedIndex_ReturnValue;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetStackCount_ReturnValue = CallFunc_GetStackCount_ReturnValue;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue_1 = CallFunc_GetPalmi_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CapturePrism.BP_CapturePrism_C.GetThrowObjectClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ThrowObject                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CapturePrism_C::GetThrowObjectClass(class UClass** ThrowObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapturePrism_C", "GetThrowObjectClass");

	Params::ABP_CapturePrism_C_GetThrowObjectClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ThrowObject != nullptr)
		*ThrowObject = Parms.ThrowObject;

}


// Function BP_CapturePrism.BP_CapturePrism_C.GetEquipSocketName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_CapturePrism_C::GetEquipSocketName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapturePrism_C", "GetEquipSocketName");

	Params::ABP_CapturePrism_C_GetEquipSocketName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


