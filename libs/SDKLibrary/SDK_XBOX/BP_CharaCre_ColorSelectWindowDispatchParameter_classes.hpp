#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x80 - 0x38)
// BlueprintGeneratedClass BP_CharaCre_ColorSelectWindowDispatchParameter.BP_CharaCre_ColorSelectWindowDispatchParameter_C
class UBP_CharaCre_ColorSelectWindowDispatchParameter_C : public UPalHUDDispatchParameterBase
{
public:
	struct FLinearColor                          SelectedColor;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  PresetColorArray;                                  // 0x48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          DefaultColor;                                      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnChangedColor;                                    // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget*                               RelativePositionWidget;                            // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* GetDefaultObj();

	void OnChangedColor__DelegateSignature(const struct FLinearColor& Color);
};

}


