#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x170 - 0x168)
// BlueprintGeneratedClass BP_ActionEat.BP_ActionEat_C
class UBP_ActionEat_C : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionEat_C* GetDefaultObj();

	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_ActionEat(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalFlyMeshHeightCtrlComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalFlyMeshHeightCtrlComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


