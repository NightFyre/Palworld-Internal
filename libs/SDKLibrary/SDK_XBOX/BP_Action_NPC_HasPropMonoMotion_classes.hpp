#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x180 - 0x168)
// BlueprintGeneratedClass BP_Action_NPC_HasPropMonoMotion.BP_Action_NPC_HasPropMonoMotion_C
class UBP_Action_NPC_HasPropMonoMotion_C : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Prop_Base_C*                       PropModel;                                         // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UClass*                                PropActorClass;                                    // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_NPC_HasPropMonoMotion_C* GetDefaultObj();

	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_Action_NPC_HasPropMonoMotion(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Prop_Base_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult);
};

}


