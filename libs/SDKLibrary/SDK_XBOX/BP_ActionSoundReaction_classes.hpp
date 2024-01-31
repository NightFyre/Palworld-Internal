#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x148 - 0x138)
// BlueprintGeneratedClass BP_ActionSoundReaction.BP_ActionSoundReaction_C
class UBP_ActionSoundReaction_C : public UPalActionBase
{
public:
	uint8                                        Pad_40F2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionSoundReaction_C* GetDefaultObj();

	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_ActionSoundReaction(int32 EntryPoint, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue);
};

}


