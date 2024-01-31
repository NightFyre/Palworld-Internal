#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C
// (None)

class UClass* UWBP_PalInGameMenuItemSlotButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalInGameMenuItemSlotButton_C");

	return Clss;
}


// WBP_PalInGameMenuItemSlotButton_C WBP_PalInGameMenuItemSlotButton.Default__WBP_PalInGameMenuItemSlotButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalInGameMenuItemSlotButton_C* UWBP_PalInGameMenuItemSlotButton_C::GetDefaultObj()
{
	static class UWBP_PalInGameMenuItemSlotButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalInGameMenuItemSlotButton_C*>(UWBP_PalInGameMenuItemSlotButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.SetEnableDefaultClickSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::SetEnableDefaultClickSound(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "SetEnableDefaultClickSound");

	Params::UWBP_PalInGameMenuItemSlotButton_C_SetEnableDefaultClickSound_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.SetPalGearIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::SetPalGearIcon(class FName ItemId, bool Temp_bool_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "SetPalGearIcon");

	Params::UWBP_PalInGameMenuItemSlotButton_C_SetPalGearIcon_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.Toggle Corruption Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::Toggle_Corruption_Visibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "Toggle Corruption Visibility");

	Params::UWBP_PalInGameMenuItemSlotButton_C_Toggle_Corruption_Visibility_Params Parms{};

	Parms.Visible = Visible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.OnSetCorruptionImpl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCorruptionRemainTimeText_ReturnValue                 (None)
// struct FPalItemId                  CallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCorruptionProgressRate_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::OnSetCorruptionImpl(class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetCorruptionRemainTimeText_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot_2, float CallFunc_GetCorruptionProgressRate_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "OnSetCorruptionImpl");

	Params::UWBP_PalInGameMenuItemSlotButton_C_OnSetCorruptionImpl_Params Parms{};

	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.CallFunc_GetTargetSlot_targetSlot_1 = CallFunc_GetTargetSlot_targetSlot_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCorruptionRemainTimeText_ReturnValue = CallFunc_GetCorruptionRemainTimeText_ReturnValue;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;
	Parms.CallFunc_GetTargetSlot_targetSlot_2 = CallFunc_GetTargetSlot_targetSlot_2;
	Parms.CallFunc_GetCorruptionProgressRate_ReturnValue = CallFunc_GetCorruptionProgressRate_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.On Notify Durability Impl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MaxDurability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowDurability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::On_Notify_Durability_Impl(double MaxDurability, double NowDurability, class UWBP_PalItemSlotButtonBase_C* SelfWidget, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "On Notify Durability Impl");

	Params::UWBP_PalInGameMenuItemSlotButton_C_On_Notify_Durability_Impl_Params Parms{};

	Parms.MaxDurability = MaxDurability;
	Parms.NowDurability = NowDurability;
	Parms.SelfWidget = SelfWidget;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.OnSetEmptySlotImpl
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemSlotButton_C::OnSetEmptySlotImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "OnSetEmptySlotImpl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.On Set Valid Slot Impl
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalStaticItemDataBase*      StaticItemData                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class UPalItemSlot*                CallFunc_GetTargetSlot_targetSlot_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDynamicItemDataBase*     CallFunc_TryGetDynamicItemData_OutDynamicItemData                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetDynamicItemData_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemId                  CallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalObjectDurabilityInterface>K2Node_DynamicCast_AsPal_Object_Durability_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxDurability_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::On_Set_Valid_Slot_Impl(class UPalStaticItemDataBase* StaticItemData, int32 CallFunc_Min_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot_1, class UPalDynamicItemDataBase* CallFunc_TryGetDynamicItemData_OutDynamicItemData, bool CallFunc_TryGetDynamicItemData_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMaxDurability_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "On Set Valid Slot Impl");

	Params::UWBP_PalInGameMenuItemSlotButton_C_On_Set_Valid_Slot_Impl_Params Parms{};

	Parms.StaticItemData = StaticItemData;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_GetTargetSlot_targetSlot = CallFunc_GetTargetSlot_targetSlot;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_GetTargetSlot_targetSlot_1 = CallFunc_GetTargetSlot_targetSlot_1;
	Parms.CallFunc_TryGetDynamicItemData_OutDynamicItemData = CallFunc_TryGetDynamicItemData_OutDynamicItemData;
	Parms.CallFunc_TryGetDynamicItemData_ReturnValue = CallFunc_TryGetDynamicItemData_ReturnValue;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Object_Durability_Interface = K2Node_DynamicCast_AsPal_Object_Durability_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMaxDurability_ReturnValue = CallFunc_GetMaxDurability_ReturnValue;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.RegisterItemSlotWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotBase_C*      ItemSlotWidget                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C** ItemSlotWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "RegisterItemSlotWidget");

	Params::UWBP_PalInGameMenuItemSlotButton_C_RegisterItemSlotWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSlotWidget != nullptr)
		*ItemSlotWidget = Parms.ItemSlotWidget;

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.RegisterButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::RegisterButton(class UCommonButtonBase** Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "RegisterButton");

	Params::UWBP_PalInGameMenuItemSlotButton_C_RegisterButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemSlotButton_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "AnmEvent_Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.AnmEvent_Unfocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemSlotButton_C::AnmEvent_Unfocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "AnmEvent_Unfocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.AnmEvent_RepairMark
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::AnmEvent_RepairMark(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "AnmEvent_RepairMark");

	Params::UWBP_PalInGameMenuItemSlotButton_C_AnmEvent_RepairMark_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.AnmEvent_Rarity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::AnmEvent_Rarity(int32 Rarity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "AnmEvent_Rarity");

	Params::UWBP_PalInGameMenuItemSlotButton_C_AnmEvent_Rarity_Params Parms{};

	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemSlotButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.OnHoveredEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::OnHoveredEvent(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "OnHoveredEvent");

	Params::UWBP_PalInGameMenuItemSlotButton_C_OnHoveredEvent_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.OnDraggedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::OnDraggedEvent(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "OnDraggedEvent");

	Params::UWBP_PalInGameMenuItemSlotButton_C_OnDraggedEvent_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.OnDroppedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::OnDroppedEvent(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "OnDroppedEvent");

	Params::UWBP_PalInGameMenuItemSlotButton_C_OnDroppedEvent_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.OnLiftedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LiftNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::OnLiftedEvent(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "OnLiftedEvent");

	Params::UWBP_PalInGameMenuItemSlotButton_C_OnLiftedEvent_Params Parms{};

	Parms.LiftNum = LiftNum;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.OnUnhoveredEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::OnUnhoveredEvent(class UWBP_PalItemSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "OnUnhoveredEvent");

	Params::UWBP_PalInGameMenuItemSlotButton_C_OnUnhoveredEvent_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.OnSetValidSlotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemSlotButton_C::OnSetValidSlotEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "OnSetValidSlotEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.OnEmptyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemSlotButton_C::OnEmptyEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "OnEmptyEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.SetSlotLock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemSlotButton_C::SetSlotLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "SetSlotLock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemSlotButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.ToggleLock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Lock                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::ToggleLock(bool Lock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "ToggleLock");

	Params::UWBP_PalInGameMenuItemSlotButton_C_ToggleLock_Params Parms{};

	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C.ExecuteUbergraph_WBP_PalInGameMenuItemSlotButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsEnable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Rarity                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_CustomEvent_Widget_4                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_CustomEvent_Widget_3                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_CustomEvent_Widget_2                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LiftNum                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_CustomEvent_Widget_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotButtonBase_C*K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalItemSlotBase_C*      CallFunc_RegisterItemSlotWidget_itemSlotWidget                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUILiftSlotModel*         CallFunc_GetLiftSlotModel_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Lock                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemSlotButton_C::ExecuteUbergraph_WBP_PalInGameMenuItemSlotButton(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_IsEnable, int32 K2Node_CustomEvent_Rarity, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool Temp_bool_Variable_1, double CallFunc_Add_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_4, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_3, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_2, int32 K2Node_CustomEvent_LiftNum, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_1, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UWBP_PalItemSlotBase_C* CallFunc_RegisterItemSlotWidget_itemSlotWidget, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, bool K2Node_CustomEvent_Lock, enum class ESlateVisibility K2Node_Select_Default_1, float CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast, float CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemSlotButton_C", "ExecuteUbergraph_WBP_PalInGameMenuItemSlotButton");

	Params::UWBP_PalInGameMenuItemSlotButton_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlotButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue_1 = CallFunc_GetEndTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_IsEnable = K2Node_CustomEvent_IsEnable;
	Parms.K2Node_CustomEvent_Rarity = K2Node_CustomEvent_Rarity;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Widget_4 = K2Node_CustomEvent_Widget_4;
	Parms.K2Node_CustomEvent_Widget_3 = K2Node_CustomEvent_Widget_3;
	Parms.K2Node_CustomEvent_Widget_2 = K2Node_CustomEvent_Widget_2;
	Parms.K2Node_CustomEvent_LiftNum = K2Node_CustomEvent_LiftNum;
	Parms.K2Node_CustomEvent_Widget_1 = K2Node_CustomEvent_Widget_1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_RegisterItemSlotWidget_itemSlotWidget = CallFunc_RegisterItemSlotWidget_itemSlotWidget;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GetLiftSlotModel_ReturnValue = CallFunc_GetLiftSlotModel_ReturnValue;
	Parms.K2Node_CustomEvent_Lock = K2Node_CustomEvent_Lock;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast = CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast;
	Parms.CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast = CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


