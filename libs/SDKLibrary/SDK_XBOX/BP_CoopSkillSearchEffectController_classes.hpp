#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x68 - 0x28)
// BlueprintGeneratedClass BP_CoopSkillSearchEffectController.BP_CoopSkillSearchEffectController_C
class UBP_CoopSkillSearchEffectController_C : public UPalCoopSkillSearchEffectController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       FadeOutSec;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutElapsed;                                    // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEffectExtends;                                   // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEffectFadeOut;                                   // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4451[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SearchRadiusFrom;                                  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SearchRadiusTo;                                    // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExtSearchRadiusPerSec;                             // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SearchRadiusElapsed;                               // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CoopSkillSearchEffectController_C* GetDefaultObj();

	bool IsRunning(bool CallFunc_BooleanOR_ReturnValue);
	bool IsFinished(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void GetCurrentSearchRadius(double* CurrentRadius, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue);
	void ProcTick(double DeltaTime, bool CallFunc_IsFinished_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetCurrentSearchRadius_CurrentRadius);
	void ProcStart(const struct FVector& Origin, double RadiusFrom, double RadiusTo, double ExtRadiusPerSec, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2);
	void FadeOut(double DeltaTime, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast);
	void ExtendEffect(double DeltaTime, double CurrentSearchRadius, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast);
	void Start(struct FVector& Origin, float RadiusFrom, float RadiusTo, float ExtRadiusPerSec);
	void Tick(float DeltaTime);
	void End();
	void ExecuteUbergraph_BP_CoopSkillSearchEffectController(int32 EntryPoint, const struct FVector& K2Node_Event_Origin, float K2Node_Event_RadiusFrom, float K2Node_Event_RadiusTo, float K2Node_Event_ExtRadiusPerSec, float K2Node_Event_DeltaTime, int32 CallFunc_PostEventAtLocation_ReturnValue, double CallFunc_ProcStart_RadiusFrom_ImplicitCast, double CallFunc_ProcStart_RadiusTo_ImplicitCast, double CallFunc_ProcStart_ExtRadiusPerSec_ImplicitCast, double CallFunc_ProcTick_DeltaTime_ImplicitCast);
};

}


