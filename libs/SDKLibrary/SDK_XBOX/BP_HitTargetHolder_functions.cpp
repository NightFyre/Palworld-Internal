#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HitTargetHolder.BP_HitTargetHolder_C
// (None)

class UClass* UBP_HitTargetHolder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HitTargetHolder_C");

	return Clss;
}


// BP_HitTargetHolder_C BP_HitTargetHolder.Default__BP_HitTargetHolder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HitTargetHolder_C* UBP_HitTargetHolder_C::GetDefaultObj()
{
	static class UBP_HitTargetHolder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HitTargetHolder_C*>(UBP_HitTargetHolder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HitTargetHolder.BP_HitTargetHolder_C.AddUniqueHitActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsNew                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNewActor                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitTargetHolder_C::AddUniqueHitActor(class AActor* Actor, bool* IsNew, bool IsNewActor, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitTargetHolder_C", "AddUniqueHitActor");

	Params::UBP_HitTargetHolder_C_AddUniqueHitActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.IsNewActor = IsNewActor;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsNew != nullptr)
		*IsNew = Parms.IsNew;

}

}


