#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x330 - 0x278)
// WidgetBlueprintGeneratedClass WBP_PalSkill_KeyGuide.WBP_PalSkill_KeyGuide_C
class UWBP_PalSkill_KeyGuide_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalSkillEntry_C*                  WBP_PalSkillEntry_1;                               // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalSkillEntry_C*                  WBP_PalSkillEntry_2;                               // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalSkillEntry_C*                  WBP_PalSkillEntry_3;                               // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalSkillEntry_C*                  WBP_PalSkillEntry_Aim;                             // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_PalSkillEntry_C*>          SkillEntryArray;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UPalShooterComponent*                  CurrentShooter;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ShootMsgID;                                        // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   FlyMsgID;                                          // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UPalIndividualCharacterParameter*      Individual_Parameter;                              // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<int32, class UPalActiveSkill*>          CurrentSkillMap;                                   // 0x2E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_PalSkill_KeyGuide_C* GetDefaultObj();

	void Hide();
	void OnGetOff(class AActor* RideActor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UPalActiveSkill*>& CallFunc_Map_Values_Values, class UWBP_PalSkillEntry_C* CallFunc_Array_Get_Item, class UPalActiveSkill* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRide(class AActor* RideActor, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UPalActiveSkillSlot* CallFunc_GetActiveSkillSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, TMap<int32, class UPalActiveSkill*> CallFunc_GetSkillMap_ReturnValue, TArray<enum class EPalWazaID>& CallFunc_GetEquipWaza_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, enum class EPalWazaID CallFunc_Array_Get_Item, class FText CallFunc_GetWazaName_outName, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UPalActiveSkill*>& CallFunc_Map_Values_Values, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, class FName CallFunc_GetPartnerSkillMsgID_OutMsgID, class FText CallFunc_GetLocalizedText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_PalSkillEntry_C* CallFunc_Array_Get_Item_1, class UWBP_PalSkillEntry_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue, class UPalActiveSkill* CallFunc_Array_Get_Item_3, class UWBP_PalSkillEntry_C* CallFunc_Array_Get_Item_4, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void Setup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnInitialized();
	void StartAim();
	void EndAim();
	void ExecuteUbergraph_WBP_PalSkill_KeyGuide(int32 EntryPoint, int32 Temp_int_Variable, TArray<class UWBP_PalSkillEntry_C*>& K2Node_MakeArray_Array, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<enum class EPalWazaID>& CallFunc_GetEquipWaza_ReturnValue, enum class EPalWazaID CallFunc_Array_Get_Item, class FText CallFunc_GetWazaName_outName, class UPalActiveSkill* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, int32 Temp_int_Variable_1, class UPalActiveSkill* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, enum class EPalPlayerInventoryType CallFunc_GetPrimaryInventoryType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, enum class EPalPlayerInventoryType CallFunc_GetPrimaryInventoryType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
};

}


