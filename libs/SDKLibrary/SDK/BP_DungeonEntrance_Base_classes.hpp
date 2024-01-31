#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2C0 - 0x2A0)
// BlueprintGeneratedClass BP_DungeonEntrance_Base.BP_DungeonEntrance_Base_C
class ABP_DungeonEntrance_Base_C : public APalDungeonEntrance
{
public:
	class UStaticMeshComponent*                  SM_Pal_DungeonPortalMarker;                        // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                 BP_InteractableBox;                                // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       WarpPoint;                                         // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DungeonEntrance_Base_C* GetDefaultObj();

	void GetInteractWidget(class UPalUserWidget** CreatedWidget, class UPalStageModelDungeon* CallFunc_GetStageModel_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_DungeonInfo_C* CallFunc_Create_ReturnValue);
	struct FTransform GetWarpPoint(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
};

}


