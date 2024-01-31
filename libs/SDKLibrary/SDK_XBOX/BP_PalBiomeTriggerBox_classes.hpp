#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B8 - 0x298)
// BlueprintGeneratedClass BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C
class ABP_PalBiomeTriggerBox_C : public APalBiomeAreaTriggerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalBiomeEffectController_C*        BP_PalBiomeEffectController;                       // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalBiomeLightingAdjuster_C*        BP_PalBiomeLightingAdjuster;                       // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalBiomeTriggerBox_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_PalBiomeTriggerBox(int32 EntryPoint, class AActor* K2Node_Event_OtherActor_1, enum class EPalBiomeType CallFunc_GetBiomeType_ReturnValue, bool CallFunc_IsPlayerControlActor_ReturnValue, class AActor* K2Node_Event_OtherActor, bool CallFunc_IsPlayerControlActor_ReturnValue_1);
};

}


