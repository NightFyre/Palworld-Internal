#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DungeonEntrance_Base.BP_DungeonEntrance_Base_C
// (Actor)

class UClass* ABP_DungeonEntrance_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DungeonEntrance_Base_C");

	return Clss;
}


// BP_DungeonEntrance_Base_C BP_DungeonEntrance_Base.Default__BP_DungeonEntrance_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DungeonEntrance_Base_C* ABP_DungeonEntrance_Base_C::GetDefaultObj()
{
	static class ABP_DungeonEntrance_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DungeonEntrance_Base_C*>(ABP_DungeonEntrance_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DungeonEntrance_Base.BP_DungeonEntrance_Base_C.GetInteractWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUserWidget*              CreatedWidget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalStageModelDungeon*       CallFunc_GetStageModel_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DungeonInfo_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_DungeonEntrance_Base_C::GetInteractWidget(class UPalUserWidget** CreatedWidget, class UPalStageModelDungeon* CallFunc_GetStageModel_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_DungeonInfo_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DungeonEntrance_Base_C", "GetInteractWidget");

	Params::ABP_DungeonEntrance_Base_C_GetInteractWidget_Params Parms{};

	Parms.CallFunc_GetStageModel_ReturnValue = CallFunc_GetStageModel_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

}


// Function BP_DungeonEntrance_Base.BP_DungeonEntrance_Base_C.GetWarpPoint
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_DungeonEntrance_Base_C::GetWarpPoint(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DungeonEntrance_Base_C", "GetWarpPoint");

	Params::ABP_DungeonEntrance_Base_C_GetWarpPoint_Params Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


