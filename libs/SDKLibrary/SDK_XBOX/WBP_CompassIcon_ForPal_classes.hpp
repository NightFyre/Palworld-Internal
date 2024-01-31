#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x468 - 0x460)
// WidgetBlueprintGeneratedClass WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C
class UWBP_CompassIcon_ForPal_C : public UWBP_IngameCompass_arrow_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_CompassIcon_ForPal_C* GetDefaultObj();

	void SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_1, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, class UPalLocationBase* CallFunc_GetLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalLocationPoint_DroppedCharacter* K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character, bool K2Node_DynamicCast_bSuccess, class UPalMapObjectPickableCharacterModelBase* CallFunc_GetMapObjectConcreteModel_ReturnValue, class UPalLocationPoint_Character* K2Node_DynamicCast_AsPal_Location_Point_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, enum class EPalCharacterLocationType CallFunc_GetCharacterLocationType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_GetCharacterID_ReturnValue, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetCharacterSaveParameter_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetCharacterIconTexture_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetCharacterIconTexture_ReturnValue_1);
	void OnInitialized();
	void ExecuteUbergraph_WBP_CompassIcon_ForPal(int32 EntryPoint, const struct FSlateBrush& K2Node_Copy_ReturnValue, const struct FSlateBrush& K2Node_SetFieldsInStruct_StructOut);
};

}


