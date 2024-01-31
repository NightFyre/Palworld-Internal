#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CompassIcon_ForMapObject.WBP_CompassIcon_ForMapObject_C
// (None)

class UClass* UWBP_CompassIcon_ForMapObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CompassIcon_ForMapObject_C");

	return Clss;
}


// WBP_CompassIcon_ForMapObject_C WBP_CompassIcon_ForMapObject.Default__WBP_CompassIcon_ForMapObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CompassIcon_ForMapObject_C* UWBP_CompassIcon_ForMapObject_C::GetDefaultObj()
{
	static class UWBP_CompassIcon_ForMapObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CompassIcon_ForMapObject_C*>(UWBP_CompassIcon_ForMapObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CompassIcon_ForMapObject.WBP_CompassIcon_ForMapObject_C.SetupTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FPalLocationUIData_TableRow CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationManager*         CallFunc_GetLocationManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationBase*            CallFunc_GetLocation_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalLocationPoint_MapObject* K2Node_DynamicCast_AsPal_Location_Point_Map_Object               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMapObjectName_MapObjectName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMapObjectName_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Map_Find_Value                                          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CompassIcon_ForMapObject_C::SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture, const struct FPalLocationUIData_TableRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalLocationBase* CallFunc_GetLocation_ReturnValue, class UPalLocationPoint_MapObject* K2Node_DynamicCast_AsPal_Location_Point_Map_Object, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetMapObjectName_MapObjectName, bool CallFunc_GetMapObjectName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CompassIcon_ForMapObject_C", "SetupTexture");

	Params::UWBP_CompassIcon_ForMapObject_C_SetupTexture_Params Parms{};

	Parms.SoftTexture = SoftTexture;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetLocationManager_ReturnValue = CallFunc_GetLocationManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocation_ReturnValue = CallFunc_GetLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Location_Point_Map_Object = K2Node_DynamicCast_AsPal_Location_Point_Map_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMapObjectName_MapObjectName = CallFunc_GetMapObjectName_MapObjectName;
	Parms.CallFunc_GetMapObjectName_ReturnValue = CallFunc_GetMapObjectName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CompassIcon_ForMapObject.WBP_CompassIcon_ForMapObject_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CompassIcon_ForMapObject_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CompassIcon_ForMapObject_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CompassIcon_ForMapObject.WBP_CompassIcon_ForMapObject_C.ExecuteUbergraph_WBP_CompassIcon_ForMapObject
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Copy_ReturnValue                                          (None)
// struct FSlateBrush                 K2Node_SetFieldsInStruct_StructOut                               (None)

void UWBP_CompassIcon_ForMapObject_C::ExecuteUbergraph_WBP_CompassIcon_ForMapObject(int32 EntryPoint, const struct FSlateBrush& K2Node_Copy_ReturnValue, const struct FSlateBrush& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CompassIcon_ForMapObject_C", "ExecuteUbergraph_WBP_CompassIcon_ForMapObject");

	Params::UWBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Copy_ReturnValue = K2Node_Copy_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}

}


