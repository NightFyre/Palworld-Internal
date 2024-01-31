#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Buildup_Pal_Item.WBP_Buildup_Pal_Item_C
// (None)

class UClass* UWBP_Buildup_Pal_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Buildup_Pal_Item_C");

	return Clss;
}


// WBP_Buildup_Pal_Item_C WBP_Buildup_Pal_Item.Default__WBP_Buildup_Pal_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Buildup_Pal_Item_C* UWBP_Buildup_Pal_Item_C::GetDefaultObj()
{
	static class UWBP_Buildup_Pal_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Buildup_Pal_Item_C*>(UWBP_Buildup_Pal_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Buildup_Pal_Item.WBP_Buildup_Pal_Item_C.SetIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Item_C::SetIcon(int32 IconIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Item_C", "SetIcon");

	Params::UWBP_Buildup_Pal_Item_C_SetIcon_Params Parms{};

	Parms.IconIndex = IconIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Buildup_Pal_Item.WBP_Buildup_Pal_Item_C.SetNum
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Item_C::SetNum(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Item_C", "SetNum");

	Params::UWBP_Buildup_Pal_Item_C_SetNum_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Buildup_Pal_Item.WBP_Buildup_Pal_Item_C.ExecuteUbergraph_WBP_Buildup_Pal_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_IconIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Num                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Item_C::ExecuteUbergraph_WBP_Buildup_Pal_Item(int32 EntryPoint, int32 Temp_int_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, int32 K2Node_CustomEvent_IconIndex, int32 K2Node_CustomEvent_Num, class FText CallFunc_Conv_IntToText_ReturnValue, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Item_C", "ExecuteUbergraph_WBP_Buildup_Pal_Item");

	Params::UWBP_Buildup_Pal_Item_C_ExecuteUbergraph_WBP_Buildup_Pal_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_CustomEvent_IconIndex = K2Node_CustomEvent_IconIndex;
	Parms.K2Node_CustomEvent_Num = K2Node_CustomEvent_Num;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


