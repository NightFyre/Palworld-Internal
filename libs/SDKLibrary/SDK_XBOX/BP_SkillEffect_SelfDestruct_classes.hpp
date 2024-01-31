#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3D8 - 0x3C0)
// BlueprintGeneratedClass BP_SkillEffect_SelfDestruct.BP_SkillEffect_SelfDestruct_C
class ABP_SkillEffect_SelfDestruct_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      AttackCollision;                                   // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkillEffect_SelfDestruct_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SkillEffect_SelfDestruct(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue);
};

}


