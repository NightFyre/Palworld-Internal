#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x500 - 0x4F8)
// BlueprintGeneratedClass BP_MonsterAIController_CapturedCage.BP_MonsterAIController_CapturedCage_C
class ABP_MonsterAIController_CapturedCage_C : public APalAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_MonsterAIController_CapturedCage_C* GetDefaultObj();

	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_BP_MonsterAIController_CapturedCage(int32 EntryPoint, class APawn* K2Node_Event_PossessedPawn, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue);
};

}


