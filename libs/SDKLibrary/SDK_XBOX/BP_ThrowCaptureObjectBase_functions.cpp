#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThrowCaptureObjectBase.BP_ThrowCaptureObjectBase_C
// (Actor)

class UClass* ABP_ThrowCaptureObjectBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThrowCaptureObjectBase_C");

	return Clss;
}


// BP_ThrowCaptureObjectBase_C BP_ThrowCaptureObjectBase.Default__BP_ThrowCaptureObjectBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThrowCaptureObjectBase_C* ABP_ThrowCaptureObjectBase_C::GetDefaultObj()
{
	static class ABP_ThrowCaptureObjectBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThrowCaptureObjectBase_C*>(ABP_ThrowCaptureObjectBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ThrowCaptureObjectBase.BP_ThrowCaptureObjectBase_C.GetBodyClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      bodyClass                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowCaptureObjectBase_C::GetBodyClass(class UClass** bodyClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowCaptureObjectBase_C", "GetBodyClass");

	Params::ABP_ThrowCaptureObjectBase_C_GetBodyClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bodyClass != nullptr)
		*bodyClass = Parms.bodyClass;

}


// Function BP_ThrowCaptureObjectBase.BP_ThrowCaptureObjectBase_C.GetCaptureLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowCaptureObjectBase_C::GetCaptureLevel(int32* Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowCaptureObjectBase_C", "GetCaptureLevel");

	Params::ABP_ThrowCaptureObjectBase_C_GetCaptureLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function BP_ThrowCaptureObjectBase.BP_ThrowCaptureObjectBase_C.SetCaptureLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowCaptureObjectBase_C::SetCaptureLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowCaptureObjectBase_C", "SetCaptureLevel");

	Params::ABP_ThrowCaptureObjectBase_C_SetCaptureLevel_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowCaptureObjectBase.BP_ThrowCaptureObjectBase_C.OnCaptureStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CreatedBodyActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*TagretHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsBonus                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowCaptureObjectBase_C::OnCaptureStarted__DelegateSignature(class AActor* CreatedBodyActor, class UPalIndividualCharacterHandle* TagretHandle, bool IsBonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowCaptureObjectBase_C", "OnCaptureStarted__DelegateSignature");

	Params::ABP_ThrowCaptureObjectBase_C_OnCaptureStarted__DelegateSignature_Params Parms{};

	Parms.CreatedBodyActor = CreatedBodyActor;
	Parms.TagretHandle = TagretHandle;
	Parms.IsBonus = IsBonus;

	UObject::ProcessEvent(Func, &Parms);

}

}


