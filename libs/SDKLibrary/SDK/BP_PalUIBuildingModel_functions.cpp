#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalUIBuildingModel.BP_PalUIBuildingModel_C
// (None)

class UClass* UBP_PalUIBuildingModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalUIBuildingModel_C");

	return Clss;
}


// BP_PalUIBuildingModel_C BP_PalUIBuildingModel.Default__BP_PalUIBuildingModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalUIBuildingModel_C* UBP_PalUIBuildingModel_C::GetDefaultObj()
{
	static class UBP_PalUIBuildingModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalUIBuildingModel_C*>(UBP_PalUIBuildingModel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalUIBuildingModel.BP_PalUIBuildingModel_C.OnUpdateInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPalItemContainer*           Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalUIBuildingModel_C::OnUpdateInventory(class UPalItemContainer* Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalUIBuildingModel_C", "OnUpdateInventory");

	Params::UBP_PalUIBuildingModel_C_OnUpdateInventory_Params Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalUIBuildingModel.BP_PalUIBuildingModel_C.ExecuteUbergraph_BP_PalUIBuildingModel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemContainer*           K2Node_Event_Container                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalUIBuildingModel_C::ExecuteUbergraph_BP_PalUIBuildingModel(int32 EntryPoint, class UPalItemContainer* K2Node_Event_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalUIBuildingModel_C", "ExecuteUbergraph_BP_PalUIBuildingModel");

	Params::UBP_PalUIBuildingModel_C_ExecuteUbergraph_BP_PalUIBuildingModel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Container = K2Node_Event_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalUIBuildingModel.BP_PalUIBuildingModel_C.OnUpdateInventoryDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalUIBuildingModel_C::OnUpdateInventoryDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalUIBuildingModel_C", "OnUpdateInventoryDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


