#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB4 (0x544 - 0x490)
// WidgetBlueprintGeneratedClass WBP_Paldex_ForDisplay.WBP_Paldex_ForDisplay_C
class UWBP_Paldex_ForDisplay_C : public UPalUIPaldex
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Paldex_C*                         WBP_Paldex;                                        // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    ToModelInputAction;                                // 0x4A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    ToDistributionInputAction;                         // 0x4A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  ToModelInputHandle;                                // 0x4B0(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  ToDistributionInputHandle;                         // 0x4B4(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsDisplayDistribution;                             // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5597[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NowDisplayCharacterID;                             // 0x4BC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5598[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MapControllWeight_Gamepad;                         // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MapControllWeight_Mouse;                           // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CaptureCameraRotator;                              // 0x4D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       ModelRotationControllWeight_Gamepad;               // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    ChangeDistributionTimeAction;                      // 0x4F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  ChangeDistributionTimeActionHandle;                // 0x500(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class E_PaldexDistributionTimeType      NowDisplayDistributionTimeType;                    // 0x504(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_559B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DistributionZoomWeight_Mouse;                      // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    ChangeDistributionZoomAction;                      // 0x510(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  ChangeDistributionZoomActionHandle;                // 0x518(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_559D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAllNewFlagCleared;                               // 0x520(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPalDataTableRowName_UIInputAction    RandomCryAction;                                   // 0x530(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  RandomCryActionHandle;                             // 0x538(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                  TmpDelayScrollTargetCharacetr;                     // 0x53C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Paldex_ForDisplay_C* GetDefaultObj();

	void SetEnableRandomCryAction(bool IsEnableFlag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue);
	void PlayRandomCry();
	void UpdateNewFlag(class FName CharacterID, enum class EPalTribeID CallFunc_GetTribeIDFromCharacterID_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue, TArray<bool>& CallFunc_Map_Values_Values, const struct FPalUIPaldex_DisplayInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void OnChangeDistributionInput();
	void OnChangeModelInput();
	void Change_Map_Zoom_Rate(bool CallFunc_IsZoomMax_isMax);
	void SwitchDistributionTime(enum class E_PaldexDistributionTimeType TimeType, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FPalUIPaldex_DisplayInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ChangeDistributionTime(bool K2Node_SwitchEnum_CmpSuccess);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, float CallFunc_GetAnalogValue_ReturnValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void ToDistributionDisplayMode(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, const struct FPalUIPaldex_DisplayInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2);
	void ToModelDisplayMode(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIPaldex_DisplayInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTargetByCharacterID_target, class UWidget* CallFunc_GetFocusTargetByIndex_target, bool CallFunc_IsValid_ReturnValue);
	void Setup(int32 EncountedNum, int32 Temp_int_Array_Index_Variable, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalPlayerRecordData* CallFunc_GetLocalRecordData_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FPalUIPaldex_DisplayInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Construct();
	void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_1_OnClickedModelTab__DelegateSignature();
	void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_2_OnClickedDistributionTab__DelegateSignature();
	void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_3_OnClickedAnyPalPanel__DelegateSignature(class FName CharacterID);
	void DelayScrollToCharacterID(class FName CharacterID);
	void ExecuteUbergraph_WBP_Paldex_ForDisplay(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_CharacterID, const struct FPalUIPaldex_DisplayInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class FName K2Node_CustomEvent_CharacterID);
	void OnAllNewFlagCleared__DelegateSignature();
};

}


