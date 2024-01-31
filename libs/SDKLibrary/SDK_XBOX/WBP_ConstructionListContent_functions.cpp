#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConstructionListContent.WBP_ConstructionListContent_C
// (None)

class UClass* UWBP_ConstructionListContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConstructionListContent_C");

	return Clss;
}


// WBP_ConstructionListContent_C WBP_ConstructionListContent.Default__WBP_ConstructionListContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConstructionListContent_C* UWBP_ConstructionListContent_C::GetDefaultObj()
{
	static class UWBP_ConstructionListContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConstructionListContent_C*>(UWBP_ConstructionListContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ConstructionListContent.WBP_ConstructionListContent_C.AddWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 InWidgett                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ConstructionListContent_C::AddWidget(class UUserWidget* InWidgett, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConstructionListContent_C", "AddWidget");

	Params::UWBP_ConstructionListContent_C_AddWidget_Params Parms{};

	Parms.InWidgett = InWidgett;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConstructionListContent.WBP_ConstructionListContent_C.SetCategoryName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CategoryName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ConstructionListContent_C::SetCategoryName(class FText CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConstructionListContent_C", "SetCategoryName");

	Params::UWBP_ConstructionListContent_C_SetCategoryName_Params Parms{};

	Parms.CategoryName = CategoryName;

	UObject::ProcessEvent(Func, &Parms);

}

}


