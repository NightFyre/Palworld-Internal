#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x468 - 0x460)
// WidgetBlueprintGeneratedClass WBP_CompassIcon_ForMapObject.WBP_CompassIcon_ForMapObject_C
class UWBP_CompassIcon_ForMapObject_C : public UWBP_IngameCompass_arrow_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_CompassIcon_ForMapObject_C* GetDefaultObj();

	void SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture, const struct FPalLocationUIData_TableRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalLocationBase* CallFunc_GetLocation_ReturnValue, class UPalLocationPoint_MapObject* K2Node_DynamicCast_AsPal_Location_Point_Map_Object, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetMapObjectName_MapObjectName, bool CallFunc_GetMapObjectName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnInitialized();
	void ExecuteUbergraph_WBP_CompassIcon_ForMapObject(int32 EntryPoint, const struct FSlateBrush& K2Node_Copy_ReturnValue, const struct FSlateBrush& K2Node_SetFieldsInStruct_StructOut);
};

}


