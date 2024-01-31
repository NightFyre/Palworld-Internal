#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C
// (None)

class UClass* UBP_NPCInteractConditionFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPCInteractConditionFunctions_C");

	return Clss;
}


// BP_NPCInteractConditionFunctions_C BP_NPCInteractConditionFunctions.Default__BP_NPCInteractConditionFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_NPCInteractConditionFunctions_C* UBP_NPCInteractConditionFunctions_C::GetDefaultObj()
{
	static class UBP_NPCInteractConditionFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_NPCInteractConditionFunctions_C*>(UBP_NPCInteractConditionFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C.IsLive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalNPCInteractCondition*    Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwner_ReturnValue                                    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLive_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NPCInteractConditionFunctions_C::IsLive(class UPalNPCInteractCondition* Condition, class UObject* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsLive_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCInteractConditionFunctions_C", "IsLive");

	Params::UBP_NPCInteractConditionFunctions_C_IsLive_Params Parms{};

	Parms.Condition = Condition;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsLive_ReturnValue = CallFunc_IsLive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C.NoCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalNPCInteractCondition*    Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwner_ReturnValue                                    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       K2Node_DynamicCast_AsBP_NPCAIController                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetAIActionComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPawnAction*                 CallFunc_GetCurrentAction_BP_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCombatBase*      K2Node_DynamicCast_AsPal_AIAction_Combat_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NPCInteractConditionFunctions_C::NoCombat(class UPalNPCInteractCondition* Condition, class UObject* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess_1, class UPalAIActionComponent* CallFunc_GetAIActionComponent_ReturnValue, class UPawnAction* CallFunc_GetCurrentAction_BP_ReturnValue, class UPalAIActionCombatBase* K2Node_DynamicCast_AsPal_AIAction_Combat_Base, bool K2Node_DynamicCast_bSuccess_2, class UBP_AIAction_NPC_CombatBase_C* K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCInteractConditionFunctions_C", "NoCombat");

	Params::UBP_NPCInteractConditionFunctions_C_NoCombat_Params Parms{};

	Parms.Condition = Condition;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController = K2Node_DynamicCast_AsBP_NPCAIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAIActionComponent_ReturnValue = CallFunc_GetAIActionComponent_ReturnValue;
	Parms.CallFunc_GetCurrentAction_BP_ReturnValue = CallFunc_GetCurrentAction_BP_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Combat_Base = K2Node_DynamicCast_AsPal_AIAction_Combat_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base = K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C.IsOtomoSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalNPCInteractCondition*    Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetSpawnedOtomo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NPCInteractConditionFunctions_C::IsOtomoSpawned(class UPalNPCInteractCondition* Condition, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBP_OtomoPalHolderComponent_C* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCInteractConditionFunctions_C", "IsOtomoSpawned");

	Params::UBP_NPCInteractConditionFunctions_C_IsOtomoSpawned_Params Parms{};

	Parms.Condition = Condition;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_TryGetSpawnedOtomo_ReturnValue = CallFunc_TryGetSpawnedOtomo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C.HasItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalNPCInteractCondition*    Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                ItemIds                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RetVal                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CountItemNum_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NPCInteractConditionFunctions_C::HasItems(class UPalNPCInteractCondition* Condition, TArray<class FName>& ItemIds, int32 Num, int32 RetVal, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_CountItemNum_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCInteractConditionFunctions_C", "HasItems");

	Params::UBP_NPCInteractConditionFunctions_C_HasItems_Params Parms{};

	Parms.Condition = Condition;
	Parms.ItemIds = ItemIds;
	Parms.Num = Num;
	Parms.RetVal = RetVal;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CountItemNum_ReturnValue = CallFunc_CountItemNum_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C.HasItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalNPCInteractCondition*    Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CountItemNum_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NPCInteractConditionFunctions_C::HasItem(class UPalNPCInteractCondition* Condition, class FName ItemId, int32 Num, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, int32 CallFunc_CountItemNum_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCInteractConditionFunctions_C", "HasItem");

	Params::UBP_NPCInteractConditionFunctions_C_HasItem_Params Parms{};

	Parms.Condition = Condition;
	Parms.ItemId = ItemId;
	Parms.Num = Num;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_CountItemNum_ReturnValue = CallFunc_CountItemNum_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCInteractConditionFunctions.BP_NPCInteractConditionFunctions_C.TestFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalNPCInteractCondition*    Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwner_ReturnValue                                    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)

void UBP_NPCInteractConditionFunctions_C::TestFunction(class UPalNPCInteractCondition* Condition, class UObject* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCInteractConditionFunctions_C", "TestFunction");

	Params::UBP_NPCInteractConditionFunctions_C_TestFunction_Params Parms{};

	Parms.Condition = Condition;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


