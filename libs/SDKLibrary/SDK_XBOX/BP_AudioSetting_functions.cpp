#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AudioSetting.BP_AudioSetting_C
// (None)

class UClass* UBP_AudioSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AudioSetting_C");

	return Clss;
}


// BP_AudioSetting_C BP_AudioSetting.Default__BP_AudioSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AudioSetting_C* UBP_AudioSetting_C::GetDefaultObj()
{
	static class UBP_AudioSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AudioSetting_C*>(UBP_AudioSetting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AudioSetting.BP_AudioSetting_C.IsAudioBusMute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EPalAudioBus            AudioBus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMuteFromMap_Find                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMuteFromMap_IsMute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AudioSetting_C::IsAudioBusMute(enum class EPalAudioBus AudioBus, bool CallFunc_IsMuteFromMap_Find, bool CallFunc_IsMuteFromMap_IsMute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "IsAudioBusMute");

	Params::UBP_AudioSetting_C_IsAudioBusMute_Params Parms{};

	Parms.AudioBus = AudioBus;
	Parms.CallFunc_IsMuteFromMap_Find = CallFunc_IsMuteFromMap_Find;
	Parms.CallFunc_IsMuteFromMap_IsMute = CallFunc_IsMuteFromMap_IsMute;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AudioSetting.BP_AudioSetting_C.SetAudioBusMute_Impl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAudioBus            AudioBus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMute                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PrevMute                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMuteFromMap_Find                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMuteFromMap_IsMute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::SetAudioBusMute_Impl(enum class EPalAudioBus AudioBus, bool IsMute, bool PrevMute, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_IsMuteFromMap_Find, bool CallFunc_IsMuteFromMap_IsMute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "SetAudioBusMute_Impl");

	Params::UBP_AudioSetting_C_SetAudioBusMute_Impl_Params Parms{};

	Parms.AudioBus = AudioBus;
	Parms.IsMute = IsMute;
	Parms.PrevMute = PrevMute;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_IsMuteFromMap_Find = CallFunc_IsMuteFromMap_Find;
	Parms.CallFunc_IsMuteFromMap_IsMute = CallFunc_IsMuteFromMap_IsMute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioSetting.BP_AudioSetting_C.Set Audio Bus Volume Impl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAudioBus            AudioBus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PrevVolume                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioBusVolume_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioBusVolume_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAudioBusVolume_Volume_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_PrevVolume_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::Set_Audio_Bus_Volume_Impl(enum class EPalAudioBus AudioBus, class FName Key, double Volume, double PrevVolume, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_GetAudioBusVolume_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, float CallFunc_GetAudioBusVolume_ReturnValue_1, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast, float CallFunc_SetAudioBusVolume_Volume_ImplicitCast, double K2Node_VariableSet_PrevVolume_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "Set Audio Bus Volume Impl");

	Params::UBP_AudioSetting_C_Set_Audio_Bus_Volume_Impl_Params Parms{};

	Parms.AudioBus = AudioBus;
	Parms.Key = Key;
	Parms.Volume = Volume;
	Parms.PrevVolume = PrevVolume;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetAudioBusVolume_ReturnValue = CallFunc_GetAudioBusVolume_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetAudioBusVolume_ReturnValue_1 = CallFunc_GetAudioBusVolume_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetAudioBusVolume_Volume_ImplicitCast = CallFunc_SetAudioBusVolume_Volume_ImplicitCast;
	Parms.K2Node_VariableSet_PrevVolume_ImplicitCast = K2Node_VariableSet_PrevVolume_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioSetting.BP_AudioSetting_C.UpdateAudioVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAudioBus            AudioBus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BusVolume                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioBusVolume_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_PalAudioBusToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMuteFromMap_Find                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMuteFromMap_IsMute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMuteFromMap_Find_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMuteFromMap_IsMute_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Value_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::UpdateAudioVolume(enum class EPalAudioBus AudioBus, double BusVolume, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_GetAudioBusVolume_ReturnValue, double CallFunc_FClamp_ReturnValue, const class FString& CallFunc_PalAudioBusToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsMuteFromMap_Find, bool CallFunc_IsMuteFromMap_IsMute, bool CallFunc_IsMuteFromMap_Find_1, bool CallFunc_IsMuteFromMap_IsMute_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "UpdateAudioVolume");

	Params::UBP_AudioSetting_C_UpdateAudioVolume_Params Parms{};

	Parms.AudioBus = AudioBus;
	Parms.BusVolume = BusVolume;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetAudioBusVolume_ReturnValue = CallFunc_GetAudioBusVolume_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_PalAudioBusToString_ReturnValue = CallFunc_PalAudioBusToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsMuteFromMap_Find = CallFunc_IsMuteFromMap_Find;
	Parms.CallFunc_IsMuteFromMap_IsMute = CallFunc_IsMuteFromMap_IsMute;
	Parms.CallFunc_IsMuteFromMap_Find_1 = CallFunc_IsMuteFromMap_Find_1;
	Parms.CallFunc_IsMuteFromMap_IsMute_1 = CallFunc_IsMuteFromMap_IsMute_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_Value_ImplicitCast = CallFunc_FClamp_Value_ImplicitCast;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioSetting.BP_AudioSetting_C.Initialize_Impl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAudioBus            AudioBus                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMuteFromDebugSetting_IsMute                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::Initialize_Impl(enum class EPalAudioBus AudioBus, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_IsMuteFromDebugSetting_IsMute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "Initialize_Impl");

	Params::UBP_AudioSetting_C_Initialize_Impl_Params Parms{};

	Parms.AudioBus = AudioBus;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_IsMuteFromDebugSetting_IsMute = CallFunc_IsMuteFromDebugSetting_IsMute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioSetting.BP_AudioSetting_C.IsMuteFromDebugSetting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EPalAudioBus            AudioBus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMute                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::IsMuteFromDebugSetting(enum class EPalAudioBus AudioBus, bool* IsMute, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "IsMuteFromDebugSetting");

	Params::UBP_AudioSetting_C_IsMuteFromDebugSetting_Params Parms{};

	Parms.AudioBus = AudioBus;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue_1 = CallFunc_GetPalDebugSetting_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMute != nullptr)
		*IsMute = Parms.IsMute;

}


