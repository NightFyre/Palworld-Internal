#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Stun.BP_AIAction_Stun_C
// (None)

class UClass* UBP_AIAction_Stun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Stun_C");

	return Clss;
}


// BP_AIAction_Stun_C BP_AIAction_Stun.Default__BP_AIAction_Stun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Stun_C* UBP_AIAction_Stun_C::GetDefaultObj()
{
	static class UBP_AIAction_Stun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Stun_C*>(UBP_AIAction_Stun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Stun.BP_AIAction_Stun_C.WakeupDirection
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    MeshRotate                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AIAction_Stun_C::WakeupDirection(int32* Direction, const struct FRotator& MeshRotate, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Stun_C", "WakeupDirection");

	Params::UBP_AIAction_Stun_C_WakeupDirection_Params Parms{};

	Parms.MeshRotate = MeshRotate;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_1 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_1;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = CallFunc_Dot_VectorVector_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = Parms.Direction;

}


// Function BP_AIAction_Stun.BP_AIAction_Stun_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Stun_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Stun_C", "ActionStart");

	Params::UBP_AIAction_Stun_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Stun.BP_AIAction_Stun_C.ExecuteUbergraph_BP_AIAction_Stun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBoneIndex_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionDynamicParameter     K2Node_MakeStruct_ActionDynamicParameter                         (None)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFlyPal_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Stun_C::ExecuteUbergraph_BP_AIAction_Stun(int32 EntryPoint, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition, const struct FVector& CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal, class FName CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName, float CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance, bool CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue, int32 CallFunc_GetBoneIndex_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class APawn* K2Node_Event_ControlledPawn, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsFlyPal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Stun_C", "ExecuteUbergraph_BP_AIAction_Stun");

	Params::UBP_AIAction_Stun_C_ExecuteUbergraph_BP_AIAction_Stun_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition = CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition;
	Parms.CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal = CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal;
	Parms.CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName = CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName;
	Parms.CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance = CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance;
	Parms.CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue = CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue;
	Parms.CallFunc_GetBoneIndex_ReturnValue = CallFunc_GetBoneIndex_ReturnValue;
	Parms.K2Node_MakeStruct_ActionDynamicParameter = K2Node_MakeStruct_ActionDynamicParameter;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_PlayActionParameter_ReturnValue = CallFunc_PlayActionParameter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_IsFlyPal_ReturnValue = CallFunc_IsFlyPal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


