#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x570 - 0x563)
// BlueprintGeneratedClass BP_PumpActionShotgun.BP_PumpActionShotgun_C
class ABP_PumpActionShotgun_C : public ABP_ShotgunBase_C
{
public:
	uint8                                        Pad_541D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PumpActionShotgun_C* GetDefaultObj();

	void EjectARound(const struct FTransform& CallFunc_GetEjectionPort_EjectionTransform, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ShotgunAmmo_C* CallFunc_FinishSpawningActor_ReturnValue);
	bool IsUseLeftHandAttach();
	void OnshotInternal(bool* IsShoted, bool CallFunc_OnshotInternal_IsShoted);
	void PlayReloadAnimation();
	void OnNotifyEnd_FCB44FF643DA97B49C538D845683A965(class FName NotifyName);
	void OnNotifyBegin_FCB44FF643DA97B49C538D845683A965(class FName NotifyName);
	void OnInterrupted_FCB44FF643DA97B49C538D845683A965(class FName NotifyName);
	void OnBlendOut_FCB44FF643DA97B49C538D845683A965(class FName NotifyName);
	void OnCompleted_FCB44FF643DA97B49C538D845683A965(class FName NotifyName);
	void OnReloadStart();
	void OnReleaseTrigger();
	void ReceiveBeginPlay();
	void OnWeaponNotify(enum class EWeaponNotifyType Type);
	void OnShot();
	void ExecuteUbergraph_BP_PumpActionShotgun(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool CallFunc_CanShoot_Can, bool CallFunc_OnshotInternal_IsShoted, enum class EWeaponNotifyType K2Node_Event_type, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsFullMagazine_ReturnValue, const struct FWeaponAnimationInfo& CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


