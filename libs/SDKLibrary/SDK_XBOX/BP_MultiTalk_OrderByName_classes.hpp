#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C
class UBP_MultiTalk_OrderByName_C : public UPalNPCMultiTalkHandle
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDataTable*                            TalkData;                                          // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  RecordKey;                                         // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_MultiTalk_OrderByName_C* GetDefaultObj();

	void GetMaxTalkCount(int32* MaxTalkCount, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void GetStartTalkSequence(class FString* Sequence, int64 Count, int32 CallFunc_GetCurrentTalkCount_ReturnValue, int32 CallFunc_GetMaxTalkCount_MaxTalkCount, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	class UDataTable* GetTalkData(class FName& InTalkID, class UDataTable* CallFunc_GetTalkData_ReturnValue);
	void OnFinishOneTalk();
	void ExecuteUbergraph_BP_MultiTalk_OrderByName(int32 EntryPoint, int32 CallFunc_GetCurrentTalkCount_ReturnValue, int32 CallFunc_GetMaxTalkCount_MaxTalkCount, bool CallFunc_Less_IntInt_ReturnValue);
};

}


