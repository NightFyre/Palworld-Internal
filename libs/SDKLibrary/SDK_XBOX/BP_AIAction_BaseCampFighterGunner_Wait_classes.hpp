#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x148 - 0x140)
// BlueprintGeneratedClass BP_AIAction_BaseCampFighterGunner_Wait.BP_AIAction_BaseCampFighterGunner_Wait_C
class UBP_AIAction_BaseCampFighterGunner_Wait_C : public UPalAIActionBaseCampFighterWait
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIAction_BaseCampFighterGunner_Wait_C* GetDefaultObj();

	void TickInternal(double DeltaTime, class AAIController* AIController, class APalCharacter* OwnerCharacter, class UPalMapObjectDefenseBulletLauncherModel* DefenseModel, class APalMapObject* MapObject, const struct FVector& Temp_struct_Variable, TSoftObjectPtr<class APalCharacter> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class APalStationaryWeaponBase* CallFunc_TryGetWeapon_OutWeapon, bool CallFunc_TryGetWeapon_ReturnValue, enum class EPathFollowingRequestResult CallFunc_MoveToLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABP_NormalStationaryLauncherBase_C* K2Node_DynamicCast_AsBP_Normal_Stationary_Launcher_Base, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IPalMapObjectLauncherControlInterface> K2Node_DynamicCast_AsPal_Map_Object_Launcher_Control_Interface, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_GetCharacterLocation_ReturnValue, class APalMapObject* CallFunc_TryGetLauncherControlMapObject_OutMapObject, bool CallFunc_TryGetLauncherControlMapObject_ReturnValue, class UPalAIActionBaseCampFighter* CallFunc_GetParentFighterAction_ReturnValue, class UPalMapObjectDefenseModelBase* CallFunc_TryGetDefenseMapObjectModel_OutModel, bool CallFunc_TryGetDefenseMapObjectModel_ReturnValue, class UPalMapObjectDefenseBulletLauncherModel* K2Node_DynamicCast_AsPal_Map_Object_Defense_Bullet_Launcher_Model, bool K2Node_DynamicCast_bSuccess_4);
	void LookMapObjectForward(double DeltaTime, class APalMapObject* MapObject, class APawn* SelfPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GeneralTurn_DeltaTime_ImplicitCast);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ExecuteUbergraph_BP_AIAction_BaseCampFighterGunner_Wait(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_2, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, class AController* CallFunc_GetController_ReturnValue, double CallFunc_TickInternal_DeltaTime_ImplicitCast);
};

}


