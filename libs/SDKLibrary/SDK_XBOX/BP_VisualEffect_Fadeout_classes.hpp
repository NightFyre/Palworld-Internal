#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x80 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_Fadeout.BP_VisualEffect_Fadeout_C
class UBP_VisualEffect_Fadeout_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       FadeTime;                                          // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FadeTimer;                                         // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_Fadeout_C* GetDefaultObj();

	void TickVisualEffect(float DeltaTime);
	void OnBeginVisualEffect();
	void ExecuteUbergraph_BP_VisualEffect_Fadeout(int32 EntryPoint, float K2Node_Event_DeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_FClamp_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_GetFloatParameter_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetOpacityForCharacter_opacityIntensity_ImplicitCast, double K2Node_VariableSet_FadeTime_ImplicitCast);
};

}


