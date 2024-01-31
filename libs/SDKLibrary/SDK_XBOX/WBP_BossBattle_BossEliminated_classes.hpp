#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x288 - 0x278)
// WidgetBlueprintGeneratedClass WBP_BossBattle_BossEliminated.WBP_BossBattle_BossEliminated_C
class UWBP_BossBattle_BossEliminated_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_OpenClose;                                     // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_BossBattle_BossEliminated_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_BossBattle_BossEliminated(int32 EntryPoint);
};

}


