#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x561 - 0x558)
// BlueprintGeneratedClass BP_CapturePrism.BP_CapturePrism_C
class ABP_CapturePrism_C : public ABP_ThrowWeaponBase_C
{
public:
	class USkeletalMeshComponent*                SK_Weapon_PalSphere_001;                           // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EPalCaptureSphereLevelType        CaptureSphereType;                                 // 0x560(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CapturePrism_C* GetDefaultObj();

	void OnThrowInternal(class AActor* Bullet, int32 CallFunc_GetCaptureLevel_level, class ABP_ThrowCaptureObjectBase_C* K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base, bool K2Node_DynamicCast_bSuccess);
	void GetCaptureLevel(int32* Level, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, int32 CallFunc_GetCaptureLevelBySphereType_ReturnValue);
	void OnEndShootAnimation(class UAnimMontage* Montage, bool CallFunc_IsEmptyMagazine_ReturnValue);
	void OnThrow(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool DecrementBullet(class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalItemContainer* CallFunc_TryGetContainerFromInventoryType_outContainer, bool CallFunc_TryGetContainerFromInventoryType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetNowSelectedIndex_ReturnValue, class UPalItemSlot* CallFunc_Get_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_GetStackCount_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void GetThrowObjectClass(class UClass** ThrowObject);
	class FName GetEquipSocketName();
};

}


