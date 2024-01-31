#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x70 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_DebugRefresh.BP_VisualEffect_DebugRefresh_C
class UBP_VisualEffect_DebugRefresh_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_DebugRefresh_C* GetDefaultObj();

	void OnBeginVisualEffect();
	void ExecuteUbergraph_BP_VisualEffect_DebugRefresh(int32 EntryPoint, class APalCharacter* CallFunc_GetCharacter_ReturnValue);
};

}


