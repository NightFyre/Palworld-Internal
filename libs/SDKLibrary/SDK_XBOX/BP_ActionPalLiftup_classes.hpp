#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x148 - 0x140)
// BlueprintGeneratedClass BP_ActionPalLiftup.BP_ActionPalLiftup_C
class UBP_ActionPalLiftup_C : public UPalAction_Liftup
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionPalLiftup_C* GetDefaultObj();

	void StopAnimation(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue);
	void OnEndAction();
	void OnBreakAction();
	void PlayStartLiftupMontage();
	void ExecuteUbergraph_BP_ActionPalLiftup(int32 EntryPoint);
};

}


