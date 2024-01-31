#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x188 - 0x180)
// BlueprintGeneratedClass BP_AIAction_Sleep_InNightWildPal.BP_AIAction_Sleep_InNightWildPal_C
class UBP_AIAction_Sleep_InNightWildPal_C : public UBP_AIAction_Sleep_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x180(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIAction_Sleep_InNightWildPal_C* GetDefaultObj();

	void OnSquadMemberDeadEvent(const struct FPalDeadInfo& DeadInbfo);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_Sleep_InNightWildPal(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class APalAIController* CallFunc_GetPalAIController_ReturnValue, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderBB_LeaderPalBrackboard, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
};

}


