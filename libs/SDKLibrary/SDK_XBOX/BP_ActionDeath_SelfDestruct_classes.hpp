#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x200 - 0x1F0)
// BlueprintGeneratedClass BP_ActionDeath_SelfDestruct.BP_ActionDeath_SelfDestruct_C
class UBP_ActionDeath_SelfDestruct_C : public UBP_ActionDeath_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                ExClass;                                           // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionDeath_SelfDestruct_C* GetDefaultObj();

	void GetExClass();
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionDeath_SelfDestruct(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UBP_PalCryComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SkillEffect_SelfDestruct_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


