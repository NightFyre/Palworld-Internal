#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x418 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C
class UWBP_PalHud_PossessItem_C : public UPalUserWidgetWorldHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalPossessItemIcon_C*             WBP_PalPossessItemIcon;                            // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalHud_PossessItem_C* GetDefaultObj();

	void SetupUI(class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalUIItemPossessStatusIndicatorParameter* K2Node_DynamicCast_AsPal_UIItem_Possess_Status_Indicator_Parameter, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void RemoveSelf_In();
	void OnRequestRemove();
	void OnInitialized();
	void OnSetup();
	void ExecuteUbergraph_WBP_PalHud_PossessItem(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


