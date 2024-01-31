#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GliderObjectBase.BP_GliderObjectBase_C
// (Actor)

class UClass* ABP_GliderObjectBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GliderObjectBase_C");

	return Clss;
}


// BP_GliderObjectBase_C BP_GliderObjectBase.Default__BP_GliderObjectBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GliderObjectBase_C* ABP_GliderObjectBase_C::GetDefaultObj()
{
	static class ABP_GliderObjectBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GliderObjectBase_C*>(ABP_GliderObjectBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GliderObjectBase.BP_GliderObjectBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GliderObjectBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderObjectBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GliderObjectBase.BP_GliderObjectBase_C.OnStartGliding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GliderObjectBase_C::OnStartGliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderObjectBase_C", "OnStartGliding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GliderObjectBase.BP_GliderObjectBase_C.OnEndGliding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GliderObjectBase_C::OnEndGliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderObjectBase_C", "OnEndGliding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GliderObjectBase.BP_GliderObjectBase_C.ExecuteUbergraph_BP_GliderObjectBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalGliderComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GliderObjectBase_C::ExecuteUbergraph_BP_GliderObjectBase(int32 EntryPoint, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalGliderComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderObjectBase_C", "ExecuteUbergraph_BP_GliderObjectBase");

	Params::ABP_GliderObjectBase_C_ExecuteUbergraph_BP_GliderObjectBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


