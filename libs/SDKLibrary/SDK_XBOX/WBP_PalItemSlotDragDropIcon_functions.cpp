#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalItemSlotDragDropIcon.WBP_PalItemSlotDragDropIcon_C
// (None)

class UClass* UWBP_PalItemSlotDragDropIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalItemSlotDragDropIcon_C");

	return Clss;
}


// WBP_PalItemSlotDragDropIcon_C WBP_PalItemSlotDragDropIcon.Default__WBP_PalItemSlotDragDropIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalItemSlotDragDropIcon_C* UWBP_PalItemSlotDragDropIcon_C::GetDefaultObj()
{
	static class UWBP_PalItemSlotDragDropIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalItemSlotDragDropIcon_C*>(UWBP_PalItemSlotDragDropIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalItemSlotDragDropIcon.WBP_PalItemSlotDragDropIcon_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StaticItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DisplayNum                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_PalItemSlotDragDropIcon_C::Setup(class FName StaticItemId, int32 DisplayNum, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemSlotDragDropIcon_C", "Setup");

	Params::UWBP_PalItemSlotDragDropIcon_C_Setup_Params Parms{};

	Parms.StaticItemId = StaticItemId;
	Parms.DisplayNum = DisplayNum;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


