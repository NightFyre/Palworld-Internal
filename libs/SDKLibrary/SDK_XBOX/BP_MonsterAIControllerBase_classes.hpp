#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x23 (0x51B - 0x4F8)
// BlueprintGeneratedClass BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C
class ABP_MonsterAIControllerBase_C : public APalAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_AIADamageReaction_C*               BP_AIADamageReaction;                              // 0x500(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DefaultActionClass;                                // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DefaultRootCompositeActionClass;                   // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayDefaultCompositeAction;                       // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSetupEnd;                                        // 0x519(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAutoPlayDefaultAction;                           // 0x51A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MonsterAIControllerBase_C* GetDefaultObj();

	void ToLogFontStyleName(enum class EPalMonsterControllerBaseCampLogType LogType, class FName* StyleName, bool K2Node_SwitchEnum_CmpSuccess);
	void ShowBaseCampLog_Internal(struct FPalMonsterControllerBaseCampLogContent& Content, class FText CallFunc_CreateBaseCampLogMessageText_Result, class APawn* CallFunc_K2_GetPawn_ReturnValue, class FName CallFunc_ToLogFontStyleName_StyleName, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EPalLogContentToneType CallFunc_To_Log_Tone_Type_toneType, const struct FPalLogAdditionalData& K2Node_MakeStruct_PalLogAdditionalData, class UPalLogManager* CallFunc_GetLogManager_ReturnValue, const struct FGuid& CallFunc_AddLog_ReturnValue);
	void CreateBaseCampLogMessageText(struct FPalMonsterControllerBaseCampLogContent& Content, class FText* Result, bool IsFormatText, class FText MessageText, class FText CallFunc_GetLocalizedText_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_EnumToLocalizedText_ReturnValue);
	void To_Log_Tone_Type(enum class EPalMonsterControllerBaseCampLogType LogType, enum class EPalLogContentToneType* ToneType, bool K2Node_SwitchEnum_CmpSuccess);
	void PlayDefaultAction(class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionCompositeBase* CallFunc_SpawnObject_ReturnValue, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component_1, bool K2Node_DynamicCast_bSuccess_1, class UPalAIActionBase* CallFunc_SpawnObject_ReturnValue_1);
	void ReceivePossess(class APawn* PossessedPawn);
	void ReceiveTick(float DeltaSeconds);
	void _________0(class APalCharacter* InCharacter);
	void SetupBySpawner();
	void ExecuteUbergraph_BP_MonsterAIControllerBase(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* K2Node_Event_PossessedPawn, float K2Node_Event_DeltaSeconds, class UPalActiveSkillSlot* CallFunc_SpawnObject_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class APalCharacter* K2Node_CustomEvent_InCharacter, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue);
};

}


