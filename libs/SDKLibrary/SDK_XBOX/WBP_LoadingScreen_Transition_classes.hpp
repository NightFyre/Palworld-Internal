#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x448 - 0x408)
// WidgetBlueprintGeneratedClass WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C
class UWBP_LoadingScreen_Transition_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeOut;                                           // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Default_In;                                        // 0x420(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     CircularThrobber_1;                                // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_50;                                          // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_LoadingScreen_Transition_C* GetDefaultObj();

	void SetBgColor(const struct FLinearColor& Color);
	void Finished_65AD92BC4646C00F05936392250F90EA();
	void Finished_D300E47D4C210C5B9AC12E8500F6AC11();
	void Construct();
	void StartFadeIn();
	void StartFadeOut();
	void ToggleVisibility(bool Visiable);
	void ExecuteUbergraph_WBP_LoadingScreen_Transition(int32 EntryPoint, class UWBP_LoadingScreen_Transition_C* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_CustomEvent_Visiable, enum class ESlateVisibility K2Node_Select_Default);
};

}


