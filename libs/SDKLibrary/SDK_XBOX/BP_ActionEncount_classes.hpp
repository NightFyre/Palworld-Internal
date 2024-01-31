#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x178 - 0x168)
// BlueprintGeneratedClass BP_ActionEncount.BP_ActionEncount_C
class UBP_ActionEncount_C : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalFacialComponent*                   PalFacial;                                         // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionEncount_C* GetDefaultObj();

	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_ActionEncount(int32 EntryPoint, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue);
};

}


