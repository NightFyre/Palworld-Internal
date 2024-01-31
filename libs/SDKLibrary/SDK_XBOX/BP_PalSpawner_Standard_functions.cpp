#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalSpawner_Standard.BP_PalSpawner_Standard_C
// (Actor)

class UClass* ABP_PalSpawner_Standard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalSpawner_Standard_C");

	return Clss;
}


// BP_PalSpawner_Standard_C BP_PalSpawner_Standard.Default__BP_PalSpawner_Standard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalSpawner_Standard_C* ABP_PalSpawner_Standard_C::GetDefaultObj()
{
	static class ABP_PalSpawner_Standard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalSpawner_Standard_C*>(ABP_PalSpawner_Standard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetAllSpawnedNPCHandle
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterHandle*>Handles                                                          (Parm, OutParm)

void ABP_PalSpawner_Standard_C::GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>* Handles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetAllSpawnedNPCHandle");

	Params::ABP_PalSpawner_Standard_C_GetAllSpawnedNPCHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handles != nullptr)
		*Handles = std::move(Parms.Handles);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.IsSuppressedByRandomIncident
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PalSpawner_Standard_C::IsSuppressedByRandomIncident(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "IsSuppressedByRandomIncident");

	Params::ABP_PalSpawner_Standard_C_IsSuppressedByRandomIncident_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetSpawnPointRadius
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_PalSpawner_Standard_C::GetSpawnPointRadius(float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetSpawnPointRadius");

	Params::ABP_PalSpawner_Standard_C_GetSpawnPointRadius_Params Parms{};

	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.BlueprintTick_Despawning
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::BlueprintTick_Despawning(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "BlueprintTick_Despawning");

	Params::ABP_PalSpawner_Standard_C_BlueprintTick_Despawning_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.BlueprintTick_Spawning
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDisableBossSpawnerFlag_FromSaveData_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSpawnDisable_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearBaseCamp_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::BlueprintTick_Spawning(float DeltaTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetDisableBossSpawnerFlag_FromSaveData_ReturnValue, bool CallFunc_IsSpawnDisable_ReturnValue, bool CallFunc_IsNearBaseCamp_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "BlueprintTick_Spawning");

	Params::ABP_PalSpawner_Standard_C_BlueprintTick_Spawning_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetDisableBossSpawnerFlag_FromSaveData_ReturnValue = CallFunc_GetDisableBossSpawnerFlag_FromSaveData_ReturnValue;
	Parms.CallFunc_IsSpawnDisable_ReturnValue = CallFunc_IsSpawnDisable_ReturnValue;
	Parms.CallFunc_IsNearBaseCamp_ReturnValue = CallFunc_IsNearBaseCamp_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.Is Field Boss or Imprisonment Boss Spawner
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsTimer                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::Is_Field_Boss_or_Imprisonment_Boss_Spawner(bool* IsTimer, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "Is Field Boss or Imprisonment Boss Spawner");

	Params::ABP_PalSpawner_Standard_C_Is_Field_Boss_or_Imprisonment_Boss_Spawner_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsTimer != nullptr)
		*IsTimer = Parms.IsTimer;

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.OnDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                Info                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalSpawnedCharacterTypeCallFunc_GetSpawnedCharacterType_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsServer_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::OnDead(const struct FPalDeadInfo& Info, bool CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EPalSpawnedCharacterType CallFunc_GetSpawnedCharacterType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetIsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "OnDead");

	Params::ABP_PalSpawner_Standard_C_OnDead_Params Parms{};

	Parms.Info = Info;
	Parms.CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer = CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetSpawnedCharacterType_ReturnValue = CallFunc_GetSpawnedCharacterType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetIsServer_ReturnValue = CallFunc_GetIsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.OnCaptured
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               SelfPal                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalSpawnedCharacterTypeCallFunc_GetSpawnedCharacterType_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsServer_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::OnCaptured(class APalCharacter* SelfPal, class APalCharacter* Attacker, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer, enum class EPalSpawnedCharacterType CallFunc_GetSpawnedCharacterType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetIsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "OnCaptured");

	Params::ABP_PalSpawner_Standard_C_OnCaptured_Params Parms{};

	Parms.SelfPal = SelfPal;
	Parms.Attacker = Attacker;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer = CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer;
	Parms.CallFunc_GetSpawnedCharacterType_ReturnValue = CallFunc_GetSpawnedCharacterType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetIsServer_ReturnValue = CallFunc_GetIsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.Lottery and Spawn Reauest
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                TempCharaList                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LotterySpawnPalListIndex_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSpawnerGroupInfo        CallFunc_LotterySpawnPalListIndex_SpawnGroup                     (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSpawnerOneTribeInfo     CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::Lottery_and_Spawn_Reauest(const TArray<class FName>& TempCharaList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LotterySpawnPalListIndex_Success, const struct FPalSpawnerGroupInfo& CallFunc_LotterySpawnPalListIndex_SpawnGroup, int32 CallFunc_Array_Length_ReturnValue, const struct FPalSpawnerOneTribeInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "Lottery and Spawn Reauest");

	Params::ABP_PalSpawner_Standard_C_Lottery_and_Spawn_Reauest_Params Parms{};

	Parms.TempCharaList = TempCharaList;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LotterySpawnPalListIndex_Success = CallFunc_LotterySpawnPalListIndex_Success;
	Parms.CallFunc_LotterySpawnPalListIndex_SpawnGroup = CallFunc_LotterySpawnPalListIndex_SpawnGroup;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.ExistAliveCharacter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Exist                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               HPZero                                                           (Edit, BlueprintVisible, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_GetHP_ReturnValue                                       (NoDestructor)
// bool                               CallFunc_Greater_FixedPoint64FixedPoint64_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::ExistAliveCharacter(bool* Exist, const struct FFixedPoint64& HPZero, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, bool CallFunc_Greater_FixedPoint64FixedPoint64_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "ExistAliveCharacter");

	Params::ABP_PalSpawner_Standard_C_ExistAliveCharacter_Params Parms{};

	Parms.HPZero = HPZero;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHP_ReturnValue = CallFunc_GetHP_ReturnValue;
	Parms.CallFunc_Greater_FixedPoint64FixedPoint64_ReturnValue = CallFunc_Greater_FixedPoint64FixedPoint64_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Exist != nullptr)
		*Exist = Parms.Exist;

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetMaxMonsterLevel
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxLevel                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSpawnerGroupInfo        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSpawnerOneTribeInfo     CallFunc_Array_Get_Item_1                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_PalSpawner_Standard_C::GetMaxMonsterLevel(int32 MaxLevel, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FPalSpawnerGroupInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalSpawnerOneTribeInfo& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetMaxMonsterLevel");

	Params::ABP_PalSpawner_Standard_C_GetMaxMonsterLevel_Params Parms{};

	Parms.MaxLevel = MaxLevel;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetSpawnGroupList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FPalSpawnerGroupInfo>List                                                             (Parm, OutParm)

void ABP_PalSpawner_Standard_C::GetSpawnGroupList(TArray<struct FPalSpawnerGroupInfo>* List)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetSpawnGroupList");

	Params::ABP_PalSpawner_Standard_C_GetSpawnGroupList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (List != nullptr)
		*List = std::move(Parms.List);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.IsWorldPartitionLoadComplete
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLoading                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::IsWorldPartitionLoadComplete(bool* IsLoading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "IsWorldPartitionLoadComplete");

	Params::ABP_PalSpawner_Standard_C_IsWorldPartitionLoadComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsLoading != nullptr)
		*IsLoading = Parms.IsLoading;

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.IsCharacterLoading
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLoading                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::IsCharacterLoading(bool* IsLoading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "IsCharacterLoading");

	Params::ABP_PalSpawner_Standard_C_IsCharacterLoading_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsLoading != nullptr)
		*IsLoading = Parms.IsLoading;

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.GetFixedSpawnInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalSpawnerGroupInfo        Group                                                            (Parm, OutParm)

void ABP_PalSpawner_Standard_C::GetFixedSpawnInfo(struct FPalSpawnerGroupInfo* Group)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "GetFixedSpawnInfo");

	Params::ABP_PalSpawner_Standard_C_GetFixedSpawnInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Group != nullptr)
		*Group = std::move(Parms.Group);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.CheckIntervalByDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Interval                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNearstPlayerDistance2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetActorTickInterval_TickInterval_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Distance_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::CheckIntervalByDistance(double Interval, double Distance, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetNearstPlayerDistance2D_ReturnValue, float CallFunc_SetActorTickInterval_TickInterval_ImplicitCast, double K2Node_VariableSet_Distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "CheckIntervalByDistance");

	Params::ABP_PalSpawner_Standard_C_CheckIntervalByDistance_Params Parms{};

	Parms.Interval = Interval;
	Parms.Distance = Distance;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetNearstPlayerDistance2D_ReturnValue = CallFunc_GetNearstPlayerDistance2D_ReturnValue;
	Parms.CallFunc_SetActorTickInterval_TickInterval_ImplicitCast = CallFunc_SetActorTickInterval_TickInterval_ImplicitCast;
	Parms.K2Node_VariableSet_Distance_ImplicitCast = K2Node_VariableSet_Distance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.BP_PalSpawner_Standard_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::BP_PalSpawner_Standard_AutoGenFunc(class AActor* DestroyedActor, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "BP_PalSpawner_Standard_AutoGenFunc");

	Params::ABP_PalSpawner_Standard_C_BP_PalSpawner_Standard_AutoGenFunc_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.CheckWorldLoadCompleted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWorldPartitionSubsystem*    CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorldPartitionStreamingQuerySourceK2Node_MakeStruct_WorldPartitionStreamingQuerySource             (None)
