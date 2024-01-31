#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2A8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_CharaCre_SliderBase.WBP_CharaCre_SliderBase_C
class UWBP_CharaCre_SliderBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Base;                                              // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Slider;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_SliderNum;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   MsgId;                                             // 0x298(0x10)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_SliderBase_C* GetDefaultObj();

	void SetValue(int32 NewValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void OnInitialized();
	void ExecuteUbergraph_WBP_CharaCre_SliderBase(int32 EntryPoint, class FText CallFunc_GetLocalizedTextFromHandle_Text);
};

}


