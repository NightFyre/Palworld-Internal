#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C
// (None)

class UClass* UWBP_CompassIcon_ForPal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CompassIcon_ForPal_C");

	return Clss;
}


// WBP_CompassIcon_ForPal_C WBP_CompassIcon_ForPal.Default__WBP_CompassIcon_ForPal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CompassIcon_ForPal_C* UWBP_CompassIcon_ForPal_C::GetDefaultObj()
{
	static class UWBP_CompassIcon_ForPal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CompassIcon_ForPal_C*>(UWBP_CompassIcon_ForPal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C.SetupTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalLocationManager*         CallFunc_GetLocationManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalLocationBase*            CallFunc_GetLocation_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationPoint_DroppedCharacter*K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectPickableCharacterModelBase*CallFunc_GetMapObjectConcreteModel_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalLocationPoint_Character* K2Node_DynamicCast_AsPal_Location_Point_Character                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalCharacterLocationTypeCallFunc_GetCharacterLocationType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalIndividualCharacterSaveParameterCallFunc_GetCharacterSaveParameter_ReturnValue                   (ConstParm)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetCharacterIconTexture_ReturnValue                     (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetCharacterIconTexture_ReturnValue_1                   (UObjectWrapper, HasGetValueTypeHash)

void UWBP_CompassIcon_ForPal_C::SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_1, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, class UPalLocationBase* CallFunc_GetLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalLocationPoint_DroppedCharacter* K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character, bool K2Node_DynamicCast_bSuccess, class UPalMapObjectPickableCharacterModelBase* CallFunc_GetMapObjectConcreteModel_ReturnValue, class UPalLocationPoint_Character* K2Node_DynamicCast_AsPal_Location_Point_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, enum class EPalCharacterLocationType CallFunc_GetCharacterLocationType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_GetCharacterID_ReturnValue, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetCharacterSaveParameter_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetCharacterIconTexture_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetCharacterIconTexture_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CompassIcon_ForPal_C", "SetupTexture");

	Params::UWBP_CompassIcon_ForPal_C_SetupTexture_Params Parms{};

	Parms.SoftTexture = SoftTexture;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue_1 = CallFunc_GetDatabaseCharacterParameter_ReturnValue_1;
	Parms.CallFunc_GetLocationManager_ReturnValue = CallFunc_GetLocationManager_ReturnValue;
	Parms.CallFunc_GetLocation_ReturnValue = CallFunc_GetLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character = K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMapObjectConcreteModel_ReturnValue = CallFunc_GetMapObjectConcreteModel_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Location_Point_Character = K2Node_DynamicCast_AsPal_Location_Point_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCharacterLocationType_ReturnValue = CallFunc_GetCharacterLocationType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCharacterID_ReturnValue = CallFunc_GetCharacterID_ReturnValue;
	Parms.CallFunc_GetCharacterSaveParameter_ReturnValue = CallFunc_GetCharacterSaveParameter_ReturnValue;
	Parms.CallFunc_GetCharacterIconTexture_ReturnValue = CallFunc_GetCharacterIconTexture_ReturnValue;
	Parms.CallFunc_GetCharacterIconTexture_ReturnValue_1 = CallFunc_GetCharacterIconTexture_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CompassIcon_ForPal_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CompassIcon_ForPal_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C.ExecuteUbergraph_WBP_CompassIcon_ForPal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Copy_ReturnValue                                          (None)
// struct FSlateBrush                 K2Node_SetFieldsInStruct_StructOut                               (None)

void UWBP_CompassIcon_ForPal_C::ExecuteUbergraph_WBP_CompassIcon_ForPal(int32 EntryPoint, const struct FSlateBrush& K2Node_Copy_ReturnValue, const struct FSlateBrush& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CompassIcon_ForPal_C", "ExecuteUbergraph_WBP_CompassIcon_ForPal");

	Params::UWBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Copy_ReturnValue = K2Node_Copy_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}

}


