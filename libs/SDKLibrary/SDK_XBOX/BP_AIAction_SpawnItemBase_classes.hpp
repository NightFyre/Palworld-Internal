#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x190 - 0x130)
// BlueprintGeneratedClass BP_AIAction_SpawnItemBase.BP_AIAction_SpawnItemBase_C
class UBP_AIAction_SpawnItemBase_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        SpawnCount;                                        // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         ActionCharacter;                                   // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                SpawnItemInfo;                                     // 0x148(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                  SpawnSocketName;                                   // 0x154(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpawnLocationOffset;                               // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SpawnItemRotator;                                  // 0x178(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_AIAction_SpawnItemBase_C* GetDefaultObj();

	void OnActionNotify_Proc(class FName Notify, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2);
	void IsActionRunning(bool* IsRunning, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, class UBP_Action_Coop_SpawnItem_C* K2Node_DynamicCast_AsBP_Action_Coop_Spawn_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2);
	void SpawnItem(const struct FVector& SpawnLocation, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_2, class UPalStatusCollectItem* CallFunc_GetStatusInstance_Status_Collect_Item, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UPalStatusCollectItem* CallFunc_GetStatusInstance_Status_Collect_Item_1, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1);
	void AbortProc(class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, class UBP_Action_Coop_SpawnItem_C* K2Node_DynamicCast_AsBP_Action_Coop_Spawn_Item, bool K2Node_DynamicCast_bSuccess);
	bool CanSpawnItem(class UPalStatusCollectItem* CallFunc_GetStatusInstance_Status_Collect_Item, bool CallFunc_CanSpawnItem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetStatusInstance(class UPalStatusCollectItem** Status_Collect_Item, class UPalStatusComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalStatusBase* CallFunc_GetExecutionStatus_ReturnValue, class UPalStatusCollectItem* K2Node_DynamicCast_AsPal_Status_Collect_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void SetMoveFlag(bool IsActive, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Setup(class UObject* Object, class UPalStatusCollectItem* CallFunc_GetStatusInstance_Status_Collect_Item, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, const struct FPalStaticItemIdAndNum& CallFunc_GetCollectItemInfo_ReturnValue);
	void ActionStart(class APawn* ControlledPawn);
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void OnAbort();
	void OnActionNotify(class UPalActionBase* Action, class FName NotifyName);
	void OnCompleteItemSpawn();
	void PlaySpawnItemAction();
	void ExecuteUbergraph_BP_AIAction_SpawnItemBase(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_CanSpawnItem_ReturnValue, class UPalActionBase* K2Node_CustomEvent_Action, class FName K2Node_CustomEvent_NotifyName, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, bool CallFunc_IsActionRunning_IsRunning, bool CallFunc_PlayAction_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


