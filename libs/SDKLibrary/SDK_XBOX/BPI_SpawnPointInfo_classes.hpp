#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_SpawnPointInfo.BPI_SpawnPointInfo_C
class IBPI_SpawnPointInfo_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_SpawnPointInfo_C* GetDefaultObj();

	void GetOneSpawnInfo(struct FF_NPCOnePointSpawnInfo* Info);
};

}


