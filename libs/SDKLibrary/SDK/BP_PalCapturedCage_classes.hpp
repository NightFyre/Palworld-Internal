#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x378 - 0x2C8)
// BlueprintGeneratedClass BP_PalCapturedCage.BP_PalCapturedCage_C
class ABP_PalCapturedCage_C : public APalCapturedCage
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box_PlayerOnly;                                    // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         DoorBoxCollision;                                  // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LockMesh;                                          // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DoorMesh;                                          // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BodyMash;                                          // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box5;                                              // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box4;                                              // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box3;                                              // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box2;                                              // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box1;                                              // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative* BP_InteractableSphere;                             // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Accessed;                                          // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_5271[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          OpenAnimeTimerHandle;                              // 0x340(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       DoorOpenTimer;                                     // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       Const_DoorOpenSpeed;                               // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           Const_DoorOpenCurve;                               // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EPalActionType                    PlayerActionType;                                  // 0x360(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_5272[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCaptured;                                        // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_PalCapturedCage_C* GetDefaultObj();

	void SetupSpawnPal(class FName CampSpawnerName, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, const struct FPalEnemyCampStatus& CallFunc_GetEnemyCampStatus_ReturnValue, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, const struct FPalEnemyCampStatus& K2Node_SetFieldsInStruct_StructOut, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue_2, const struct FPalEnemyCampStatus& CallFunc_GetEnemyCampStatus_ReturnValue_1, class AActor* CallFunc_GetParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_NPCCampPresetBase_C* K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCampSpawnerName_Key, class FName CallFunc_GetRewardKey_Key, bool CallFunc_EqualEqual_NameName_ReturnValue);
	class FName GetCampSpawnerName(class AActor* CallFunc_GetParentActor_ReturnValue, class ABP_NPCCampPresetBase_C* K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCampSpawnerName_Key);
	void Disable_Lock_Mesh_Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component);
	void Enable_Lock_Mesh_Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component);
	void OnFinishRescue(class AActor* Player, enum class EPalInteractiveObjectIndicatorType NewParam, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APalPlayerController* CallFunc_GetPalPlayerController_ReturnValue, class ABP_PalPlayerController_C* K2Node_DynamicCast_AsBP_Pal_Player_Controller, bool K2Node_DynamicCast_bSuccess_1);
	void StopPlayerAnime(class AActor* Player, enum class EPalInteractiveObjectIndicatorType NewParam, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue);
	void StartPlayerAnime(class AActor* Player, enum class EPalInteractiveObjectIndicatorType NewParam, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UPalActionBase* CallFunc_PlayActionByTypeParameter_ReturnValue);
	void DoorOpenAnimeLoop(double FinishAngle, double CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void PlayDoorOpenAnime(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	enum class EPalInteractiveObjectIndicatorType GetIndicatorType();
	void ReceiveBeginPlay();
	void CaptureStartFromServerPlayer(class APalPlayerCharacter* Attacker);
	void ExecuteUbergraph_BP_PalCapturedCage(int32 EntryPoint, TScriptInterface<class IPalInteractiveObjectIndicatorInterface> CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput, class APalCharacter* CallFunc_GetSpawnedPal_ReturnValue, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter, bool CallFunc_IsValid_ReturnValue, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalVisualEffectBase* CallFunc_AddVisualEffect_ReturnValue, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter_1, bool Temp_bool_Has_Been_Initd_Variable, class UPalVisualEffectBase* CallFunc_AddVisualEffect_ReturnValue_1, class APalPlayerCharacter* K2Node_CustomEvent_Attacker, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_IsClosed_Variable);
	void OnCaptured__DelegateSignature();
};

}


