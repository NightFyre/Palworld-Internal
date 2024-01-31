#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryListContent.WBP_InventoryListContent_C
// (None)

class UClass* UWBP_InventoryListContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryListContent_C");

	return Clss;
}


// WBP_InventoryListContent_C WBP_InventoryListContent.Default__WBP_InventoryListContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryListContent_C* UWBP_InventoryListContent_C::GetDefaultObj()
{
	static class UWBP_InventoryListContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryListContent_C*>(UWBP_InventoryListContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryListContent.WBP_InventoryListContent_C.GetAllContents
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>             Contents                                                         (Parm, OutParm, ContainsInstancedReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)

void UWBP_InventoryListContent_C::GetAllContents(TArray<class UWidget*>* Contents, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryListContent_C", "GetAllContents");

	Params::UWBP_InventoryListContent_C_GetAllContents_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Contents != nullptr)
		*Contents = std::move(Parms.Contents);

}


// Function WBP_InventoryListContent.WBP_InventoryListContent_C.AddWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     InWidgett                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryListContent_C::AddWidget(class UWidget* InWidgett, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryListContent_C", "AddWidget");

	Params::UWBP_InventoryListContent_C_AddWidget_Params Parms{};

	Parms.InWidgett = InWidgett;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryListContent.WBP_InventoryListContent_C.SetCategoryName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CategoryName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InventoryListContent_C::SetCategoryName(class FText CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryListContent_C", "SetCategoryName");

	Params::UWBP_InventoryListContent_C_SetCategoryName_Params Parms{};

	Parms.CategoryName = CategoryName;

	UObject::ProcessEvent(Func, &Parms);

}

}


