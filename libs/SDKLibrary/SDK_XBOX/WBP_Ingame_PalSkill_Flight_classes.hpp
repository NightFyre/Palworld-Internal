#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2C0 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Ingame_PalSkill_Flight.WBP_Ingame_PalSkill_Flight_C
class UWBP_Ingame_PalSkill_Flight_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_InputHold;                                     // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_KeyGuide;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*        WBP_PlayerInputKeyGuideIcon;                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsUp;                                              // 0x298(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4183[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   UpMsgId;                                           // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   DownMsgId;                                         // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_Ingame_PalSkill_Flight_C* GetDefaultObj();

	void AnmEvent_StartInteract();
	void AnmEvent_EndInteract();
	void Construct();
	void OnDownInputMethodChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_WBP_Ingame_PalSkill_Flight(int32 EntryPoint, bool Temp_bool_Variable, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_IsInputMethodActive_ReturnValue, bool Temp_bool_Variable_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_3, class FName CallFunc_MakeLiteralName_ReturnValue_1, const struct FDataTableRowHandle& K2Node_Select_Default, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_Select_Default_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
};

}


