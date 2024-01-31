#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x218 - 0x210)
// BlueprintGeneratedClass Bp_Action_AliveRagdollTimer.Bp_Action_AliveRagdollTimer_C
class UBp_Action_AliveRagdollTimer_C : public UBP_Action_AliveRagdoll_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBp_Action_AliveRagdollTimer_C* GetDefaultObj();

	void OnBeginAction();
	void ExecuteUbergraph_Bp_Action_AliveRagdollTimer(int32 EntryPoint);
};

}


