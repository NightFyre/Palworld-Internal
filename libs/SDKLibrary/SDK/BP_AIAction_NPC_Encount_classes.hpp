#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x158 - 0x130)
// BlueprintGeneratedClass BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C
class UBP_AIAction_NPC_Encount_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TrgetActor;                                        // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Propagation;                                       // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalShooterComponent*                  Shooter;                                           // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*         OtomoHolder;                                       // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_NPC_Encount_C* GetDefaultObj();

	void GetShooter(class UPalShooterComponent** ShooterComponent, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ActionStart(class APawn* ControlledPawn);
	void OnWeaponChanged(class APalWeaponBase* Weapon);
	void StartCombat();
	void ExecuteUbergraph_BP_AIAction_NPC_Encount(int32 EntryPoint, bool CallFunc_IsValidCurrentSelectPalActor_ReturnValue, class APawn* K2Node_Event_ControlledPawn, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_1, class UPalSquad* CallFunc_GetSquad_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController_1, bool K2Node_DynamicCast_bSuccess_2, class UPalShooterComponent* CallFunc_GetShooter_ShooterComponent, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, bool CallFunc_IsValid_ReturnValue, class APalWeaponBase* K2Node_CustomEvent_weapon, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AController* CallFunc_GetController_ReturnValue_3, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, bool CallFunc_IsValid_ReturnValue_2, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue, class UBP_OtomoPalHolderComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class APalCharacter* CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo, bool CallFunc_IsValid_ReturnValue_4);
};

}


