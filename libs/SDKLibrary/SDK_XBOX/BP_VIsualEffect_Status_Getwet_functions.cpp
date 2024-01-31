#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VIsualEffect_Status_Getwet.BP_VIsualEffect_Status_Getwet_C
// (None)

class UClass* UBP_VIsualEffect_Status_Getwet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VIsualEffect_Status_Getwet_C");

	return Clss;
}


// BP_VIsualEffect_Status_Getwet_C BP_VIsualEffect_Status_Getwet.Default__BP_VIsualEffect_Status_Getwet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VIsualEffect_Status_Getwet_C* UBP_VIsualEffect_Status_Getwet_C::GetDefaultObj()
{
	static class UBP_VIsualEffect_Status_Getwet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VIsualEffect_Status_Getwet_C*>(UBP_VIsualEffect_Status_Getwet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VIsualEffect_Status_Getwet.BP_VIsualEffect_Status_Getwet_C.Set Wet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>CallFunc_GetMainMeshMaterials_ReturnValue                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VIsualEffect_Status_Getwet_C::Set_Wet(double Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetMainMeshMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VIsualEffect_Status_Getwet_C", "Set Wet");

	Params::UBP_VIsualEffect_Status_Getwet_C_Set_Wet_Params Parms{};

	Parms.Value = Value;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_GetMainMeshMaterials_ReturnValue = CallFunc_GetMainMeshMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VIsualEffect_Status_Getwet.BP_VIsualEffect_Status_Getwet_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VIsualEffect_Status_Getwet_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VIsualEffect_Status_Getwet_C", "OnBeginVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VIsualEffect_Status_Getwet.BP_VIsualEffect_Status_Getwet_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VIsualEffect_Status_Getwet_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VIsualEffect_Status_Getwet_C", "OnEndVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VIsualEffect_Status_Getwet.BP_VIsualEffect_Status_Getwet_C.TerminatingTickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VIsualEffect_Status_Getwet_C::TerminatingTickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VIsualEffect_Status_Getwet_C", "TerminatingTickVisualEffect");

	Params::UBP_VIsualEffect_Status_Getwet_C_TerminatingTickVisualEffect_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VIsualEffect_Status_Getwet.BP_VIsualEffect_Status_Getwet_C.OnDeleteInstance
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VIsualEffect_Status_Getwet_C::OnDeleteInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VIsualEffect_Status_Getwet_C", "OnDeleteInstance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VIsualEffect_Status_Getwet.BP_VIsualEffect_Status_Getwet_C.ExecuteUbergraph_BP_VIsualEffect_Status_Getwet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VIsualEffect_Status_Getwet_C::ExecuteUbergraph_BP_VIsualEffect_Status_Getwet(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalSkeletalMeshComponent* K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VIsualEffect_Status_Getwet_C", "ExecuteUbergraph_BP_VIsualEffect_Status_Getwet");

	Params::UBP_VIsualEffect_Status_Getwet_C_ExecuteUbergraph_BP_VIsualEffect_Status_Getwet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component = K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


