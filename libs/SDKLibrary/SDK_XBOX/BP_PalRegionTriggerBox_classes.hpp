#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2B0 - 0x298)
// BlueprintGeneratedClass BP_PalRegionTriggerBox.BP_PalRegionTriggerBox_C
class ABP_PalRegionTriggerBox_C : public APalRegionAreaTriggerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalRegionTriggerBox_C* GetDefaultObj();

	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_PalRegionTriggerBox(int32 EntryPoint, class AActor* K2Node_Event_OtherActor);
};

}


