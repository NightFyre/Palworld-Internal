#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x388 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C
class UWBP_Ingame_PalSkillGauge_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Unlock;                                        // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Lock;                                          // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Activate_Keep;                                 // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Activate;                                      // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_InputHold;                                     // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_CoolTime_Over;                                 // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Disable;                                       // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Enable;                                        // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanelGaugeCIrcle;                            // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanelGaugeSq;                                // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanelKey;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IconLock;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ActivateEff_LineBase;                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ActivateEff_LineFlare;                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Circle_ActiveEff;                            // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Circle_ActiveEff_1;                          // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                KeyGuideCircle;                                    // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                KeyGuideCircle_Sq;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalRetainerBox*                       PalRetainerBox;                                    // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_SkillTime;                             // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_SkillTime_Sq;                          // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ReticleCircle_00;                                  // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ReticleCircle_01;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_SkillName;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_PalSkill_Flight_C*         WBP_Ingame_PalSkill_Flight_Down;                   // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_PalSkill_Flight_C*         WBP_Ingame_PalSkill_Flight_UP;                     // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*        WBP_PlayerInputKeyGuideIcon;                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsCoolDown;                                        // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_448D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstanceDynamic*>      SkillGaugeMaterials;                               // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      CoolDownGaugeMaterials;                            // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_Ingame_PalSkillGauge_C* GetDefaultObj();

	void ShowFlyKeyGuide(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Set_Skill_Name_Locked(class FText CallFunc_GetLocalizedText_ReturnValue);
	void Hide_Key_Guide(bool Hide, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Set_Skill_Name(class FText SkillNameText);
	void ClearIcon();
	void Setup_Icon_Texture(TMap<class FName, TSoftObjectPtr<class UTexture2D>> SoftTextureMap, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, TMap<class FName, TSoftObjectPtr<class UTexture2D>> K2Node_MakeVariable_MakeVariableOutput, bool Temp_bool_Variable_1, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetCharacterIDFromCharacter_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetPartnerSkillIcon_SoftIconTexture, bool CallFunc_GetPartnerSkillIcon_IsSquare, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void Set_Cool_Down_Gauge_Percent(double Percent, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void Set_Skill_Gauge_Percent(double Percent, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void AnmEvent_SkillEnable();
	void AnmEvent_CoolDown();
	void AnmEvent_CoolDownComplated();
	void AnmEvent_Lock();
	void AnmEvent_Unlock();
	void AnmEvent_InputHold();
	void AnmEvent_InputRelease();
	void AnmEvent_StartSkill();
	void AnmEvent_UsingSkill(bool TogglePlay);
	void Construct();
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_WBP_Ingame_PalSkillGauge(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, enum class ECommonInputType Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, bool K2Node_CustomEvent_TogglePlay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_9, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName K2Node_Select_Default);
};

}


