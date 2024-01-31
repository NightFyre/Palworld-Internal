#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x60 - 0x50)
// BlueprintGeneratedClass BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C
class UBP_AIActionFunnel_Default_C : public UPalAIActionFunnelCharacterDefault
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalFunnelSkillModule*                 SkillModule;                                       // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIActionFunnel_Default_C* GetDefaultObj();

	void CreateSkillActionModule(TSubclassOf<class UPalFunnelSkillModule> FunnelSkillModuleClass, bool CallFunc_IsValidClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalFunnelSkillModule* CallFunc_SpawnObject_ReturnValue);
	bool ShouldSetSkillAction(bool CallFunc_ShouldSetSkillAction_ReturnValue, class APalCharacter* CallFunc_GetTrainer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	class UPalAIActionBase* SetAction(class UClass* Class, class AController* CallFunc_GetController_ReturnValue, class UPalAIActionComponent* CallFunc_GetOwnerComponent_ReturnValue, class UPalAIActionBase* CallFunc_SpawnObject_ReturnValue, class UPalAIActionFunnelSkillBase* K2Node_DynamicCast_AsPal_AIAction_Funnel_Skill_Base, bool K2Node_DynamicCast_bSuccess);
	void SetActionSkill(class AController* CallFunc_GetController_ReturnValue, class ABP_FunnelCharacterAIController_C* K2Node_DynamicCast_AsBP_Funnel_Character_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalFunnelCharacter* K2Node_DynamicCast_AsPal_Funnel_Character, bool K2Node_DynamicCast_bSuccess_1, class UPalAIActionBase* CallFunc_SetAction_ReturnValue);
	void SetActionFollowTrainer(class UPalAIActionBase* CallFunc_SetAction_ReturnValue);
	void SetOtomoFollowAction();
	void SetSkillAction();
	void OnTick_BP(float DeltaTime);
	void ExecuteUbergraph_BP_AIActionFunnel_Default(int32 EntryPoint, float K2Node_Event_DeltaTime, bool CallFunc_IsValid_ReturnValue);
};

}


