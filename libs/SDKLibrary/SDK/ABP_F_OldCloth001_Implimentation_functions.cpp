#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_F_OldCloth001_Implimentation.ABP_F_OldCloth001_Implimentation_C
// (None)

class UClass* UABP_F_OldCloth001_Implimentation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_F_OldCloth001_Implimentation_C");

	return Clss;
}


// ABP_F_OldCloth001_Implimentation_C ABP_F_OldCloth001_Implimentation.Default__ABP_F_OldCloth001_Implimentation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_F_OldCloth001_Implimentation_C* UABP_F_OldCloth001_Implimentation_C::GetDefaultObj()
{
	static class UABP_F_OldCloth001_Implimentation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_F_OldCloth001_Implimentation_C*>(UABP_F_OldCloth001_Implimentation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_F_OldCloth001_Implimentation.ABP_F_OldCloth001_Implimentation_C.ClothLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ClothLayer                                                       (Parm, OutParm, NoDestructor)

void UABP_F_OldCloth001_Implimentation_C::ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* ClothLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_F_OldCloth001_Implimentation_C", "ClothLayer");

	Params::UABP_F_OldCloth001_Implimentation_C_ClothLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ClothLayer != nullptr)
		*ClothLayer = std::move(Parms.ClothLayer);

}


// Function ABP_F_OldCloth001_Implimentation.ABP_F_OldCloth001_Implimentation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_F_OldCloth001_Implimentation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_F_OldCloth001_Implimentation_C", "AnimGraph");

	Params::UABP_F_OldCloth001_Implimentation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_F_OldCloth001_Implimentation.ABP_F_OldCloth001_Implimentation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_A8F9A51E4CAB94A2E9F5F58E6AE9E9C8
// (BlueprintEvent)
// Parameters:

void UABP_F_OldCloth001_Implimentation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_A8F9A51E4CAB94A2E9F5F58E6AE9E9C8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_F_OldCloth001_Implimentation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_A8F9A51E4CAB94A2E9F5F58E6AE9E9C8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_F_OldCloth001_Implimentation.ABP_F_OldCloth001_Implimentation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_DB22254C408B73DD7E9BC4A62D018730
// (BlueprintEvent)
// Parameters:

void UABP_F_OldCloth001_Implimentation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_DB22254C408B73DD7E9BC4A62D018730()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_F_OldCloth001_Implimentation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_DB22254C408B73DD7E9BC4A62D018730");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_F_OldCloth001_Implimentation.ABP_F_OldCloth001_Implimentation_C.ExecuteUbergraph_ABP_F_OldCloth001_Implimentation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKawaiiPhysicsSettings      K2Node_MakeStruct_KawaiiPhysicsSettings                          (NoDestructor)

void UABP_F_OldCloth001_Implimentation_C::ExecuteUbergraph_ABP_F_OldCloth001_Implimentation(int32 EntryPoint, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_F_OldCloth001_Implimentation_C", "ExecuteUbergraph_ABP_F_OldCloth001_Implimentation");

	Params::UABP_F_OldCloth001_Implimentation_C_ExecuteUbergraph_ABP_F_OldCloth001_Implimentation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_KawaiiPhysicsSettings = K2Node_MakeStruct_KawaiiPhysicsSettings;

	UObject::ProcessEvent(Func, &Parms);

}

}


