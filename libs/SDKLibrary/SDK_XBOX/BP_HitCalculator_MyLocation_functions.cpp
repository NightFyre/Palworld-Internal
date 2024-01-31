#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HitCalculator_MyLocation.BP_HitCalculator_MyLocation_C
// (None)

class UClass* UBP_HitCalculator_MyLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HitCalculator_MyLocation_C");

	return Clss;
}


// BP_HitCalculator_MyLocation_C BP_HitCalculator_MyLocation.Default__BP_HitCalculator_MyLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HitCalculator_MyLocation_C* UBP_HitCalculator_MyLocation_C::GetDefaultObj()
{
	static class UBP_HitCalculator_MyLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HitCalculator_MyLocation_C*>(UBP_HitCalculator_MyLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HitCalculator_MyLocation.BP_HitCalculator_MyLocation_C.CalcLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyHitComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherHitComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBP_HitCalculator_MyLocation_C::CalcLocation(class UPrimitiveComponent* MyHitComponent, class UPrimitiveComponent* OtherHitComponent, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitCalculator_MyLocation_C", "CalcLocation");

	Params::UBP_HitCalculator_MyLocation_C_CalcLocation_Params Parms{};

	Parms.MyHitComponent = MyHitComponent;
	Parms.OtherHitComponent = OtherHitComponent;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


