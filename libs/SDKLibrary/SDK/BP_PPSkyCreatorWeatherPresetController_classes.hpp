#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2E0 - 0x290)
// BlueprintGeneratedClass BP_PPSkyCreatorWeatherPresetController.BP_PPSkyCreatorWeatherPresetController_C
class ABP_PPSkyCreatorWeatherPresetController_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APPSkyCreator*                         SkyCreatorTarget;                                  // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_PPSkyCreatorTimePreset>     Weather_Presets;                                   // 0x2A8(0x10)(Edit, BlueprintVisible)
	double                                       Interpolation_Duration;                            // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time;                                              // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Alpha;                                             // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPPSkyCreatorWeatherPreset*            Preset;                                            // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPPSkyCreatorWeatherPreset*            Next_preset;                                       // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PPSkyCreatorWeatherPresetController_C* GetDefaultObj();

	void GetPresets(double Time, class UPPSkyCreatorWeatherPreset** CurrentPreset, class UPPSkyCreatorWeatherPreset** NextPreset, double* Alpha, int32* PresetIndex, double TargetTime, int32 Next, int32 Current, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FS_PPSkyCreatorTimePreset& CallFunc_Array_Get_Item, const struct FS_PPSkyCreatorTimePreset& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_PPSkyCreatorTimePreset& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetPrePreset(int32 Index, class UPPSkyCreatorWeatherPreset** Pre, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FS_PPSkyCreatorTimePreset& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FS_PPSkyCreatorTimePreset& CallFunc_Array_Get_Item_1);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetTime_ReturnValue, class UPPSkyCreatorWeatherPreset* CallFunc_GetPresets_CurrentPreset, class UPPSkyCreatorWeatherPreset* CallFunc_GetPresets_NextPreset, double CallFunc_GetPresets_Alpha, int32 CallFunc_GetPresets_PresetIndex, const struct FPPSkyCreatorWeatherSettings& CallFunc_GetWeatherPresetSettings_ReturnValue, const struct FPPSkyCreatorWeatherSettings& CallFunc_GetWeatherPresetSettings_ReturnValue_1, double CallFunc_GetPresets_Time_ImplicitCast, float CallFunc_LerpWeatherSettings_Alpha_ImplicitCast);
};

}


