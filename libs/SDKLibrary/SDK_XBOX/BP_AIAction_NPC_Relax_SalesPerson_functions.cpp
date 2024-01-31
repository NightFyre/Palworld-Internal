#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_NPC_Relax_SalesPerson.BP_AIAction_NPC_Relax_SalesPerson_C
// (None)

class UClass* UBP_AIAction_NPC_Relax_SalesPerson_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_NPC_Relax_SalesPerson_C");

	return Clss;
}


// BP_AIAction_NPC_Relax_SalesPerson_C BP_AIAction_NPC_Relax_SalesPerson.Default__BP_AIAction_NPC_Relax_SalesPerson_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_NPC_Relax_SalesPerson_C* UBP_AIAction_NPC_Relax_SalesPerson_C::GetDefaultObj()
{
	static class UBP_AIAction_NPC_Relax_SalesPerson_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_NPC_Relax_SalesPerson_C*>(UBP_AIAction_NPC_Relax_SalesPerson_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_NPC_Relax_SalesPerson.BP_AIAction_NPC_Relax_SalesPerson_C.GetTransitionableJudgementType
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EPalAISightJudgementType>JudgeTypeList                                                    (Parm, OutParm)
// TArray<enum class EPalAISightJudgementType>NewLocalVar_0                                                    (Edit, BlueprintVisible)
// TArray<enum class EPalAISightJudgementType>K2Node_MakeArray_Array                                           (ReferenceParm)

void UBP_AIAction_NPC_Relax_SalesPerson_C::GetTransitionableJudgementType(TArray<enum class EPalAISightJudgementType>* JudgeTypeList, const TArray<enum class EPalAISightJudgementType>& NewLocalVar_0, TArray<enum class EPalAISightJudgementType>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_SalesPerson_C", "GetTransitionableJudgementType");

	Params::UBP_AIAction_NPC_Relax_SalesPerson_C_GetTransitionableJudgementType_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (JudgeTypeList != nullptr)
		*JudgeTypeList = std::move(Parms.JudgeTypeList);

}


// Function BP_AIAction_NPC_Relax_SalesPerson.BP_AIAction_NPC_Relax_SalesPerson_C.SoundEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     EmitLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_SalesPerson_C::SoundEvent(const struct FVector& EmitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_SalesPerson_C", "SoundEvent");

	Params::UBP_AIAction_NPC_Relax_SalesPerson_C_SoundEvent_Params Parms{};

	Parms.EmitLocation = EmitLocation;

	UObject::ProcessEvent(Func, &Parms);

}

}


