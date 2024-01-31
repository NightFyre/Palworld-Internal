#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3E8 - 0x3D0)
// BlueprintGeneratedClass BP_MapObject_PickupItem_SmallStone.BP_MapObject_PickupItem_SmallStone_C
class ABP_MapObject_PickupItem_SmallStone_C : public ABP_MapObject_PickupItem_Base_C
{
public:
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       IndicatorOrigin;                                   // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectPickupItemParameterComponent* PalMapObjectPickupItemParameter;                   // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MapObject_PickupItem_SmallStone_C* GetDefaultObj();

};

}


