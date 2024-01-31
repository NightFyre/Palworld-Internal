#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C
// (None)

class UClass* UWBP_QuestAndBaseCampInfoCanvas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_QuestAndBaseCampInfoCanvas_C");

	return Clss;
}


// WBP_QuestAndBaseCampInfoCanvas_C WBP_QuestAndBaseCampInfoCanvas.Default__WBP_QuestAndBaseCampInfoCanvas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_QuestAndBaseCampInfoCanvas_C* UWBP_QuestAndBaseCampInfoCanvas_C::GetDefaultObj()
{
	static class UWBP_QuestAndBaseCampInfoCanvas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_QuestAndBaseCampInfoCanvas_C*>(UWBP_QuestAndBaseCampInfoCanvas_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.ShowLevelUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalBaseCampModel*           Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::ShowLevelUp(class UPalBaseCampModel* Model, int32 CallFunc_GetLevel_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "ShowLevelUp");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp_Params Parms{};

	Parms.Model = Model;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.UpdateWindowBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::UpdateWindowBorder(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsVisible_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "UpdateWindowBorder");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.ShowBaseCampInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QuestAndBaseCampInfoCanvas_C::ShowBaseCampInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "ShowBaseCampInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.HideBaseCampInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QuestAndBaseCampInfoCanvas_C::HideBaseCampInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "HideBaseCampInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnCompleteTutorialQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalQuestData*               CompletedQuest                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalQuestManager*            CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAllQuestComplete_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::OnCompleteTutorialQuest(class UPalQuestData* CompletedQuest, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAllQuestComplete_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnCompleteTutorialQuest");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest_Params Parms{};

	Parms.CompletedQuest = CompletedQuest;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsAllQuestComplete_ReturnValue = CallFunc_IsAllQuestComplete_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnUpdateTutorialQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalQuestData*               UpdatedQuest                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNowDisplayQuestWidgetNum_Num                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::OnUpdateTutorialQuest(class UPalQuestData* UpdatedQuest, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_GetNowDisplayQuestWidgetNum_Num, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnUpdateTutorialQuest");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_OnUpdateTutorialQuest_Params Parms{};

	Parms.UpdatedQuest = UpdatedQuest;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetNowDisplayQuestWidgetNum_Num = CallFunc_GetNowDisplayQuestWidgetNum_Num;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.GetLocalPlayerGroupID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuid                       GroupID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualParameter_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetGroupId_ReturnValue                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::GetLocalPlayerGroupID(struct FGuid* GroupID, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, const struct FGuid& CallFunc_GetGroupId_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "GetLocalPlayerGroupID");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_GetLocalPlayerGroupID_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIndividualParameter_ReturnValue = CallFunc_GetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetGroupId_ReturnValue = CallFunc_GetGroupId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (GroupID != nullptr)
		*GroupID = std::move(Parms.GroupID);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.TraceWorkerPal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetOwningPlayerCameraManager_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalMonsterCharacter*        K2Node_DynamicCast_AsPal_Monster_Character                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBaseCampPal_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class APalMonsterCharacter>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::TraceWorkerPal(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class APlayerCameraManager* CallFunc_GetOwningPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APalMonsterCharacter* K2Node_DynamicCast_AsPal_Monster_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsBaseCampPal_ReturnValue, TSoftObjectPtr<class APalMonsterCharacter> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "TraceWorkerPal");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetOwningPlayerCameraManager_ReturnValue = CallFunc_GetOwningPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsPal_Monster_Character = K2Node_DynamicCast_AsPal_Monster_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsBaseCampPal_ReturnValue = CallFunc_IsBaseCampPal_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnLeavePalBoxArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QuestAndBaseCampInfoCanvas_C::OnLeavePalBoxArea()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnLeavePalBoxArea");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnEnterPalBoxArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QuestAndBaseCampInfoCanvas_C::OnEnterPalBoxArea()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnEnterPalBoxArea");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.UpdateItemDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalDataTableRowName_ItemData>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// struct FPalDataTableRowName_ItemDataCallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInsideBaseCampUI_DisplayItemInfoCallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, int64>           CallFunc_CheckItemNum_outItemNumMap                              (None)
// int64                              CallFunc_CheckItemNum_outFoodNum                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::UpdateItemDetail(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FPalDataTableRowName_ItemData>& CallFunc_Map_Keys_Keys, const struct FPalDataTableRowName_ItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FPalInsideBaseCampUI_DisplayItemInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TMap<class FName, int64> CallFunc_CheckItemNum_outItemNumMap, int64 CallFunc_CheckItemNum_outFoodNum, int64 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "UpdateItemDetail");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CheckItemNum_outItemNumMap = CallFunc_CheckItemNum_outItemNumMap;
	Parms.CallFunc_CheckItemNum_outFoodNum = CallFunc_CheckItemNum_outFoodNum;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.UpdatePalDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetBaseCampPalBedCount_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>CallFunc_GetBaseCampPalSlots_outSlots                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::UpdatePalDetail(int32 CallFunc_GetBaseCampPalBedCount_ReturnValue, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetBaseCampPalSlots_outSlots, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "UpdatePalDetail");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_UpdatePalDetail_Params Parms{};

	Parms.CallFunc_GetBaseCampPalBedCount_ReturnValue = CallFunc_GetBaseCampPalBedCount_ReturnValue;
	Parms.CallFunc_GetBaseCampPalSlots_outSlots = CallFunc_GetBaseCampPalSlots_outSlots;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.UpdateTask
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalBaseCampTaskDataSet     CallFunc_GetTaskData_outTaskData                                 (None)
// bool                               CallFunc_GetTaskData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalBaseCampTaskCheckedData CallFunc_CheckTask_outCheckedData                                (None)
// bool                               CallFunc_CheckTask_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::UpdateTask(const struct FPalBaseCampTaskDataSet& CallFunc_GetTaskData_outTaskData, bool CallFunc_GetTaskData_ReturnValue, const struct FPalBaseCampTaskCheckedData& CallFunc_CheckTask_outCheckedData, bool CallFunc_CheckTask_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "UpdateTask");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_UpdateTask_Params Parms{};

	Parms.CallFunc_GetTaskData_outTaskData = CallFunc_GetTaskData_outTaskData;
	Parms.CallFunc_GetTaskData_ReturnValue = CallFunc_GetTaskData_ReturnValue;
	Parms.CallFunc_CheckTask_outCheckedData = CallFunc_CheckTask_outCheckedData;
	Parms.CallFunc_CheckTask_ReturnValue = CallFunc_CheckTask_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnUpdateBaseCampDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QuestAndBaseCampInfoCanvas_C::OnUpdateBaseCampDetail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnUpdateBaseCampDetail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.On Leave Base Camp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampManager*         CallFunc_GetBaseCampManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*           CallFunc_TryGetModel_OutModel                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetModel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::On_Leave_Base_Camp(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalBaseCampManager* CallFunc_GetBaseCampManager_ReturnValue, class UPalBaseCampModel* CallFunc_TryGetModel_OutModel, bool CallFunc_TryGetModel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "On Leave Base Camp");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetBaseCampManager_ReturnValue = CallFunc_GetBaseCampManager_ReturnValue;
	Parms.CallFunc_TryGetModel_OutModel = CallFunc_TryGetModel_OutModel;
	Parms.CallFunc_TryGetModel_ReturnValue = CallFunc_TryGetModel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnEnterBaseCamp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalBaseCampModel*           Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetGroupIdBelongTo_ReturnValue                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetId_ReturnValue                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*           CallFunc_GetInsideBaseCampModel_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetLocalPlayerGroupID_GroupID                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::OnEnterBaseCamp(class UPalBaseCampModel* Model, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGuid& CallFunc_GetGroupIdBelongTo_ReturnValue, const struct FGuid& CallFunc_GetId_ReturnValue, class UPalBaseCampModel* CallFunc_GetInsideBaseCampModel_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetLocalPlayerGroupID_GroupID, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnEnterBaseCamp");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_OnEnterBaseCamp_Params Parms{};

	Parms.Model = Model;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGroupIdBelongTo_ReturnValue = CallFunc_GetGroupIdBelongTo_ReturnValue;
	Parms.CallFunc_GetId_ReturnValue = CallFunc_GetId_ReturnValue;
	Parms.CallFunc_GetInsideBaseCampModel_ReturnValue = CallFunc_GetInsideBaseCampModel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerGroupID_GroupID = CallFunc_GetLocalPlayerGroupID_GroupID;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "Tick");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_QuestAndBaseCampInfoCanvas_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_QuestAndBaseCampInfoCanvas_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_QuestAndBaseCampInfoCanvas_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnSetup_AfterCreatedPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QuestAndBaseCampInfoCanvas_C::OnSetup_AfterCreatedPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnSetup_AfterCreatedPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.SetVerticalBoxVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::SetVerticalBoxVisible(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "SetVerticalBoxVisible");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_SetVerticalBoxVisible_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalInsideBaseCampCheckComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*           CallFunc_GetInsideBaseCampModel_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalInsideBaseCampCheckComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*           CallFunc_GetInsideBaseCampModel_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BaseCampTaskChecker_C*   CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalQuestManager*            CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsVisible                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetRemainTimer_remainTime_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_Variable, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, class UPalInsideBaseCampCheckComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalBaseCampModel* CallFunc_GetInsideBaseCampModel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UPalInsideBaseCampCheckComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UPalBaseCampModel* CallFunc_GetInsideBaseCampModel_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UBP_BaseCampTaskChecker_C* CallFunc_SpawnObject_ReturnValue, class UPalQuestManager* CallFunc_GetQuestManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_CustomEvent_IsVisible, enum class ESlateVisibility K2Node_Select_Default, double CallFunc_SetRemainTimer_remainTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas");

	Params::UWBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetInsideBaseCampModel_ReturnValue = CallFunc_GetInsideBaseCampModel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetPalmi_ReturnValue_1 = CallFunc_GetPalmi_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetInsideBaseCampModel_ReturnValue_1 = CallFunc_GetInsideBaseCampModel_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_IsVisible = K2Node_CustomEvent_IsVisible;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetRemainTimer_remainTime_ImplicitCast = CallFunc_SetRemainTimer_remainTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


