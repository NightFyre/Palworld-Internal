#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C
// (Actor)

class UClass* ABP_PalRandomIncidentSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRandomIncidentSpawner_C");

	return Clss;
}


// BP_PalRandomIncidentSpawner_C BP_PalRandomIncidentSpawner.Default__BP_PalRandomIncidentSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalRandomIncidentSpawner_C* ABP_PalRandomIncidentSpawner_C::GetDefaultObj()
{
	static class ABP_PalRandomIncidentSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalRandomIncidentSpawner_C*>(ABP_PalRandomIncidentSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.CreateDebugShape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAreaRadius_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAreaRadius_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAreaRadius_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::CreateDebugShape(double Delta, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetAreaRadius_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_GetAreaRadius_ReturnValue_1, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_GetAreaRadius_ReturnValue_2, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_3, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "CreateDebugShape");

	Params::ABP_PalRandomIncidentSpawner_C_CreateDebugShape_Params Parms{};

	Parms.Delta = Delta;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetAreaRadius_ReturnValue = CallFunc_GetAreaRadius_ReturnValue;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue_1 = CallFunc_GetPalDebugSetting_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetAreaRadius_ReturnValue_1 = CallFunc_GetAreaRadius_ReturnValue_1;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue_2 = CallFunc_GetPalDebugSetting_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_GetAreaRadius_ReturnValue_2 = CallFunc_GetAreaRadius_ReturnValue_2;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue_3 = CallFunc_GetPalDebugSetting_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.DestroyCollisionComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PalRandomIncidentSpawner_C::DestroyCollisionComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "DestroyCollisionComponents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.SetAreaRadiuses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PalRandomIncidentSpawner_C::SetAreaRadiuses()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "SetAreaRadiuses");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.AddWalkPath
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PathName                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              PointList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FF_NPC_PathWalkArray        CallFunc_Create_Walk_Path_PathArray                              (HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::AddWalkPath(class FName& PathName, TArray<class AActor*>& PointList, const struct FF_NPC_PathWalkArray& CallFunc_Create_Walk_Path_PathArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "AddWalkPath");

	Params::ABP_PalRandomIncidentSpawner_C_AddWalkPath_Params Parms{};

	Parms.PathName = PathName;
	Parms.PointList = PointList;
	Parms.CallFunc_Create_Walk_Path_PathArray = CallFunc_Create_Walk_Path_PathArray;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.Create Walk Path
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>              PointArray                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FF_NPC_PathWalkArray        PathArray                                                        (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FF_NPC_PathWalkPoint>TempWalkArray                                                    (Edit, BlueprintVisible)
// class ABP_NPC_WalkPathPoint_1_C*   TmpWalkPoint                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPC_WalkPathPoint_1_C*   K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_NPC_PathWalkArray        K2Node_MakeStruct_F_NPC_PathWalkArray                            (HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_NPC_PathWalkPoint        K2Node_MakeStruct_F_NPC_PathWalkPoint                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::Create_Walk_Path(TArray<class AActor*>& PointArray, struct FF_NPC_PathWalkArray* PathArray, const TArray<struct FF_NPC_PathWalkPoint>& TempWalkArray, class ABP_NPC_WalkPathPoint_1_C* TmpWalkPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, class ABP_NPC_WalkPathPoint_1_C* K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FF_NPC_PathWalkArray& K2Node_MakeStruct_F_NPC_PathWalkArray, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FF_NPC_PathWalkPoint& K2Node_MakeStruct_F_NPC_PathWalkPoint, int32 CallFunc_Array_Add_ReturnValue, double K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "Create Walk Path");

	Params::ABP_PalRandomIncidentSpawner_C_Create_Walk_Path_Params Parms{};

	Parms.PointArray = PointArray;
	Parms.TempWalkArray = TempWalkArray;
	Parms.TmpWalkPoint = TmpWalkPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1 = K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_F_NPC_PathWalkArray = K2Node_MakeStruct_F_NPC_PathWalkArray;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_MakeStruct_F_NPC_PathWalkPoint = K2Node_MakeStruct_F_NPC_PathWalkPoint;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast = K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (PathArray != nullptr)
		*PathArray = std::move(Parms.PathArray);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.Collect Walk Path Point
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             SceneRoot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Actors                                                           (Parm, OutParm)
// class AActor*                      TmpActor                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CheckedActors                                                    (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class AActor*>              ActorList                                                        (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPC_WalkPathPoint_1_C*   K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::Collect_Walk_Path_Point(class USceneComponent* SceneRoot, TArray<class AActor*>* Actors, class AActor* TmpActor, const TArray<class AActor*>& CheckedActors, const TArray<class AActor*>& ActorList, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_NPC_WalkPathPoint_1_C* K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "Collect Walk Path Point");

	Params::ABP_PalRandomIncidentSpawner_C_Collect_Walk_Path_Point_Params Parms{};

	Parms.SceneRoot = SceneRoot;
	Parms.TmpActor = TmpActor;
	Parms.CheckedActors = CheckedActors;
	Parms.ActorList = ActorList;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1 = K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Actors != nullptr)
		*Actors = std::move(Parms.Actors);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.EditorSetup_WalkPointRef
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              TempActorList                                                    (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class AActor*>              CallFunc_Collect_Walk_Path_Point_Actors                          (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::EditorSetup_WalkPointRef(const TArray<class AActor*>& TempActorList, TArray<class AActor*>& CallFunc_Collect_Walk_Path_Point_Actors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "EditorSetup_WalkPointRef");

	Params::ABP_PalRandomIncidentSpawner_C_EditorSetup_WalkPointRef_Params Parms{};

	Parms.TempActorList = TempActorList;
	Parms.CallFunc_Collect_Walk_Path_Point_Actors = CallFunc_Collect_Walk_Path_Point_Actors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.ReleaseIncident
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::ReleaseIncident(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "ReleaseIncident");

	Params::ABP_PalRandomIncidentSpawner_C_ReleaseIncident_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.SetupIncident
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIncidentBase*            Incident                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterRandom*Parameter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalIncidentNotifyListener_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::SetupIncident(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* Parameter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_PalIncidentNotifyListener_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "SetupIncident");

	Params::ABP_PalRandomIncidentSpawner_C_SetupIncident_Params Parms{};

	Parms.Incident = Incident;
	Parms.Parameter = Parameter;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.OnIncidentSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPalIncidentBase*            Incident                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterRandom*DynamicParameter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::OnIncidentSpawned(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* DynamicParameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "OnIncidentSpawned");

	Params::ABP_PalRandomIncidentSpawner_C_OnIncidentSpawned_Params Parms{};

	Parms.Incident = Incident;
	Parms.DynamicParameter = DynamicParameter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.OnIncidentNotify
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIncidentNotifyListener*  Listener                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalIncidentState       IncidentState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalIncidentNotifyParameter Parameter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PalRandomIncidentSpawner_C::OnIncidentNotify(class UPalIncidentNotifyListener* Listener, enum class EPalIncidentState IncidentState, struct FPalIncidentNotifyParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "OnIncidentNotify");

	Params::ABP_PalRandomIncidentSpawner_C_OnIncidentNotify_Params Parms{};

	Parms.Listener = Listener;
	Parms.IncidentState = IncidentState;
	Parms.Parameter = Parameter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "ReceiveTick");

	Params::ABP_PalRandomIncidentSpawner_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PalRandomIncidentSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.ExecuteUbergraph_BP_PalRandomIncidentSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentBase*            K2Node_Event_Incident                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterRandom*K2Node_Event_DynamicParameter                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentNotifyListener*  K2Node_CustomEvent_Listener                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalIncidentState       K2Node_CustomEvent_IncidentState                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalIncidentNotifyParameter K2Node_CustomEvent_Parameter                                     (ConstParm, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CreateDebugShape_Delta_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::ExecuteUbergraph_BP_PalRandomIncidentSpawner(int32 EntryPoint, class UPalIncidentBase* K2Node_Event_Incident, class UPalIncidentDynamicParameterRandom* K2Node_Event_DynamicParameter, class UPalIncidentNotifyListener* K2Node_CustomEvent_Listener, enum class EPalIncidentState K2Node_CustomEvent_IncidentState, const struct FPalIncidentNotifyParameter& K2Node_CustomEvent_Parameter, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, double CallFunc_CreateDebugShape_Delta_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "ExecuteUbergraph_BP_PalRandomIncidentSpawner");

	Params::ABP_PalRandomIncidentSpawner_C_ExecuteUbergraph_BP_PalRandomIncidentSpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Incident = K2Node_Event_Incident;
	Parms.K2Node_Event_DynamicParameter = K2Node_Event_DynamicParameter;
	Parms.K2Node_CustomEvent_Listener = K2Node_CustomEvent_Listener;
	Parms.K2Node_CustomEvent_IncidentState = K2Node_CustomEvent_IncidentState;
	Parms.K2Node_CustomEvent_Parameter = K2Node_CustomEvent_Parameter;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_CreateDebugShape_Delta_ImplicitCast = CallFunc_CreateDebugShape_Delta_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


