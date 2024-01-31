#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x348 - 0x320)
// BlueprintGeneratedClass BP_DungeonFixedEntrance.BP_DungeonFixedEntrance_C
class ABP_DungeonFixedEntrance_C : public APalDungeonFixedEntrance
{
public:
	class UArrowComponent*                       DeadItemDropPoint;                                 // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       IndicatorOrigin;                                   // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative* BP_InteractableSphere;                             // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       WarpPoint;                                         // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DungeonFixedEntrance_C* GetDefaultObj();

	void GetInteractWidget(class UPalUserWidget** CreatedWidget, class UPalStageModelDungeon* CallFunc_GetStageModel_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_DungeonInfo_FixedDungeon_C* CallFunc_Create_ReturnValue);
	struct FTransform GetDeadItemDropPoint(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
	struct FTransform GetWarpPoint(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
};

}


