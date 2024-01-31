#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InGamePalStatusModel.BP_InGamePalStatusModel_C
// (None)

class UClass* UBP_InGamePalStatusModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InGamePalStatusModel_C");

	return Clss;
}


// BP_InGamePalStatusModel_C BP_InGamePalStatusModel.Default__BP_InGamePalStatusModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InGamePalStatusModel_C* UBP_InGamePalStatusModel_C::GetDefaultObj()
{
	static class UBP_InGamePalStatusModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InGamePalStatusModel_C*>(UBP_InGamePalStatusModel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InGamePalStatusModel.BP_InGamePalStatusModel_C.SetupSingle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterHandle*>Handles                                                          (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InGamePalStatusModel_C::SetupSingle(class UPalIndividualCharacterHandle* Handle, const TArray<class UPalIndividualCharacterHandle*>& Handles, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InGamePalStatusModel_C", "SetupSingle");

	Params::UBP_InGamePalStatusModel_C_SetupSingle_Params Parms{};

	Parms.Handle = Handle;
	Parms.Handles = Handles;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InGamePalStatusModel.BP_InGamePalStatusModel_C.SetupForOtomo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterHandle*>Handles                                                          (Edit, BlueprintVisible)
// class UBP_OtomoPalHolderComponent_C*OtomoHolder                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>CallFunc_GetSlots_Slots                                          (ReferenceParm)
// class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandle_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InGamePalStatusModel_C::SetupForOtomo(const TArray<class UPalIndividualCharacterHandle*>& Handles, class UBP_OtomoPalHolderComponent_C* OtomoHolder, int32 Temp_int_Array_Index_Variable, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetSlots_Slots, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InGamePalStatusModel_C", "SetupForOtomo");

	Params::UBP_InGamePalStatusModel_C_SetupForOtomo_Params Parms{};

	Parms.Handles = Handles;
	Parms.OtomoHolder = OtomoHolder;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSlots_Slots = CallFunc_GetSlots_Slots;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetHandle_ReturnValue = CallFunc_GetHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component = K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


