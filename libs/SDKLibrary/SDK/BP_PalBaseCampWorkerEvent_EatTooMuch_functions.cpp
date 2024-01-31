#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalBaseCampWorkerEvent_EatTooMuch.BP_PalBaseCampWorkerEvent_EatTooMuch_C
// (None)

class UClass* UBP_PalBaseCampWorkerEvent_EatTooMuch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalBaseCampWorkerEvent_EatTooMuch_C");

	return Clss;
}


// BP_PalBaseCampWorkerEvent_EatTooMuch_C BP_PalBaseCampWorkerEvent_EatTooMuch.Default__BP_PalBaseCampWorkerEvent_EatTooMuch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalBaseCampWorkerEvent_EatTooMuch_C* UBP_PalBaseCampWorkerEvent_EatTooMuch_C::GetDefaultObj()
{
	static class UBP_PalBaseCampWorkerEvent_EatTooMuch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalBaseCampWorkerEvent_EatTooMuch_C*>(UBP_PalBaseCampWorkerEvent_EatTooMuch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalBaseCampWorkerEvent_EatTooMuch.BP_PalBaseCampWorkerEvent_EatTooMuch_C.CreateNotifyMessageText
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LocalizedFormatText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class APalCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UBP_PalBaseCampWorkerEvent_EatTooMuch_C::CreateNotifyMessageText(class FText& LocalizedFormatText, class APalCharacter* Character, const class FString& CallFunc_GetNickName_outName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalBaseCampWorkerEvent_EatTooMuch_C", "CreateNotifyMessageText");

	Params::UBP_PalBaseCampWorkerEvent_EatTooMuch_C_CreateNotifyMessageText_Params Parms{};

	Parms.LocalizedFormatText = LocalizedFormatText;
	Parms.Character = Character;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


