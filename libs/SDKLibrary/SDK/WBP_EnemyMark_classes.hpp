#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x430 - 0x408)
// WidgetBlueprintGeneratedClass WBP_EnemyMark.WBP_EnemyMark_C
class UWBP_EnemyMark_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_85;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C>> QuMarkList;                                        // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_EnemyMark_C* GetDefaultObj();

	void Construct();
	void _________0(class APalCharacter* TargetCharacter);
	void _________1(class APalCharacter* TargetCharacter);
	void ExecuteUbergraph_WBP_EnemyMark(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APalCharacter* K2Node_CustomEvent_TargetCharacter_1, int32 Temp_int_Loop_Counter_Variable_1, class UWBP_EnemyExclamationMarkIcon_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue_1, class APalCharacter* K2Node_CustomEvent_TargetCharacter, class UWBP_EnemyQuestionMarkIcon_C* CallFunc_SpawnObject_ReturnValue_1, TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_EnemyQuestionMarkIcon_C* K2Node_DynamicCast_AsWBP_Enemy_Question_Mark_Icon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C> CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
};

}


