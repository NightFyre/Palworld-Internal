#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SquadNPCSpawner.BP_SquadNPCSpawner_C
// (Actor)

class UClass* ABP_SquadNPCSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SquadNPCSpawner_C");

	return Clss;
}


// BP_SquadNPCSpawner_C BP_SquadNPCSpawner.Default__BP_SquadNPCSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SquadNPCSpawner_C* ABP_SquadNPCSpawner_C::GetDefaultObj()
{
	static class ABP_SquadNPCSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SquadNPCSpawner_C*>(ABP_SquadNPCSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.GetAllSpawnedNPCHandle
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterHandle*>Handles                                                          (Parm, OutParm)

void ABP_SquadNPCSpawner_C::GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>* Handles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "GetAllSpawnedNPCHandle");

	Params::ABP_SquadNPCSpawner_C_GetAllSpawnedNPCHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handles != nullptr)
		*Handles = std::move(Parms.Handles);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.GetSpawnPointRadius_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_SquadNPCSpawner_C::GetSpawnPointRadius_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "GetSpawnPointRadius_0");

	Params::ABP_SquadNPCSpawner_C_GetSpawnPointRadius_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.GetWorldLoadWaitRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Radius                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::GetWorldLoadWaitRadius(double* Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "GetWorldLoadWaitRadius");

	Params::ABP_SquadNPCSpawner_C_GetWorldLoadWaitRadius_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.DeleteOnePoint
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Point                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::DeleteOnePoint(class AActor* Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "DeleteOnePoint");

	Params::ABP_SquadNPCSpawner_C_DeleteOnePoint_Params Parms{};

	Parms.Point = Point;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SetNullHandleWhenDestoryNPC
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::SetNullHandleWhenDestoryNPC(class AActor* DestroyedActor, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "SetNullHandleWhenDestoryNPC");

	Params::ABP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.DespawnDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::DespawnDelegate(const struct FPalInstanceID& ID, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "DespawnDelegate");

	Params::ABP_SquadNPCSpawner_C_DespawnDelegate_Params Parms{};

	Parms.ID = ID;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.Despawn
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::Despawn(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "Despawn");

	Params::ABP_SquadNPCSpawner_C_Despawn_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SetCharaNames
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SquadNPCSpawner_C::SetCharaNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "SetCharaNames");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SetupSpawnInfoList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*>     TempComponent                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<TScriptInterface<class IBPI_SpawnPointInfo_C>>TempBPIList                                                      (Edit, BlueprintVisible)
// TScriptInterface<class IBPI_SpawnPointInfo_C>TempBPI                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCSpawnPointOnly_C*     TempPoint                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              TempLevel                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TempDefaultAction                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TempAICon                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FF_NPCOnePointSpawnInfo>TempInfoList                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class AActor*>              TempOnePointActor                                                (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_NPCOnePointSpawnInfo     CallFunc_GetOneSpawnInfo_Info                                    (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNPCManager*              CallFunc_GetNPCManager_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterIDFromCharacterIDAndUniqueNPCID_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_NPCOnePointSpawnInfo     CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_NPCOnePointSpawnInfo     K2Node_MakeStruct_F_NPCOnePointSpawnInfo                         (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SpawnPointInfo_C>K2Node_DynamicCast_AsBPI_Spawn_Point_Info                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SpawnPointInfo_C>K2Node_DynamicCast_AsBPI_Spawn_Point_Info_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::SetupSpawnInfoList(const TArray<class USceneComponent*>& TempComponent, const TArray<TScriptInterface<class IBPI_SpawnPointInfo_C>>& TempBPIList, TScriptInterface<class IBPI_SpawnPointInfo_C> TempBPI, class ABP_NPCSpawnPointOnly_C* TempPoint, int32 TempLevel, class UClass* TempDefaultAction, class UClass* TempAICon, const TArray<struct FF_NPCOnePointSpawnInfo>& TempInfoList, const TArray<class AActor*>& TempOnePointActor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FF_NPCOnePointSpawnInfo& CallFunc_GetOneSpawnInfo_Info, int32 CallFunc_Array_Add_ReturnValue, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class FName CallFunc_GetCharacterIDFromCharacterIDAndUniqueNPCID_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FF_NPCOnePointSpawnInfo& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, const struct FF_NPCOnePointSpawnInfo& K2Node_MakeStruct_F_NPCOnePointSpawnInfo, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue_2, class USceneComponent* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_4, TScriptInterface<class IBPI_SpawnPointInfo_C> K2Node_DynamicCast_AsBPI_Spawn_Point_Info, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_5, TScriptInterface<class IBPI_SpawnPointInfo_C> K2Node_DynamicCast_AsBPI_Spawn_Point_Info_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "SetupSpawnInfoList");

	Params::ABP_SquadNPCSpawner_C_SetupSpawnInfoList_Params Parms{};

	Parms.TempComponent = TempComponent;
	Parms.TempBPIList = TempBPIList;
	Parms.TempBPI = TempBPI;
	Parms.TempPoint = TempPoint;
	Parms.TempLevel = TempLevel;
	Parms.TempDefaultAction = TempDefaultAction;
	Parms.TempAICon = TempAICon;
	Parms.TempInfoList = TempInfoList;
	Parms.TempOnePointActor = TempOnePointActor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOneSpawnInfo_Info = CallFunc_GetOneSpawnInfo_Info;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetNPCManager_ReturnValue = CallFunc_GetNPCManager_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetCharacterIDFromCharacterIDAndUniqueNPCID_ReturnValue = CallFunc_GetCharacterIDFromCharacterIDAndUniqueNPCID_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeStruct_F_NPCOnePointSpawnInfo = K2Node_MakeStruct_F_NPCOnePointSpawnInfo;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBPI_Spawn_Point_Info = K2Node_DynamicCast_AsBPI_Spawn_Point_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBPI_Spawn_Point_Info_1 = K2Node_DynamicCast_AsBPI_Spawn_Point_Info_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SpawnDelegate
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_FindIndividualHandle_Handle                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindIndividualHandle_Index                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::SpawnDelegate(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle* CallFunc_FindIndividualHandle_Handle, int32 CallFunc_FindIndividualHandle_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "SpawnDelegate");

	Params::ABP_SquadNPCSpawner_C_SpawnDelegate_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_FindIndividualHandle_Handle = CallFunc_FindIndividualHandle_Handle;
	Parms.CallFunc_FindIndividualHandle_Index = CallFunc_FindIndividualHandle_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.FindIndividualHandle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*Handle                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              CallFunc_GetIndividualID_ReturnValue                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle, int32* Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "FindIndividualHandle");

	Params::ABP_SquadNPCSpawner_C_FindIndividualHandle_Params Parms{};

	Parms.ID = ID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetIndividualID_ReturnValue = CallFunc_GetIndividualID_ReturnValue;
	Parms.CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue = CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.Spawn
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_MakeStruct_Guid                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNetworkActorSpawnParametersK2Node_MakeStruct_NetworkActorSpawnParameters                    (NoDestructor)
// struct FPalIndividualCharacterSaveParameterCallFunc_GetInitializedCharacterSaveParemter_outParameter        (None)
// bool                               CallFunc_GetInitializedCharacterSaveParemter_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_SpawnNewCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::Spawn(int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FGuid& K2Node_MakeStruct_Guid, const struct FNetworkActorSpawnParameters& K2Node_MakeStruct_NetworkActorSpawnParameters, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetInitializedCharacterSaveParemter_outParameter, bool CallFunc_GetInitializedCharacterSaveParemter_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_SpawnNewCharacter_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "Spawn");

	Params::ABP_SquadNPCSpawner_C_Spawn_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_MakeStruct_Guid = K2Node_MakeStruct_Guid;
	Parms.K2Node_MakeStruct_NetworkActorSpawnParameters = K2Node_MakeStruct_NetworkActorSpawnParameters;
	Parms.CallFunc_GetInitializedCharacterSaveParemter_outParameter = CallFunc_GetInitializedCharacterSaveParemter_outParameter;
	Parms.CallFunc_GetInitializedCharacterSaveParemter_ReturnValue = CallFunc_GetInitializedCharacterSaveParemter_ReturnValue;
	Parms.CallFunc_SpawnNewCharacter_ReturnValue = CallFunc_SpawnNewCharacter_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.Check Spawn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearBaseCamp_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalCheckSpawnResultTypeCallFunc_CheckSpawnDistance_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::Check_Spawn(double DeltaTime, bool CallFunc_IsNearBaseCamp_ReturnValue, enum class EPalCheckSpawnResultType CallFunc_CheckSpawnDistance_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "Check Spawn");

	Params::ABP_SquadNPCSpawner_C_Check_Spawn_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_IsNearBaseCamp_ReturnValue = CallFunc_IsNearBaseCamp_ReturnValue;
	Parms.CallFunc_CheckSpawnDistance_ReturnValue = CallFunc_CheckSpawnDistance_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SquadNPCSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.BlueprintTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::BlueprintTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "BlueprintTick");

	Params::ABP_SquadNPCSpawner_C_BlueprintTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SetAllNPCLocation
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SquadNPCSpawner_C::SetAllNPCLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "SetAllNPCLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.ExecuteUbergraph_BP_SquadNPCSpawner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Check_Spawn_DeltaTime_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::ExecuteUbergraph_BP_SquadNPCSpawner(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaTime, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_Check_Spawn_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "ExecuteUbergraph_BP_SquadNPCSpawner");

	Params::ABP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Check_Spawn_DeltaTime_ImplicitCast = CallFunc_Check_Spawn_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.OnSquadSpawnedCharacter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_C::OnSquadSpawnedCharacter__DelegateSignature(class UPalIndividualCharacterHandle* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SquadNPCSpawner_C", "OnSquadSpawnedCharacter__DelegateSignature");

	Params::ABP_SquadNPCSpawner_C_OnSquadSpawnedCharacter__DelegateSignature_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}

}


