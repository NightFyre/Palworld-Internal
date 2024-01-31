#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D0 - 0x2C0)
// BlueprintGeneratedClass BP_PalAmbientSoundArea_Desert.BP_PalAmbientSoundArea_Desert_C
class ABP_PalAmbientSoundArea_Desert_C : public APalAmbientSoundAreaBase
{
public:
	class UBoxComponent*                         Box;                                               // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalAmbientSoundArea_Desert_C* GetDefaultObj();

	class UPrimitiveComponent* GetAreaCollision();
};

}


