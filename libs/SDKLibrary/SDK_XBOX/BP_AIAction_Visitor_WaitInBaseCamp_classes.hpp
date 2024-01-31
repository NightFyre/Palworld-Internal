#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x2F0 - 0x2C4)
// BlueprintGeneratedClass BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C
class UBP_AIAction_Visitor_WaitInBaseCamp_C : public UBP_AIAction_NPC_Relax_Wander_C
{
public:
	uint8                                        Pad_B05[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Timer;                                             // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnTimeMinutes;                                 // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B06[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnWaitTimeFinished;                                // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_AIAction_Visitor_WaitInBaseCamp_C* GetDefaultObj();

	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void OnWaitTimeFinished__DelegateSignature();
};

}


