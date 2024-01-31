#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x50 - 0x30)
// BlueprintGeneratedClass BP_MultiTalk_SimpleInOrder.BP_MultiTalk_SimpleInOrder_C
class UBP_MultiTalk_SimpleInOrder_C : public UPalNPCMultiTalkHandle
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UDataTable*>                    TalkList;                                          // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  RecordKey;                                         // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_MultiTalk_SimpleInOrder_C* GetDefaultObj();

	void GetMaxTalkCount(int32* MaxTalkCount, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	class UDataTable* GetTalkData(class FName& InTalkID, int32 CurrentIndex, class UDataTable* TempDT, int32 CallFunc_GetCurrentTalkCount_ReturnValue, class UDataTable* CallFunc_GetTalkData_ReturnValue, int32 CallFunc_GetMaxTalkCount_MaxTalkCount, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UDataTable* CallFunc_Array_Get_Item);
	void OnFinishOneTalk();
	void ExecuteUbergraph_BP_MultiTalk_SimpleInOrder(int32 EntryPoint, int32 CallFunc_GetCurrentTalkCount_ReturnValue, int32 CallFunc_GetMaxTalkCount_MaxTalkCount, bool CallFunc_Less_IntInt_ReturnValue);
};

}


