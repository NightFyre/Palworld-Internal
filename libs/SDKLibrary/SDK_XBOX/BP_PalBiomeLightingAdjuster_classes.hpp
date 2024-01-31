#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x150 - 0xA0)
// BlueprintGeneratedClass BP_PalBiomeLightingAdjuster.BP_PalBiomeLightingAdjuster_C
class UBP_PalBiomeLightingAdjuster_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APPSkyCreator*                         SkyCreator;                                        // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Rayleigh_Scattering;                               // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Rayleigh_Exponential_Distribution;                 // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Light_Albedo;                                      // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Light_Color;                                       // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Transition_Speed;                                  // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Rate;                                              // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Overlapped;                                     // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Biome_Change_Processing;                        // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Override_SkyLight_Intensity;                    // 0xFA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44DB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SkyLight_Intensity;                                // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Current_Rayleigh_Scattering;                       // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Current_Rayleigh_Exponential_Distribution;         // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Current_Light_Albedo;                              // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Current_Light_Color;                               // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Current_SkyLight_Intensity;                        // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PalBiomeLightingAdjuster_C*        Parent_Volume;                                     // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PalBiomeLightingAdjuster_C* GetDefaultObj();

	void TickBiomeAdjuster(double DeltaTime, double Target_SkyLight_Intensity, const struct FLinearColor& Target_Light_Color, const struct FLinearColor& Target_Light_Albedo, double Target_Rayleigh_Exponential_Distribution, const struct FLinearColor& Target_Rayleigh_Scattering, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, const struct FPPSkyCreatorWeatherSettings& CallFunc_GetWeatherSettings_ReturnValue, double CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double K2Node_VariableSet_target_SkyLight_Intensity_ImplicitCast, double K2Node_VariableSet_target_SkyLight_Intensity_ImplicitCast_1, double K2Node_VariableSet_target_Rayleigh_Exponential_Distribution_ImplicitCast, double K2Node_VariableSet_Current_SkyLight_Intensity_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_1, float CallFunc_SetRayleighExponentialDistribution_NewValue_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_2, double K2Node_VariableSet_Current_Rayleigh_Exponential_Distribution_ImplicitCast);
	void OnEndOverlap(bool CallFunc_IsValid_ReturnValue);
	void OnBeginOverlap(bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PalBiomeLightingAdjuster(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, class APPSkyCreator* CallFunc_GetActorOfClass_ReturnValue, TArray<class ABP_PalBiomeTriggerBox_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_PalBiomeTriggerBox_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue, class UBP_PalBiomeLightingAdjuster_C* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_TickBiomeAdjuster_deltaTime_ImplicitCast);
};

}


