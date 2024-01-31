#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThrowWeapon_Dummy.BP_ThrowWeapon_Dummy_C
// (Actor)

class UClass* ABP_ThrowWeapon_Dummy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThrowWeapon_Dummy_C");

	return Clss;
}


// BP_ThrowWeapon_Dummy_C BP_ThrowWeapon_Dummy.Default__BP_ThrowWeapon_Dummy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThrowWeapon_Dummy_C* ABP_ThrowWeapon_Dummy_C::GetDefaultObj()
{
	static class ABP_ThrowWeapon_Dummy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThrowWeapon_Dummy_C*>(ABP_ThrowWeapon_Dummy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ThrowWeapon_Dummy.BP_ThrowWeapon_Dummy_C.ExecuteUbergraph_BP_ThrowWeapon_Dummy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeapon_Dummy_C::ExecuteUbergraph_BP_ThrowWeapon_Dummy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeapon_Dummy_C", "ExecuteUbergraph_BP_ThrowWeapon_Dummy");

	Params::ABP_ThrowWeapon_Dummy_C_ExecuteUbergraph_BP_ThrowWeapon_Dummy_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


