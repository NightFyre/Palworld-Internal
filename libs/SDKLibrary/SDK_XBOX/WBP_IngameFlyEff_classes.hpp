#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2C0 - 0x278)
// WidgetBlueprintGeneratedClass WBP_IngameFlyEff.WBP_IngameFlyEff_C
class UWBP_IngameFlyEff_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Fade;                                          // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_38;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         Character;                                         // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UpdateEffTimer;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Visible;                                           // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CachedVelocity;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_IngameFlyEff_C* GetDefaultObj();

	void EnableEff(bool IsEnable, class APalCharacter* Character);
	void UpdateEff();
	void ExecuteUbergraph_WBP_IngameFlyEff(int32 EntryPoint, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool K2Node_CustomEvent_IsEnable, class APalCharacter* K2Node_CustomEvent_Character, enum class EUMGSequencePlayMode K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPalAnimInstance* K2Node_DynamicCast_AsPal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
};

}


