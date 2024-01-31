#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A8 - 0x2A0)
// BlueprintGeneratedClass BP_PalSpawnerInfoReporter.BP_PalSpawnerInfoReporter_C
class ABP_PalSpawnerInfoReporter_C : public APalDebug_SpawnInfoReporter
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalSpawnerInfoReporter_C* GetDefaultObj();

	class FString GetDebugInfoString(class APalNPCSpawnerBase* Spawner, class ABP_PalSpawner_Standard_C* LocalSpawner, const class FString& TempString, class ABP_PalSpawner_Standard_C* K2Node_DynamicCast_AsBP_Pal_Spawner_Standard, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsSpawnDisable_ReturnValue, bool CallFunc_IsWorldPartitionLoadComplete_IsLoading, bool CallFunc_IsCharacterLoading_IsLoading, const struct FPalSpawnerGroupInfo& CallFunc_GetFixedSpawnInfo_Group, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FPalSpawnerOneTribeInfo& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_GetSpawnDisableDebugInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7);
};

}


