#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionWateringOneshot.BP_ActionWateringOneshot_C
// (None)

class UClass* UBP_ActionWateringOneshot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionWateringOneshot_C");

	return Clss;
}


// BP_ActionWateringOneshot_C BP_ActionWateringOneshot.Default__BP_ActionWateringOneshot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionWateringOneshot_C* UBP_ActionWateringOneshot_C::GetDefaultObj()
{
	static class UBP_ActionWateringOneshot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionWateringOneshot_C*>(UBP_ActionWateringOneshot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionWateringOneshot.BP_ActionWateringOneshot_C.NotifyWatered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActionTarget                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TScriptInterface<class IPalMapObjectWaterRecievableInterface>K2Node_DynamicCast_AsPal_Map_Object_Water_Recievable_Interface   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTarget_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWateringOneshot_C::NotifyWatered(class FName NotifyName, class AActor* ActionTarget, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TScriptInterface<class IPalMapObjectWaterRecievableInterface> K2Node_DynamicCast_AsPal_Map_Object_Water_Recievable_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionWateringOneshot_C", "NotifyWatered");

	Params::UBP_ActionWateringOneshot_C_NotifyWatered_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.ActionTarget = ActionTarget;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Water_Recievable_Interface = K2Node_DynamicCast_AsPal_Map_Object_Water_Recievable_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActionTarget_ReturnValue = CallFunc_GetActionTarget_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionWateringOneshot.BP_ActionWateringOneshot_C.OnNotifyBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWateringOneshot_C::OnNotifyBegin(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionWateringOneshot_C", "OnNotifyBegin");

	Params::UBP_ActionWateringOneshot_C_OnNotifyBegin_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionWateringOneshot.BP_ActionWateringOneshot_C.ExecuteUbergraph_BP_ActionWateringOneshot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_NotifyName                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWateringOneshot_C::ExecuteUbergraph_BP_ActionWateringOneshot(int32 EntryPoint, class FName K2Node_Event_NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionWateringOneshot_C", "ExecuteUbergraph_BP_ActionWateringOneshot");

	Params::UBP_ActionWateringOneshot_C_ExecuteUbergraph_BP_ActionWateringOneshot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NotifyName = K2Node_Event_NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}

}


