#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C
// (None)

class UClass* UWBP_IndividualParameterBindWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IndividualParameterBindWidget_C");

	return Clss;
}


// WBP_IndividualParameterBindWidget_C WBP_IndividualParameterBindWidget.Default__WBP_IndividualParameterBindWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IndividualParameterBindWidget_C* UWBP_IndividualParameterBindWidget_C::GetDefaultObj()
{
	static class UWBP_IndividualParameterBindWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IndividualParameterBindWidget_C*>(UWBP_IndividualParameterBindWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SyncBind
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              InstanceId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetBindedHandle_targetHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidInstanceID_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SyncBind(const struct FPalInstanceID& InstanceId, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, bool CallFunc_IsValidInstanceID_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SyncBind");

	Params::UWBP_IndividualParameterBindWidget_C_SyncBind_Params Parms{};

	Parms.InstanceId = InstanceId;
	Parms.CallFunc_GetBindedHandle_targetHandle = CallFunc_GetBindedHandle_targetHandle;
	Parms.CallFunc_IsValidInstanceID_ReturnValue = CallFunc_IsValidInstanceID_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue = CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.On Update Trainer Level Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AddLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NowLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_DynamicCast_AsPal_Individual_Character_Handle             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::On_Update_Trainer_Level_Internal(int32 AddLevel, int32 NowLevel, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, int32 CallFunc_GetLevel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "On Update Trainer Level Internal");

	Params::UWBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal_Params Parms{};

	Parms.AddLevel = AddLevel;
	Parms.NowLevel = NowLevel;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Individual_Character_Handle = K2Node_DynamicCast_AsPal_Individual_Character_Handle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateStatusPoint_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IndividualParameterBindWidget_C::OnUpdateStatusPoint_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateStatusPoint_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSoulRank_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IndividualParameterBindWidget_C::OnUpdateSoulRank_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateSoulRank_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBoss                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRare                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SetRarity(bool IsBoss, bool IsRare)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetRarity");

	Params::UWBP_IndividualParameterBindWidget_C_SetRarity_Params Parms{};

	Parms.IsBoss = IsBoss;
	Parms.IsRare = IsRare;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetSoulRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SetSoulRank(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetSoulRank");

	Params::UWBP_IndividualParameterBindWidget_C_SetSoulRank_Params Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetGender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalGenderType          GenderType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SetGender(enum class EPalGenderType GenderType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetGender");

	Params::UWBP_IndividualParameterBindWidget_C_SetGender_Params Parms{};

	Parms.GenderType = GenderType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetFoodAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FoodAmount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SetFoodAmount(int32 FoodAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetFoodAmount");

	Params::UWBP_IndividualParameterBindWidget_C_SetFoodAmount_Params Parms{};

	Parms.FoodAmount = FoodAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.Set Work Suitability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EPalWorkSuitability, int32>WorkSuitabilities                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IndividualParameterBindWidget_C::Set_Work_Suitability(TMap<enum class EPalWorkSuitability, int32> WorkSuitabilities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "Set Work Suitability");

	Params::UWBP_IndividualParameterBindWidget_C_Set_Work_Suitability_Params Parms{};

	Parms.WorkSuitabilities = WorkSuitabilities;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetPassiveSkill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                PassiveSkills                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IndividualParameterBindWidget_C::SetPassiveSkill(TArray<class FName>& PassiveSkills)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetPassiveSkill");

	Params::UWBP_IndividualParameterBindWidget_C_SetPassiveSkill_Params Parms{};

	Parms.PassiveSkills = PassiveSkills;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateBuff_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IndividualParameterBindWidget_C::OnUpdateBuff_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateBuff_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateMasteredWaza_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter*IndividualParameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              WazaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateMasteredWaza_Internal(class UPalIndividualCharacterParameter* IndividualParameter, enum class EPalWazaID WazaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateMasteredWaza_Internal");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateMasteredWaza_Internal_Params Parms{};

	Parms.IndividualParameter = IndividualParameter;
	Parms.WazaID = WazaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateWaza_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalWazaID              WazaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetBindedHandle_targetHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EPalWazaID>      CallFunc_GetEquipWaza_ReturnValue                                (ReferenceParm)

void UWBP_IndividualParameterBindWidget_C::OnUpdateWaza_Internal(enum class EPalWazaID WazaID, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<enum class EPalWazaID>& CallFunc_GetEquipWaza_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateWaza_Internal");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal_Params Parms{};

	Parms.WazaID = WazaID;
	Parms.CallFunc_GetBindedHandle_targetHandle = CallFunc_GetBindedHandle_targetHandle;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetEquipWaza_ReturnValue = CallFunc_GetEquipWaza_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SetRank(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetRank");

	Params::UWBP_IndividualParameterBindWidget_C_SetRank_Params Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetElementType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalElementType         Type1                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         Type2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SetElementType(enum class EPalElementType Type1, enum class EPalElementType Type2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetElementType");

	Params::UWBP_IndividualParameterBindWidget_C_SetElementType_Params Parms{};

	Parms.Type1 = Type1;
	Parms.Type2 = Type2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.GetBindedHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_DynamicCast_AsPal_Individual_Character_Handle             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::GetBindedHandle(class UPalIndividualCharacterHandle** TargetHandle, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "GetBindedHandle");

	Params::UWBP_IndividualParameterBindWidget_C_GetBindedHandle_Params Parms{};

	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Individual_Character_Handle = K2Node_DynamicCast_AsPal_Individual_Character_Handle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetHandle != nullptr)
		*TargetHandle = Parms.TargetHandle;

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.On Update Level Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AddLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NowLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalcCorrectedLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::On_Update_Level_Internal(int32 AddLevel, int32 NowLevel, int32 CallFunc_Add_IntInt_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_CalcCorrectedLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "On Update Level Internal");

	Params::UWBP_IndividualParameterBindWidget_C_On_Update_Level_Internal_Params Parms{};

	Parms.AddLevel = AddLevel;
	Parms.NowLevel = NowLevel;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_CalcCorrectedLevel_ReturnValue = CallFunc_CalcCorrectedLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateExp_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AddExp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NowExp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_DynamicCast_AsPal_Individual_Character_Handle             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalExpDatabase*             CallFunc_GetExpDatabase_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNextExp_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalExp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateExp_Internal(int32 AddExp, int32 NowExp, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, class UPalExpDatabase* CallFunc_GetExpDatabase_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetNextExp_ReturnValue, int32 CallFunc_GetTotalExp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateExp_Internal");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal_Params Parms{};

	Parms.AddExp = AddExp;
	Parms.NowExp = NowExp;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Individual_Character_Handle = K2Node_DynamicCast_AsPal_Individual_Character_Handle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetExpDatabase_ReturnValue = CallFunc_GetExpDatabase_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetNextExp_ReturnValue = CallFunc_GetNextExp_ReturnValue;
	Parms.CallFunc_GetTotalExp_ReturnValue = CallFunc_GetTotalExp_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnCheckCondition_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IndividualParameterBindWidget_C::OnCheckCondition_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnCheckCondition_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSanity_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NowSanity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OldSanity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_DynamicCast_AsPal_Individual_Character_Handle             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxSanityValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSanityValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_nowMaxSanity_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_nowSanity_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateSanity_Internal(float NowSanity, float OldSanity, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetMaxSanityValue_ReturnValue, float CallFunc_GetSanityValue_ReturnValue, double K2Node_CallDelegate_nowMaxSanity_ImplicitCast, double K2Node_CallDelegate_nowSanity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateSanity_Internal");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal_Params Parms{};

	Parms.NowSanity = NowSanity;
	Parms.OldSanity = OldSanity;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Individual_Character_Handle = K2Node_DynamicCast_AsPal_Individual_Character_Handle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMaxSanityValue_ReturnValue = CallFunc_GetMaxSanityValue_ReturnValue;
	Parms.CallFunc_GetSanityValue_ReturnValue = CallFunc_GetSanityValue_ReturnValue;
	Parms.K2Node_CallDelegate_nowMaxSanity_ImplicitCast = K2Node_CallDelegate_nowMaxSanity_ImplicitCast;
	Parms.K2Node_CallDelegate_nowSanity_ImplicitCast = K2Node_CallDelegate_nowSanity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateNickName_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewNickName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateNickName_Internal(const class FString& NewNickName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateNickName_Internal");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateNickName_Internal_Params Parms{};

	Parms.NewNickName = NewNickName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.Unbind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IndividualParameterBindWidget_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.On Update Hunger Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Last                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_DynamicCast_AsPal_Individual_Character_Handle             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxFullStomach_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFullStomach_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_nowMaxHunger_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_nowHunger_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::On_Update_Hunger_Internal(float Current, float Last, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetMaxFullStomach_ReturnValue, float CallFunc_GetFullStomach_ReturnValue, double K2Node_CallDelegate_nowMaxHunger_ImplicitCast, double K2Node_CallDelegate_nowHunger_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "On Update Hunger Internal");

	Params::UWBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal_Params Parms{};

	Parms.Current = Current;
	Parms.Last = Last;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Individual_Character_Handle = K2Node_DynamicCast_AsPal_Individual_Character_Handle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMaxFullStomach_ReturnValue = CallFunc_GetMaxFullStomach_ReturnValue;
	Parms.CallFunc_GetFullStomach_ReturnValue = CallFunc_GetFullStomach_ReturnValue;
	Parms.K2Node_CallDelegate_nowMaxHunger_ImplicitCast = K2Node_CallDelegate_nowMaxHunger_ImplicitCast;
	Parms.K2Node_CallDelegate_nowHunger_ImplicitCast = K2Node_CallDelegate_nowHunger_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSP_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowSP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               NowMaxSP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               IsOverHeated                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateSP_Internal(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateSP_Internal");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal_Params Parms{};

	Parms.NowSP = NowSP;
	Parms.NowMaxSP = NowMaxSP;
	Parms.IsOverHeated = IsOverHeated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateHP_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               NowMaxHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_IndividualParameterBindWidget_C::OnUpdateHP_Internal(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateHP_Internal");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateHP_Internal_Params Parms{};

	Parms.NowHP = NowHP;
	Parms.NowMaxHP = NowMaxHP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.UnbindEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualParameter_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetBindedHandle_targetHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetTrainerPlayer_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualParameter_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_DynamicCast_AsPal_Individual_Character_Handle             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::UnbindEvent(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "UnbindEvent");

	Params::UWBP_IndividualParameterBindWidget_C_UnbindEvent_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetIndividualParameter_ReturnValue = CallFunc_GetIndividualParameter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetBindedHandle_targetHandle = CallFunc_GetBindedHandle_targetHandle;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTrainerPlayer_ReturnValue = CallFunc_GetTrainerPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIndividualParameter_ReturnValue_1 = CallFunc_GetIndividualParameter_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Individual_Character_Handle = K2Node_DynamicCast_AsPal_Individual_Character_Handle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.Bind Event
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter*TargetParam                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CharacterID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRarePal_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalGenderType          CallFunc_GetGenderType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EPalWorkSuitability, int32>CallFunc_GetWorkSuitabilityRanksWithCharacterRank_ReturnValue    (None)
// TArray<class FName>                CallFunc_GetPassiveSkillList_ReturnValue                         (ConstParm, ReferenceParm)
// int32                              CallFunc_GetPalSoulRank_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRank_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetExp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSanityValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxSanityValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxFullStomach_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFullStomach_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_GetHP_ReturnValue                                       (NoDestructor)
// struct FFixedPoint64               CallFunc_GetMaxHP_withBuff_ReturnValue                           (NoDestructor)
// class FName                        CallFunc_GetCharacterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoodAmount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualParameter_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         CallFunc_GetElementType_Element1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         CallFunc_GetElementType_Element2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetBindedHandle_targetHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetTrainerPlayer_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualParameter_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsBoss_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::Bind_Event(class UPalIndividualCharacterParameter* TargetParam, class FName CharacterID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsRarePal_ReturnValue, enum class EPalGenderType CallFunc_GetGenderType_ReturnValue, TMap<enum class EPalWorkSuitability, int32> CallFunc_GetWorkSuitabilityRanksWithCharacterRank_ReturnValue, TArray<class FName>& CallFunc_GetPassiveSkillList_ReturnValue, int32 CallFunc_GetPalSoulRank_ReturnValue, int32 CallFunc_GetRank_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetExp_ReturnValue, float CallFunc_GetSanityValue_ReturnValue, float CallFunc_GetMaxSanityValue_ReturnValue, const class FString& CallFunc_GetNickName_outName, float CallFunc_GetMaxFullStomach_ReturnValue, float CallFunc_GetFullStomach_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_withBuff_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, int32 CallFunc_GetFoodAmount_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, enum class EPalElementType CallFunc_GetElementType_Element1, enum class EPalElementType CallFunc_GetElementType_Element2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_2, bool CallFunc_GetIsBoss_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "Bind Event");

	Params::UWBP_IndividualParameterBindWidget_C_Bind_Event_Params Parms{};

	Parms.TargetParam = TargetParam;
	Parms.CharacterID = CharacterID;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsRarePal_ReturnValue = CallFunc_IsRarePal_ReturnValue;
	Parms.CallFunc_GetGenderType_ReturnValue = CallFunc_GetGenderType_ReturnValue;
	Parms.CallFunc_GetWorkSuitabilityRanksWithCharacterRank_ReturnValue = CallFunc_GetWorkSuitabilityRanksWithCharacterRank_ReturnValue;
	Parms.CallFunc_GetPassiveSkillList_ReturnValue = CallFunc_GetPassiveSkillList_ReturnValue;
	Parms.CallFunc_GetPalSoulRank_ReturnValue = CallFunc_GetPalSoulRank_ReturnValue;
	Parms.CallFunc_GetRank_ReturnValue = CallFunc_GetRank_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetExp_ReturnValue = CallFunc_GetExp_ReturnValue;
	Parms.CallFunc_GetSanityValue_ReturnValue = CallFunc_GetSanityValue_ReturnValue;
	Parms.CallFunc_GetMaxSanityValue_ReturnValue = CallFunc_GetMaxSanityValue_ReturnValue;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;
	Parms.CallFunc_GetMaxFullStomach_ReturnValue = CallFunc_GetMaxFullStomach_ReturnValue;
	Parms.CallFunc_GetFullStomach_ReturnValue = CallFunc_GetFullStomach_ReturnValue;
	Parms.CallFunc_GetHP_ReturnValue = CallFunc_GetHP_ReturnValue;
	Parms.CallFunc_GetMaxHP_withBuff_ReturnValue = CallFunc_GetMaxHP_withBuff_ReturnValue;
	Parms.CallFunc_GetCharacterID_ReturnValue = CallFunc_GetCharacterID_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetFoodAmount_ReturnValue = CallFunc_GetFoodAmount_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue_1 = CallFunc_GetDatabaseCharacterParameter_ReturnValue_1;
	Parms.CallFunc_GetIndividualParameter_ReturnValue = CallFunc_GetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetElementType_Element1 = CallFunc_GetElementType_Element1;
	Parms.CallFunc_GetElementType_Element2 = CallFunc_GetElementType_Element2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetBindedHandle_targetHandle = CallFunc_GetBindedHandle_targetHandle;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTrainerPlayer_ReturnValue = CallFunc_GetTrainerPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIndividualParameter_ReturnValue_1 = CallFunc_GetIndividualParameter_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue_2 = CallFunc_GetDatabaseCharacterParameter_ReturnValue_2;
	Parms.CallFunc_GetIsBoss_ReturnValue = CallFunc_GetIsBoss_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.BindFromSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandle_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "BindFromSlot");

	Params::UWBP_IndividualParameterBindWidget_C_BindFromSlot_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.CallFunc_GetHandle_ReturnValue = CallFunc_GetHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.BindFromHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              CallFunc_GetIndividualID_ReturnValue                             (HasGetValueTypeHash)
// bool                               CallFunc_IsValidInstanceID_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UPalIndividualCharacterHandle>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, bool CallFunc_IsValidInstanceID_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSoftObjectPtr<class UPalIndividualCharacterHandle> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "BindFromHandle");

	Params::UWBP_IndividualParameterBindWidget_C_BindFromHandle_Params Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIndividualID_ReturnValue = CallFunc_GetIndividualID_ReturnValue;
	Parms.CallFunc_IsValidInstanceID_ReturnValue = CallFunc_IsValidInstanceID_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IndividualParameterBindWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.ExecuteUbergraph_WBP_IndividualParameterBindWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::ExecuteUbergraph_WBP_IndividualParameterBindWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "ExecuteUbergraph_WBP_IndividualParameterBindWidget");

	Params::UWBP_IndividualParameterBindWidget_C_ExecuteUbergraph_WBP_IndividualParameterBindWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateStatusPoint__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IndividualParameterBindWidget_C::OnUpdateStatusPoint__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateStatusPoint__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSoulRank__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IndividualParameterBindWidget_C::OnUpdateSoulRank__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateSoulRank__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateBuff__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IndividualParameterBindWidget_C::OnUpdateBuff__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateBuff__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateMasteredSkill__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter*Individual_Parameter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              WazaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateMasteredSkill__DelegateSignature(class UPalIndividualCharacterParameter* Individual_Parameter, enum class EPalWazaID WazaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateMasteredSkill__DelegateSignature");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateMasteredSkill__DelegateSignature_Params Parms{};

	Parms.Individual_Parameter = Individual_Parameter;
	Parms.WazaID = WazaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateActiveSkill__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EPalWazaID>      ActiveSkills                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IndividualParameterBindWidget_C::OnUpdateActiveSkill__DelegateSignature(TArray<enum class EPalWazaID>& ActiveSkills)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateActiveSkill__DelegateSignature");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateActiveSkill__DelegateSignature_Params Parms{};

	Parms.ActiveSkills = ActiveSkills;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateCondition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IndividualParameterBindWidget_C::OnUpdateCondition__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateCondition__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateLevel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateLevel__DelegateSignature(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateLevel__DelegateSignature");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateLevel__DelegateSignature_Params Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateExp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AddExp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldExp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowExpRate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateExp__DelegateSignature(int32 AddExp, int32 OldExp, double NowExpRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateExp__DelegateSignature");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature_Params Parms{};

	Parms.AddExp = AddExp;
	Parms.OldExp = OldExp;
	Parms.NowExpRate = NowExpRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSanity__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowSanity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowMaxSanity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateSanity__DelegateSignature(double NowSanity, double NowMaxSanity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateSanity__DelegateSignature");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateSanity__DelegateSignature_Params Parms{};

	Parms.NowSanity = NowSanity;
	Parms.NowMaxSanity = NowMaxSanity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateNickName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewNickName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateNickName__DelegateSignature(const class FString& NewNickName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateNickName__DelegateSignature");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateNickName__DelegateSignature_Params Parms{};

	Parms.NewNickName = NewNickName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateHunger__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowMaxHunger                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateHunger__DelegateSignature(double NowHunger, double NowMaxHunger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateHunger__DelegateSignature");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateHunger__DelegateSignature_Params Parms{};

	Parms.NowHunger = NowHunger;
	Parms.NowMaxHunger = NowMaxHunger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSP__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowSP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               NowMaxSP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               IsOverHeated                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateSP__DelegateSignature(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateSP__DelegateSignature");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature_Params Parms{};

	Parms.NowSP = NowSP;
	Parms.NowMaxSP = NowMaxSP;
	Parms.IsOverHeated = IsOverHeated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateHP__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               NowMaxHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_IndividualParameterBindWidget_C::OnUpdateHP__DelegateSignature(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateHP__DelegateSignature");

	Params::UWBP_IndividualParameterBindWidget_C_OnUpdateHP__DelegateSignature_Params Parms{};

	Parms.NowHP = NowHP;
	Parms.NowMaxHP = NowMaxHP;

	UObject::ProcessEvent(Func, &Parms);

}

}


