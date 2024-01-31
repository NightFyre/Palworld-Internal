#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xB8 - 0x58)
// BlueprintGeneratedClass BP_PalItemIDManager.BP_PalItemIDManager_C
class UBP_PalItemIDManager_C : public UPalItemIDManager
{
public:
	TMap<enum class EPalElementType, struct FPalItemPalEggDataHandle> PalEggStaticItemIdMap;                             // 0x58(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   DefaultPalEggStaticItemId;                         // 0xA8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_PalItemIDManager_C* GetDefaultObj();

	void GetPalEggRank(int32 PalRarity, class UObject* WorldContextObject, int32* PalEggRank, int32 Temp_int_Array_Index_Variable, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPalEggRankInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	class FName GetStaticItemIdPalEgg(class UObject* WorldContextObject, class FName CharacterID, const struct FPalItemPalEggDataHandle& PalEggDataHandle, int32 PalEggRank, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_1, enum class EPalElementType CallFunc_GetElementType_Element1, enum class EPalElementType CallFunc_GetElementType_Element2, int32 CallFunc_GetRarity_ReturnValue, const struct FPalItemPalEggDataHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_GetPalEggRank_PalEggRank);
};

}


