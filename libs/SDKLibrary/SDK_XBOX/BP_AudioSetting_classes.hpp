#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x198 (0x268 - 0xD0)
// BlueprintGeneratedClass BP_AudioSetting.BP_AudioSetting_C
class UBP_AudioSetting_C : public UPalAudioSettingSystem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<enum class EPalAudioBus, double>        BusVolumes;                                        // 0xD8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EPalAudioBus, double>        BusVolumes_Debug;                                  // 0x128(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EPalAudioBus, bool>          BusMute;                                           // 0x178(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EPalAudioBus, bool>          BusMute_Debug;                                     // 0x1C8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EPalAudioBus, struct FFloatContainer_FloatPair> BusVolumes_0;                                      // 0x218(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_AudioSetting_C* GetDefaultObj();

	bool IsAudioBusMute(enum class EPalAudioBus AudioBus, bool CallFunc_IsMuteFromMap_Find, bool CallFunc_IsMuteFromMap_IsMute);
	void SetAudioBusMute_Impl(enum class EPalAudioBus AudioBus, bool IsMute, bool PrevMute, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_IsMuteFromMap_Find, bool CallFunc_IsMuteFromMap_IsMute);
	void Set_Audio_Bus_Volume_Impl(enum class EPalAudioBus AudioBus, class FName Key, double Volume, double PrevVolume, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_GetAudioBusVolume_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, float CallFunc_GetAudioBusVolume_ReturnValue_1, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast, float CallFunc_SetAudioBusVolume_Volume_ImplicitCast, double K2Node_VariableSet_PrevVolume_ImplicitCast);
	void UpdateAudioVolume(enum class EPalAudioBus AudioBus, double BusVolume, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_GetAudioBusVolume_ReturnValue, double CallFunc_FClamp_ReturnValue, const class FString& CallFunc_PalAudioBusToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsMuteFromMap_Find, bool CallFunc_IsMuteFromMap_IsMute, bool CallFunc_IsMuteFromMap_Find_1, bool CallFunc_IsMuteFromMap_IsMute_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void Initialize_Impl(enum class EPalAudioBus AudioBus, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_IsMuteFromDebugSetting_IsMute);
	void IsMuteFromDebugSetting(enum class EPalAudioBus AudioBus, bool* IsMute, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void GetVolumeFromDebugSetting(enum class EPalAudioBus AudioBus, double* Volume, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_FunctionResult_Volume_ImplicitCast);
	void IsMuteFromMap(enum class EPalAudioBus AuduiBus, TMap<enum class EPalAudioBus, bool> ValMap, bool* Find, bool* IsMute, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void GetVolumeFromMap(enum class EPalAudioBus AuduiBus, TMap<enum class EPalAudioBus, double> ValMap, bool* Find, double* Volume, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetMuteToMap(enum class EPalAudioBus AudioBus, bool IsMute, TMap<enum class EPalAudioBus, bool>& MuteMap, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Contains_ReturnValue);
	void SetVolumeToMap(enum class EPalAudioBus AudioBus, double Volume, TMap<enum class EPalAudioBus, double>& ValMap, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Contains_ReturnValue);
	void Initialize();
	void Tick_BP(float DeltaTime);
	void SetAudioBusMute(enum class EPalAudioBus AudioBus, bool IsMute);
	void SetAudioBusVolume(enum class EPalAudioBus AudioBus, class FName& Key, float Volume);
	void ExecuteUbergraph_BP_AudioSetting(int32 EntryPoint, float K2Node_Event_DeltaTime, enum class EPalAudioBus K2Node_Event_AudioBus_1, bool K2Node_Event_IsMute, enum class EPalAudioBus K2Node_Event_AudioBus, class FName K2Node_Event_Key, float K2Node_Event_Volume, double CallFunc_Set_Audio_Bus_Volume_Impl_Volume_ImplicitCast);
};

}


