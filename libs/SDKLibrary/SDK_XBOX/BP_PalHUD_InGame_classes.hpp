#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC9 (0x6D1 - 0x608)
// BlueprintGeneratedClass BP_PalHUD_InGame.BP_PalHUD_InGame_C
class ABP_PalHUD_InGame_C : public APalHUDInGame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x608(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x610(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalLiftItem_C*                    UMG_LiftItem;                                      // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, enum class EPalHUDWidgetPriority> PriorityMap;                                       // 0x620(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UClass*, class UPalUserWidget*>   CreatedWidgetMap;                                  // 0x670(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGuid                                 NewVar;                                            // 0x6C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GameOverUIBinded;                                  // 0x6D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalHUD_InGame_C* GetDefaultObj();

	void DisplayHUD_Respawn(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UClass*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UPalUserWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void HideHUD_ForDeath(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UClass*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UPalUserWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateWorldHUDs();
	void OnUpdateLiftSlot(bool CallFunc_IsLift_ReturnValue);
	void HideLiftItemDisplay(bool CallFunc_IsValid_ReturnValue);
	void ShowLiftItemDisplay(const struct FPalItemData& LiftItemData);
	void Setup_Lift_Item_Event(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SetupHUD_Internal(bool CallFunc_IsEditorBuild_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnLoaded_39EEADC54AE57646EA72A79D911211B6(TSubclassOf<class UObject> Loaded);
	void OnLoaded_EF35A3894C280426B58FA0A0D5280930(TSubclassOf<class UObject> Loaded);
	void OnLoaded_01D7FBF3483366434C8293A197BFD965(TSubclassOf<class UObject> Loaded);
	void ReceiveTick(float DeltaSeconds);
	void Initialize();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void AsyncSetupHUDEvent();
	void AsyncLoadAndCreateWidget(TSoftClassPtr<class UPalUserWidget> WidgetClass);
	void OnDyingEnd(class APalPlayerCharacter* PlayerCharacter);
	void OnRespawnPlayer(class APalPlayerCharacter* Player);
	void BindGameOverUI();
	void ExecuteUbergraph_BP_PalHUD_InGame(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded_2, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI, bool K2Node_ClassDynamicCast_bSuccess, const struct FGuid& CallFunc_PushWidgetStackableUI_ReturnValue, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded_1, class UClass* Temp_class_Variable_1, class UClass* K2Node_ClassDynamicCast_AsPal_User_Widget, bool K2Node_ClassDynamicCast_bSuccess_1, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable_2, class UClass* K2Node_ClassDynamicCast_AsPal_User_Widget_1, bool K2Node_ClassDynamicCast_bSuccess_2, class UPalUserWidget* CallFunc_CreateHUDWidget_ReturnValue, bool Temp_bool_Variable, enum class EPalHUDWidgetPriority Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float K2Node_Event_DeltaSeconds, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TSoftClassPtr<class UPalUserWidget> K2Node_CustomEvent_widgetClass, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APalPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue, enum class EPalHUDWidgetPriority CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class APalPlayerCharacter* K2Node_CustomEvent_Player, enum class EPalHUDWidgetPriority K2Node_Select_Default, class UPalUserWidget* CallFunc_CreateHUDWidget_ReturnValue_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
};

}


