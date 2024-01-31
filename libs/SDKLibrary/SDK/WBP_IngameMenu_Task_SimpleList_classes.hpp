#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x5F8 - 0x578)
// WidgetBlueprintGeneratedClass WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C
class UWBP_IngameMenu_Task_SimpleList_C : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          MainCanvas;                                        // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_PalActionInfo;                                // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_PalName;                                      // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*             WBP_MainMenu_Pal_State_0;                          // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*             WBP_MainMenu_Pal_State_1;                          // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*             WBP_MainMenu_Pal_State_2;                          // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*         WBP_PalCommonCharacterSlot;                        // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UPalIndividualCharacterSlot> bindedSlot;                                        // 0x5B8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UWBP_MainMenu_Pal_State_C*>     ConditionWidgetArray;                              // 0x5E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_IngameMenu_Task_SimpleList_C* GetDefaultObj();

	void UpdateNickName(const class FString& NewNickName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Setup(class UPalIndividualCharacterSlot* TargetSlot, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetWorkerComment_outName, TArray<enum class EPalUIConditionType>& CallFunc_GetUIDisplayPalCondition_outArray);
	void UpdateCondition(TArray<enum class EPalUIConditionType>& Conditions);
	void Clear();
	void OnInitialized();
	void ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWBP_MainMenu_Pal_State_C*>& K2Node_MakeArray_Array);
};

}


