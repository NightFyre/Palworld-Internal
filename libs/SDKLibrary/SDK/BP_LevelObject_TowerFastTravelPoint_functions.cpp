#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C
// (Actor)

class UClass* ABP_LevelObject_TowerFastTravelPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LevelObject_TowerFastTravelPoint_C");

	return Clss;
}


// BP_LevelObject_TowerFastTravelPoint_C BP_LevelObject_TowerFastTravelPoint.Default__BP_LevelObject_TowerFastTravelPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LevelObject_TowerFastTravelPoint_C* ABP_LevelObject_TowerFastTravelPoint_C::GetDefaultObj()
{
	static class ABP_LevelObject_TowerFastTravelPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LevelObject_TowerFastTravelPoint_C*>(ABP_LevelObject_TowerFastTravelPoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnGetAkComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class USceneComponent* ABP_LevelObject_TowerFastTravelPoint_C::OnGetAkComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "OnGetAkComponent");

	Params::ABP_LevelObject_TowerFastTravelPoint_C_OnGetAkComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.GetUnlockAkAudioEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UAkAudioEvent* ABP_LevelObject_TowerFastTravelPoint_C::GetUnlockAkAudioEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "GetUnlockAkAudioEvent");

	Params::ABP_LevelObject_TowerFastTravelPoint_C_GetUnlockAkAudioEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnUpdateUnlockState_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUnlocked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSpawnUnlockefFlashEffect                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LevelObject_TowerFastTravelPoint_C::OnUpdateUnlockState_Internal(bool IsUnlocked, bool IsSpawnUnlockefFlashEffect, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "OnUpdateUnlockState_Internal");

	Params::ABP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal_Params Parms{};

	Parms.IsUnlocked = IsUnlocked;
	Parms.IsSpawnUnlockefFlashEffect = IsSpawnUnlockefFlashEffect;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue_1 = CallFunc_GetMaterial_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnUpdateUnlockState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalLevelObjectUnlockableFastTravelPoint*Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlocked_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LevelObject_TowerFastTravelPoint_C::OnUpdateUnlockState(class APalLevelObjectUnlockableFastTravelPoint* Object, bool CallFunc_IsUnlocked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "OnUpdateUnlockState");

	Params::ABP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Params Parms{};

	Parms.Object = Object;
	Parms.CallFunc_IsUnlocked_ReturnValue = CallFunc_IsUnlocked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LevelObject_TowerFastTravelPoint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnChangeWorldSettings
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalOptionWorldSettings     PrevSettings                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPalOptionWorldSettings     NewSettings                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_LevelObject_TowerFastTravelPoint_C::OnChangeWorldSettings(struct FPalOptionWorldSettings& PrevSettings, struct FPalOptionWorldSettings& NewSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "OnChangeWorldSettings");

	Params::ABP_LevelObject_TowerFastTravelPoint_C_OnChangeWorldSettings_Params Parms{};

	Parms.PrevSettings = PrevSettings;
	Parms.NewSettings = NewSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.CheckUnuseFastTravel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LevelObject_TowerFastTravelPoint_C::CheckUnuseFastTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "CheckUnuseFastTravel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionWorldSettings     K2Node_CustomEvent_PrevSettings                                  (ConstParm)
// struct FPalOptionWorldSettings     K2Node_CustomEvent_NewSettings                                   (ConstParm)
// struct FPalOptionWorldSettings     CallFunc_GetOptionWorldSettings_ReturnValue                      (ConstParm)

void ABP_LevelObject_TowerFastTravelPoint_C::ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalOptionWorldSettings& K2Node_CustomEvent_PrevSettings, const struct FPalOptionWorldSettings& K2Node_CustomEvent_NewSettings, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_TowerFastTravelPoint_C", "ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint");

	Params::ABP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_PrevSettings = K2Node_CustomEvent_PrevSettings;
	Parms.K2Node_CustomEvent_NewSettings = K2Node_CustomEvent_NewSettings;
	Parms.CallFunc_GetOptionWorldSettings_ReturnValue = CallFunc_GetOptionWorldSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


