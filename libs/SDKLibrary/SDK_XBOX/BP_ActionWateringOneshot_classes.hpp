#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x178 - 0x168)
// BlueprintGeneratedClass BP_ActionWateringOneshot.BP_ActionWateringOneshot_C
class UBP_ActionWateringOneshot_C : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  WateredNotifyName;                                 // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionWateringOneshot_C* GetDefaultObj();

	void NotifyWatered(class FName NotifyName, class AActor* ActionTarget, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TScriptInterface<class IPalMapObjectWaterRecievableInterface> K2Node_DynamicCast_AsPal_Map_Object_Water_Recievable_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void OnNotifyBegin(class FName NotifyName);
	void ExecuteUbergraph_BP_ActionWateringOneshot(int32 EntryPoint, class FName K2Node_Event_NotifyName);
};

}


