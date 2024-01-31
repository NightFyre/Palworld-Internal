#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AnimNotifyState_DisableFootIK.BP_AnimNotifyState_DisableFootIK_C
// (None)

class UClass* UBP_AnimNotifyState_DisableFootIK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AnimNotifyState_DisableFootIK_C");

	return Clss;
}


// BP_AnimNotifyState_DisableFootIK_C BP_AnimNotifyState_DisableFootIK.Default__BP_AnimNotifyState_DisableFootIK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AnimNotifyState_DisableFootIK_C* UBP_AnimNotifyState_DisableFootIK_C::GetDefaultObj()
{
	static class UBP_AnimNotifyState_DisableFootIK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AnimNotifyState_DisableFootIK_C*>(UBP_AnimNotifyState_DisableFootIK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AnimNotifyState_DisableFootIK.BP_AnimNotifyState_DisableFootIK_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindOwnerActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalFootIKComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

bool UBP_AnimNotifyState_DisableFootIK_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_FindOwnerActor_ReturnValue, class UPalFootIKComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnimNotifyState_DisableFootIK_C", "Received_NotifyEnd");

	Params::UBP_AnimNotifyState_DisableFootIK_C_Received_NotifyEnd_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CallFunc_FindOwnerActor_ReturnValue = CallFunc_FindOwnerActor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AnimNotifyState_DisableFootIK.BP_AnimNotifyState_DisableFootIK_C.Received_NotifyBegin
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindOwnerActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalFootIKComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

bool UBP_AnimNotifyState_DisableFootIK_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_FindOwnerActor_ReturnValue, class UPalFootIKComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnimNotifyState_DisableFootIK_C", "Received_NotifyBegin");

	Params::UBP_AnimNotifyState_DisableFootIK_C_Received_NotifyBegin_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = EventReference;
	Parms.CallFunc_FindOwnerActor_ReturnValue = CallFunc_FindOwnerActor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AnimNotifyState_DisableFootIK.BP_AnimNotifyState_DisableFootIK_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_AnimNotifyState_DisableFootIK_C::GetNotifyName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnimNotifyState_DisableFootIK_C", "GetNotifyName");

	Params::UBP_AnimNotifyState_DisableFootIK_C_GetNotifyName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


