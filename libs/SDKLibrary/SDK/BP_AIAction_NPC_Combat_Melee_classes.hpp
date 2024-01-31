#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8F (0x210 - 0x181)
// BlueprintGeneratedClass BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C
class UBP_AIAction_NPC_Combat_Melee_C : public UBP_AIAction_NPC_CombatBase_C
{
public:
	uint8                                        Pad_FEE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EPal_NPC_CombatMeleeState         CurrentState;                                      // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_FEF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ConstAttackStartRange;                             // 0x198(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStopTick;                                        // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_FF0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ConstNearAttackRange;                              // 0x1A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Timer;                                             // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TMap<enum class EPal_NPC_CombatMeleeState, class UClass*> StateMap;                                          // 0x1B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       BackwardMiniTime;                                  // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_NPC_Combat_Melee_C* GetDefaultObj();

	void AddTimer(double* CurrentTime, double CallFunc_Add_DoubleDouble_ReturnValue);
	void AddMeleeCombatState(enum class EPal_NPC_CombatMeleeState MeleeState, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Change_NextState(enum class EPal_NPC_CombatMeleeState Next, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_4, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, enum class EPawnActionResult K2Node_Event_WithResult, bool CallFunc_InFanShapAndDitance_ReturnValue, class UPalActionComponent* CallFunc_GetBodyActionComponentRef_ActionComp, bool CallFunc_InFanShapAndDitance_ReturnValue_1, bool CallFunc_ActionIsEmpty_ReturnValue, bool CallFunc_IsNearTarget_Near, bool CallFunc_IsNearTarget_Near_1, class UPalActionComponent* CallFunc_GetBodyActionComponentRef_ActionComp_1, bool CallFunc_ActionIsEmpty_ReturnValue_1, bool CallFunc_InFanShapAndDitance_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TickFinishCheck_ActionFinish, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn, bool CallFunc_IsValid_ReturnValue, double CallFunc_AddTimer_CurrentTime, double CallFunc_AddTimer_CurrentTime_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_AddTimer_CurrentTime_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, enum class EPal_NPC_CombatMeleeState Temp_byte_Variable, int32 CallFunc_RandomInteger_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_IsEndCurrentState_IsEnd, float CallFunc_Tick_DeltaTime_ImplicitCast, float CallFunc_InFanShapAndDitance_Distance_ImplicitCast);
};

}


