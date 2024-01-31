#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C
// (Actor)

class UClass* ABP_PalRandomIncidentNPCSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRandomIncidentNPCSpawner_C");

	return Clss;
}


// BP_PalRandomIncidentNPCSpawner_C BP_PalRandomIncidentNPCSpawner.Default__BP_PalRandomIncidentNPCSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalRandomIncidentNPCSpawner_C* ABP_PalRandomIncidentNPCSpawner_C::GetDefaultObj()
{
	static class ABP_PalRandomIncidentNPCSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalRandomIncidentNPCSpawner_C*>(ABP_PalRandomIncidentNPCSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetGroupNo
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterHandle*IndividualHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              GroupNo                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnNPCDataCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnMonsterDataCallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetGroupNo(class UPalIndividualCharacterHandle* IndividualHandle, int32* GroupNo, const struct FPalRandomIncidentSpawnNPCData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FPalRandomIncidentSpawnMonsterData& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetGroupNo");

	Params::ABP_PalRandomIncidentNPCSpawner_C_GetGroupNo_Params Parms{};

	Parms.IndividualHandle = IndividualHandle;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (GroupNo != nullptr)
		*GroupNo = Parms.GroupNo;

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetSpawnedLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnedLocation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetSpawnedLocation(class UPalIndividualCharacterHandle* Handle, bool* Found, struct FVector* SpawnedLocation, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetSpawnedLocation");

	Params::ABP_PalRandomIncidentNPCSpawner_C_GetSpawnedLocation_Params Parms{};

	Parms.Handle = Handle;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (SpawnedLocation != nullptr)
		*SpawnedLocation = std::move(Parms.SpawnedLocation);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetSpawnedCharacters
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              SpawnedCharacters                                                (Parm, OutParm)
// TArray<class AActor*>              Result                                                           (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetSpawnedCharacters(TArray<class AActor*>* SpawnedCharacters, const TArray<class AActor*>& Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetSpawnedCharacters");

	Params::ABP_PalRandomIncidentNPCSpawner_C_GetSpawnedCharacters_Params Parms{};

	Parms.Result = Result;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedCharacters != nullptr)
		*SpawnedCharacters = std::move(Parms.SpawnedCharacters);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.SetWalkPathList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FF_NPC_PathWalkArray>PathList                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PalRandomIncidentNPCSpawner_C::SetWalkPathList(TMap<class FName, struct FF_NPC_PathWalkArray> PathList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "SetWalkPathList");

	Params::ABP_PalRandomIncidentNPCSpawner_C_SetWalkPathList_Params Parms{};

	Parms.PathList = PathList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.FindCharacterByName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_FindIndividualCharacterHandleByName_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class APalCharacter* ABP_PalRandomIncidentNPCSpawner_C::FindCharacterByName(class FName& Name, class UPalIndividualCharacterHandle* CallFunc_FindIndividualCharacterHandleByName_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "FindCharacterByName");

	Params::ABP_PalRandomIncidentNPCSpawner_C_FindCharacterByName_Params Parms{};

	Parms.Name = Name;
	Parms.CallFunc_FindIndividualCharacterHandleByName_ReturnValue = CallFunc_FindIndividualCharacterHandleByName_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetHandleByCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*Handle                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetHandleByCharacter(class APalCharacter* Character, class UPalIndividualCharacterHandle** Handle, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetHandleByCharacter");

	Params::ABP_PalRandomIncidentNPCSpawner_C_GetHandleByCharacter_Params Parms{};

	Parms.Character = Character;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Setup Npc Controller
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPCAIController_C*       NPCController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               SpawnedChara                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TScriptInterface<class IBPI_GetPalAIBlackboard_C>CallFunc_GetMyBB_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetMyBB_PalBrackboard                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Path_Name_PathName                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_NPC_PathWalkArray        CallFunc_GetWalkPath_WalkPathList                                (HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandleByCharacter_Handle                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnNPCDataCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_WalkingRadius_BB_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Setup_Npc_Controller(class ABP_NPCAIController_C* NPCController, class APalCharacter* SpawnedChara, const struct FPalInstanceID& ID, TScriptInterface<class IBPI_GetPalAIBlackboard_C> CallFunc_GetMyBB_self_CastInput, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, class FName CallFunc_Get_Path_Name_PathName, const struct FF_NPC_PathWalkArray& CallFunc_GetWalkPath_WalkPathList, class UPalIndividualCharacterHandle* CallFunc_GetHandleByCharacter_Handle, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FPalRandomIncidentSpawnNPCData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double K2Node_VariableSet_WalkingRadius_BB_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Setup Npc Controller");

	Params::ABP_PalRandomIncidentNPCSpawner_C_Setup_Npc_Controller_Params Parms{};

	Parms.NPCController = NPCController;
	Parms.SpawnedChara = SpawnedChara;
	Parms.ID = ID;
	Parms.CallFunc_GetMyBB_self_CastInput = CallFunc_GetMyBB_self_CastInput;
	Parms.CallFunc_GetMyBB_PalBrackboard = CallFunc_GetMyBB_PalBrackboard;
	Parms.CallFunc_Get_Path_Name_PathName = CallFunc_Get_Path_Name_PathName;
	Parms.CallFunc_GetWalkPath_WalkPathList = CallFunc_GetWalkPath_WalkPathList;
	Parms.CallFunc_GetHandleByCharacter_Handle = CallFunc_GetHandleByCharacter_Handle;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_VariableSet_WalkingRadius_BB_ImplicitCast = K2Node_VariableSet_WalkingRadius_BB_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.SetupMonsterController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MonsterAIController_Wild_C*Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               SpawnedChara                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandleByCharacter_Handle                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnMonsterDataCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::SetupMonsterController(class ABP_MonsterAIController_Wild_C* Controller, class APalCharacter* SpawnedChara, class UPalIndividualCharacterHandle* CallFunc_GetHandleByCharacter_Handle, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FPalRandomIncidentSpawnMonsterData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "SetupMonsterController");

	Params::ABP_PalRandomIncidentNPCSpawner_C_SetupMonsterController_Params Parms{};

	Parms.Controller = Controller;
	Parms.SpawnedChara = SpawnedChara;
	Parms.CallFunc_GetHandleByCharacter_Handle = CallFunc_GetHandleByCharacter_Handle;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Setup Spawned Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UClass*                      TmpDefaultAIAction                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TmpDefaultAction                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               SpawnedChara_0                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Get_Character_Character                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_AdjustActorToFloor_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterBase_C*           K2Node_DynamicCast_AsBP_Monster_Base                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       K2Node_DynamicCast_AsBP_NPCAIController                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetDefaultAction_DefaultAction                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetDefaultAction_DefaultAIAction                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_FindIndividualHandle_Handle                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Wild_C*K2Node_DynamicCast_AsBP_Monster_AIController_Wild                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       K2Node_DynamicCast_AsBP_NPCAIController_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayAction_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSquad_IsSquad                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_FindIndividualHandle_Handle_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIControllerBase_C*K2Node_DynamicCast_AsBP_Monster_AIController_Base                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGroupNo_GroupNo                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Setup_Spawned_Character(const struct FPalInstanceID& ID, class UClass* TmpDefaultAIAction, class UClass* TmpDefaultAction, class APalCharacter* SpawnedChara_0, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_Get_Character_Character, class AActor* CallFunc_AdjustActorToFloor_ReturnValue, class ABP_MonsterBase_C* K2Node_DynamicCast_AsBP_Monster_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess_1, class UClass* CallFunc_GetDefaultAction_DefaultAction, class UClass* CallFunc_GetDefaultAction_DefaultAIAction, bool CallFunc_IsValidClass_ReturnValue_1, class UPalIndividualCharacterHandle* CallFunc_FindIndividualHandle_Handle, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class ABP_MonsterAIController_Wild_C* K2Node_DynamicCast_AsBP_Monster_AIController_Wild, bool K2Node_DynamicCast_bSuccess_2, class AController* CallFunc_GetController_ReturnValue_2, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController_1, bool K2Node_DynamicCast_bSuccess_3, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue, class AController* CallFunc_GetController_ReturnValue_3, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsSquad_IsSquad, class UPalIndividualCharacterHandle* CallFunc_FindIndividualHandle_Handle_1, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_4, class ABP_MonsterAIControllerBase_C* K2Node_DynamicCast_AsBP_Monster_AIController_Base, bool K2Node_DynamicCast_bSuccess_5, int32 CallFunc_GetGroupNo_GroupNo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Setup Spawned Character");

	Params::ABP_PalRandomIncidentNPCSpawner_C_Setup_Spawned_Character_Params Parms{};

	Parms.ID = ID;
	Parms.TmpDefaultAIAction = TmpDefaultAIAction;
	Parms.TmpDefaultAction = TmpDefaultAction;
	Parms.SpawnedChara_0 = SpawnedChara_0;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Get_Character_Character = CallFunc_Get_Character_Character;
	Parms.CallFunc_AdjustActorToFloor_ReturnValue = CallFunc_AdjustActorToFloor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_Base = K2Node_DynamicCast_AsBP_Monster_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController = K2Node_DynamicCast_AsBP_NPCAIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDefaultAction_DefaultAction = CallFunc_GetDefaultAction_DefaultAction;
	Parms.CallFunc_GetDefaultAction_DefaultAIAction = CallFunc_GetDefaultAction_DefaultAIAction;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_FindIndividualHandle_Handle = CallFunc_FindIndividualHandle_Handle;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Wild = K2Node_DynamicCast_AsBP_Monster_AIController_Wild;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController_1 = K2Node_DynamicCast_AsBP_NPCAIController_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAction_ReturnValue = CallFunc_PlayAction_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsSquad_IsSquad = CallFunc_IsSquad_IsSquad;
	Parms.CallFunc_FindIndividualHandle_Handle_1 = CallFunc_FindIndividualHandle_Handle_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue_4 = CallFunc_GetController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Base = K2Node_DynamicCast_AsBP_Monster_AIController_Base;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetGroupNo_GroupNo = CallFunc_GetGroupNo_GroupNo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.IsSpawnedCharacter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              CallFunc_GetIndividualID_ReturnValue                             (HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              CallFunc_GetIndividualID_ReturnValue_1                           (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PalRandomIncidentNPCSpawner_C::IsSpawnedCharacter(class UPalIndividualCharacterHandle* Handle, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "IsSpawnedCharacter");

	Params::ABP_PalRandomIncidentNPCSpawner_C_IsSpawnedCharacter_Params Parms{};

	Parms.Handle = Handle;
	Parms.CallFunc_GetIndividualID_ReturnValue = CallFunc_GetIndividualID_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetIndividualID_ReturnValue_1 = CallFunc_GetIndividualID_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue = CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetWalkPath
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        PathName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_NPC_PathWalkArray        WalkPathList                                                     (Parm, OutParm, HasGetValueTypeHash)
// class FName                        Name_None                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_NPC_PathWalkArray        CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetWalkPath(class FName PathName, struct FF_NPC_PathWalkArray* WalkPathList, class FName Name_None, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FF_NPC_PathWalkArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetWalkPath");

	Params::ABP_PalRandomIncidentNPCSpawner_C_GetWalkPath_Params Parms{};

	Parms.PathName = PathName;
	Parms.Name_None = Name_None;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WalkPathList != nullptr)
		*WalkPathList = std::move(Parms.WalkPathList);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Get Path Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        PathName                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterHandle*>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              CallFunc_GetIndividualID_ReturnValue                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Get_Path_Name(const struct FPalInstanceID& ID, class FName* PathName, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UPalIndividualCharacterHandle*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Get Path Name");

	Params::ABP_PalRandomIncidentNPCSpawner_C_Get_Path_Name_Params Parms{};

	Parms.ID = ID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetIndividualID_ReturnValue = CallFunc_GetIndividualID_ReturnValue;
	Parms.CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue = CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PathName != nullptr)
		*PathName = Parms.PathName;

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetDefaultAction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UClass*                      DefaultAction                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DefaultAIAction                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_FindIndividualHandle_Handle                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnNPCDataCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnMonsterDataCallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetDefaultAction(const struct FPalInstanceID& ID, class UClass** DefaultAction, class UClass** DefaultAIAction, class UPalIndividualCharacterHandle* CallFunc_FindIndividualHandle_Handle, const struct FPalRandomIncidentSpawnNPCData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FPalRandomIncidentSpawnMonsterData& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetDefaultAction");

	Params::ABP_PalRandomIncidentNPCSpawner_C_GetDefaultAction_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_FindIndividualHandle_Handle = CallFunc_FindIndividualHandle_Handle;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DefaultAction != nullptr)
		*DefaultAction = Parms.DefaultAction;

	if (DefaultAIAction != nullptr)
		*DefaultAIAction = Parms.DefaultAIAction;

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.IsSquad
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsSquad                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_FindIndividualHandle_Handle                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnNPCDataCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnMonsterDataCallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::IsSquad(const struct FPalInstanceID& ID, bool* IsSquad, class UPalIndividualCharacterHandle* CallFunc_FindIndividualHandle_Handle, const struct FPalRandomIncidentSpawnNPCData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FPalRandomIncidentSpawnMonsterData& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "IsSquad");

	Params::ABP_PalRandomIncidentNPCSpawner_C_IsSquad_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_FindIndividualHandle_Handle = CallFunc_FindIndividualHandle_Handle;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSquad != nullptr)
		*IsSquad = Parms.IsSquad;

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.SpawnCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UniqueName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        PathName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RotZ                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SpawnPointIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SpawnPointCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*Handle                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnedLocation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnLocation                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*TmpHandle                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Name_None                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomSpawnLocationByRadiusLineTraceWithWorldLocation_OutLocation(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomSpawnLocationByRadiusLineTraceWithWorldLocation_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_MakeStruct_Guid                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNetworkActorSpawnParametersK2Node_MakeStruct_NetworkActorSpawnParameters                    (NoDestructor)
// struct FPalIndividualCharacterSaveParameterCallFunc_GetInitializedCharacterSaveParemter_outParameter        (None)
// bool                               CallFunc_GetInitializedCharacterSaveParemter_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_SpawnNewCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomSpawnLocationByRadiusLineTraceWithWorldLocation_Radius_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::SpawnCharacter(class FName RowName, class FName CharacterID, class FName UniqueName, int32 Level, class UClass* AIController, class FName PathName, const struct FVector& Location, double Radius, double RotZ, int32 SpawnPointIndex, int32 SpawnPointCount, class UPalIndividualCharacterHandle** Handle, struct FVector* SpawnedLocation, const struct FVector& SpawnLocation, class UPalIndividualCharacterHandle* TmpHandle, class FName Name_None, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_RandomSpawnLocationByRadiusLineTraceWithWorldLocation_OutLocation, bool CallFunc_RandomSpawnLocationByRadiusLineTraceWithWorldLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FGuid& K2Node_MakeStruct_Guid, const struct FNetworkActorSpawnParameters& K2Node_MakeStruct_NetworkActorSpawnParameters, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetInitializedCharacterSaveParemter_outParameter, bool CallFunc_GetInitializedCharacterSaveParemter_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_SpawnNewCharacter_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_RandomSpawnLocationByRadiusLineTraceWithWorldLocation_Radius_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "SpawnCharacter");

	Params::ABP_PalRandomIncidentNPCSpawner_C_SpawnCharacter_Params Parms{};

	Parms.RowName = RowName;
	Parms.CharacterID = CharacterID;
	Parms.UniqueName = UniqueName;
	Parms.Level = Level;
	Parms.AIController = AIController;
	Parms.PathName = PathName;
	Parms.Location = Location;
	Parms.Radius = Radius;
	Parms.RotZ = RotZ;
	Parms.SpawnPointIndex = SpawnPointIndex;
	Parms.SpawnPointCount = SpawnPointCount;
	Parms.SpawnLocation = SpawnLocation;
	Parms.TmpHandle = TmpHandle;
	Parms.Name_None = Name_None;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_RandomSpawnLocationByRadiusLineTraceWithWorldLocation_OutLocation = CallFunc_RandomSpawnLocationByRadiusLineTraceWithWorldLocation_OutLocation;
	Parms.CallFunc_RandomSpawnLocationByRadiusLineTraceWithWorldLocation_ReturnValue = CallFunc_RandomSpawnLocationByRadiusLineTraceWithWorldLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_MakeStruct_Guid = K2Node_MakeStruct_Guid;
	Parms.K2Node_MakeStruct_NetworkActorSpawnParameters = K2Node_MakeStruct_NetworkActorSpawnParameters;
	Parms.CallFunc_GetInitializedCharacterSaveParemter_outParameter = CallFunc_GetInitializedCharacterSaveParemter_outParameter;
	Parms.CallFunc_GetInitializedCharacterSaveParemter_ReturnValue = CallFunc_GetInitializedCharacterSaveParemter_ReturnValue;
	Parms.CallFunc_SpawnNewCharacter_ReturnValue = CallFunc_SpawnNewCharacter_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_RandomSpawnLocationByRadiusLineTraceWithWorldLocation_Radius_ImplicitCast = CallFunc_RandomSpawnLocationByRadiusLineTraceWithWorldLocation_Radius_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;

	if (SpawnedLocation != nullptr)
		*SpawnedLocation = std::move(Parms.SpawnedLocation);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Spawn NPC
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnNPCDataSpawnData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              SpawnPointIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SpawnPointCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*Handle                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_SpawnCharacter_Handle                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SpawnCharacter_SpawnedLocation                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SpawnCharacter_Radius_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SpawnCharacter_RotZ_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Spawn_NPC(class FName RowName, const struct FPalRandomIncidentSpawnNPCData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount, const struct FVector& Location, class UPalIndividualCharacterHandle* Handle, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_SpawnCharacter_Handle, const struct FVector& CallFunc_SpawnCharacter_SpawnedLocation, double CallFunc_SpawnCharacter_Radius_ImplicitCast, double CallFunc_SpawnCharacter_RotZ_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Spawn NPC");

	Params::ABP_PalRandomIncidentNPCSpawner_C_Spawn_NPC_Params Parms{};

	Parms.RowName = RowName;
	Parms.SpawnData = SpawnData;
	Parms.SpawnPointIndex = SpawnPointIndex;
	Parms.SpawnPointCount = SpawnPointCount;
	Parms.Location = Location;
	Parms.Handle = Handle;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_SpawnCharacter_Handle = CallFunc_SpawnCharacter_Handle;
	Parms.CallFunc_SpawnCharacter_SpawnedLocation = CallFunc_SpawnCharacter_SpawnedLocation;
	Parms.CallFunc_SpawnCharacter_Radius_ImplicitCast = CallFunc_SpawnCharacter_Radius_ImplicitCast;
	Parms.CallFunc_SpawnCharacter_RotZ_ImplicitCast = CallFunc_SpawnCharacter_RotZ_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Spawn Monster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnMonsterDataSpawnData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              SpawnPointIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SpawnPointCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*Handle                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_SpawnCharacter_Handle                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SpawnCharacter_SpawnedLocation                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SpawnCharacter_Radius_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SpawnCharacter_RotZ_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Spawn_Monster(class FName RowName, const struct FPalRandomIncidentSpawnMonsterData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount, const struct FVector& Location, class UPalIndividualCharacterHandle* Handle, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_SpawnCharacter_Handle, const struct FVector& CallFunc_SpawnCharacter_SpawnedLocation, double CallFunc_SpawnCharacter_Radius_ImplicitCast, double CallFunc_SpawnCharacter_RotZ_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Spawn Monster");

	Params::ABP_PalRandomIncidentNPCSpawner_C_Spawn_Monster_Params Parms{};

	Parms.RowName = RowName;
	Parms.SpawnData = SpawnData;
	Parms.SpawnPointIndex = SpawnPointIndex;
	Parms.SpawnPointCount = SpawnPointCount;
	Parms.Location = Location;
	Parms.Handle = Handle;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_SpawnCharacter_Handle = CallFunc_SpawnCharacter_Handle;
	Parms.CallFunc_SpawnCharacter_SpawnedLocation = CallFunc_SpawnCharacter_SpawnedLocation;
	Parms.CallFunc_SpawnCharacter_Radius_ImplicitCast = CallFunc_SpawnCharacter_Radius_ImplicitCast;
	Parms.CallFunc_SpawnCharacter_RotZ_ImplicitCast = CallFunc_SpawnCharacter_RotZ_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Get Character
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class APalCharacter*               Character                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_FindIndividualHandle_Handle                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Get_Character(const struct FPalInstanceID& ID, class APalCharacter** Character, class UPalIndividualCharacterHandle* CallFunc_FindIndividualHandle_Handle, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Get Character");

	Params::ABP_PalRandomIncidentNPCSpawner_C_Get_Character_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_FindIndividualHandle_Handle = CallFunc_FindIndividualHandle_Handle;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.FindIndividualHandle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*Handle                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              CallFunc_GetIndividualID_ReturnValue                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "FindIndividualHandle");

	Params::ABP_PalRandomIncidentNPCSpawner_C_FindIndividualHandle_Params Parms{};

	Parms.ID = ID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetIndividualID_ReturnValue = CallFunc_GetIndividualID_ReturnValue;
	Parms.CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue = CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.RemoveHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*TmpHandle                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::RemoveHandle(class UPalIndividualCharacterHandle* Handle, class UPalIndividualCharacterHandle* TmpHandle, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, bool CallFunc_Map_Contains_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue_2, bool CallFunc_Map_Contains_ReturnValue_2, bool CallFunc_Map_Remove_ReturnValue_3, bool CallFunc_Map_Contains_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "RemoveHandle");

	Params::ABP_PalRandomIncidentNPCSpawner_C_RemoveHandle_Params Parms{};

	Parms.Handle = Handle;
	Parms.TmpHandle = TmpHandle;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue_1 = CallFunc_Map_Remove_ReturnValue_1;
	Parms.CallFunc_Map_Contains_ReturnValue_1 = CallFunc_Map_Contains_ReturnValue_1;
	Parms.CallFunc_Map_Remove_ReturnValue_2 = CallFunc_Map_Remove_ReturnValue_2;
	Parms.CallFunc_Map_Contains_ReturnValue_2 = CallFunc_Map_Contains_ReturnValue_2;
	Parms.CallFunc_Map_Remove_ReturnValue_3 = CallFunc_Map_Remove_ReturnValue_3;
	Parms.CallFunc_Map_Contains_ReturnValue_3 = CallFunc_Map_Contains_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.OnCharacterDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*TepHandle                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandleByCharacter_Handle                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::OnCharacterDestroyed(class AActor* DestroyedActor, class UPalIndividualCharacterHandle* TepHandle, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalIndividualCharacterHandle* CallFunc_GetHandleByCharacter_Handle, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "OnCharacterDestroyed");

	Params::ABP_PalRandomIncidentNPCSpawner_C_OnCharacterDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;
	Parms.TepHandle = TepHandle;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHandleByCharacter_Handle = CallFunc_GetHandleByCharacter_Handle;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.OnCharacterDespawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::OnCharacterDespawned(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "OnCharacterDespawned");

	Params::ABP_PalRandomIncidentNPCSpawner_C_OnCharacterDespawned_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Despawn Characters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterHandle*>TempHandleList                                                   (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Despawn_Characters(const TArray<class UPalIndividualCharacterHandle*>& TempHandleList, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Despawn Characters");

	Params::ABP_PalRandomIncidentNPCSpawner_C_Despawn_Characters_Params Parms{};

	Parms.TempHandleList = TempHandleList;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.SpawnMonster
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnMonsterDataSpawnData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              SpawnPointIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SpawnPointCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::SpawnMonster(class FName& RowName, struct FPalRandomIncidentSpawnMonsterData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "SpawnMonster");

	Params::ABP_PalRandomIncidentNPCSpawner_C_SpawnMonster_Params Parms{};

	Parms.RowName = RowName;
	Parms.SpawnData = SpawnData;
	Parms.SpawnPointIndex = SpawnPointIndex;
	Parms.SpawnPointCount = SpawnPointCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.DespawnCharacters
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PalRandomIncidentNPCSpawner_C::DespawnCharacters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "DespawnCharacters");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.SpawnNPC
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnNPCDataSpawnData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              SpawnPointIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SpawnPointCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::SpawnNPC(class FName& RowName, struct FPalRandomIncidentSpawnNPCData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "SpawnNPC");

	Params::ABP_PalRandomIncidentNPCSpawner_C_SpawnNPC_Params Parms{};

	Parms.RowName = RowName;
	Parms.SpawnData = SpawnData;
	Parms.SpawnPointIndex = SpawnPointIndex;
	Parms.SpawnPointCount = SpawnPointCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.On Character Spawned 
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::On_Character_Spawned_(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "On Character Spawned ");

	Params::ABP_PalRandomIncidentNPCSpawner_C_On_Character_Spawned__Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               InCharacter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::_________0(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "«¹¿à¤ÙóÈ_0");

	Params::ABP_PalRandomIncidentNPCSpawner_C__________0_Params Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "ReceiveEndPlay");

	Params::ABP_PalRandomIncidentNPCSpawner_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.ExecuteUbergraph_BP_PalRandomIncidentNPCSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_RowName_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnMonsterDataK2Node_Event_SpawnData_1                                         (ConstParm)
// int32                              K2Node_Event_SpawnPointIndex_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SpawnPointCount_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_RowName                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnNPCDataK2Node_Event_SpawnData                                           (ConstParm)
// int32                              K2Node_Event_SpawnPointIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SpawnPointCount                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              K2Node_CustomEvent_ID                                            (HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Get_Character_Character                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_InCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterOnCompleteInitializeParameterWrapper*CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInitialized_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::ExecuteUbergraph_BP_PalRandomIncidentNPCSpawner(int32 EntryPoint, class FName K2Node_Event_RowName_1, const struct FPalRandomIncidentSpawnMonsterData& K2Node_Event_SpawnData_1, int32 K2Node_Event_SpawnPointIndex_1, int32 K2Node_Event_SpawnPointCount_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_Event_RowName, const struct FPalRandomIncidentSpawnNPCData& K2Node_Event_SpawnData, int32 K2Node_Event_SpawnPointIndex, int32 K2Node_Event_SpawnPointCount, const struct FPalInstanceID& K2Node_CustomEvent_ID, class APalCharacter* CallFunc_Get_Character_Character, class APalCharacter* K2Node_CustomEvent_InCharacter, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, bool CallFunc_IsInitialized_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "ExecuteUbergraph_BP_PalRandomIncidentNPCSpawner");

	Params::ABP_PalRandomIncidentNPCSpawner_C_ExecuteUbergraph_BP_PalRandomIncidentNPCSpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_RowName_1 = K2Node_Event_RowName_1;
	Parms.K2Node_Event_SpawnData_1 = K2Node_Event_SpawnData_1;
	Parms.K2Node_Event_SpawnPointIndex_1 = K2Node_Event_SpawnPointIndex_1;
	Parms.K2Node_Event_SpawnPointCount_1 = K2Node_Event_SpawnPointCount_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_RowName = K2Node_Event_RowName;
	Parms.K2Node_Event_SpawnData = K2Node_Event_SpawnData;
	Parms.K2Node_Event_SpawnPointIndex = K2Node_Event_SpawnPointIndex;
	Parms.K2Node_Event_SpawnPointCount = K2Node_Event_SpawnPointCount;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.CallFunc_Get_Character_Character = CallFunc_Get_Character_Character;
	Parms.K2Node_CustomEvent_InCharacter = K2Node_CustomEvent_InCharacter;
	Parms.CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue = CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue;
	Parms.CallFunc_IsInitialized_ReturnValue = CallFunc_IsInitialized_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetWalkPathDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetWalkPathDelegate__DelegateSignature(class FName NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetWalkPathDelegate__DelegateSignature");

	Params::ABP_PalRandomIncidentNPCSpawner_C_GetWalkPathDelegate__DelegateSignature_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}

}


