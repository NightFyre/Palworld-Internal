#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPCWeaponGenerator.BP_NPCWeaponGenerator_C
// (None)

class UClass* UBP_NPCWeaponGenerator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPCWeaponGenerator_C");

	return Clss;
}


// BP_NPCWeaponGenerator_C BP_NPCWeaponGenerator.Default__BP_NPCWeaponGenerator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_NPCWeaponGenerator_C* UBP_NPCWeaponGenerator_C::GetDefaultObj()
{
	static class UBP_NPCWeaponGenerator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_NPCWeaponGenerator_C*>(UBP_NPCWeaponGenerator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPCWeaponGenerator.BP_NPCWeaponGenerator_C.OnSpawnEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              WeaponActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_NPCWeaponGenerator_C::OnSpawnEvent(class APalWeaponBase* WeaponActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCWeaponGenerator_C", "OnSpawnEvent");

	Params::UBP_NPCWeaponGenerator_C_OnSpawnEvent_Params Parms{};

	Parms.WeaponActor = WeaponActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCWeaponGenerator.BP_NPCWeaponGenerator_C.ExecuteUbergraph_BP_NPCWeaponGenerator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              K2Node_Event_WeaponActor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       K2Node_DynamicCast_AsBP_NPCAIController                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NPCWeaponGenerator_C::ExecuteUbergraph_BP_NPCWeaponGenerator(int32 EntryPoint, class APalWeaponBase* K2Node_Event_WeaponActor, class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCWeaponGenerator_C", "ExecuteUbergraph_BP_NPCWeaponGenerator");

	Params::UBP_NPCWeaponGenerator_C_ExecuteUbergraph_BP_NPCWeaponGenerator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_WeaponActor = K2Node_Event_WeaponActor;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController = K2Node_DynamicCast_AsBP_NPCAIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


