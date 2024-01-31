#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x510 - 0x430)
// WidgetBlueprintGeneratedClass WBP_IngameMenu_Monitoring.WBP_IngameMenu_Monitoring_C
class UWBP_IngameMenu_Monitoring_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalRichTextBlock_C*                BP_PalRichTextBlock_WorkInfo;                      // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Monitoring_WorkButton_C* WBP_IngameMenu_Monitoring_WorkButton;              // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Monitoring_WorkButton_C* WBP_IngameMenu_Monitoring_WorkButton_1;            // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Monitoring_WorkButton_C* WBP_IngameMenu_Monitoring_WorkButton_2;            // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Monitoring_WorkInfo_C* WBP_IngameMenu_Monitoring_WorkInfo;                // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Monitoring_WorkInfo_C* WBP_IngameMenu_Monitoring_WorkInfo_1;              // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Monitoring_WorkInfo_C* WBP_IngameMenu_Monitoring_WorkInfo_2;              // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Monitoring_WorkInfo_C* WBP_IngameMenu_Monitoring_WorkInfo_3;              // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  TabActionName;                                     // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalBaseCampPassiveEffectWorkHardType WorkHardLevel;                                     // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPalBaseCampPassiveEffectWorkHardType, class UWBP_IngameMenu_Monitoring_WorkButton_C*> WorkHardButtonMap;                                 // 0x490(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UPalMapObjectBaseCampPassiveWorkHardModel* PalWorkHardModel;                                  // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_IngameMenu_Monitoring_WorkInfo_C*> WorkInfos;                                         // 0x4E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsHovering;                                        // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           WorkHardMsgIds;                                    // 0x500(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_IngameMenu_Monitoring_C* GetDefaultObj();

	void DisplayHoverWorkHardInfo(int32 WorkHardLevel);
	void DisplayCurrentWorkHardInfo(TArray<enum class EPalBaseCampPassiveEffectWorkHardType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue);
	void UpdateWorkHardInfo(int32 WorkHardLevel, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class UWBP_IngameMenu_Monitoring_WorkInfo_C* CallFunc_Array_Get_Item_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	void RequestChangeHardWorkLevel(int32 Level, TArray<enum class EPalBaseCampPassiveEffectWorkHardType>& CallFunc_Map_Keys_Keys, enum class EPalBaseCampPassiveEffectWorkHardType CallFunc_Array_Get_Item);
	void OnUpdateWorkHardType(class UPalBaseCampPassiveEffect_WorkHard* EffectWorkHard, enum class EPalBaseCampPassiveEffectWorkHardType CurrentType, enum class EPalBaseCampPassiveEffectWorkHardType CallFunc_GetWorkHardType_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EPalBaseCampPassiveEffectWorkHardType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class EPalBaseCampPassiveEffectWorkHardType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWBP_IngameMenu_Monitoring_WorkButton_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void BndEvt__WBP_IngameMenu_Monitoring_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void OnSetup();
	void Construct();
	void ExecuteUbergraph_WBP_IngameMenu_Monitoring(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, class UPalHUDDispatchParameter_MapObject* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalMapObjectBaseCampPassiveWorkHardModel* K2Node_DynamicCast_AsPal_Map_Object_Base_Camp_Passive_Work_Hard_Model, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TMap<enum class EPalBaseCampPassiveEffectWorkHardType, class UWBP_IngameMenu_Monitoring_WorkButton_C*> K2Node_MakeMap_Map, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TArray<class UWBP_IngameMenu_Monitoring_WorkInfo_C*>& K2Node_MakeArray_Array, class UPalBaseCampPassiveEffect_WorkHard* CallFunc_GetPassiveEffectWorkHard_ReturnValue, TArray<class UWBP_IngameMenu_Monitoring_WorkButton_C*>& CallFunc_Map_Values_Values, class UWBP_IngameMenu_Monitoring_WorkButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


