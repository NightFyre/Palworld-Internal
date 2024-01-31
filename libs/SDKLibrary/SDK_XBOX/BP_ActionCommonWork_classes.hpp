#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x178 - 0x168)
// BlueprintGeneratedClass BP_ActionCommonWork.BP_ActionCommonWork_C
class UBP_ActionCommonWork_C : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  FlagName;                                          // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionCommonWork_C* GetDefaultObj();

	void OnEndAction();
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionCommonWork(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class FName CallFunc_DecreaseFullStomachRate_Work_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, FDelegateProperty_ Temp_delegate_Variable, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, int32 CallFunc_PostEvent_ReturnValue);
};

}


