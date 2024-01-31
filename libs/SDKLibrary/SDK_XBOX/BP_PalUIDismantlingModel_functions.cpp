#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalUIDismantlingModel.BP_PalUIDismantlingModel_C
// (None)

class UClass* UBP_PalUIDismantlingModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalUIDismantlingModel_C");

	return Clss;
}


// BP_PalUIDismantlingModel_C BP_PalUIDismantlingModel.Default__BP_PalUIDismantlingModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalUIDismantlingModel_C* UBP_PalUIDismantlingModel_C::GetDefaultObj()
{
	static class UBP_PalUIDismantlingModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalUIDismantlingModel_C*>(UBP_PalUIDismantlingModel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalUIDismantlingModel.BP_PalUIDismantlingModel_C.OnUpdateInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPalItemContainer*           Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalUIDismantlingModel_C::OnUpdateInventory(class UPalItemContainer* Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalUIDismantlingModel_C", "OnUpdateInventory");

	Params::UBP_PalUIDismantlingModel_C_OnUpdateInventory_Params Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalUIDismantlingModel.BP_PalUIDismantlingModel_C.ExecuteUbergraph_BP_PalUIDismantlingModel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemContainer*           K2Node_Event_Container                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalUIDismantlingModel_C::ExecuteUbergraph_BP_PalUIDismantlingModel(int32 EntryPoint, class UPalItemContainer* K2Node_Event_Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalUIDismantlingModel_C", "ExecuteUbergraph_BP_PalUIDismantlingModel");

	Params::UBP_PalUIDismantlingModel_C_ExecuteUbergraph_BP_PalUIDismantlingModel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Container = K2Node_Event_Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalUIDismantlingModel.BP_PalUIDismantlingModel_C.OnUpdateInventoryDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalUIDismantlingModel_C::OnUpdateInventoryDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalUIDismantlingModel_C", "OnUpdateInventoryDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


