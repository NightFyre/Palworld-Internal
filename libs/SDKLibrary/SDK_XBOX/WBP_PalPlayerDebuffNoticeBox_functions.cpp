#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C
// (None)

class UClass* UWBP_PalPlayerDebuffNoticeBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalPlayerDebuffNoticeBox_C");

	return Clss;
}


// WBP_PalPlayerDebuffNoticeBox_C WBP_PalPlayerDebuffNoticeBox.Default__WBP_PalPlayerDebuffNoticeBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalPlayerDebuffNoticeBox_C* UWBP_PalPlayerDebuffNoticeBox_C::GetDefaultObj()
{
	static class UWBP_PalPlayerDebuffNoticeBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalPlayerDebuffNoticeBox_C*>(UWBP_PalPlayerDebuffNoticeBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C.RemoveDebuffNotice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PalUIPlayerDebuffNoticeTypeDebuffType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_DebuffNotice_C*         CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerDebuffNoticeBox_C::RemoveDebuffNotice(enum class E_PalUIPlayerDebuffNoticeType DebuffType, bool CallFunc_Map_Remove_ReturnValue, class UWBP_DebuffNotice_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerDebuffNoticeBox_C", "RemoveDebuffNotice");

	Params::UWBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice_Params Parms{};

	Parms.DebuffType = DebuffType;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C.AddDebuffNotice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PalUIPlayerDebuffNoticeTypeDebuffType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DebuffNotice_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerDebuffNoticeBox_C::AddDebuffNotice(enum class E_PalUIPlayerDebuffNoticeType DebuffType, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_DebuffNotice_C* CallFunc_Create_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerDebuffNoticeBox_C", "AddDebuffNotice");

	Params::UWBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice_Params Parms{};

	Parms.DebuffType = DebuffType;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalPlayerDebuffNoticeBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerDebuffNoticeBox_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C.ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalPlayerDebuffNoticeBox_C::ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalPlayerDebuffNoticeBox_C", "ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox");

	Params::UWBP_PalPlayerDebuffNoticeBox_C_ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


