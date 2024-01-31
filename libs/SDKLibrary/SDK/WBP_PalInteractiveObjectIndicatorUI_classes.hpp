#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x518 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C
class UWBP_PalInteractiveObjectIndicatorUI_C : public UPalUserWidget
{
public:
	class UWidgetAnimation*                      Default_In;                                        // 0x408(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Ingame_Interact_C*                WBP_Ingame_Interact;                               // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector                               Offset;                                            // 0x418(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EPalInteractiveObjectActionType, struct FDataTableRowHandle> InteractKeyTextIdMap;                              // 0x430(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EPalInteractiveObjectActionType   Action_Type;                                       // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1980[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPalInteractiveObjectActionType, struct FPalDataTableRowName_UIInputAction> ActionTypeNameMap;                                 // 0x488(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TScriptInterface<class IPalInteractiveObjectComponentInterface> InteractiveObject;                                 // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalInteractiveObjectButtonType   buttonType;                                        // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1981[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LongPushTime;                                      // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  TriggerActionHandle;                               // 0x4F8(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  EndTriggerActionhandle;                            // 0x4FC(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         CachedIsValidInteract;                             // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsRegisteredActionInput;                          // 0x501(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnableSelf;                                      // 0x502(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1983[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   LockedByRideMSGID;                                 // 0x508(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_PalInteractiveObjectIndicatorUI_C* GetDefaultObj();

	void SetEnable(bool IsEnable);
	void RegisterAction(bool IsInputConsume, class UPalUserWidget* Parent, class FName ActionName, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalDataTableRowName_UIInputAction& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_NotConcume_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_NotConcume_ReturnValue_1);
	void UpdateButtonType(enum class EPalInteractiveObjectButtonType NewButtonType, double NewLongPushTime, bool IsValidInteract, bool K2Node_SwitchEnum_CmpSuccess);
	void Unregister_Action(class UPalUserWidget* Parent);
	void EndTriggerInteract(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalInteractComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsInteracting_ReturnValue);
	void StartTriggerInteract(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalInteractComponent* CallFunc_GetComponentByClass_ReturnValue);
	void Deactivate(class UPalUserWidget* Parent, class FName ActionName);
	void Activate(bool IsInputConsume, class UPalUserWidget* Parent);
	void Update_Interactable(bool bInteractable, class UPalUserWidget* Parent, bool CallFunc_IsValid_ReturnValue);
	void UpdateVisible(bool Visible);
	void UpdateText(class FText InText, bool IsLockedByRide, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void Setup(enum class EPalInteractiveObjectActionType ActionType, TScriptInterface<class IPalInteractiveObjectComponentInterface> Interface);
};

}


