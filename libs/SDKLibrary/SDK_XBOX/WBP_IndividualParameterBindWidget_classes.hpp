#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x170 (0x578 - 0x408)
// WidgetBlueprintGeneratedClass WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C
class UWBP_IndividualParameterBindWidget_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UPalIndividualCharacterHandle> bindedHandle;                                      // 0x410(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsBindHP;                                          // 0x440(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindSP;                                          // 0x441(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindHunger;                                      // 0x442(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindFoodAmount;                                  // 0x443(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindNickName;                                    // 0x444(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindSanity;                                      // 0x445(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindExp;                                         // 0x446(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindLevel;                                       // 0x447(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnUpdateHp;                                        // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpdateSP;                                        // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpdateHunger;                                    // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpdateNickName;                                  // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpdateSanity;                                    // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpdateExp;                                       // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpdateLevel;                                     // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsBindActiveSkill;                                 // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindPassiveSkill;                                // 0x4B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindMasteredSkills;                              // 0x4BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindElement;                                     // 0x4BB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindRank;                                        // 0x4BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindSoul;                                        // 0x4BD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindWorkSuitability;                             // 0x4BE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindCondition;                                   // 0x4BF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindBuff;                                        // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayerCharacter;                                 // 0x4C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreAfterBindInitialize;                         // 0x4C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4395[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUpdateCondition;                                 // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpdateActiveSkill;                               // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsBindGender;                                      // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBindRarity;                                      // 0x4E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowLevelPenalty;                                  // 0x4EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GetLevelPenalty;                                   // 0x4EB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4398[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPalWazaID>                TmpWazaArray;                                      // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnUpdateMasteredSkill;                             // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpdateBuff;                                      // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpdateSoulRank;                                  // 0x520(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsBindStatusPoint;                                 // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4399[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUpdateStatusPoint;                               // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPalInstanceID                        SyncId;                                            // 0x548(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_IndividualParameterBindWidget_C* GetDefaultObj();

	void SyncBind(const struct FPalInstanceID& InstanceId, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, bool CallFunc_IsValidInstanceID_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue);
	void On_Update_Trainer_Level_Internal(int32 AddLevel, int32 NowLevel, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, int32 CallFunc_GetLevel_ReturnValue);
	void OnUpdateStatusPoint_Internal();
	void OnUpdateSoulRank_Internal();
	void SetRarity(bool IsBoss, bool IsRare);
	void SetSoulRank(int32 Rank);
	void SetGender(enum class EPalGenderType GenderType);
	void SetFoodAmount(int32 FoodAmount);
	void Set_Work_Suitability(TMap<enum class EPalWorkSuitability, int32> WorkSuitabilities);
	void SetPassiveSkill(TArray<class FName>& PassiveSkills);
	void OnUpdateBuff_Internal();
	void OnUpdateMasteredWaza_Internal(class UPalIndividualCharacterParameter* IndividualParameter, enum class EPalWazaID WazaID);
	void OnUpdateWaza_Internal(enum class EPalWazaID WazaID, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<enum class EPalWazaID>& CallFunc_GetEquipWaza_ReturnValue);
	void SetRank(int32 Rank);
	void SetElementType(enum class EPalElementType Type1, enum class EPalElementType Type2);
	void GetBindedHandle(class UPalIndividualCharacterHandle** TargetHandle, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess);
	void On_Update_Level_Internal(int32 AddLevel, int32 NowLevel, int32 CallFunc_Add_IntInt_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_CalcCorrectedLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnUpdateExp_Internal(int32 AddExp, int32 NowExp, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, class UPalExpDatabase* CallFunc_GetExpDatabase_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetNextExp_ReturnValue, int32 CallFunc_GetTotalExp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	void OnCheckCondition_Internal();
	void OnUpdateSanity_Internal(float NowSanity, float OldSanity, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetMaxSanityValue_ReturnValue, float CallFunc_GetSanityValue_ReturnValue, double K2Node_CallDelegate_nowMaxSanity_ImplicitCast, double K2Node_CallDelegate_nowSanity_ImplicitCast);
	void OnUpdateNickName_Internal(const class FString& NewNickName);
	void Unbind();
	void On_Update_Hunger_Internal(float Current, float Last, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetMaxFullStomach_ReturnValue, float CallFunc_GetFullStomach_ReturnValue, double K2Node_CallDelegate_nowMaxHunger_ImplicitCast, double K2Node_CallDelegate_nowHunger_ImplicitCast);
	void OnUpdateSP_Internal(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated);
	void OnUpdateHP_Internal(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void UnbindEvent(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void Bind_Event(class UPalIndividualCharacterParameter* TargetParam, class FName CharacterID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsRarePal_ReturnValue, enum class EPalGenderType CallFunc_GetGenderType_ReturnValue, TMap<enum class EPalWorkSuitability, int32> CallFunc_GetWorkSuitabilityRanksWithCharacterRank_ReturnValue, TArray<class FName>& CallFunc_GetPassiveSkillList_ReturnValue, int32 CallFunc_GetPalSoulRank_ReturnValue, int32 CallFunc_GetRank_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetExp_ReturnValue, float CallFunc_GetSanityValue_ReturnValue, float CallFunc_GetMaxSanityValue_ReturnValue, const class FString& CallFunc_GetNickName_outName, float CallFunc_GetMaxFullStomach_ReturnValue, float CallFunc_GetFullStomach_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_withBuff_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, int32 CallFunc_GetFoodAmount_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, enum class EPalElementType CallFunc_GetElementType_Element1, enum class EPalElementType CallFunc_GetElementType_Element2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_2, bool CallFunc_GetIsBoss_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13);
	void BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, bool CallFunc_IsValidInstanceID_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSoftObjectPtr<class UPalIndividualCharacterHandle> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue);
	void Destruct();
	void ExecuteUbergraph_WBP_IndividualParameterBindWidget(int32 EntryPoint);
	void OnUpdateStatusPoint__DelegateSignature();
	void OnUpdateSoulRank__DelegateSignature();
	void OnUpdateBuff__DelegateSignature();
	void OnUpdateMasteredSkill__DelegateSignature(class UPalIndividualCharacterParameter* Individual_Parameter, enum class EPalWazaID WazaID);
	void OnUpdateActiveSkill__DelegateSignature(TArray<enum class EPalWazaID>& ActiveSkills);
	void OnUpdateCondition__DelegateSignature();
	void OnUpdateLevel__DelegateSignature(int32 NewLevel);
	void OnUpdateExp__DelegateSignature(int32 AddExp, int32 OldExp, double NowExpRate);
	void OnUpdateSanity__DelegateSignature(double NowSanity, double NowMaxSanity);
	void OnUpdateNickName__DelegateSignature(const class FString& NewNickName);
	void OnUpdateHunger__DelegateSignature(double NowHunger, double NowMaxHunger);
	void OnUpdateSP__DelegateSignature(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated);
	void OnUpdateHP__DelegateSignature(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
};

}


