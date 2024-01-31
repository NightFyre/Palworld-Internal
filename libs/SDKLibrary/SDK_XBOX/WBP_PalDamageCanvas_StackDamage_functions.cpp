#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C
// (None)

class UClass* UWBP_PalDamageCanvas_StackDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalDamageCanvas_StackDamage_C");

	return Clss;
}


// WBP_PalDamageCanvas_StackDamage_C WBP_PalDamageCanvas_StackDamage.Default__WBP_PalDamageCanvas_StackDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalDamageCanvas_StackDamage_C* UWBP_PalDamageCanvas_StackDamage_C::GetDefaultObj()
{
	static class UWBP_PalDamageCanvas_StackDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalDamageCanvas_StackDamage_C*>(UWBP_PalDamageCanvas_StackDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C.CalcTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalDamageInfo              DamageInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_StackDamage_C::CalcTargetLocation(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, struct FVector* Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_StackDamage_C", "CalcTargetLocation");

	Params::UWBP_PalDamageCanvas_StackDamage_C_CalcTargetLocation_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.Defender = Defender;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C.CleanUpMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class AActor>>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class AActor>       CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_StackDamage_C::CleanUpMap(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TSoftObjectPtr<class AActor>>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_StackDamage_C", "CleanUpMap");

	Params::UWBP_PalDamageCanvas_StackDamage_C_CleanUpMap_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue_1 = CallFunc_Map_Remove_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C.UpdateDamageText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo              DamageInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class AActor>       CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// struct FVector                     CallFunc_CalcTargetLocation_location                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalUIDamageTextBase*        CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalcDamage_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalDamageText_C*        K2Node_DynamicCast_AsWBP_Pal_Damage_Text                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalDamageTextType      CallFunc_CalcDamageTextType_textType                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_StackDamage_C::UpdateDamageText(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, TSoftObjectPtr<class AActor> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FVector& CallFunc_CalcTargetLocation_location, class UPalUIDamageTextBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_CalcDamage_ReturnValue, class UWBP_PalDamageText_C* K2Node_DynamicCast_AsWBP_Pal_Damage_Text, bool K2Node_DynamicCast_bSuccess, enum class EPalDamageTextType CallFunc_CalcDamageTextType_textType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_StackDamage_C", "UpdateDamageText");

	Params::UWBP_PalDamageCanvas_StackDamage_C_UpdateDamageText_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.Defender = Defender;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_CalcTargetLocation_location = CallFunc_CalcTargetLocation_location;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_CalcDamage_ReturnValue = CallFunc_CalcDamage_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Damage_Text = K2Node_DynamicCast_AsWBP_Pal_Damage_Text;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CalcDamageTextType_textType = CallFunc_CalcDamageTextType_textType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C.IsExistDamageText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsExist                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class AActor>       CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// class UPalUIDamageTextBase*        CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_StackDamage_C::IsExistDamageText(class AActor* Defender, bool* IsExist, TSoftObjectPtr<class AActor> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UPalUIDamageTextBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_StackDamage_C", "IsExistDamageText");

	Params::UWBP_PalDamageCanvas_StackDamage_C_IsExistDamageText_Params Parms{};

	Parms.Defender = Defender;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsExist != nullptr)
		*IsExist = Parms.IsExist;

}


// Function WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C.AddNewDamageText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo              DamageInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class AActor>       CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// struct FVector                     CallFunc_CalcTargetLocation_location                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalcDamage_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalDamageTextType      CallFunc_CalcDamageTextType_textType                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalUIDamageTextBase*        CallFunc_CreateDamageWidget_createdWdiget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalDamageText_C*        K2Node_DynamicCast_AsWBP_Pal_Damage_Text                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_StartDisplay_inDisplayTime_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_StackDamage_C::AddNewDamageText(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class AActor> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FVector& CallFunc_CalcTargetLocation_location, int32 CallFunc_CalcDamage_ReturnValue, enum class EPalDamageTextType CallFunc_CalcDamageTextType_textType, class UPalUIDamageTextBase* CallFunc_CreateDamageWidget_createdWdiget, class UWBP_PalDamageText_C* K2Node_DynamicCast_AsWBP_Pal_Damage_Text, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_StartDisplay_inDisplayTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_StackDamage_C", "AddNewDamageText");

	Params::UWBP_PalDamageCanvas_StackDamage_C_AddNewDamageText_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.Defender = Defender;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_CalcTargetLocation_location = CallFunc_CalcTargetLocation_location;
	Parms.CallFunc_CalcDamage_ReturnValue = CallFunc_CalcDamage_ReturnValue;
	Parms.CallFunc_CalcDamageTextType_textType = CallFunc_CalcDamageTextType_textType;
	Parms.CallFunc_CreateDamageWidget_createdWdiget = CallFunc_CreateDamageWidget_createdWdiget;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Damage_Text = K2Node_DynamicCast_AsWBP_Pal_Damage_Text;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_StartDisplay_inDisplayTime_ImplicitCast = CallFunc_StartDisplay_inDisplayTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C.OnRequestedCloseWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUIDamageTextBase*        SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class AActor>>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class AActor>       CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalUIDamageTextBase*        CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_StackDamage_C::OnRequestedCloseWidget(class UPalUIDamageTextBase* SelfWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TSoftObjectPtr<class AActor>>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UPalUIDamageTextBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_StackDamage_C", "OnRequestedCloseWidget");

	Params::UWBP_PalDamageCanvas_StackDamage_C_OnRequestedCloseWidget_Params Parms{};

	Parms.SelfWidget = SelfWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C.CreateDamageWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUIDamageTextBase*        CreatedWdiget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalDamageText_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_StackDamage_C::CreateDamageWidget(class UPalUIDamageTextBase** CreatedWdiget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalDamageText_C* CallFunc_Create_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_StackDamage_C", "CreateDamageWidget");

	Params::UWBP_PalDamageCanvas_StackDamage_C_CreateDamageWidget_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWdiget != nullptr)
		*CreatedWdiget = Parms.CreatedWdiget;

}


// Function WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C.CalcDamageTextType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo              DamageInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalDamageTextType      TextType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetWeakCount_ForUI_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_StackDamage_C::CalcDamageTextType(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, enum class EPalDamageTextType* TextType, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetWeakCount_ForUI_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_StackDamage_C", "CalcDamageTextType");

	Params::UWBP_PalDamageCanvas_StackDamage_C_CalcDamageTextType_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.Defender = Defender;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWeakCount_ForUI_ReturnValue = CallFunc_GetWeakCount_ForUI_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (TextType != nullptr)
		*TextType = Parms.TextType;

}


// Function WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDamageCanvas_StackDamage_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_StackDamage_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalDamageCanvas_StackDamage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_StackDamage_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C.AddDamageTextEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_StackDamage_C::AddDamageTextEvent(struct FPalDamageInfo& DamageInfo, class AActor* Defender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_StackDamage_C", "AddDamageTextEvent");

	Params::UWBP_PalDamageCanvas_StackDamage_C_AddDamageTextEvent_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.Defender = Defender;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C.ExecuteUbergraph_WBP_PalDamageCanvas_StackDamage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDamagePopUpManager*      CallFunc_GetDamagePopUpManager_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamagePopUpManager*      CallFunc_GetDamagePopUpManager_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo              K2Node_CustomEvent_DamageInfo                                    (ConstParm)
// class AActor*                      K2Node_CustomEvent_defender                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExistDamageText_isExist                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExistDamageText_isExist_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_StackDamage_C::ExecuteUbergraph_WBP_PalDamageCanvas_StackDamage(int32 EntryPoint, class UPalDamagePopUpManager* CallFunc_GetDamagePopUpManager_ReturnValue, class UPalDamagePopUpManager* CallFunc_GetDamagePopUpManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalDamageInfo& K2Node_CustomEvent_DamageInfo, class AActor* K2Node_CustomEvent_defender, bool CallFunc_IsExistDamageText_isExist, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsExistDamageText_isExist_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_StackDamage_C", "ExecuteUbergraph_WBP_PalDamageCanvas_StackDamage");

	Params::UWBP_PalDamageCanvas_StackDamage_C_ExecuteUbergraph_WBP_PalDamageCanvas_StackDamage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDamagePopUpManager_ReturnValue = CallFunc_GetDamagePopUpManager_ReturnValue;
	Parms.CallFunc_GetDamagePopUpManager_ReturnValue_1 = CallFunc_GetDamagePopUpManager_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_DamageInfo = K2Node_CustomEvent_DamageInfo;
	Parms.K2Node_CustomEvent_defender = K2Node_CustomEvent_defender;
	Parms.CallFunc_IsExistDamageText_isExist = CallFunc_IsExistDamageText_isExist;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_IsExistDamageText_isExist_1 = CallFunc_IsExistDamageText_isExist_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


