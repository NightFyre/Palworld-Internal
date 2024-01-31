#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x141 - 0x130)
// BlueprintGeneratedClass BP_AIAction_NPCSpawnOtomo.BP_AIAction_NPCSpawnOtomo_C
class UBP_AIAction_NPCSpawnOtomo_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TargetActor;                                       // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRutnMode;                                        // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_NPCSpawnOtomo_C* GetDefaultObj();

	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_NPCSpawnOtomo(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APawn* K2Node_Event_ControlledPawn_1, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_InFanShap_ReturnValue);
};

}


