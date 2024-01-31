#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x130 - 0x128)
// BlueprintGeneratedClass BP_PalBossBattleSequencer.BP_PalBossBattleSequencer_C
class UBP_PalBossBattleSequencer_C : public UPalBossBattleSequencer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x128(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_PalBossBattleSequencer_C* GetDefaultObj();

	void Tick_ForBP(float DeltaTime);
	void ExecuteUbergraph_BP_PalBossBattleSequencer(int32 EntryPoint, float K2Node_Event_DeltaTime);
};

}


