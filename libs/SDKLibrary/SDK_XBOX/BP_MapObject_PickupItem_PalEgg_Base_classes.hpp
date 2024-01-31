#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x3E0 - 0x3A8)
// BlueprintGeneratedClass BP_MapObject_PickupItem_PalEgg_Base.BP_MapObject_PickupItem_PalEgg_Base_C
class ABP_MapObject_PickupItem_PalEgg_Base_C : public APalMapObjectPalEgg
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_basket;                                         // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative* BP_InteractableSphere;                             // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Kurinuki_EggA;                                  // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       Scale;                                             // 0x3D8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MapObject_PickupItem_PalEgg_Base_C* GetDefaultObj();

	void OnRep_Scale(const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1);
	void GetPalEggScale(int32 PalRarity, double* PalEggScale, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FPalEggRankInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double K2Node_FunctionResult_PalEggScale_ImplicitCast, double K2Node_FunctionResult_PalEggScale_ImplicitCast_1);
	void SetupPalEggScale(class FName CallFunc_GetCharacterID_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetRarity_ReturnValue, double CallFunc_GetPalEggScale_PalEggScale);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base(int32 EntryPoint);
};

}


