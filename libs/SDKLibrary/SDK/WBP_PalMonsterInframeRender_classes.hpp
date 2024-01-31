#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x458 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C
class UWBP_PalMonsterInframeRender_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Captured;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PalMonsterCaptureSet_C*            CaptureCamera;                                     // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCaptureEveryFrame;                               // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CaptureSetClass;                                   // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CaptureInterval;                                   // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CaptureSceneTimerHandle;                           // 0x440(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              RenderTargetMaterial;                              // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_PalMonsterInframeRendererSoundPlayer_C* SoundPlayerActor;                                  // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalMonsterInframeRender_C* GetDefaultObj();

	void PlayNowDisplayingPalCryRandom(const TArray<class FName>& EmoStateNames, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex);
	void PlayNowDisplayingPalCry(class FName EmoStateName, bool Temp_bool_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, class FName CallFunc_GetNowDisplayingPalID_PalID, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName K2Node_Select_Default, bool CallFunc_NotEqual_NameName_ReturnValue);
	void OnCompleteCapture();
	void OnTimer_CaptureScene(class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor);
	void Initialize_Internal(int32 TextureSizeX, int32 TExtureSizeY, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class USceneCaptureComponent2D* CallFunc_GetComponentByClass_ReturnValue, class ABP_PalMonsterCaptureSet_C* CallFunc_FinishSpawningActor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void ResetRotation(bool CallFunc_IsValid_ReturnValue);
	void AddRotation(const struct FRotator& Rotator, bool CallFunc_IsValid_ReturnValue);
	void RequestCapture(class FName CharacterID);
	void GetCaptureCameraActor(class ABP_PalMonsterCaptureSet_C** CameraActor);
	void Reset(bool CallFunc_IsValid_ReturnValue);
	void Initialize_FreeSize(int32 TextureSizeX, int32 TExtureSizeY);
	void Initialize(int32 TextureSize);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void ExecuteUbergraph_WBP_PalMonsterInframeRender(int32 EntryPoint, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PalMonsterInframeRendererSoundPlayer_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