// TArray<struct FWorldPartitionStreamingQuerySource>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_IsStreamingCompleted_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Radius_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::CheckWorldLoadCompleted(class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UWorldPartitionSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWorldPartitionStreamingQuerySource& K2Node_MakeStruct_WorldPartitionStreamingQuerySource, TArray<struct FWorldPartitionStreamingQuerySource>& K2Node_MakeArray_Array, bool CallFunc_IsStreamingCompleted_ReturnValue, float K2Node_MakeStruct_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "CheckWorldLoadCompleted");

	Params::ABP_PalSpawner_Standard_C_CheckWorldLoadCompleted_Params Parms{};

	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeStruct_WorldPartitionStreamingQuerySource = K2Node_MakeStruct_WorldPartitionStreamingQuerySource;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsStreamingCompleted_ReturnValue = CallFunc_IsStreamingCompleted_ReturnValue;
	Parms.K2Node_MakeStruct_Radius_ImplicitCast = K2Node_MakeStruct_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.IsAlwaysSpawn
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Always                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::IsAlwaysSpawn(bool* Always, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "IsAlwaysSpawn");

	Params::ABP_PalSpawner_Standard_C_IsAlwaysSpawn_Params Parms{};

	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Always != nullptr)
		*Always = Parms.Always;

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.LotterySpawnPalListIndex
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSpawnerGroupInfo        SpawnGroup                                                       (Parm, OutParm)
// TArray<struct FPalSpawnerGroupInfo>SpawnAbleGroup                                                   (Edit, BlueprintVisible)
// int32                              TempWeightPlus                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RandomValue                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WeightSum                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWeatherConditionTypeCurrentWeather                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalOneDayTimeType      CurrentTime                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalTimeManager*             CallFunc_GetTimeManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalOneDayTimeType      CallFunc_GetCurrentDayTimeType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSpawnerGroupInfo        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSpawnerGroupInfo        CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSpawnerGroupInfo        CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::LotterySpawnPalListIndex(bool* Success, struct FPalSpawnerGroupInfo* SpawnGroup, const TArray<struct FPalSpawnerGroupInfo>& SpawnAbleGroup, int32 TempWeightPlus, int32 RandomValue, int32 WeightSum, enum class EPalWeatherConditionType CurrentWeather, enum class EPalOneDayTimeType CurrentTime, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue, enum class EPalOneDayTimeType CallFunc_GetCurrentDayTimeType_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FPalSpawnerGroupInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FPalSpawnerGroupInfo& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalSpawnerGroupInfo& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "LotterySpawnPalListIndex");

	Params::ABP_PalSpawner_Standard_C_LotterySpawnPalListIndex_Params Parms{};

	Parms.SpawnAbleGroup = SpawnAbleGroup;
	Parms.TempWeightPlus = TempWeightPlus;
	Parms.RandomValue = RandomValue;
	Parms.WeightSum = WeightSum;
	Parms.CurrentWeather = CurrentWeather;
	Parms.CurrentTime = CurrentTime;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetTimeManager_ReturnValue = CallFunc_GetTimeManager_ReturnValue;
	Parms.CallFunc_GetCurrentDayTimeType_ReturnValue = CallFunc_GetCurrentDayTimeType_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SpawnGroup != nullptr)
		*SpawnGroup = std::move(Parms.SpawnGroup);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.RemoveHandleList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               Monster                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              RemoveIndex                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::RemoveHandleList(class APalCharacter* Monster, int32 RemoveIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "RemoveHandleList");

	Params::ABP_PalSpawner_Standard_C_RemoveHandleList_Params Parms{};

	Parms.Monster = Monster;
	Parms.RemoveIndex = RemoveIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.FindIndividualHandle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*Handle                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              CallFunc_GetIndividualID_ReturnValue                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "FindIndividualHandle");

	Params::ABP_PalSpawner_Standard_C_FindIndividualHandle_Params Parms{};

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

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.DespawnDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::DespawnDelegate(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "DespawnDelegate");

	Params::ABP_PalSpawner_Standard_C_DespawnDelegate_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.Spawn Delegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class APalCharacter*               SpawnCharacter                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_FindIndividualHandle_Handle                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNavigationInvokerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBossPal_Database_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalSpawnedCharacterTypeCallFunc_GetSpawnedCharacterType_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIControllerBase_C*K2Node_DynamicCast_AsBP_Monster_AIController_Base                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPC_Base_C*              K2Node_DynamicCast_AsBP_NPC_Base                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_FindIndividualHandle_Handle_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       K2Node_DynamicCast_AsBP_NPCAIController                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterBase_C*           K2Node_DynamicCast_AsBP_Monster_Base                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_AdjustActorToFloor_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Wild_C*K2Node_DynamicCast_AsBP_Monster_AIController_Wild                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::Spawn_Delegate(const struct FPalInstanceID& ID, class APalCharacter* SpawnCharacter, class UPalIndividualCharacterHandle* CallFunc_FindIndividualHandle_Handle, class UPalNavigationInvokerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer, bool CallFunc_IsBossPal_Database_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, enum class EPalSpawnedCharacterType CallFunc_GetSpawnedCharacterType_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABP_MonsterAIControllerBase_C* K2Node_DynamicCast_AsBP_Monster_AIController_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_NPC_Base_C* K2Node_DynamicCast_AsBP_NPC_Base, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue_1, class UPalIndividualCharacterHandle* CallFunc_FindIndividualHandle_Handle_1, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class ABP_MonsterBase_C* K2Node_DynamicCast_AsBP_Monster_Base, bool K2Node_DynamicCast_bSuccess_3, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_4, class AController* CallFunc_GetController_ReturnValue_3, class AActor* CallFunc_AdjustActorToFloor_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class ABP_MonsterAIController_Wild_C* K2Node_DynamicCast_AsBP_Monster_AIController_Wild, bool K2Node_DynamicCast_bSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "Spawn Delegate");

	Params::ABP_PalSpawner_Standard_C_Spawn_Delegate_Params Parms{};

	Parms.ID = ID;
	Parms.SpawnCharacter = SpawnCharacter;
	Parms.CallFunc_FindIndividualHandle_Handle = CallFunc_FindIndividualHandle_Handle;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer = CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer;
	Parms.CallFunc_IsBossPal_Database_ReturnValue = CallFunc_IsBossPal_Database_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_GetSpawnedCharacterType_ReturnValue = CallFunc_GetSpawnedCharacterType_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Base = K2Node_DynamicCast_AsBP_Monster_AIController_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPC_Base = K2Node_DynamicCast_AsBP_NPC_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_FindIndividualHandle_Handle_1 = CallFunc_FindIndividualHandle_Handle_1;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController = K2Node_DynamicCast_AsBP_NPCAIController;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Monster_Base = K2Node_DynamicCast_AsBP_Monster_Base;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.CallFunc_AdjustActorToFloor_ReturnValue = CallFunc_AdjustActorToFloor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Wild = K2Node_DynamicCast_AsBP_Monster_AIController_Wild;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.CheckSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                TempCharaList                                                    (Edit, BlueprintVisible)
