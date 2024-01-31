#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x441 - 0x408)
// WidgetBlueprintGeneratedClass WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C
class UWBP_BossEnemyHPGauge_C : public UPalUICharacterHPGaugeBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Close;                                             // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameBossHP_C*                   WBP_IngameBossHP;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APalCharacter*                         TargetCharacter;                                   // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*      TargetIndividualParameter;                         // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDead;                                            // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsAlreadyDead;                                     // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_BossEnemyHPGauge_C* GetDefaultObj();

	void OnUpdateElement(enum class EPalElementType Type1, enum class EPalElementType Type2);
	void On_Update_Level(int32 AddLevel, int32 NowLevel, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnUpdateHp(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP, int32 CallFunc_Convert_FixedPoint64ToInt_ReturnValue, int32 CallFunc_Convert_FixedPoint64ToInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnRequestClose();
	void UpdateVisibility(bool CallFunc_GetBattleMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, bool CallFunc_Less_FixedPoint64FixedPoint64_ReturnValue);
	void UpdateText(class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetCharacterID_ReturnValue, const class FString& CallFunc_GetNickName_outName, class FName CallFunc_GetPrefixNameMsgId_OutMsgID, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue);
	void SetupEvents(class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_1, class FName CallFunc_GetCharacterID_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetIsTowerBoss_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetCharacterID_ReturnValue_1, int32 CallFunc_GetLevel_ReturnValue, enum class EPalElementType CallFunc_GetElementType_Element1, enum class EPalElementType CallFunc_GetElementType_Element2, const struct FFixedPoint64& CallFunc_GetMaxHP_withBuff_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void SetTargetCharacter(class APalCharacter* TargetCharacter, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void Finished_10F7592E48B01E3F065E49BC1224338C();
	void AnmEvent_Close();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void ExecuteUbergraph_WBP_BossEnemyHPGauge(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
	void OnDead__DelegateSignature(class APalCharacter* TargetCharacter);
};

}


