#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shotgun_NPC.BP_Shotgun_NPC_C
// (Actor)

class UClass* ABP_Shotgun_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shotgun_NPC_C");

	return Clss;
}


// BP_Shotgun_NPC_C BP_Shotgun_NPC.Default__BP_Shotgun_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Shotgun_NPC_C* ABP_Shotgun_NPC_C::GetDefaultObj()
{
	static class ABP_Shotgun_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Shotgun_NPC_C*>(ABP_Shotgun_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Shotgun_NPC.BP_Shotgun_NPC_C.GetNPCWeaponDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_Shotgun_NPC_C::GetNPCWeaponDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shotgun_NPC_C", "GetNPCWeaponDamage");

	Params::ABP_Shotgun_NPC_C_GetNPCWeaponDamage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Shotgun_NPC.BP_Shotgun_NPC_C.GetWeaponDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalcNPCWeaponDamage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_Shotgun_NPC_C::GetWeaponDamage(int32 CallFunc_CalcNPCWeaponDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shotgun_NPC_C", "GetWeaponDamage");

	Params::ABP_Shotgun_NPC_C_GetWeaponDamage_Params Parms{};

	Parms.CallFunc_CalcNPCWeaponDamage_ReturnValue = CallFunc_CalcNPCWeaponDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Shotgun_NPC.BP_Shotgun_NPC_C.OnWeaponNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EWeaponNotifyType       Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Shotgun_NPC_C::OnWeaponNotify(enum class EWeaponNotifyType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shotgun_NPC_C", "OnWeaponNotify");

	Params::ABP_Shotgun_NPC_C_OnWeaponNotify_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Shotgun_NPC.BP_Shotgun_NPC_C.ExecuteUbergraph_BP_Shotgun_NPC
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponNotifyType       K2Node_Event_type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Shotgun_NPC_C::ExecuteUbergraph_BP_Shotgun_NPC(int32 EntryPoint, int32 Temp_int_Variable, enum class EWeaponNotifyType K2Node_Event_type, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shotgun_NPC_C", "ExecuteUbergraph_BP_Shotgun_NPC");

	Params::ABP_Shotgun_NPC_C_ExecuteUbergraph_BP_Shotgun_NPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_type = K2Node_Event_type;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


