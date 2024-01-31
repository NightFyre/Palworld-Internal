#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2F0 - 0x2A0)
// BlueprintGeneratedClass BP_Player_ForUI.BP_Player_ForUI_C
class ABP_Player_ForUI_C : public APalUIDisplayCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalSkeletalMeshComponent*             Hair;                                              // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*             Head;                                              // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnAppliedBodyMesh;                                 // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAppliedHeadMesh;                                 // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAppliedHairMesh;                                 // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_Player_ForUI_C* GetDefaultObj();

	void OnAppliedHairMesh_Binded(class UPalSkeletalMeshComponent* SkeletalMeshComponent, const struct FLinearColor& CallFunc_GetHairBaseColor_OutColor);
	void OnAppliedHeadMesh_Binded(class UPalSkeletalMeshComponent* SkeletalMeshComponent, const struct FLinearColor& CallFunc_GetEyeBaseColor_OutColor, const struct FLinearColor& CallFunc_GetBrowBaseColor_OutColor);
	void OnAppliedBodyMesh_Binded(class UPalSkeletalMeshComponent* SkeletalMeshComponent, const struct FLinearColor& CallFunc_GetBodyBaseColor_OutColor);
	void CopyWeapon(class UClass* WeaponClass, enum class EWeaponAnimationPoseType Temp_byte_Variable, bool CallFunc_IsValidClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APalWeaponBase* CallFunc_FinishSpawningActor_ReturnValue, class USceneComponent* CallFunc_GetMainMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, const struct FWeaponAnimationInfo& CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue, class FName CallFunc_GetEquipSocketName_ReturnValue, class UAnimSequence* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APalWeaponBase* K2Node_DynamicCast_AsPal_Weapon_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_Player_ForUI(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnAppliedHairMesh__DelegateSignature(const struct FLinearColor& HairMeshBaseColor);
	void OnAppliedHeadMesh__DelegateSignature(const struct FLinearColor& BrowMeshBaseColor, const struct FLinearColor& EyeMeshBaseColor);
	void OnAppliedBodyMesh__DelegateSignature(const struct FLinearColor& BodyMeshBasColor);
};

}


