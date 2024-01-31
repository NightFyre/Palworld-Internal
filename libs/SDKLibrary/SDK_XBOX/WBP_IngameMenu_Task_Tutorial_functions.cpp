#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C
// (None)

class UClass* UWBP_IngameMenu_Task_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_Task_Tutorial_C");

	return Clss;
}


// WBP_IngameMenu_Task_Tutorial_C WBP_IngameMenu_Task_Tutorial.Default__WBP_IngameMenu_Task_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_Task_Tutorial_C* UWBP_IngameMenu_Task_Tutorial_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_Task_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_Task_Tutorial_C*>(UWBP_IngameMenu_Task_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C.GetNowDisplayQuestWidgetNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Num                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Tutorial_C::GetNowDisplayQuestWidgetNum(int32* Num, int32 CallFunc_Map_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_C", "GetNowDisplayQuestWidgetNum");

	Params::UWBP_IngameMenu_Task_Tutorial_C_GetNowDisplayQuestWidgetNum_Params Parms{};

	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;

}


// Function WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C.OnClosedQuestWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_IngameMenu_Task_Tutorial_List_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Tutorial_C::OnClosedQuestWidget(class UWBP_IngameMenu_Task_Tutorial_List_C* Widget, bool CallFunc_Map_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_C", "OnClosedQuestWidget");

	Params::UWBP_IngameMenu_Task_Tutorial_C_OnClosedQuestWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C.AddQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalQuestData*               QuestData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalQuestData*>       CallFunc_Map_Values_Values                                       (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_IngameMenu_Task_Tutorial_List_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Tutorial_C::AddQuest(class UPalQuestData* QuestData, bool CallFunc_IsValid_ReturnValue, TArray<class UPalQuestData*>& CallFunc_Map_Values_Values, bool CallFunc_Array_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_IngameMenu_Task_Tutorial_List_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_C", "AddQuest");

	Params::UWBP_IngameMenu_Task_Tutorial_C_AddQuest_Params Parms{};

	Parms.QuestData = QuestData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


