#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1520 - 0x1510)
// WidgetBlueprintGeneratedClass WBP_PalActionBarContent.WBP_PalActionBarContent_C
class UWBP_PalActionBarContent_C : public UPalCommonBoundActionButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_32;                                  // 0x1518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalActionBarContent_C* GetDefaultObj();

	void OnUpdateInputAction();
	void ExecuteUbergraph_WBP_PalActionBarContent(int32 EntryPoint);
};

}


