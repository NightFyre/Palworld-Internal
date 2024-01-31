#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xC0 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_SelfDestructEmissive.BP_VisualEffect_SelfDestructEmissive_C
class UBP_VisualEffect_SelfDestructEmissive_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FMaterialParameterInfo                Material_Parameter_Info;                           // 0x70(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBlinking;                                        // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_410F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ElapsedTime;                                       // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultEmissiveDuration;                           // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultNoEmissiveDuration;                         // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinEmissiveDuration;                               // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DecayRateOfEmissiveTime;                           // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEndAction;                                       // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4110[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     NiagaraEffect;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_SelfDestructEmissive_C* GetDefaultObj();

	void Initialize_Float_Parameters(float CallFunc_GetFloatParameter_ReturnValue, float CallFunc_GetFloatParameter_ReturnValue_1, float CallFunc_GetFloatParameter_ReturnValue_2, float CallFunc_GetFloatParameter_ReturnValue_3, float CallFunc_GetFloatParameter_DefaultValue_ImplicitCast, float CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_1, double K2Node_VariableSet_DecayRateOfEmissiveTime_ImplicitCast, double K2Node_VariableSet_MinEmissiveDuration_ImplicitCast, float CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_2, float CallFunc_GetFloatParameter_DefaultValue_ImplicitCast_3, double K2Node_VariableSet_DefaultNoEmissiveDuration_ImplicitCast, double K2Node_VariableSet_DefaultEmissiveDuration_ImplicitCast);
	void FlashWithAcceleration(double DeltaTime, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1);
	void SetOverlayMaterial(class UMaterialInterface* NewOverlayMaterial, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue);
	void SetEmissive(float Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetMainMeshMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnBeginVisualEffect();
	void TickVisualEffect(float DeltaTime);
	void OnEndVisualEffect();
	void ExecuteUbergraph_BP_VisualEffect_SelfDestructEmissive(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_FlashWithAcceleration_DeltaTime_ImplicitCast);
};

}


