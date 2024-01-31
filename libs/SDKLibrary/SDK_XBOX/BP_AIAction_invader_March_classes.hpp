#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x170 - 0x130)
// BlueprintGeneratedClass BP_AIAction_invader_March.BP_AIAction_invader_March_C
class UBP_AIAction_invader_March_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               MarchGoalPosition;                                 // 0x138(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PrevLocation;                                      // 0x150(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StackTimer;                                        // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_invader_March_C* GetDefaultObj();

	void Get_Controller_Ref(class APalAIController** AICon, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void MoveToTargetLocation(class APalAIController* CallFunc_GetPalAIController_ReturnValue);
	void SetupSkillSlot(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<enum class EPalWazaID>& CallFunc_GetEquipWaza_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class EPalWazaID CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void AttackNearestMapObject(class APalMapObject* Local_NearestMapObject, class UPalActionComponent* Local_ActionComp, class UPalActiveSkillSlot* Local_SkillSlot, int32 SkillID, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalMapObject* CallFunc_GetNearestEnemyBuildObject_ReturnValue, int32 CallFunc_ChoiceEnableSlotIDByRandom_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EPalWazaID CallFunc_GetWazaType_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, TSubclassOf<class UPalActionBase> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class ABP_NPCAIController_Invader_C* K2Node_DynamicCast_AsBP_NPCAIController_Invader, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalActionBase* CallFunc_PlayAction_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UPalActionBase* CallFunc_PlayAction_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_ActionIsEmpty_ReturnValue);
	void FindNearPlayer(class APalPlayerCharacter** Player, double TempDistance, class APalPlayerCharacter* NearestPlayer, double NearestDistance, double Const_NearDistance, bool SelfPos, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UPalCharacterImportanceManager* CallFunc_GetCharacterImportanceManager_ReturnValue, TArray<class APalCharacter*>& CallFunc_GetAllPlayer_OutArray, int32 CallFunc_Array_Length_ReturnValue, class APalCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_Vector_Distance2DSquared_ReturnValue, bool CallFunc_IsLive_ReturnValue, bool CallFunc_GetActiveActorFlag_ReturnValue);
	void Setup(const struct FVector& GoalPosition);
	void StartCombatMode(class UClass* CombatClass, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_Invader_C* K2Node_DynamicCast_AsBP_NPCAIController_Invader, bool K2Node_DynamicCast_bSuccess, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, TSubclassOf<class UPalAIActionBase> CallFunc_GetCombatClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APalPlayerCharacter* CallFunc_FindNearPlayer_Player, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_1);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_invader_March(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, class APawn* K2Node_Event_ControlledPawn, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, TScriptInterface<class IBP_AIController_Interface_Invader_C> K2Node_DynamicCast_AsBP_AIController_Interface_Invader, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsNearTwoPoint_ReturnValue, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsNearTwoPoint_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
};

}


