#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x179 - 0x168)
// BlueprintGeneratedClass BP_ActionEscapeStart.BP_ActionEscapeStart_C
class UBP_ActionEscapeStart_C : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalFacialComponent*                   PalFacial;                                         // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMontageFacial;                                  // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionEscapeStart_C* GetDefaultObj();

	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_ActionEscapeStart(int32 EntryPoint, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue);
};

}


