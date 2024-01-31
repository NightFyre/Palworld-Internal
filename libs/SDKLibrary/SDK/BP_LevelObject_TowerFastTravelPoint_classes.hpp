#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x350 - 0x2E0)
// BlueprintGeneratedClass BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C
class ABP_LevelObject_TowerFastTravelPoint_C : public APalLevelObjectUnlockableFastTravelPoint
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalSoundPlayerComponent*              PalSoundPlayer;                                    // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalLimitVolumeBoxComponent*           PalLimitVolumeBox;                                 // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Glow;                                              // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       WarpPoint;                                         // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       IndicatorOrigin;                                   // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                 BP_InteractableBox;                                // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildWorkableBounds;                               // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         CheckOverlapCollision;                             // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        UnlockedGlowEffect;                                // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        UnlockedFlashEffect;                               // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         UnlockedSound;                                     // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LevelObject_TowerFastTravelPoint_C* GetDefaultObj();

	class USceneComponent* OnGetAkComponent();
	class UAkAudioEvent* GetUnlockAkAudioEvent();
	void OnUpdateUnlockState_Internal(bool IsUnlocked, bool IsSpawnUnlockefFlashEffect, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
	void OnUpdateUnlockState(class APalLevelObjectUnlockableFastTravelPoint* Object, bool CallFunc_IsUnlocked_ReturnValue);
	void ReceiveBeginPlay();
	void OnChangeWorldSettings(struct FPalOptionWorldSettings& PrevSettings, struct FPalOptionWorldSettings& NewSettings);
	void CheckUnuseFastTravel();
	void ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalOptionWorldSettings& K2Node_CustomEvent_PrevSettings, const struct FPalOptionWorldSettings& K2Node_CustomEvent_NewSettings, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue);
};

}


