#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x3D0 - 0x398)
// BlueprintGeneratedClass BP_CaptureWireBullet.BP_CaptureWireBullet_C
class ABP_CaptureWireBullet_C : public ABP_ThrowObjectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CaptureTarget;                                     // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBound;                                           // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ThrowRotator;                                      // 0x3B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_CaptureWireBullet_C* GetDefaultObj();

	void UpdateRotator(double DeltaTime, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_Multiply_RotatorFloat_B_ImplicitCast);
	void SpawnDelegate(const struct FGuid& Guid, class AActor* Actor, class ABP_CaptureWire_C* K2Node_DynamicCast_AsBP_Capture_Wire, bool K2Node_DynamicCast_bSuccess);
	void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CaptureWireBullet(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class UPrimitiveComponent* K2Node_Event_HitComp, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_Hit, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGuid& CallFunc_SpawnActorBroadcast_SpawnGuid, bool CallFunc_SpawnActorBroadcast_ReturnValue, double CallFunc_UpdateRotator_DeltaTime_ImplicitCast);
};

}


