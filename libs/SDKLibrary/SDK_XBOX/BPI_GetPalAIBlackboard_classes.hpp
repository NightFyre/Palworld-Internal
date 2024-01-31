#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_GetPalAIBlackboard.BPI_GetPalAIBlackboard_C
class IBPI_GetPalAIBlackboard_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_GetPalAIBlackboard_C* GetDefaultObj();

	void GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard);
	void GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard);
};

}


