#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x448 - 0x408)
// WidgetBlueprintGeneratedClass WBP_EnemyExclamationMarkIcon.WBP_EnemyExclamationMarkIcon_C
class UWBP_EnemyExclamationMarkIcon_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_EnemyNotice_Ex_C*                 WBP_EnemyNotice_Ex;                                // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APalCharacter*                         TargetCharacter;                                   // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          ScaleCurve;                                        // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Timer;                                             // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PosX;                                              // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DisplayTime;                                       // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_EnemyExclamationMarkIcon_C* GetDefaultObj();

	void CheckEnd(bool* IsEnd, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_GetIsCapturedProcessing_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Setup(class APalCharacter* TargetPal, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, float CallFunc_GetEnemyMarkScale_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast);
	void Finished_263A711A43F529A2B1BDFD9C84555BC8();
	void Finished_E6B9CD8740962A7164A9698FF7EA74CA();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void ExecuteUbergraph_WBP_EnemyExclamationMarkIcon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDead_ReturnValue, bool CallFunc_CheckEnd_IsEnd, const struct FVector& CallFunc_GetExclamationMarkLocation_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


