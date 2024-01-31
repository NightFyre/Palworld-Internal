#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x70 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_Dead.BP_VisualEffect_Dead_C
class UBP_VisualEffect_Dead_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_Dead_C* GetDefaultObj();

	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void ExecuteUbergraph_BP_VisualEffect_Dead(int32 EntryPoint, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetMainMeshMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetMainMeshMaterials_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


