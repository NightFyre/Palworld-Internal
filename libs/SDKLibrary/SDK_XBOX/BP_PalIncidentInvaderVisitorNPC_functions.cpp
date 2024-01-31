#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C
// (None)

class UClass* UBP_PalIncidentInvaderVisitorNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalIncidentInvaderVisitorNPC_C");

	return Clss;
}


// BP_PalIncidentInvaderVisitorNPC_C BP_PalIncidentInvaderVisitorNPC.Default__BP_PalIncidentInvaderVisitorNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalIncidentInvaderVisitorNPC_C* UBP_PalIncidentInvaderVisitorNPC_C::GetDefaultObj()
{
	static class UBP_PalIncidentInvaderVisitorNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalIncidentInvaderVisitorNPC_C*>(UBP_PalIncidentInvaderVisitorNPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.IsSquad
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalVisitorNPCDatabaseRow   CallFunc_Get_Chosen_Row_Data_ChosenRowData                       (None)

void UBP_PalIncidentInvaderVisitorNPC_C::IsSquad(bool* Result, const struct FPalVisitorNPCDatabaseRow& CallFunc_Get_Chosen_Row_Data_ChosenRowData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "IsSquad");

	Params::UBP_PalIncidentInvaderVisitorNPC_C_IsSquad_Params Parms{};

	Parms.CallFunc_Get_Chosen_Row_Data_ChosenRowData = CallFunc_Get_Chosen_Row_Data_ChosenRowData;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.Get Chosen Row Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalVisitorNPCDatabaseRow   ChosenRowData                                                    (Parm, OutParm)
// struct FPalVisitorNPCDatabaseRow   CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderVisitorNPC_C::Get_Chosen_Row_Data(struct FPalVisitorNPCDatabaseRow* ChosenRowData, const struct FPalVisitorNPCDatabaseRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "Get Chosen Row Data");

	Params::UBP_PalIncidentInvaderVisitorNPC_C_Get_Chosen_Row_Data_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ChosenRowData != nullptr)
		*ChosenRowData = std::move(Parms.ChosenRowData);

}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.OnAllCharacterSpawned
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APalAIController*>    MemberController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalVisitorNPCDatabaseRow   CallFunc_Get_Chosen_Row_Data_ChosenRowData                       (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetBaseCampPosition_Location                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_Visitor_C*K2Node_DynamicCast_AsBP_NPCAIController_Visitor                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_GetPalAIBlackboard_C>K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetMyBB_PalBrackboard                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisitorNPCReturnTimeMinutes_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetBaseCampPosition_Location_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderVisitorNPC_C::OnAllCharacterSpawned(TArray<class APalAIController*>& MemberController, int32 Temp_int_Array_Index_Variable, const struct FPalVisitorNPCDatabaseRow& CallFunc_Get_Chosen_Row_Data_ChosenRowData, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_GetTargetBaseCampPosition_Location, int32 CallFunc_Add_IntInt_ReturnValue, class APalAIController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_NPCAIController_Visitor_C* K2Node_DynamicCast_AsBP_NPCAIController_Visitor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess_1, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, int32 CallFunc_GetVisitorNPCReturnTimeMinutes_ReturnValue, const struct FVector& CallFunc_GetTargetBaseCampPosition_Location_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "OnAllCharacterSpawned");

	Params::UBP_PalIncidentInvaderVisitorNPC_C_OnAllCharacterSpawned_Params Parms{};

	Parms.MemberController = MemberController;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Get_Chosen_Row_Data_ChosenRowData = CallFunc_Get_Chosen_Row_Data_ChosenRowData;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetTargetBaseCampPosition_Location = CallFunc_GetTargetBaseCampPosition_Location;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController_Visitor = K2Node_DynamicCast_AsBP_NPCAIController_Visitor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard = K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetMyBB_PalBrackboard = CallFunc_GetMyBB_PalBrackboard;
	Parms.CallFunc_GetVisitorNPCReturnTimeMinutes_ReturnValue = CallFunc_GetVisitorNPCReturnTimeMinutes_ReturnValue;
	Parms.CallFunc_GetTargetBaseCampPosition_Location_1 = CallFunc_GetTargetBaseCampPosition_Location_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.Get Character Location Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalCharacterLocationTypeCharacterLocationType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderVisitorNPC_C::Get_Character_Location_Type(enum class EPalCharacterLocationType* CharacterLocationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "Get Character Location Type");

	Params::UBP_PalIncidentInvaderVisitorNPC_C_Get_Character_Location_Type_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharacterLocationType != nullptr)
		*CharacterLocationType = Parms.CharacterLocationType;

}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.GetInvaderStartPoint
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     RetVal                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinLength                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     BaseCampLocation                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*           CallFunc_GetTargetCampModel_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_GetCandidateStartLocations_Result                       (ReferenceParm)
// int32                              CallFunc_GetCandidateStartLocations_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSizeSquared_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PalIncidentInvaderVisitorNPC_C::GetInvaderStartPoint(struct FVector* Result, const struct FVector& RetVal, double MinLength, const struct FVector& BaseCampLocation, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPalBaseCampModel* CallFunc_GetTargetCampModel_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, TArray<struct FVector>& CallFunc_GetCandidateStartLocations_Result, int32 CallFunc_GetCandidateStartLocations_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "GetInvaderStartPoint");

	Params::UBP_PalIncidentInvaderVisitorNPC_C_GetInvaderStartPoint_Params Parms{};

	Parms.RetVal = RetVal;
	Parms.MinLength = MinLength;
	Parms.BaseCampLocation = BaseCampLocation;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetTargetCampModel_ReturnValue = CallFunc_GetTargetCampModel_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetCandidateStartLocations_Result = CallFunc_GetCandidateStartLocations_Result;
	Parms.CallFunc_GetCandidateStartLocations_ReturnValue = CallFunc_GetCandidateStartLocations_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_VSizeSquared_ReturnValue = CallFunc_VSizeSquared_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

	return Parms.ReturnValue;

}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.EndProc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalIncidentInvaderVisitorNPC_C::EndProc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "EndProc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C.StartProc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalIncidentInvaderVisitorNPC_C::StartProc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderVisitorNPC_C", "StartProc");



	UObject::ProcessEvent(Func, nullptr);

}

}


