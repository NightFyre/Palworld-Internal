#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA4 (0x31C - 0x278)
// WidgetBlueprintGeneratedClass WBP_MapMarker_Win.WBP_MapMarker_Win_C
class UWBP_MapMarker_Win_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                    Text_Head_MarkerCount;                             // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Button_C*               WBP_MapMarker_Button;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*              WBP_MapMarker_Content;                             // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*              WBP_MapMarker_Content_1;                           // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*              WBP_MapMarker_Content_2;                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*              WBP_MapMarker_Content_3;                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*              WBP_MapMarker_Content_4;                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*              WBP_MapMarker_Content_5;                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*              WBP_MapMarker_Content_6;                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*              WBP_MapMarker_Content_7;                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_MapMarker_Content_C*>      Markers;                                           // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_Map_IconCustom_C*                 CurrentEdittingIcon;                               // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RemoveCustomIcon;                                  // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UTexture2D*>                    Textures;                                          // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            ChangeCustomIcon;                                  // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CurrentIndex;                                      // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MapMarker_Win_C* GetDefaultObj();

	void Construct();
	void ClickDeleteButton();
	void ChangeIconType(int32 Index);
	void SetEdittingIcon(class UWBP_Map_IconCustom_C* CustomIcon);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_MapMarker_Win(int32 EntryPoint, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, int32 Temp_int_Array_Index_Variable, class UWBP_MapMarker_Content_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWBP_MapMarker_Content_C*>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_Index, class UWBP_Map_IconCustom_C* K2Node_CustomEvent_CustomIcon, class UTexture2D* CallFunc_Array_Get_Item_1, class UWBP_MapMarker_Content_C* CallFunc_Array_Get_Item_2, bool CallFunc_NotEqual_IntInt_ReturnValue, class UWBP_MapMarker_Content_C* CallFunc_Array_Get_Item_3, class UWBP_MapMarker_Content_C* CallFunc_Array_Get_Item_4, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UWBP_MapMarker_Content_C* CallFunc_Array_Get_Item_5, class UWBP_MapMarker_Content_C* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int32 CallFunc_GetLocalCustomLocationCount_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UMaterialInterface* K2Node_Select_Default, class FText CallFunc_Format_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue_1, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, int32 CallFunc_GetLocalCustomLocationCount_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int64 CallFunc_Conv_IntToInt64_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class UMaterialInterface* K2Node_Select_Default_1, class FText CallFunc_Format_ReturnValue_1, class UPalLocationPoint* CallFunc_GetLocationPoint_LocationPoint, class UPalLocationPoint_Custom* K2Node_DynamicCast_AsPal_Location_Point_Custom, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetIconType_ReturnValue);
	void ChangeCustomIcon__DelegateSignature(class UWBP_Map_IconCustom_C* Icon, int32 Index);
	void RemoveCustomIcon__DelegateSignature(class UWBP_Map_IconCustom_C* Icon);
};

}


