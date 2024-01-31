#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x151 - 0x130)
// BlueprintGeneratedClass BP_AIActionRiding.BP_AIActionRiding_C
class UBP_AIActionRiding_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                         RidingCharacter;                                   // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  RidingSpeedUpFlagName;                             // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OwnerPawn;                                         // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsRiding;                                         // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIActionRiding_C* GetDefaultObj();

	void SetRidingCharacter(class APalCharacter* RidingCharacter);
	void ActionStart(class APawn* ControlledPawn);
	void OnCoopReleaseDelegate______0();
	void ExecuteUbergraph_BP_AIActionRiding(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GetOff_ReturnValue, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_Ride_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


