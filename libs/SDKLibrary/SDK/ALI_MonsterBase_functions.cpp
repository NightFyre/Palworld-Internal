#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALI_MonsterBase.ALI_MonsterBase_C
// (None)

class UClass* IALI_MonsterBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALI_MonsterBase_C");

	return Clss;
}


// ALI_MonsterBase_C ALI_MonsterBase.Default__ALI_MonsterBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IALI_MonsterBase_C* IALI_MonsterBase_C::GetDefaultObj()
{
	static class IALI_MonsterBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IALI_MonsterBase_C*>(IALI_MonsterBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALI_MonsterBase.ALI_MonsterBase_C.UpperOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   NativePose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ActionPose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   UpperOverride                                                    (Parm, OutParm, NoDestructor)

void IALI_MonsterBase_C::UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_MonsterBase_C", "UpperOverride");

	Params::IALI_MonsterBase_C_UpperOverride_Params Parms{};

	Parms.NativePose = NativePose;
	Parms.ActionPose = ActionPose;

	UObject::ProcessEvent(Func, &Parms);

	if (UpperOverride != nullptr)
		*UpperOverride = std::move(Parms.UpperOverride);

}


// Function ALI_MonsterBase.ALI_MonsterBase_C.LookAtOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     LookAtWorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LookAtOverride                                                   (Parm, OutParm, NoDestructor)

void IALI_MonsterBase_C::LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation, struct FPoseLink* LookAtOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_MonsterBase_C", "LookAtOverride");

	Params::IALI_MonsterBase_C_LookAtOverride_Params Parms{};

	Parms.InPose = InPose;
	Parms.LookAtWorldLocation = LookAtWorldLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtOverride != nullptr)
		*LookAtOverride = std::move(Parms.LookAtOverride);

}


// Function ALI_MonsterBase.ALI_MonsterBase_C.AimingOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   DefaultPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FRotator                    AimRotator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPoseLink                   AimingOverride                                                   (Parm, OutParm, NoDestructor)

void IALI_MonsterBase_C::AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_MonsterBase_C", "AimingOverride");

	Params::IALI_MonsterBase_C_AimingOverride_Params Parms{};

	Parms.DefaultPose = DefaultPose;
	Parms.AimRotator = AimRotator;

	UObject::ProcessEvent(Func, &Parms);

	if (AimingOverride != nullptr)
		*AimingOverride = std::move(Parms.AimingOverride);

}

}


