#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x190 - 0x188)
// BlueprintGeneratedClass BP_OtomoPalHolderComponentForNPC.BP_OtomoPalHolderComponentForNPC_C
class UBP_OtomoPalHolderComponentForNPC_C : public UBP_OtomoPalHolderComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_OtomoPalHolderComponentForNPC_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}


