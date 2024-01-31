#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalAIActionComposite_OtomoWorkerBase.BP_PalAIActionComposite_OtomoWorkerBase_C
// (None)

class UClass* UBP_PalAIActionComposite_OtomoWorkerBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalAIActionComposite_OtomoWorkerBase_C");

	return Clss;
}


// BP_PalAIActionComposite_OtomoWorkerBase_C BP_PalAIActionComposite_OtomoWorkerBase.Default__BP_PalAIActionComposite_OtomoWorkerBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalAIActionComposite_OtomoWorkerBase_C* UBP_PalAIActionComposite_OtomoWorkerBase_C::GetDefaultObj()
{
	static class UBP_PalAIActionComposite_OtomoWorkerBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalAIActionComposite_OtomoWorkerBase_C*>(UBP_PalAIActionComposite_OtomoWorkerBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalAIActionComposite_OtomoWorkerBase.BP_PalAIActionComposite_OtomoWorkerBase_C.OnTickInWaitAction
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWorkBase*                TargetWork                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BP_TryGetWorkLocation_OutLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_TryGetWorkLocation_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWorkProgressManager*     CallFunc_GetWorkProgressManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameter_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalWorkAssign*              CallFunc_GetWorkAssign_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionLocationByType_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalWorkAssignHandleId      CallFunc_GetId_ReturnValue                                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UPalWorkBase*                CallFunc_GetWorkByAssignId_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryFindNextWork_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTargetWorkable_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAIActionComposite_OtomoWorkerBase_C::OnTickInWaitAction(float DeltaTime, class UPalWorkBase* TargetWork, const struct FVector& CallFunc_BP_TryGetWorkLocation_OutLocation, bool CallFunc_BP_TryGetWorkLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalWorkProgressManager* CallFunc_GetWorkProgressManager_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameter_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalWorkAssign* CallFunc_GetWorkAssign_ReturnValue, class UPalActionBase* CallFunc_PlayActionLocationByType_ReturnValue, const struct FPalWorkAssignHandleId& CallFunc_GetId_ReturnValue, class UPalWorkBase* CallFunc_GetWorkByAssignId_ReturnValue, bool CallFunc_TryFindNextWork_ReturnValue, bool CallFunc_IsTargetWorkable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAIActionComposite_OtomoWorkerBase_C", "OnTickInWaitAction");

	Params::UBP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.TargetWork = TargetWork;
	Parms.CallFunc_BP_TryGetWorkLocation_OutLocation = CallFunc_BP_TryGetWorkLocation_OutLocation;
	Parms.CallFunc_BP_TryGetWorkLocation_ReturnValue = CallFunc_BP_TryGetWorkLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorkProgressManager_ReturnValue = CallFunc_GetWorkProgressManager_ReturnValue;
	Parms.CallFunc_GetCharacterParameter_ReturnValue = CallFunc_GetCharacterParameter_ReturnValue;
	Parms.CallFunc_GetActionComponent_ReturnValue = CallFunc_GetActionComponent_ReturnValue;
	Parms.CallFunc_GetWorkAssign_ReturnValue = CallFunc_GetWorkAssign_ReturnValue;
	Parms.CallFunc_PlayActionLocationByType_ReturnValue = CallFunc_PlayActionLocationByType_ReturnValue;
	Parms.CallFunc_GetId_ReturnValue = CallFunc_GetId_ReturnValue;
	Parms.CallFunc_GetWorkByAssignId_ReturnValue = CallFunc_GetWorkByAssignId_ReturnValue;
	Parms.CallFunc_TryFindNextWork_ReturnValue = CallFunc_TryFindNextWork_ReturnValue;
	Parms.CallFunc_IsTargetWorkable_ReturnValue = CallFunc_IsTargetWorkable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


