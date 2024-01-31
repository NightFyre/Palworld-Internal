#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x5C8 - 0x578)
// WidgetBlueprintGeneratedClass WBP_PlayerHPGauge.WBP_PlayerHPGauge_C
class UWBP_PlayerHPGauge_C : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_GuildGauge_C*                     WBP_GuildGauge;                                    // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        ImportedSphereRadius;                              // 0x588(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             DrawOffset;                                        // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CheckActorTimerHandle;                             // 0x5A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CheckDisplayTypeTimerHandle;                       // 0x5A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_Status_Dying_C*                    CachedDyingStatus;                                 // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDelayClose;                                      // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_PlayerHPGauge_C* GetDefaultObj();

	void OnDyingEnd(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void SetupDying(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPalStatusBase* CallFunc_GetExecutionStatus_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UBP_Status_Dying_C* K2Node_DynamicCast_AsBP_Status_Dying, bool K2Node_DynamicCast_bSuccess);
	void UpdateWidgetPosition(class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, bool CallFunc_IsVisible_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
	void OnUpdateLevel_binded(int32 NewLevel);
	void OnUpdateHP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void SetupByActor(class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetImportedBounds_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_BreakBoxSphereBounds_Origin, const struct FVector& CallFunc_BreakBoxSphereBounds_BoxExtent, float CallFunc_BreakBoxSphereBounds_SphereRadius, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_ImportedSphereRadius_ImplicitCast);
	void BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_withBuff_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercentForce_percent_ImplicitCast);
	void UpdateForTick(double DeltaTime);
	void OnUpdateNickName_Binded(const class FString& NewNickName);
	void OnTimerEvent_CheckGuild(enum class E_PalUIGuildHPGaugeDisplayType Temp_byte_Variable, enum class E_PalUIGuildHPGaugeDisplayType Temp_byte_Variable_1, bool Temp_bool_Variable, class UPalGroupManager* CallFunc_GetGroupManager_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsFriend_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, const struct FGuid& CallFunc_GetGroupId_ReturnValue, enum class E_PalUIGuildHPGaugeDisplayType K2Node_Select_Default, const class FString& CallFunc_TryGetGuildName_OutGuildName, bool CallFunc_TryGetGuildName_ReturnValue);
	void OnTimerEvent_CheckActor(class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnInitialized();
	void Destruct();
	void DelayClose();
	void ExecuteUbergraph_WBP_PlayerHPGauge(int32 EntryPoint, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnDelayClose__DelegateSignature(class UWidget* Widget);
};

}


