#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x410 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PlayerInputGuard.WBP_PlayerInputGuard_C
class UWBP_PlayerInputGuard_C : public UPalUIInputGuard
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_PlayerInputGuard_C* GetDefaultObj();

	void OnSetup();
	void ExecuteUbergraph_WBP_PlayerInputGuard(int32 EntryPoint);
};

}


