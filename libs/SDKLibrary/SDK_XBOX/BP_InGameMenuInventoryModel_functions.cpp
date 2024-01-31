#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InGameMenuInventoryModel.BP_InGameMenuInventoryModel_C
// (None)

class UClass* UBP_InGameMenuInventoryModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InGameMenuInventoryModel_C");

	return Clss;
}


// BP_InGameMenuInventoryModel_C BP_InGameMenuInventoryModel.Default__BP_InGameMenuInventoryModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InGameMenuInventoryModel_C* UBP_InGameMenuInventoryModel_C::GetDefaultObj()
{
	static class UBP_InGameMenuInventoryModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InGameMenuInventoryModel_C*>(UBP_InGameMenuInventoryModel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InGameMenuInventoryModel.BP_InGameMenuInventoryModel_C.Dispose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InGameMenuInventoryModel_C::Dispose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InGameMenuInventoryModel_C", "Dispose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InGameMenuInventoryModel.BP_InGameMenuInventoryModel_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalLoadOutModel_C*       CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalInventoryModel_C*     CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_InGameMenuInventoryModel_C::Setup(class UBP_PalLoadOutModel_C* CallFunc_SpawnObject_ReturnValue, class UBP_PalInventoryModel_C* CallFunc_SpawnObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InGameMenuInventoryModel_C", "Setup");

	Params::UBP_InGameMenuInventoryModel_C_Setup_Params Parms{};

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


