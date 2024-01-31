#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C
class UBP_NPCInteractConditionFunctions_C : public UPalNPCInteractConditionFunctions
{
public:

	static class UClass* StaticClass();
	static class UBP_NPCInteractConditionFunctions_C* GetDefaultObj();

	void IsLive(class UPalNPCInteractCondition* Condition, class UObject* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsLive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void NoCombat(class UPalNPCInteractCondition* Condition, class UObject* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess_1, class UPalAIActionComponent* CallFunc_GetAIActionComponent_ReturnValue, class UPawnAction* CallFunc_GetCurrentAction_BP_ReturnValue, class UPalAIActionCombatBase* K2Node_DynamicCast_AsPal_AIAction_Combat_Base, bool K2Node_DynamicCast_bSuccess_2, class UBP_AIAction_NPC_CombatBase_C* K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base, bool K2Node_DynamicCast_bSuccess_3);
	void IsOtomoSpawned(class UPalNPCInteractCondition* Condition, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBP_OtomoPalHolderComponent_C* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HasItems(class UPalNPCInteractCondition* Condition, TArray<class FName>& ItemIds, int32 Num, int32 RetVal, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_CountItemNum_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void HasItem(class UPalNPCInteractCondition* Condition, class FName ItemId, int32 Num, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, int32 CallFunc_CountItemNum_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void TestFunction(class UPalNPCInteractCondition* Condition, class UObject* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue);
};

}


