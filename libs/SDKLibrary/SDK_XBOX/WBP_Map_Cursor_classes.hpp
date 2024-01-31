#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x290 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Map_Cursor.WBP_Map_Cursor_C
class UWBP_Map_Cursor_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Focus;                                         // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Loop;                                          // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Map_Cursor_C* GetDefaultObj();

	void AnmEvent_Reset();
	void AnmEvent_Focus();
	void AnmEvent_Loop();
	void AnmEvent_Unfocus();
	void Construct();
	void ExecuteUbergraph_WBP_Map_Cursor(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
};

}


