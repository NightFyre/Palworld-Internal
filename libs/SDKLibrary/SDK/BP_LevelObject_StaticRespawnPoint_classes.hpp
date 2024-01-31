#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2C8 - 0x2B0)
// BlueprintGeneratedClass BP_LevelObject_StaticRespawnPoint.BP_LevelObject_StaticRespawnPoint_C
class ABP_LevelObject_StaticRespawnPoint_C : public APalLevelObjectRespawnPoint
{
public:
	class UPalLimitVolumeBoxComponent*           PalLimitVolumeBox;                                 // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LevelObject_StaticRespawnPoint_C* GetDefaultObj();

};

}


