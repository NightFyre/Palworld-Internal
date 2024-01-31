#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C
// (None)

class UClass* UBP_CoopSkillSearchEffectController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CoopSkillSearchEffectController_C");

	return Clss;
}


// BP_CoopSkillSearchEffectController_C BP_CoopSkillSearchEffectController.Default__BP_CoopSkillSearchEffectController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CoopSkillSearchEffectController_C* UBP_CoopSkillSearchEffectController_C::GetDefaultObj()
{
	static class UBP_CoopSkillSearchEffectController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CoopSkillSearchEffectController_C*>(UBP_CoopSkillSearchEffectController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_CoopSkillSearchEffectController_C::IsRunning(bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoopSkillSearchEffectController_C", "IsRunning");

	Params::UBP_CoopSkillSearchEffectController_C_IsRunning_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.IsFinished
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_CoopSkillSearchEffectController_C::IsFinished(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoopSkillSearchEffectController_C", "IsFinished");

	Params::UBP_CoopSkillSearchEffectController_C_IsFinished_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.GetCurrentSearchRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             CurrentRadius                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CoopSkillSearchEffectController_C::GetCurrentSearchRadius(double* CurrentRadius, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoopSkillSearchEffectController_C", "GetCurrentSearchRadius");

	Params::UBP_CoopSkillSearchEffectController_C_GetCurrentSearchRadius_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentRadius != nullptr)
		*CurrentRadius = Parms.CurrentRadius;

}


// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.ProcTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFinished_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetCurrentSearchRadius_CurrentRadius                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CoopSkillSearchEffectController_C::ProcTick(double DeltaTime, bool CallFunc_IsFinished_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetCurrentSearchRadius_CurrentRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoopSkillSearchEffectController_C", "ProcTick");

	Params::UBP_CoopSkillSearchEffectController_C_ProcTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_IsFinished_ReturnValue = CallFunc_IsFinished_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetCurrentSearchRadius_CurrentRadius = CallFunc_GetCurrentSearchRadius_CurrentRadius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.ProcStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Origin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RadiusFrom                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RadiusTo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ExtRadiusPerSec                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CoopSkillSearchEffectController_C::ProcStart(const struct FVector& Origin, double RadiusFrom, double RadiusTo, double ExtRadiusPerSec, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoopSkillSearchEffectController_C", "ProcStart");

	Params::UBP_CoopSkillSearchEffectController_C_ProcStart_Params Parms{};

	Parms.Origin = Origin;
	Parms.RadiusFrom = RadiusFrom;
	Parms.RadiusTo = RadiusTo;
	Parms.ExtRadiusPerSec = ExtRadiusPerSec;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CoopSkillSearchEffectController_C::FadeOut(double DeltaTime, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoopSkillSearchEffectController_C", "FadeOut");

	Params::UBP_CoopSkillSearchEffectController_C_FadeOut_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.ExtendEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentSearchRadius                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CoopSkillSearchEffectController_C::ExtendEffect(double DeltaTime, double CurrentSearchRadius, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoopSkillSearchEffectController_C", "ExtendEffect");

	Params::UBP_CoopSkillSearchEffectController_C_ExtendEffect_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CurrentSearchRadius = CurrentSearchRadius;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.Start
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     Origin                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RadiusFrom                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RadiusTo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ExtRadiusPerSec                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CoopSkillSearchEffectController_C::Start(struct FVector& Origin, float RadiusFrom, float RadiusTo, float ExtRadiusPerSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoopSkillSearchEffectController_C", "Start");

	Params::UBP_CoopSkillSearchEffectController_C_Start_Params Parms{};

	Parms.Origin = Origin;
	Parms.RadiusFrom = RadiusFrom;
	Parms.RadiusTo = RadiusTo;
	Parms.ExtRadiusPerSec = ExtRadiusPerSec;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CoopSkillSearchEffectController_C::Tick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoopSkillSearchEffectController_C", "Tick");

	Params::UBP_CoopSkillSearchEffectController_C_Tick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.End
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_CoopSkillSearchEffectController_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoopSkillSearchEffectController_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C.ExecuteUbergraph_BP_CoopSkillSearchEffectController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Origin                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RadiusFrom                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RadiusTo                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ExtRadiusPerSec                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ProcStart_RadiusFrom_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ProcStart_RadiusTo_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ProcStart_ExtRadiusPerSec_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ProcTick_DeltaTime_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CoopSkillSearchEffectController_C::ExecuteUbergraph_BP_CoopSkillSearchEffectController(int32 EntryPoint, const struct FVector& K2Node_Event_Origin, float K2Node_Event_RadiusFrom, float K2Node_Event_RadiusTo, float K2Node_Event_ExtRadiusPerSec, float K2Node_Event_DeltaTime, int32 CallFunc_PostEventAtLocation_ReturnValue, double CallFunc_ProcStart_RadiusFrom_ImplicitCast, double CallFunc_ProcStart_RadiusTo_ImplicitCast, double CallFunc_ProcStart_ExtRadiusPerSec_ImplicitCast, double CallFunc_ProcTick_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CoopSkillSearchEffectController_C", "ExecuteUbergraph_BP_CoopSkillSearchEffectController");

	Params::UBP_CoopSkillSearchEffectController_C_ExecuteUbergraph_BP_CoopSkillSearchEffectController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Origin = K2Node_Event_Origin;
	Parms.K2Node_Event_RadiusFrom = K2Node_Event_RadiusFrom;
	Parms.K2Node_Event_RadiusTo = K2Node_Event_RadiusTo;
	Parms.K2Node_Event_ExtRadiusPerSec = K2Node_Event_ExtRadiusPerSec;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_ProcStart_RadiusFrom_ImplicitCast = CallFunc_ProcStart_RadiusFrom_ImplicitCast;
	Parms.CallFunc_ProcStart_RadiusTo_ImplicitCast = CallFunc_ProcStart_RadiusTo_ImplicitCast;
	Parms.CallFunc_ProcStart_ExtRadiusPerSec_ImplicitCast = CallFunc_ProcStart_ExtRadiusPerSec_ImplicitCast;
	Parms.CallFunc_ProcTick_DeltaTime_ImplicitCast = CallFunc_ProcTick_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


