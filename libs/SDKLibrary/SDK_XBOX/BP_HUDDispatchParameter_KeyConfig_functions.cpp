#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HUDDispatchParameter_KeyConfig.BP_HUDDispatchParameter_KeyConfig_C
// (None)

class UClass* UBP_HUDDispatchParameter_KeyConfig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HUDDispatchParameter_KeyConfig_C");

	return Clss;
}


// BP_HUDDispatchParameter_KeyConfig_C BP_HUDDispatchParameter_KeyConfig.Default__BP_HUDDispatchParameter_KeyConfig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HUDDispatchParameter_KeyConfig_C* UBP_HUDDispatchParameter_KeyConfig_C::GetDefaultObj()
{
	static class UBP_HUDDispatchParameter_KeyConfig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HUDDispatchParameter_KeyConfig_C*>(UBP_HUDDispatchParameter_KeyConfig_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HUDDispatchParameter_KeyConfig.BP_HUDDispatchParameter_KeyConfig_C.OnKeyChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        NewKey                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EPalKeyConfigCategory   InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalKeyConfigAxisFilterTypeAxisType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUDDispatchParameter_KeyConfig_C::OnKeyChanged__DelegateSignature(class FName ActionName, const struct FKey& NewKey, enum class EPalKeyConfigCategory InputType, enum class EPalKeyConfigAxisFilterType AxisType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUDDispatchParameter_KeyConfig_C", "OnKeyChanged__DelegateSignature");

	Params::UBP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.NewKey = NewKey;
	Parms.InputType = InputType;
	Parms.AxisType = AxisType;

	UObject::ProcessEvent(Func, &Parms);

}

}


