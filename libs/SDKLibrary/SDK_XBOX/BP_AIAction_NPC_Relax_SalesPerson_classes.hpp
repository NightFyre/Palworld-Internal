#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1F1 - 0x1F1)
// BlueprintGeneratedClass BP_AIAction_NPC_Relax_SalesPerson.BP_AIAction_NPC_Relax_SalesPerson_C
class UBP_AIAction_NPC_Relax_SalesPerson_C : public UBP_AIAction_NPC_RelaxBase_C
{
public:

	static class UClass* StaticClass();
	static class UBP_AIAction_NPC_Relax_SalesPerson_C* GetDefaultObj();

	void GetTransitionableJudgementType(TArray<enum class EPalAISightJudgementType>* JudgeTypeList, const TArray<enum class EPalAISightJudgementType>& NewLocalVar_0, TArray<enum class EPalAISightJudgementType>& K2Node_MakeArray_Array);
	void SoundEvent(const struct FVector& EmitLocation);
};

}


