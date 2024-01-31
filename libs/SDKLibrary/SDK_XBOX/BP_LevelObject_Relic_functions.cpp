#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LevelObject_Relic.BP_LevelObject_Relic_C
// (Actor)

class UClass* ABP_LevelObject_Relic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LevelObject_Relic_C");

	return Clss;
}


// BP_LevelObject_Relic_C BP_LevelObject_Relic.Default__BP_LevelObject_Relic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LevelObject_Relic_C* ABP_LevelObject_Relic_C::GetDefaultObj()
{
	static class ABP_LevelObject_Relic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LevelObject_Relic_C*>(ABP_LevelObject_Relic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.GetObtainFXLocation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_LevelObject_Relic_C::GetObtainFXLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_Relic_C", "GetObtainFXLocation");

	Params::ABP_LevelObject_Relic_C_GetObtainFXLocation_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.OnUpdatePickupStatus
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalLevelObjectObtainable*   LevelObject                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LevelObject_Relic_C::OnUpdatePickupStatus(class APalLevelObjectObtainable* LevelObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_Relic_C", "OnUpdatePickupStatus");

	Params::ABP_LevelObject_Relic_C_OnUpdatePickupStatus_Params Parms{};

	Parms.LevelObject = LevelObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.SetActiveSelf
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalLevelObjectObtainable*   LevelObject                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bActive                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionEnabled       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionEnabled       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionEnabled       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LevelObject_Relic_C::SetActiveSelf(class APalLevelObjectObtainable* LevelObject, bool bActive, bool Temp_bool_Variable, enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, enum class ECollisionEnabled K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_Relic_C", "SetActiveSelf");

	Params::ABP_LevelObject_Relic_C_SetActiveSelf_Params Parms{};

	Parms.LevelObject = LevelObject;
	Parms.bActive = bActive;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LevelObject_Relic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_Relic_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.ExecuteUbergraph_BP_LevelObject_Relic
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LevelObject_Relic_C::ExecuteUbergraph_BP_LevelObject_Relic(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LevelObject_Relic_C", "ExecuteUbergraph_BP_LevelObject_Relic");

	Params::ABP_LevelObject_Relic_C_ExecuteUbergraph_BP_LevelObject_Relic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


