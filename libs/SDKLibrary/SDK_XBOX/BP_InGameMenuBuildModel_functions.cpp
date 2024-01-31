#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C
// (None)

class UClass* UBP_InGameMenuBuildModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InGameMenuBuildModel_C");

	return Clss;
}


// BP_InGameMenuBuildModel_C BP_InGameMenuBuildModel.Default__BP_InGameMenuBuildModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InGameMenuBuildModel_C* UBP_InGameMenuBuildModel_C::GetDefaultObj()
{
	static class UBP_InGameMenuBuildModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InGameMenuBuildModel_C*>(UBP_InGameMenuBuildModel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.Setup
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalUIBuildModel_C*       CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_InGameMenuBuildModel_C::Setup(class UBP_PalUIBuildModel_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InGameMenuBuildModel_C", "Setup");

	Params::UBP_InGameMenuBuildModel_C_Setup_Params Parms{};

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.SetInitialTypeA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalBuildObjectTypeA    TypeA                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InGameMenuBuildModel_C::SetInitialTypeA(enum class EPalBuildObjectTypeA TypeA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InGameMenuBuildModel_C", "SetInitialTypeA");

	Params::UBP_InGameMenuBuildModel_C_SetInitialTypeA_Params Parms{};

	Parms.TypeA = TypeA;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.OnUpdateInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPalItemContainer*           Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_InGameMenuBuildModel_C::OnUpdateInventory(class UPalItemContainer* Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InGameMenuBuildModel_C", "OnUpdateInventory");

	Params::UBP_InGameMenuBuildModel_C_OnUpdateInventory_Params Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.ExecuteUbergraph_BP_InGameMenuBuildModel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemContainer*           K2Node_Event_Container                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_InGameMenuBuildModel_C::ExecuteUbergraph_BP_InGameMenuBuildModel(int32 EntryPoint, class UPalItemContainer* K2Node_Event_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InGameMenuBuildModel_C", "ExecuteUbergraph_BP_InGameMenuBuildModel");

	Params::UBP_InGameMenuBuildModel_C_ExecuteUbergraph_BP_InGameMenuBuildModel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Container = K2Node_Event_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.OnUpdateInventoryDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InGameMenuBuildModel_C::OnUpdateInventoryDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InGameMenuBuildModel_C", "OnUpdateInventoryDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


