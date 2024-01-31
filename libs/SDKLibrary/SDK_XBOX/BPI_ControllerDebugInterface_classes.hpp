#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ControllerDebugInterface.BPI_ControllerDebugInterface_C
class IBPI_ControllerDebugInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ControllerDebugInterface_C* GetDefaultObj();

	void DebugBattleStart(class AActor* Player);
};

}


