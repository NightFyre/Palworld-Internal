#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x430 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalHUD_InGame_GeneralDispatchEventReciever.WBP_PalHUD_InGame_GeneralDispatchEventReciever_C
class UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C : public UPalUIInGameGeneralDispatchEventReciever
{
public:
	class UWidgetAnimation*                      Default_In;                                        // 0x408(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 WidgetId_BuildingUI;                               // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 WidgetId_DismantlingUI;                            // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C* GetDefaultObj();

	void OpenDismantlingUI_Impl(int32 LastSelectedIndex, bool bFromRadialMenu, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PalHUD_InGame_InputListener_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_BuildingUIParameter_C* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue);
	void OpenDismantlingUIFromRadialMenu(int32 LastSelectedIndex);
	void OpenBuildingUI_Impl(class FName BuildObjectId, bool bFromRadialMenu, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PalHUD_InGame_InputListener_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_BuildingUIParameter_C* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue);
	void OpenBuildingUIFromRadialMenu(class FName BuildObjectId);
	void SetDisablePlayerInputAction(bool Disable, class UPalShooterComponent* Shooter, class FName FlagName, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class APalPlayerController* CallFunc_GetPalPlayerController_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_2, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void CloseDismantlingUI(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PalHUD_InGame_InputListener_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_IsValid_Guid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue);
	void OpenDismantlingUI();
	void CloseBuildingUI(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PalHUD_InGame_InputListener_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue);
	void OpenBuildingUI(class FName BuildObjectId);
};

}


