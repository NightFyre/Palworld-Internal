#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C
// (Actor)

class UClass* ABP_MonsterAIControllerBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MonsterAIControllerBase_C");

	return Clss;
}


// BP_MonsterAIControllerBase_C BP_MonsterAIControllerBase.Default__BP_MonsterAIControllerBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MonsterAIControllerBase_C* ABP_MonsterAIControllerBase_C::GetDefaultObj()
{
	static class ABP_MonsterAIControllerBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MonsterAIControllerBase_C*>(ABP_MonsterAIControllerBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.ToLogFontStyleName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalMonsterControllerBaseCampLogTypeLogType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StyleName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIControllerBase_C::ToLogFontStyleName(enum class EPalMonsterControllerBaseCampLogType LogType, class FName* StyleName, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIControllerBase_C", "ToLogFontStyleName");

	Params::ABP_MonsterAIControllerBase_C_ToLogFontStyleName_Params Parms{};

	Parms.LogType = LogType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (StyleName != nullptr)
		*StyleName = Parms.StyleName;

}


// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.ShowBaseCampLog_Internal
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalMonsterControllerBaseCampLogContentContent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        CallFunc_CreateBaseCampLogMessageText_Result                     (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ToLogFontStyleName_StyleName                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalLogContentToneType  CallFunc_To_Log_Tone_Type_toneType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalLogAdditionalData       K2Node_MakeStruct_PalLogAdditionalData                           (None)
// class UPalLogManager*              CallFunc_GetLogManager_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_AddLog_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIControllerBase_C::ShowBaseCampLog_Internal(struct FPalMonsterControllerBaseCampLogContent& Content, class FText CallFunc_CreateBaseCampLogMessageText_Result, class APawn* CallFunc_K2_GetPawn_ReturnValue, class FName CallFunc_ToLogFontStyleName_StyleName, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EPalLogContentToneType CallFunc_To_Log_Tone_Type_toneType, const struct FPalLogAdditionalData& K2Node_MakeStruct_PalLogAdditionalData, class UPalLogManager* CallFunc_GetLogManager_ReturnValue, const struct FGuid& CallFunc_AddLog_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIControllerBase_C", "ShowBaseCampLog_Internal");

	Params::ABP_MonsterAIControllerBase_C_ShowBaseCampLog_Internal_Params Parms{};

	Parms.Content = Content;
	Parms.CallFunc_CreateBaseCampLogMessageText_Result = CallFunc_CreateBaseCampLogMessageText_Result;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_ToLogFontStyleName_StyleName = CallFunc_ToLogFontStyleName_StyleName;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_To_Log_Tone_Type_toneType = CallFunc_To_Log_Tone_Type_toneType;
	Parms.K2Node_MakeStruct_PalLogAdditionalData = K2Node_MakeStruct_PalLogAdditionalData;
	Parms.CallFunc_GetLogManager_ReturnValue = CallFunc_GetLogManager_ReturnValue;
	Parms.CallFunc_AddLog_ReturnValue = CallFunc_AddLog_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.CreateBaseCampLogMessageText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalMonsterControllerBaseCampLogContentContent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Result                                                           (Parm, OutParm)
// bool                               IsFormatText                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        MessageText                                                      (Edit, BlueprintVisible)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_EnumToLocalizedText_ReturnValue                         (None)

void ABP_MonsterAIControllerBase_C::CreateBaseCampLogMessageText(struct FPalMonsterControllerBaseCampLogContent& Content, class FText* Result, bool IsFormatText, class FText MessageText, class FText CallFunc_GetLocalizedText_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_EnumToLocalizedText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIControllerBase_C", "CreateBaseCampLogMessageText");

	Params::ABP_MonsterAIControllerBase_C_CreateBaseCampLogMessageText_Params Parms{};

	Parms.Content = Content;
	Parms.IsFormatText = IsFormatText;
	Parms.MessageText = MessageText;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_EnumToLocalizedText_ReturnValue = CallFunc_EnumToLocalizedText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.To Log Tone Type
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalMonsterControllerBaseCampLogTypeLogType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalLogContentToneType  ToneType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIControllerBase_C::To_Log_Tone_Type(enum class EPalMonsterControllerBaseCampLogType LogType, enum class EPalLogContentToneType* ToneType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIControllerBase_C", "To Log Tone Type");

	Params::ABP_MonsterAIControllerBase_C_To_Log_Tone_Type_Params Parms{};

	Parms.LogType = LogType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ToneType != nullptr)
		*ToneType = Parms.ToneType;

}


// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.PlayDefaultAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIControllerBase_C::PlayDefaultAction(class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionCompositeBase* CallFunc_SpawnObject_ReturnValue, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component_1, bool K2Node_DynamicCast_bSuccess_1, class UPalAIActionBase* CallFunc_SpawnObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIControllerBase_C", "PlayDefaultAction");

	Params::ABP_MonsterAIControllerBase_C_PlayDefaultAction_Params Parms{};

	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component_1 = K2Node_DynamicCast_AsPal_AIAction_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIControllerBase_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIControllerBase_C", "ReceivePossess");

	Params::ABP_MonsterAIControllerBase_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIControllerBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIControllerBase_C", "ReceiveTick");

	Params::ABP_MonsterAIControllerBase_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               InCharacter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIControllerBase_C::_________0(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIControllerBase_C", "«¹¿à¤ÙóÈ_0");

	Params::ABP_MonsterAIControllerBase_C__________0_Params Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.SetupBySpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIControllerBase_C::SetupBySpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIControllerBase_C", "SetupBySpawner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MonsterAIControllerBase.BP_MonsterAIControllerBase_C.ExecuteUbergraph_BP_MonsterAIControllerBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActiveSkillSlot*         CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_InCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterOnCompleteInitializeParameterWrapper*CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIControllerBase_C::ExecuteUbergraph_BP_MonsterAIControllerBase(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* K2Node_Event_PossessedPawn, float K2Node_Event_DeltaSeconds, class UPalActiveSkillSlot* CallFunc_SpawnObject_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class APalCharacter* K2Node_CustomEvent_InCharacter, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIControllerBase_C", "ExecuteUbergraph_BP_MonsterAIControllerBase");

	Params::ABP_MonsterAIControllerBase_C_ExecuteUbergraph_BP_MonsterAIControllerBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_CustomEvent_InCharacter = K2Node_CustomEvent_InCharacter;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue = CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


