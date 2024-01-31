#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BP_InGamePalStatusModel.BP_InGamePalStatusModel_C
class UBP_InGamePalStatusModel_C : public UPalUIStatusModel
{
public:

	static class UClass* StaticClass();
	static class UBP_InGamePalStatusModel_C* GetDefaultObj();

	void SetupSingle(class UPalIndividualCharacterHandle* Handle, const TArray<class UPalIndividualCharacterHandle*>& Handles, int32 CallFunc_Array_Add_ReturnValue);
	void SetupForOtomo(const TArray<class UPalIndividualCharacterHandle*>& Handles, class UBP_OtomoPalHolderComponent_C* OtomoHolder, int32 Temp_int_Array_Index_Variable, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetSlots_Slots, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}


