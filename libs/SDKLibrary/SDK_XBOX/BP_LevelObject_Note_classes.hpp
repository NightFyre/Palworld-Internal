#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x348 - 0x310)
// BlueprintGeneratedClass BP_LevelObject_Note.BP_LevelObject_Note_C
class ABP_LevelObject_Note_C : public APalLevelObjectNote
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       ObtainFXOrigin;                                    // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh_Base;                                   // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     AuraEffect;                                        // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative* BP_InteractableSphere;                             // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LevelObject_Note_C* GetDefaultObj();

	struct FVector GetObtainFXLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void OnUpdatePickupStatus(class APalLevelObjectObtainable* LevelObject);
	void SetActiveSelf(class APalLevelObjectObtainable* LevelObject, bool bActive, bool Temp_bool_Variable, enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, enum class ECollisionEnabled K2Node_Select_Default);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LevelObject_Note(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


