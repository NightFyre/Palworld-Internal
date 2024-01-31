#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x158 - 0x150)
// BlueprintGeneratedClass BP_AIActionBaseCamp_Sleep.BP_AIActionBaseCamp_Sleep_C
class UBP_AIActionBaseCamp_Sleep_C : public UPalAIActionBaseCampSleep
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIActionBaseCamp_Sleep_C* GetDefaultObj();

	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ExecuteUbergraph_BP_AIActionBaseCamp_Sleep(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_1, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue);
};

}


