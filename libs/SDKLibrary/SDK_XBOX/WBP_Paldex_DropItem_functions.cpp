#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Paldex_DropItem.WBP_Paldex_DropItem_C
// (None)

class UClass* UWBP_Paldex_DropItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Paldex_DropItem_C");

	return Clss;
}


// WBP_Paldex_DropItem_C WBP_Paldex_DropItem.Default__WBP_Paldex_DropItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Paldex_DropItem_C* UWBP_Paldex_DropItem_C::GetDefaultObj()
{
	static class UWBP_Paldex_DropItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Paldex_DropItem_C*>(UWBP_Paldex_DropItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Paldex_DropItem.WBP_Paldex_DropItem_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_outName                                     (None)

void UWBP_Paldex_DropItem_C::Setup(class FName ItemId, class FText CallFunc_GetItemName_outName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_DropItem_C", "Setup");

	Params::UWBP_Paldex_DropItem_C_Setup_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_GetItemName_outName = CallFunc_GetItemName_outName;

	UObject::ProcessEvent(Func, &Parms);

}

}


