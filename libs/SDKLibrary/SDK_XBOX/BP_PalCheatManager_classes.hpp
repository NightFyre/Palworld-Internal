#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xD8 - 0xC8)
// BlueprintGeneratedClass BP_PalCheatManager.BP_PalCheatManager_C
class UBP_PalCheatManager_C : public UPalCheatManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TempPlayer;                                        // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PalCheatManager_C* GetDefaultObj();

	void ToggleAllDebugInfo(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void StartWildPalCombat();
	void TimeStopForBP();
	void OpenMultiBattleMapForBP();
	void OpenPrivateServerForBP();
	void SpectatorOnForBP();
	void ToggleRevision_BP();
	void HideTutorialQuest_BP();
	void ExecuteUbergraph_BP_PalCheatManager(int32 EntryPoint, TArray<class UWBP_IngameMenu_Task_Tutorial_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, class UWBP_IngameMenu_Task_Tutorial_C* CallFunc_Array_Get_Item, TArray<class APalCharacter*>& CallFunc_GetPalMonsters_OutCharacters, class APalCharacter* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TScriptInterface<class IBPI_ControllerDebugInterface_C> K2Node_DynamicCast_AsBPI_Controller_Debug_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetPlayerCharacter_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class APPSkyCreator_ControllerExample_C* CallFunc_GetActorOfClass_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, TArray<class UWBP_PalDebugInfo_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class ABP_PalAdminSpectator_C* CallFunc_FinishSpawningActor_ReturnValue, class UWBP_PalDebugInfo_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default);
};

}


