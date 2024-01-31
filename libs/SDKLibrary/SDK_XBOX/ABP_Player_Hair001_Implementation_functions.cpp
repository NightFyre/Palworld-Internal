#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C
// (None)

class UClass* UABP_Player_Hair001_Implementation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Player_Hair001_Implementation_C");

	return Clss;
}


// ABP_Player_Hair001_Implementation_C ABP_Player_Hair001_Implementation.Default__ABP_Player_Hair001_Implementation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Player_Hair001_Implementation_C* UABP_Player_Hair001_Implementation_C::GetDefaultObj()
{
	static class UABP_Player_Hair001_Implementation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Player_Hair001_Implementation_C*>(UABP_Player_Hair001_Implementation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.HairLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   HairLayer                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Hair001_Implementation_C::HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "HairLayer");

	Params::UABP_Player_Hair001_Implementation_C_HairLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (HairLayer != nullptr)
		*HairLayer = std::move(Parms.HairLayer);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Hair001_Implementation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "AnimGraph");

	Params::UABP_Player_Hair001_Implementation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_815AC33B4E182803179C95A88BD10CE7
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair001_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_815AC33B4E182803179C95A88BD10CE7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_815AC33B4E182803179C95A88BD10CE7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_CF68BD814004A9BE933855AAF278E492
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair001_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_CF68BD814004A9BE933855AAF278E492()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_CF68BD814004A9BE933855AAF278E492");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_45CE30654A7FB37D97E2E4A5510467E9
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair001_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_45CE30654A7FB37D97E2E4A5510467E9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_45CE30654A7FB37D97E2E4A5510467E9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_CCBF9F7B4F40FCEF790AA69A253ED00C
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair001_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_CCBF9F7B4F40FCEF790AA69A253ED00C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_CCBF9F7B4F40FCEF790AA69A253ED00C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_869DD29A413AF4EDA005FE98B0E48048
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair001_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_869DD29A413AF4EDA005FE98B0E48048()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_869DD29A413AF4EDA005FE98B0E48048");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_77CD87CA487FEE98D17775ADDFECDA34
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair001_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_77CD87CA487FEE98D17775ADDFECDA34()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_77CD87CA487FEE98D17775ADDFECDA34");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_9722388A446D396F3E44C2953C8CF4BA
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair001_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_9722388A446D396F3E44C2953C8CF4BA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_9722388A446D396F3E44C2953C8CF4BA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_D2C627AB41C7F7242090DEB9F5971E6A
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair001_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_D2C627AB41C7F7242090DEB9F5971E6A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_D2C627AB41C7F7242090DEB9F5971E6A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_1AA876F346A93B52CF7D11A83BC812CD
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair001_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_1AA876F346A93B52CF7D11A83BC812CD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_1AA876F346A93B52CF7D11A83BC812CD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_5D45771D4196D87E7E3035959F88C0B0
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair001_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_5D45771D4196D87E7E3035959F88C0B0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_5D45771D4196D87E7E3035959F88C0B0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_DDAA787A43E397585134FC973C278B17
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair001_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_DDAA787A43E397585134FC973C278B17()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_DDAA787A43E397585134FC973C278B17");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_3038E75C46270EDCF356C9AE6CDD7DEF
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair001_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_3038E75C46270EDCF356C9AE6CDD7DEF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_3038E75C46270EDCF356C9AE6CDD7DEF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.ExecuteUbergraph_ABP_Player_Hair001_Implementation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKawaiiPhysicsSettings      K2Node_MakeStruct_KawaiiPhysicsSettings                          (NoDestructor)
// struct FKawaiiPhysicsSettings      K2Node_MakeStruct_KawaiiPhysicsSettings_1                        (NoDestructor)
// struct FKawaiiPhysicsSettings      K2Node_MakeStruct_KawaiiPhysicsSettings_2                        (NoDestructor)

void UABP_Player_Hair001_Implementation_C::ExecuteUbergraph_ABP_Player_Hair001_Implementation(int32 EntryPoint, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings_1, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair001_Implementation_C", "ExecuteUbergraph_ABP_Player_Hair001_Implementation");

	Params::UABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_KawaiiPhysicsSettings = K2Node_MakeStruct_KawaiiPhysicsSettings;
	Parms.K2Node_MakeStruct_KawaiiPhysicsSettings_1 = K2Node_MakeStruct_KawaiiPhysicsSettings_1;
	Parms.K2Node_MakeStruct_KawaiiPhysicsSettings_2 = K2Node_MakeStruct_KawaiiPhysicsSettings_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


