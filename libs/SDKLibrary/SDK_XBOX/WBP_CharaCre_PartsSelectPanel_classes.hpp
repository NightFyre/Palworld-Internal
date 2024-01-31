#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2F0 - 0x278)
// WidgetBlueprintGeneratedClass WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C
class UWBP_CharaCre_PartsSelectPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                              WrapBox_Main;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedAnyContent;                               // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FName, class UWBP_CharaCre_PartsSelect_sq_C*> ButtonMap;                                         // 0x298(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_CharaCre_PartsSelect_sq_C*        LastClickedButton;                                 // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_PartsSelectPanel_C* GetDefaultObj();

	void SetSelectedPresetName(class FName PresetName, class UWBP_CharaCre_PartsSelect_sq_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void OnClicked_Internal(class UWBP_CharaCre_PartsSelect_sq_C* Button, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetBindedPresetName_PresetName);
	void GetTopFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_CharaCre_PartsSelect_sq_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Parts_Select_Sq, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void AddPreset(class FName PresetName, TSoftObjectPtr<class UTexture2D> SoftIconTexture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CharaCre_PartsSelect_sq_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void AddMeshPresets(TMap<class FName, struct FPalCharacterCreationMeshPresetDataRow> PresetMap, int32 Temp_int_Loop_Counter_Variable, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FPalCharacterCreationMeshPresetDataRow& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CharaCre_PartsSelect_sq_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel(int32 EntryPoint);
	void OnClickedAnyContent__DelegateSignature(class FName BindedName);
};

}


