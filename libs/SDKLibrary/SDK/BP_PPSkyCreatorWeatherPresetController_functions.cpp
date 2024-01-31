#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C
// (Actor)

class UClass* ABP_PPSkyCreatorWeatherPresetController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PPSkyCreatorWeatherPresetController_C");

	return Clss;
}


// BP_PPSkyCreatorWeatherPresetController_C BP_PPSkyCreatorWeatherPresetController.Default__BP_PPSkyCreatorWeatherPresetController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PPSkyCreatorWeatherPresetController_C* ABP_PPSkyCreatorWeatherPresetController_C::GetDefaultObj()
{
	static class ABP_PPSkyCreatorWeatherPresetController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PPSkyCreatorWeatherPresetController_C*>(ABP_PPSkyCreatorWeatherPresetController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.GetPresets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPPSkyCreatorWeatherPreset*  CurrentPreset                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPPSkyCreatorWeatherPreset*  NextPreset                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Alpha                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PresetIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TargetTime                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Next                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Current                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PPSkyCreatorTimePreset   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_PPSkyCreatorTimePreset   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PPSkyCreatorTimePreset   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PPSkyCreatorWeatherPresetController_C::GetPresets(double Time, class UPPSkyCreatorWeatherPreset** CurrentPreset, class UPPSkyCreatorWeatherPreset** NextPreset, double* Alpha, int32* PresetIndex, double TargetTime, int32 Next, int32 Current, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FS_PPSkyCreatorTimePreset& CallFunc_Array_Get_Item, const struct FS_PPSkyCreatorTimePreset& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_PPSkyCreatorTimePreset& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PPSkyCreatorWeatherPresetController_C", "GetPresets");

	Params::ABP_PPSkyCreatorWeatherPresetController_C_GetPresets_Params Parms{};

	Parms.Time = Time;
	Parms.TargetTime = TargetTime;
	Parms.Next = Next;
	Parms.Current = Current;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentPreset != nullptr)
		*CurrentPreset = Parms.CurrentPreset;

	if (NextPreset != nullptr)
		*NextPreset = Parms.NextPreset;

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;

	if (PresetIndex != nullptr)
		*PresetIndex = Parms.PresetIndex;

}


// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.GetPrePreset
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPPSkyCreatorWeatherPreset*  Pre                                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PPSkyCreatorTimePreset   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PPSkyCreatorTimePreset   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PPSkyCreatorWeatherPresetController_C::GetPrePreset(int32 Index, class UPPSkyCreatorWeatherPreset** Pre, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FS_PPSkyCreatorTimePreset& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FS_PPSkyCreatorTimePreset& CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PPSkyCreatorWeatherPresetController_C", "GetPrePreset");

	Params::ABP_PPSkyCreatorWeatherPresetController_C_GetPrePreset_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Pre != nullptr)
		*Pre = Parms.Pre;

}


// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PPSkyCreatorWeatherPresetController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PPSkyCreatorWeatherPresetController_C", "ReceiveTick");

	Params::ABP_PPSkyCreatorWeatherPresetController_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PPSkyCreatorWeatherPresetController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PPSkyCreatorWeatherPresetController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C.ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTime_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPPSkyCreatorWeatherPreset*  CallFunc_GetPresets_CurrentPreset                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPPSkyCreatorWeatherPreset*  CallFunc_GetPresets_NextPreset                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPresets_Alpha                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPresets_PresetIndex                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPPSkyCreatorWeatherSettingsCallFunc_GetWeatherPresetSettings_ReturnValue                    (NoDestructor)
// struct FPPSkyCreatorWeatherSettingsCallFunc_GetWeatherPresetSettings_ReturnValue_1                  (NoDestructor)
// double                             CallFunc_GetPresets_Time_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LerpWeatherSettings_Alpha_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PPSkyCreatorWeatherPresetController_C::ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetTime_ReturnValue, class UPPSkyCreatorWeatherPreset* CallFunc_GetPresets_CurrentPreset, class UPPSkyCreatorWeatherPreset* CallFunc_GetPresets_NextPreset, double CallFunc_GetPresets_Alpha, int32 CallFunc_GetPresets_PresetIndex, const struct FPPSkyCreatorWeatherSettings& CallFunc_GetWeatherPresetSettings_ReturnValue, const struct FPPSkyCreatorWeatherSettings& CallFunc_GetWeatherPresetSettings_ReturnValue_1, double CallFunc_GetPresets_Time_ImplicitCast, float CallFunc_LerpWeatherSettings_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PPSkyCreatorWeatherPresetController_C", "ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController");

	Params::ABP_PPSkyCreatorWeatherPresetController_C_ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetTime_ReturnValue = CallFunc_GetTime_ReturnValue;
	Parms.CallFunc_GetPresets_CurrentPreset = CallFunc_GetPresets_CurrentPreset;
	Parms.CallFunc_GetPresets_NextPreset = CallFunc_GetPresets_NextPreset;
	Parms.CallFunc_GetPresets_Alpha = CallFunc_GetPresets_Alpha;
	Parms.CallFunc_GetPresets_PresetIndex = CallFunc_GetPresets_PresetIndex;
	Parms.CallFunc_GetWeatherPresetSettings_ReturnValue = CallFunc_GetWeatherPresetSettings_ReturnValue;
	Parms.CallFunc_GetWeatherPresetSettings_ReturnValue_1 = CallFunc_GetWeatherPresetSettings_ReturnValue_1;
	Parms.CallFunc_GetPresets_Time_ImplicitCast = CallFunc_GetPresets_Time_ImplicitCast;
	Parms.CallFunc_LerpWeatherSettings_Alpha_ImplicitCast = CallFunc_LerpWeatherSettings_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


