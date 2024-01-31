#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_BaseCampFighterGunner_Wait.BP_AIAction_BaseCampFighterGunner_Wait_C
// (None)

class UClass* UBP_AIAction_BaseCampFighterGunner_Wait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_BaseCampFighterGunner_Wait_C");

	return Clss;
}


// BP_AIAction_BaseCampFighterGunner_Wait_C BP_AIAction_BaseCampFighterGunner_Wait.Default__BP_AIAction_BaseCampFighterGunner_Wait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_BaseCampFighterGunner_Wait_C* UBP_AIAction_BaseCampFighterGunner_Wait_C::GetDefaultObj()
{
	static class UBP_AIAction_BaseCampFighterGunner_Wait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_BaseCampFighterGunner_Wait_C*>(UBP_AIAction_BaseCampFighterGunner_Wait_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_BaseCampFighterGunner_Wait.BP_AIAction_BaseCampFighterGunner_Wait_C.TickInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               AIController                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class APalCharacter*               OwnerCharacter                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalMapObjectDefenseBulletLauncherModel*DefenseModel                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class APalMapObject*               MapObject                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class APalCharacter>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// class APalStationaryWeaponBase*    CallFunc_TryGetWeapon_OutWeapon                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetWeapon_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingRequestResultCallFunc_MoveToLocation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NormalStationaryLauncherBase_C*K2Node_DynamicCast_AsBP_Normal_Stationary_Launcher_Base          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_DynamicCast_AsAIController                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalMapObjectLauncherControlInterface>K2Node_DynamicCast_AsPal_Map_Object_Launcher_Control_Interface   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCharacterLocation_ReturnValue                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalMapObject*               CallFunc_TryGetLauncherControlMapObject_OutMapObject             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetLauncherControlMapObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampFighter* CallFunc_GetParentFighterAction_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectDefenseModelBase*CallFunc_TryGetDefenseMapObjectModel_OutModel                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetDefenseMapObjectModel_ReturnValue                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectDefenseBulletLauncherModel*K2Node_DynamicCast_AsPal_Map_Object_Defense_Bullet_Launcher_Model(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampFighterGunner_Wait_C::TickInternal(double DeltaTime, class AAIController* AIController, class APalCharacter* OwnerCharacter, class UPalMapObjectDefenseBulletLauncherModel* DefenseModel, class APalMapObject* MapObject, const struct FVector& Temp_struct_Variable, TSoftObjectPtr<class APalCharacter> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class APalStationaryWeaponBase* CallFunc_TryGetWeapon_OutWeapon, bool CallFunc_TryGetWeapon_ReturnValue, enum class EPathFollowingRequestResult CallFunc_MoveToLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABP_NormalStationaryLauncherBase_C* K2Node_DynamicCast_AsBP_Normal_Stationary_Launcher_Base, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IPalMapObjectLauncherControlInterface> K2Node_DynamicCast_AsPal_Map_Object_Launcher_Control_Interface, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_GetCharacterLocation_ReturnValue, class APalMapObject* CallFunc_TryGetLauncherControlMapObject_OutMapObject, bool CallFunc_TryGetLauncherControlMapObject_ReturnValue, class UPalAIActionBaseCampFighter* CallFunc_GetParentFighterAction_ReturnValue, class UPalMapObjectDefenseModelBase* CallFunc_TryGetDefenseMapObjectModel_OutModel, bool CallFunc_TryGetDefenseMapObjectModel_ReturnValue, class UPalMapObjectDefenseBulletLauncherModel* K2Node_DynamicCast_AsPal_Map_Object_Defense_Bullet_Launcher_Model, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampFighterGunner_Wait_C", "TickInternal");

	Params::UBP_AIAction_BaseCampFighterGunner_Wait_C_TickInternal_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.AIController = AIController;
	Parms.OwnerCharacter = OwnerCharacter;
	Parms.DefenseModel = DefenseModel;
	Parms.MapObject = MapObject;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_TryGetWeapon_OutWeapon = CallFunc_TryGetWeapon_OutWeapon;
	Parms.CallFunc_TryGetWeapon_ReturnValue = CallFunc_TryGetWeapon_ReturnValue;
	Parms.CallFunc_MoveToLocation_ReturnValue = CallFunc_MoveToLocation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBP_Normal_Stationary_Launcher_Base = K2Node_DynamicCast_AsBP_Normal_Stationary_Launcher_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsAIController = K2Node_DynamicCast_AsAIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Launcher_Control_Interface = K2Node_DynamicCast_AsPal_Map_Object_Launcher_Control_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetCharacterLocation_ReturnValue = CallFunc_GetCharacterLocation_ReturnValue;
	Parms.CallFunc_TryGetLauncherControlMapObject_OutMapObject = CallFunc_TryGetLauncherControlMapObject_OutMapObject;
	Parms.CallFunc_TryGetLauncherControlMapObject_ReturnValue = CallFunc_TryGetLauncherControlMapObject_ReturnValue;
	Parms.CallFunc_GetParentFighterAction_ReturnValue = CallFunc_GetParentFighterAction_ReturnValue;
	Parms.CallFunc_TryGetDefenseMapObjectModel_OutModel = CallFunc_TryGetDefenseMapObjectModel_OutModel;
	Parms.CallFunc_TryGetDefenseMapObjectModel_ReturnValue = CallFunc_TryGetDefenseMapObjectModel_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Defense_Bullet_Launcher_Model = K2Node_DynamicCast_AsPal_Map_Object_Defense_Bullet_Launcher_Model;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampFighterGunner_Wait.BP_AIAction_BaseCampFighterGunner_Wait_C.LookMapObjectForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalMapObject*               MapObject                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       SelfPawn                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GeneralTurn_DeltaTime_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampFighterGunner_Wait_C::LookMapObjectForward(double DeltaTime, class APalMapObject* MapObject, class APawn* SelfPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GeneralTurn_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampFighterGunner_Wait_C", "LookMapObjectForward");

	Params::UBP_AIAction_BaseCampFighterGunner_Wait_C_LookMapObjectForward_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.MapObject = MapObject;
	Parms.SelfPawn = SelfPawn;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GeneralTurn_DeltaTime_ImplicitCast = CallFunc_GeneralTurn_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampFighterGunner_Wait.BP_AIAction_BaseCampFighterGunner_Wait_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampFighterGunner_Wait_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampFighterGunner_Wait_C", "ActionTick");

	Params::UBP_AIAction_BaseCampFighterGunner_Wait_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampFighterGunner_Wait.BP_AIAction_BaseCampFighterGunner_Wait_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampFighterGunner_Wait_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampFighterGunner_Wait_C", "ActionStart");

	Params::UBP_AIAction_BaseCampFighterGunner_Wait_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampFighterGunner_Wait.BP_AIAction_BaseCampFighterGunner_Wait_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampFighterGunner_Wait_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampFighterGunner_Wait_C", "ActionFinished");

	Params::UBP_AIAction_BaseCampFighterGunner_Wait_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampFighterGunner_Wait.BP_AIAction_BaseCampFighterGunner_Wait_C.ExecuteUbergraph_BP_AIAction_BaseCampFighterGunner_Wait
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TickInternal_DeltaTime_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampFighterGunner_Wait_C::ExecuteUbergraph_BP_AIAction_BaseCampFighterGunner_Wait(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_2, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, class AController* CallFunc_GetController_ReturnValue, double CallFunc_TickInternal_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampFighterGunner_Wait_C", "ExecuteUbergraph_BP_AIAction_BaseCampFighterGunner_Wait");

	Params::UBP_AIAction_BaseCampFighterGunner_Wait_C_ExecuteUbergraph_BP_AIAction_BaseCampFighterGunner_Wait_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_TickInternal_DeltaTime_ImplicitCast = CallFunc_TickInternal_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


