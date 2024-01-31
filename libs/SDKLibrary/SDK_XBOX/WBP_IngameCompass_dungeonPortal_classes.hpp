#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x458 - 0x448)
// WidgetBlueprintGeneratedClass WBP_IngameCompass_dungeonPortal.WBP_IngameCompass_dungeonPortal_C
class UWBP_IngameCompass_dungeonPortal_C : public UWBP_CompassIconBase_C
{
public:
	class UImage*                                Image_Icon;                                        // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Length;                                       // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_IngameCompass_dungeonPortal_C* GetDefaultObj();

	void SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture);
	void SetDistanceText(double Length, double CallFunc_Multiply_DoubleDouble_ReturnValue, int64 CallFunc_Conv_DoubleToInt64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


