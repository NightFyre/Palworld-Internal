#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BulletSpeedModifier.BP_BulletSpeedModifier_C
// (None)

class UClass* UBP_BulletSpeedModifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BulletSpeedModifier_C");

	return Clss;
}


// BP_BulletSpeedModifier_C BP_BulletSpeedModifier.Default__BP_BulletSpeedModifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BulletSpeedModifier_C* UBP_BulletSpeedModifier_C::GetDefaultObj()
{
	static class UBP_BulletSpeedModifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BulletSpeedModifier_C*>(UBP_BulletSpeedModifier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BulletSpeedModifier.BP_BulletSpeedModifier_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalBullet*                  Bullet                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_BulletSpeedModifier_C::Initialize(class APalBullet* Bullet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BulletSpeedModifier_C", "Initialize");

	Params::UBP_BulletSpeedModifier_C_Initialize_Params Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BulletSpeedModifier.BP_BulletSpeedModifier_C.ExecuteUbergraph_BP_BulletSpeedModifier
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalBullet*                  K2Node_Event_bullet                                              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProjectileMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_VectorFloat_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BulletSpeedModifier_C::ExecuteUbergraph_BP_BulletSpeedModifier(int32 EntryPoint, class APalBullet* K2Node_Event_bullet, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Multiply_VectorFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BulletSpeedModifier_C", "ExecuteUbergraph_BP_BulletSpeedModifier");

	Params::UBP_BulletSpeedModifier_C_ExecuteUbergraph_BP_BulletSpeedModifier_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bullet = K2Node_Event_bullet;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue = CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_B_ImplicitCast = CallFunc_Multiply_VectorFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


