#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x150 - 0x130)
// BlueprintGeneratedClass BP_AIAction_Damage.BP_AIAction_Damage_C
class UBP_AIAction_Damage_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               BlowVelocity;                                      // 0x138(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_Damage_C* GetDefaultObj();

	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_Damage(int32 EntryPoint, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class APawn* K2Node_Event_ControlledPawn, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_PlayActionByTypeParameter_ReturnValue);
};

}


