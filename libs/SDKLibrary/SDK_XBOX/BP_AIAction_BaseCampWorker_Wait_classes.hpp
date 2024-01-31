#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x160 - 0x138)
// BlueprintGeneratedClass BP_AIAction_BaseCampWorker_Wait.BP_AIAction_BaseCampWorker_Wait_C
class UBP_AIAction_BaseCampWorker_Wait_C : public UBP_AIAction_Work_Wait_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       RandomPositionRadius;                              // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               To_Location;                                       // 0x148(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_BaseCampWorker_Wait_C* GetDefaultObj();

	void OnTickForWait(float DeltaTime, bool CallFunc_GetBaseCampRandomLocation_bResult, const struct FVector& CallFunc_GetBaseCampRandomLocation_ToLocation, enum class EPathFollowingRequestResult CallFunc_MoveToLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetBaseCampRandomLocation(bool* bResult, struct FVector* ToLocation, const struct FVector& CallFunc_CalcWalkAroundDestination_OutDestination, bool CallFunc_CalcWalkAroundDestination_ReturnValue, float CallFunc_CalcWalkAroundDestination_Radius_ImplicitCast);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_BaseCampWorker_Wait(int32 EntryPoint, bool CallFunc_GetBaseCampRandomLocation_bResult, const struct FVector& CallFunc_GetBaseCampRandomLocation_ToLocation, class APawn* K2Node_Event_ControlledPawn);
};

}


