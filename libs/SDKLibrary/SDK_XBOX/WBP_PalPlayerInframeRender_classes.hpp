#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x460 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C
class UWBP_PalPlayerInframeRender_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                     CircularThrobber_11;                               // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Captured;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCaptureEveryFrame;                               // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindPlayerEquipment;                             // 0x429(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AAC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PalPlayerCaptureSet_C*             CaptureCamera;                                     // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DelayUpdateMeshTimerHandle;                        // 0x438(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CaptureSetClass;                                   // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CaptureInterval;                                   // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CaptureSceneTimerHandle;                           // 0x450(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              RenderTargetMaterial;                              // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalPlayerInframeRender_C* GetDefaultObj();

	void OnTimer_CaptureScene();
	void OnUpdateEquipmentSlot(class UPalItemSlot* ItemSlot, enum class EPalPlayerEquipItemSlotType SlotType, bool K2Node_SwitchEnum_CmpSuccess);
	void ResetCameraLocation(bool CallFunc_IsValid_ReturnValue);
	void AddCameraRelativeLocation(const struct FVector& AddLocation, bool CallFunc_IsValid_ReturnValue);
	void ResetRotation();
	void AddRotation(const struct FRotator& AddRotator);
	void On_Changed_Weapon(class APalWeaponBase* Weapon, class ABP_Player_ForUI_C* DisplayCharacter, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_Player_ForUI_C* CallFunc_GetDisplayCharacterActor_UIDisplayPlayer);
	void UnregisterEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void RegisterEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void RequestCaptureByMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo, bool CallFunc_IsValid_ReturnValue);
	void RequestCaptureMyPlayer(bool CallFunc_IsValid_ReturnValue);
	void Reset(bool CallFunc_IsValid_ReturnValue);
	void Initialize(int32 TextureSize, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class USceneCaptureComponent2D* CallFunc_GetComponentByClass_ReturnValue, class ABP_PalPlayerCaptureSet_C* CallFunc_FinishSpawningActor_ReturnValue, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void Construct();
	void Destruct();
	void DelayUpdatePlayerMesh(double DelayTime);
	void UpdateMeshEvent();
	void ExecuteUbergraph_WBP_PalPlayerInframeRender(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, double K2Node_CustomEvent_DelayTime, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ABP_Player_ForUI_C* CallFunc_GetDisplayCharacterActor_UIDisplayPlayer, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


