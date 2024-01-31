#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C
// (None)

class UClass* UBP_ActionPairBehavior_FeedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionPairBehavior_FeedItem_C");

	return Clss;
}


// BP_ActionPairBehavior_FeedItem_C BP_ActionPairBehavior_FeedItem.Default__BP_ActionPairBehavior_FeedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionPairBehavior_FeedItem_C* UBP_ActionPairBehavior_FeedItem_C::GetDefaultObj()
{
	static class UBP_ActionPairBehavior_FeedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionPairBehavior_FeedItem_C*>(UBP_ActionPairBehavior_FeedItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.OnCompleted
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Human                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Monster                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairBehavior_FeedItem_C::OnCompleted(class AActor* Human, class AActor* Monster)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPairBehavior_FeedItem_C", "OnCompleted");

	Params::UBP_ActionPairBehavior_FeedItem_C_OnCompleted_Params Parms{};

	Parms.Human = Human;
	Parms.Monster = Monster;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.GetHumanAnime
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalGeneralMontageType  Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalGeneralMontageType  Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalGeneralMontageType  Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalGeneralMontageType  Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTarget_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairBehavior_FeedItem_C::GetHumanAnime(class UAnimMontage** Montage, enum class EPalGeneralMontageType Temp_byte_Variable, enum class EPalGeneralMontageType Temp_byte_Variable_1, enum class EPalGeneralMontageType Temp_byte_Variable_2, enum class EPalGeneralMontageType Temp_byte_Variable_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimMontage* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UAnimMontage* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPairBehavior_FeedItem_C", "GetHumanAnime");

	Params::UBP_ActionPairBehavior_FeedItem_C_GetHumanAnime_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionTarget_ReturnValue = CallFunc_GetActionTarget_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionPairBehavior_FeedItem_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPairBehavior_FeedItem_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.ExecuteUbergraph_BP_ActionPairBehavior_FeedItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalNetArchive              CallFunc_GetBlackboard_ReturnValue                               (ConstParm)
// struct FPalItemSlotId              CallFunc_ReadPlayerFeedItemTo_ItemSlotId                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReadPlayerFeedItemTo_ItemNum                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemSlotIdAndNum        K2Node_MakeStruct_PalItemSlotIdAndNum                            (NoDestructor)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTarget_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalControlActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualCharacterParameterByActor_ReturnValue      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairBehavior_FeedItem_C::ExecuteUbergraph_BP_ActionPairBehavior_FeedItem(int32 EntryPoint, const struct FPalNetArchive& CallFunc_GetBlackboard_ReturnValue, const struct FPalItemSlotId& CallFunc_ReadPlayerFeedItemTo_ItemSlotId, int32 CallFunc_ReadPlayerFeedItemTo_ItemNum, const struct FPalItemSlotIdAndNum& K2Node_MakeStruct_PalItemSlotIdAndNum, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, bool CallFunc_IsLocalControlActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualCharacterParameterByActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPairBehavior_FeedItem_C", "ExecuteUbergraph_BP_ActionPairBehavior_FeedItem");

	Params::UBP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_ReadPlayerFeedItemTo_ItemSlotId = CallFunc_ReadPlayerFeedItemTo_ItemSlotId;
	Parms.CallFunc_ReadPlayerFeedItemTo_ItemNum = CallFunc_ReadPlayerFeedItemTo_ItemNum;
	Parms.K2Node_MakeStruct_PalItemSlotIdAndNum = K2Node_MakeStruct_PalItemSlotIdAndNum;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionTarget_ReturnValue = CallFunc_GetActionTarget_ReturnValue;
	Parms.CallFunc_IsLocalControlActor_ReturnValue = CallFunc_IsLocalControlActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIndividualCharacterParameterByActor_ReturnValue = CallFunc_GetIndividualCharacterParameterByActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


