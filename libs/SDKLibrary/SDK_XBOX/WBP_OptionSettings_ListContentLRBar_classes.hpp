#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x288 - 0x278)
// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContentLRBar.WBP_OptionSettings_ListContentLRBar_C
class UWBP_OptionSettings_ListContentLRBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_56;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_OptionSettings_ListContentLRBar_C* GetDefaultObj();

	void SetActive(bool IsActive);
	void ExecuteUbergraph_WBP_OptionSettings_ListContentLRBar(int32 EntryPoint, bool K2Node_CustomEvent_IsActive, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
};

}