// Function BP_AudioSetting.BP_AudioSetting_C.GetVolumeFromDebugSetting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EPalAudioBus            AudioBus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Volume_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::GetVolumeFromDebugSetting(enum class EPalAudioBus AudioBus, double* Volume, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_FunctionResult_Volume_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "GetVolumeFromDebugSetting");

	Params::UBP_AudioSetting_C_GetVolumeFromDebugSetting_Params Parms{};

	Parms.AudioBus = AudioBus;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue_1 = CallFunc_GetPalDebugSetting_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_FunctionResult_Volume_ImplicitCast = K2Node_FunctionResult_Volume_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;

}


// Function BP_AudioSetting.BP_AudioSetting_C.IsMuteFromMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EPalAudioBus            AuduiBus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EPalAudioBus, bool>ValMap                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMute                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::IsMuteFromMap(enum class EPalAudioBus AuduiBus, TMap<enum class EPalAudioBus, bool> ValMap, bool* Find, bool* IsMute, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "IsMuteFromMap");

	Params::UBP_AudioSetting_C_IsMuteFromMap_Params Parms{};

	Parms.AuduiBus = AuduiBus;
	Parms.ValMap = ValMap;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Find != nullptr)
		*Find = Parms.Find;

	if (IsMute != nullptr)
		*IsMute = Parms.IsMute;

}


