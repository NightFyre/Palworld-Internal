#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C
// (None)

class UClass* UBP_VisualEffect_SelfDestructEmissive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VisualEffect_SelfDestructEmissive_C");

	return Clss;
}


// BP_VisualEffect_SelfDestructEmissive_C BP_VisualEffect_SelfDestructEmissive.Default__BP_VisualEffect_SelfDestructEmissive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VisualEffect_SelfDestructEmissive_C* UBP_VisualEffect_SelfDestructEmissive_C::GetDefaultObj()
{
	static class UBP_VisualEffect_SelfDestructEmissive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VisualEffect_SelfDestructEmissive_C*>(UBP_VisualEffect_SelfDestructEmissive_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.Initialize Float Parameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetFloatParameter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatParameter_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatParameter_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatParameter_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatParameter_DefaultValue_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DecayRateOfEmissiveTime_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MinEmissiveDuration_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DefaultNoEmissiveDuration_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DefaultEmissiveDuration_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_SelfDestructEmissive_C::Initialize_Float_Parameters(float CallFunc_GetFloatParameter_ReturnValue, float CallFunc_GetFloatParameter_ReturnValue_1, float CallFunc_GetFloatParameter_ReturnValue_2, float CallFunc_GetFloatParameter_ReturnValue_3, float CallFunc_GetFloatParameter_DefaultValue_ImplicitCast, float CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_1, double K2Node_VariableSet_DecayRateOfEmissiveTime_ImplicitCast, double K2Node_VariableSet_MinEmissiveDuration_ImplicitCast, float CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_2, float CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_3, double K2Node_VariableSet_DefaultNoEmissiveDuration_ImplicitCast, double K2Node_VariableSet_DefaultEmissiveDuration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SelfDestructEmissive_C", "Initialize Float Parameters");

	Params::UBP_VisualEffect_SelfDestructEmissive_C_Initialize_Float_Parameters_Params Parms{};

	Parms.CallFunc_GetFloatParameter_ReturnValue = CallFunc_GetFloatParameter_ReturnValue;
	Parms.CallFunc_GetFloatParameter_ReturnValue_1 = CallFunc_GetFloatParameter_ReturnValue_1;
	Parms.CallFunc_GetFloatParameter_ReturnValue_2 = CallFunc_GetFloatParameter_ReturnValue_2;
	Parms.CallFunc_GetFloatParameter_ReturnValue_3 = CallFunc_GetFloatParameter_ReturnValue_3;
	Parms.CallFunc_GetFloatParameter_DefaultValue_ImplicitCast = CallFunc_GetFloatParameter_DefaultValue_ImplicitCast;
	Parms.CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_1 = CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_1;
	Parms.K2Node_VariableSet_DecayRateOfEmissiveTime_ImplicitCast = K2Node_VariableSet_DecayRateOfEmissiveTime_ImplicitCast;
	Parms.K2Node_VariableSet_MinEmissiveDuration_ImplicitCast = K2Node_VariableSet_MinEmissiveDuration_ImplicitCast;
	Parms.CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_2 = CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_2;
	Parms.CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_3 = CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_3;
	Parms.K2Node_VariableSet_DefaultNoEmissiveDuration_ImplicitCast = K2Node_VariableSet_DefaultNoEmissiveDuration_ImplicitCast;
	Parms.K2Node_VariableSet_DefaultEmissiveDuration_ImplicitCast = K2Node_VariableSet_DefaultEmissiveDuration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.FlashWithAcceleration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_SelfDestructEmissive_C::FlashWithAcceleration(double DeltaTime, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SelfDestructEmissive_C", "FlashWithAcceleration");

	Params::UBP_VisualEffect_SelfDestructEmissive_C_FlashWithAcceleration_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.SetOverlayMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          NewOverlayMaterial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_SelfDestructEmissive_C::SetOverlayMaterial(class UMaterialInterface* NewOverlayMaterial, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SelfDestructEmissive_C", "SetOverlayMaterial");

	Params::UBP_VisualEffect_SelfDestructEmissive_C_SetOverlayMaterial_Params Parms{};

	Parms.NewOverlayMaterial = NewOverlayMaterial;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.SetEmissive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>CallFunc_GetMainMeshMaterials_ReturnValue                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_SelfDestructEmissive_C::SetEmissive(float Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetMainMeshMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SelfDestructEmissive_C", "SetEmissive");

	Params::UBP_VisualEffect_SelfDestructEmissive_C_SetEmissive_Params Parms{};

	Parms.Value = Value;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMainMeshMaterials_ReturnValue = CallFunc_GetMainMeshMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_SelfDestructEmissive_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SelfDestructEmissive_C", "OnBeginVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.TickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_SelfDestructEmissive_C::TickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SelfDestructEmissive_C", "TickVisualEffect");

	Params::UBP_VisualEffect_SelfDestructEmissive_C_TickVisualEffect_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_SelfDestructEmissive_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SelfDestructEmissive_C", "OnEndVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C.ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FlashWithAcceleration_DeltaTime_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_SelfDestructEmissive_C::ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_FlashWithAcceleration_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SelfDestructEmissive_C", "ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive");

	Params::UBP_VisualEffect_SelfDestructEmissive_C_ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_FlashWithAcceleration_DeltaTime_ImplicitCast = CallFunc_FlashWithAcceleration_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