// class FName                        TempCharaName                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PlayerLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSpawned_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalCheckSpawnResultTypeCallFunc_CheckSpawnDistance_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDisableBossSpawnerFlag_FromSaveData_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSpawnDisable_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearBaseCamp_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::CheckSpawn(double DeltaTime, const TArray<class FName>& TempCharaList, class FName TempCharaName, const struct FVector& PlayerLocation, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsSpawned_ReturnValue, enum class EPalCheckSpawnResultType CallFunc_CheckSpawnDistance_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetDisableBossSpawnerFlag_FromSaveData_ReturnValue, bool CallFunc_IsSpawnDisable_ReturnValue, bool CallFunc_IsNearBaseCamp_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "CheckSpawn");

	Params::ABP_PalSpawner_Standard_C_CheckSpawn_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.TempCharaList = TempCharaList;
	Parms.TempCharaName = TempCharaName;
	Parms.PlayerLocation = PlayerLocation;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsSpawned_ReturnValue = CallFunc_IsSpawned_ReturnValue;
	Parms.CallFunc_CheckSpawnDistance_ReturnValue = CallFunc_CheckSpawnDistance_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDisableBossSpawnerFlag_FromSaveData_ReturnValue = CallFunc_GetDisableBossSpawnerFlag_FromSaveData_ReturnValue;
	Parms.CallFunc_IsSpawnDisable_ReturnValue = CallFunc_IsSpawnDisable_ReturnValue;
	Parms.CallFunc_IsNearBaseCamp_ReturnValue = CallFunc_IsNearBaseCamp_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.Despawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterHandle*>TempHandleList                                                   (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::Despawn(const TArray<class UPalIndividualCharacterHandle*>& TempHandleList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "Despawn");

	Params::ABP_PalSpawner_Standard_C_Despawn_Params Parms{};

	Parms.TempHandleList = TempHandleList;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.Spawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalSpawnerGroupInfo        SpawnGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              RequestNum                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SpawnNumSum                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      SpawnNumList                                                     (Edit, BlueprintVisible)
// double                             Yaw                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TempAIConClass                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              TempNum                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TempCharaID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSpawnerOneTribeInfo     CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSpawnNumRandom_OneTribe_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSpawnerOneTribeInfo     CallFunc_Array_Get_Item_1                                        (NoDestructor)
// int32                              CallFunc_GetSpawnLevelRandom_OneTribe_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomSpawnLocationByRadiusLineTrace_OutLocation        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomSpawnLocationByRadiusLineTrace_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_MakeStruct_Guid                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FPalIndividualCharacterSaveParameterCallFunc_GetInitializedCharacterSaveParemter_outParameter        (None)
// bool                               CallFunc_GetInitializedCharacterSaveParemter_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FNetworkActorSpawnParametersK2Node_MakeStruct_NetworkActorSpawnParameters                    (NoDestructor)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_SpawnNewCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Yaw_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomSpawnLocationByRadiusLineTrace_RayStartUpOffset_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomSpawnLocationByRadiusLineTrace_RayEndDownOffset_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomSpawnLocationByRadiusLineTrace_Radius_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::Spawn(const struct FPalSpawnerGroupInfo& SpawnGroup, int32 RequestNum, int32 SpawnNumSum, const TArray<int32>& SpawnNumList, double Yaw, class UClass* TempAIConClass, int32 TempNum, class FName TempCharaID, int32 Temp_int_Array_Index_Variable, const struct FPalSpawnerOneTribeInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetSpawnNumRandom_OneTribe_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, const struct FPalSpawnerOneTribeInfo& CallFunc_Array_Get_Item_1, int32 CallFunc_GetSpawnLevelRandom_OneTribe_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Variable_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_RandomFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const struct FVector& CallFunc_RandomSpawnLocationByRadiusLineTrace_OutLocation, bool CallFunc_RandomSpawnLocationByRadiusLineTrace_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, const struct FGuid& K2Node_MakeStruct_Guid, class FText CallFunc_Conv_NameToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetInitializedCharacterSaveParemter_outParameter, bool CallFunc_GetInitializedCharacterSaveParemter_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FNetworkActorSpawnParameters& K2Node_MakeStruct_NetworkActorSpawnParameters, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_SpawnNewCharacter_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, float CallFunc_MakeRotator_Yaw_ImplicitCast, double K2Node_VariableSet_Yaw_ImplicitCast, float CallFunc_RandomSpawnLocationByRadiusLineTrace_RayStartUpOffset_ImplicitCast, float CallFunc_RandomSpawnLocationByRadiusLineTrace_RayEndDownOffset_ImplicitCast, float CallFunc_RandomSpawnLocationByRadiusLineTrace_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "Spawn");

	Params::ABP_PalSpawner_Standard_C_Spawn_Params Parms{};

	Parms.SpawnGroup = SpawnGroup;
	Parms.RequestNum = RequestNum;
	Parms.SpawnNumSum = SpawnNumSum;
	Parms.SpawnNumList = SpawnNumList;
	Parms.Yaw = Yaw;
	Parms.TempAIConClass = TempAIConClass;
	Parms.TempNum = TempNum;
	Parms.TempCharaID = TempCharaID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSpawnNumRandom_OneTribe_ReturnValue = CallFunc_GetSpawnNumRandom_OneTribe_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetSpawnLevelRandom_OneTribe_ReturnValue = CallFunc_GetSpawnLevelRandom_OneTribe_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_RandomSpawnLocationByRadiusLineTrace_OutLocation = CallFunc_RandomSpawnLocationByRadiusLineTrace_OutLocation;
	Parms.CallFunc_RandomSpawnLocationByRadiusLineTrace_ReturnValue = CallFunc_RandomSpawnLocationByRadiusLineTrace_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.K2Node_MakeStruct_Guid = K2Node_MakeStruct_Guid;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetInitializedCharacterSaveParemter_outParameter = CallFunc_GetInitializedCharacterSaveParemter_outParameter;
	Parms.CallFunc_GetInitializedCharacterSaveParemter_ReturnValue = CallFunc_GetInitializedCharacterSaveParemter_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_NetworkActorSpawnParameters = K2Node_MakeStruct_NetworkActorSpawnParameters;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;
	Parms.CallFunc_SpawnNewCharacter_ReturnValue = CallFunc_SpawnNewCharacter_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.K2Node_VariableSet_Yaw_ImplicitCast = K2Node_VariableSet_Yaw_ImplicitCast;
	Parms.CallFunc_RandomSpawnLocationByRadiusLineTrace_RayStartUpOffset_ImplicitCast = CallFunc_RandomSpawnLocationByRadiusLineTrace_RayStartUpOffset_ImplicitCast;
	Parms.CallFunc_RandomSpawnLocationByRadiusLineTrace_RayEndDownOffset_ImplicitCast = CallFunc_RandomSpawnLocationByRadiusLineTrace_RayEndDownOffset_ImplicitCast;
	Parms.CallFunc_RandomSpawnLocationByRadiusLineTrace_Radius_ImplicitCast = CallFunc_RandomSpawnLocationByRadiusLineTrace_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PalSpawner_Standard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PalSpawner_Standard_C::_________0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "«¹¿à¤ÙóÈ_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.CreateDebugSpawnerGroupInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FPalSpawnerGroupInfo        OneGroupInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PalSpawner_Standard_C::CreateDebugSpawnerGroupInfo(const struct FPalSpawnerGroupInfo& OneGroupInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "CreateDebugSpawnerGroupInfo");

	Params::ABP_PalSpawner_Standard_C_CreateDebugSpawnerGroupInfo_Params Parms{};

	Parms.OneGroupInfo = OneGroupInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.SetAllNPCLocation
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PalSpawner_Standard_C::SetAllNPCLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "SetAllNPCLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "ReceiveEndPlay");

	Params::ABP_PalSpawner_Standard_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.SpawnRequest_ByOutside
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDeleteAliveCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::SpawnRequest_ByOutside(bool IsDeleteAliveCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "SpawnRequest_ByOutside");

	Params::ABP_PalSpawner_Standard_C_SpawnRequest_ByOutside_Params Parms{};

	Parms.IsDeleteAliveCharacter = IsDeleteAliveCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalSpawner_Standard.BP_PalSpawner_Standard_C.ExecuteUbergraph_BP_PalSpawner_Standard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSpawnerGroupInfo        K2Node_Event_OneGroupInfo                                        (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSpawnerRadiusByType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDeleteAliveCharacter                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExistAliveCharacter_Exist                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCheckRadius_DespawnRadius_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSpawner_Standard_C::ExecuteUbergraph_BP_PalSpawner_Standard(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FPalSpawnerGroupInfo& K2Node_Event_OneGroupInfo, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, float CallFunc_GetSpawnerRadiusByType_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, double CallFunc_Add_DoubleDouble_ReturnValue, bool K2Node_Event_IsDeleteAliveCharacter, bool CallFunc_ExistAliveCharacter_Exist, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetCheckRadius_DespawnRadius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSpawner_Standard_C", "ExecuteUbergraph_BP_PalSpawner_Standard");

	Params::ABP_PalSpawner_Standard_C_ExecuteUbergraph_BP_PalSpawner_Standard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_OneGroupInfo = K2Node_Event_OneGroupInfo;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetSpawnerRadiusByType_ReturnValue = CallFunc_GetSpawnerRadiusByType_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_IsDeleteAliveCharacter = K2Node_Event_IsDeleteAliveCharacter;
	Parms.CallFunc_ExistAliveCharacter_Exist = CallFunc_ExistAliveCharacter_Exist;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetCheckRadius_DespawnRadius_ImplicitCast = CallFunc_SetCheckRadius_DespawnRadius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