// Function BP_AudioSetting.BP_AudioSetting_C.GetVolumeFromMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EPalAudioBus            AuduiBus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EPalAudioBus, double>ValMap                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::GetVolumeFromMap(enum class EPalAudioBus AuduiBus, TMap<enum class EPalAudioBus, double> ValMap, bool* Find, double* Volume, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "GetVolumeFromMap");

	Params::UBP_AudioSetting_C_GetVolumeFromMap_Params Parms{};

	Parms.AuduiBus = AuduiBus;
	Parms.ValMap = ValMap;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Find != nullptr)
		*Find = Parms.Find;

	if (Volume != nullptr)
		*Volume = Parms.Volume;

}


// Function BP_AudioSetting.BP_AudioSetting_C.SetMuteToMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAudioBus            AudioBus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMute                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EPalAudioBus, bool>MuteMap                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::SetMuteToMap(enum class EPalAudioBus AudioBus, bool IsMute, TMap<enum class EPalAudioBus, bool>& MuteMap, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "SetMuteToMap");

	Params::UBP_AudioSetting_C_SetMuteToMap_Params Parms{};

	Parms.AudioBus = AudioBus;
	Parms.IsMute = IsMute;
	Parms.MuteMap = MuteMap;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioSetting.BP_AudioSetting_C.SetVolumeToMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAudioBus            AudioBus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EPalAudioBus, double>ValMap                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::SetVolumeToMap(enum class EPalAudioBus AudioBus, double Volume, TMap<enum class EPalAudioBus, double>& ValMap, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "SetVolumeToMap");

	Params::UBP_AudioSetting_C_SetVolumeToMap_Params Parms{};

	Parms.AudioBus = AudioBus;
	Parms.Volume = Volume;
	Parms.ValMap = ValMap;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioSetting.BP_AudioSetting_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AudioSetting_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AudioSetting.BP_AudioSetting_C.Tick_BP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::Tick_BP(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "Tick_BP");

	Params::UBP_AudioSetting_C_Tick_BP_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioSetting.BP_AudioSetting_C.SetAudioBusMute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAudioBus            AudioBus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMute                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::SetAudioBusMute(enum class EPalAudioBus AudioBus, bool IsMute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "SetAudioBusMute");

	Params::UBP_AudioSetting_C_SetAudioBusMute_Params Parms{};

	Parms.AudioBus = AudioBus;
	Parms.IsMute = IsMute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioSetting.BP_AudioSetting_C.SetAudioBusVolume
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAudioBus            AudioBus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::SetAudioBusVolume(enum class EPalAudioBus AudioBus, class FName& Key, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "SetAudioBusVolume");

	Params::UBP_AudioSetting_C_SetAudioBusVolume_Params Parms{};

	Parms.AudioBus = AudioBus;
	Parms.Key = Key;
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioSetting.BP_AudioSetting_C.ExecuteUbergraph_BP_AudioSetting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalAudioBus            K2Node_Event_AudioBus_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsMute                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalAudioBus            K2Node_Event_AudioBus                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Key                                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Volume                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Set_Audio_Bus_Volume_Impl_Volume_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioSetting_C::ExecuteUbergraph_BP_AudioSetting(int32 EntryPoint, float K2Node_Event_DeltaTime, enum class EPalAudioBus K2Node_Event_AudioBus_1, bool K2Node_Event_IsMute, enum class EPalAudioBus K2Node_Event_AudioBus, class FName K2Node_Event_Key, float K2Node_Event_Volume, double CallFunc_Set_Audio_Bus_Volume_Impl_Volume_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioSetting_C", "ExecuteUbergraph_BP_AudioSetting");

	Params::UBP_AudioSetting_C_ExecuteUbergraph_BP_AudioSetting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_Event_AudioBus_1 = K2Node_Event_AudioBus_1;
	Parms.K2Node_Event_IsMute = K2Node_Event_IsMute;
	Parms.K2Node_Event_AudioBus = K2Node_Event_AudioBus;
	Parms.K2Node_Event_Key = K2Node_Event_Key;
	Parms.K2Node_Event_Volume = K2Node_Event_Volume;
	Parms.CallFunc_Set_Audio_Bus_Volume_Impl_Volume_ImplicitCast = CallFunc_Set_Audio_Bus_Volume_Impl_Volume_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


