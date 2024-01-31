#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Player_Head.ABP_Player_Head_C
// (None)

class UClass* UABP_Player_Head_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Player_Head_C");

	return Clss;
}


// ABP_Player_Head_C ABP_Player_Head.Default__ABP_Player_Head_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Player_Head_C* UABP_Player_Head_C::GetDefaultObj()
{
	static class UABP_Player_Head_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Player_Head_C*>(UABP_Player_Head_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Player_Head.ABP_Player_Head_C.EyeLocationFix
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   EyeLocationFix                                                   (Parm, OutParm, NoDestructor)

void UABP_Player_Head_C::EyeLocationFix(const struct FPoseLink& InPose, struct FPoseLink* EyeLocationFix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Head_C", "EyeLocationFix");

	Params::UABP_Player_Head_C_EyeLocationFix_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (EyeLocationFix != nullptr)
		*EyeLocationFix = std::move(Parms.EyeLocationFix);

}


// Function ABP_Player_Head.ABP_Player_Head_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Head_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Head_C", "AnimGraph");

	Params::UABP_Player_Head_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Player_Head.ABP_Player_Head_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Player_Head_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Head_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Head.ABP_Player_Head_C.ExecuteUbergraph_ABP_Player_Head
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetSkeletalMeshAsset_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Head_C::ExecuteUbergraph_ABP_Player_Head(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Head_C", "ExecuteUbergraph_ABP_Player_Head");

	Params::UABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshAsset_ReturnValue = CallFunc_GetSkeletalMeshAsset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


