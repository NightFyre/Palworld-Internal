#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C
// (None)

class UClass* UWBP_Ingame_PalHPGauge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Ingame_PalHPGauge_C");

	return Clss;
}


// WBP_Ingame_PalHPGauge_C WBP_Ingame_PalHPGauge.Default__WBP_Ingame_PalHPGauge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Ingame_PalHPGauge_C* UWBP_Ingame_PalHPGauge_C::GetDefaultObj()
{
	static class UWBP_Ingame_PalHPGauge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Ingame_PalHPGauge_C*>(UWBP_Ingame_PalHPGauge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Update Level Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::Update_Level_Binded(int32 NewLevel, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Update Level Binded");

	Params::UWBP_Ingame_PalHPGauge_C_Update_Level_Binded_Params Parms{};

	Parms.NewLevel = NewLevel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.GetPrevOtomoSlot
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsEmpty                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPreviousOtomoSlotID_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::GetPrevOtomoSlot(class UPalIndividualCharacterSlot** Slot, bool* IsEmpty, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, int32 CallFunc_GetPreviousOtomoSlotID_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "GetPrevOtomoSlot");

	Params::UWBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot_Params Parms{};

	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_GetPreviousOtomoSlotID_ReturnValue = CallFunc_GetPreviousOtomoSlotID_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue = CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Slot != nullptr)
		*Slot = Parms.Slot;

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.GetNextOtomoSlot
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsEmpty                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNextOtomoSlotID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::GetNextOtomoSlot(class UPalIndividualCharacterSlot** Slot, bool* IsEmpty, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, int32 CallFunc_GetNextOtomoSlotID_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "GetNextOtomoSlot");

	Params::UWBP_Ingame_PalHPGauge_C_GetNextOtomoSlot_Params Parms{};

	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_GetNextOtomoSlotID_ReturnValue = CallFunc_GetNextOtomoSlotID_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue = CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Slot != nullptr)
		*Slot = Parms.Slot;

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnDecrementedOtomo_FromController
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::OnDecrementedOtomo_FromController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnDecrementedOtomo_FromController");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnIncrementedOtomo_FromController
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::OnIncrementedOtomo_FromController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnIncrementedOtomo_FromController");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnStartAim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::OnStartAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnStartAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnEndAim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::OnEndAim(bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnEndAim");

	Params::UWBP_Ingame_PalHPGauge_C_OnEndAim_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnChangedWeapon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ThrowPalWeapon_C*        K2Node_DynamicCast_AsBP_Throw_Pal_Weapon                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::OnChangedWeapon(class APalWeaponBase* Weapon, class ABP_ThrowPalWeapon_C* K2Node_DynamicCast_AsBP_Throw_Pal_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnChangedWeapon");

	Params::UWBP_Ingame_PalHPGauge_C_OnChangedWeapon_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.K2Node_DynamicCast_AsBP_Throw_Pal_Weapon = K2Node_DynamicCast_AsBP_Throw_Pal_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnDeactivatedOtomo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::OnDeactivatedOtomo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnDeactivatedOtomo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnActivatedOtomo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedOtomoID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::OnActivatedOtomo(class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, int32 CallFunc_GetSelectedOtomoID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnActivatedOtomo");

	Params::UWBP_Ingame_PalHPGauge_C_OnActivatedOtomo_Params Parms{};

	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_GetSelectedOtomoID_ReturnValue = CallFunc_GetSelectedOtomoID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.UpdateNickName_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewNickName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_Ingame_PalHPGauge_C::UpdateNickName_Binded(const class FString& NewNickName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "UpdateNickName_Binded");

	Params::UWBP_Ingame_PalHPGauge_C_UpdateNickName_Binded_Params Parms{};

	Parms.NewNickName = NewNickName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.UpdateHP_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               NowMaxHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue             (NoDestructor)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::UpdateHP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP, const struct FFixedPoint64& CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "UpdateHP_Binded");

	Params::UWBP_Ingame_PalHPGauge_C_UpdateHP_Binded_Params Parms{};

	Parms.NowHP = NowHP;
	Parms.NowMaxHP = NowMaxHP;
	Parms.CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue = CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.SetElementType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalElementType         Type1                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         Type2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::SetElementType(enum class EPalElementType Type1, enum class EPalElementType Type2, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "SetElementType");

	Params::UWBP_Ingame_PalHPGauge_C_SetElementType_Params Parms{};

	Parms.Type1 = Type1;
	Parms.Type2 = Type2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.On Update Otomo Index
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TmpSelectedIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedOtomoID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandle_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_GetHP_ReturnValue                                       (NoDestructor)
// struct FFixedPoint64               CallFunc_GetMaxHP_withBuff_ReturnValue                           (NoDestructor)
// struct FFixedPoint64               CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue             (NoDestructor)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::On_Update_Otomo_Index(int32 TmpSelectedIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, int32 CallFunc_GetSelectedOtomoID_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_withBuff_ReturnValue, const struct FFixedPoint64& CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "On Update Otomo Index");

	Params::UWBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index_Params Parms{};

	Parms.TmpSelectedIndex = TmpSelectedIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_GetSelectedOtomoID_ReturnValue = CallFunc_GetSelectedOtomoID_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue = CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHandle_ReturnValue = CallFunc_GetHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetHP_ReturnValue = CallFunc_GetHP_ReturnValue;
	Parms.CallFunc_GetMaxHP_withBuff_ReturnValue = CallFunc_GetMaxHP_withBuff_ReturnValue;
	Parms.CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue = CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.UpdateOtomoList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalOtomoHolderComponentBase*TmpOtomoholder                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_GetPrevOtomoSlot_Slot                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPrevOtomoSlot_IsEmpty                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_GetNextOtomoSlot_Slot                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNextOtomoSlot_IsEmpty                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedOtomoID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsALLEmpty_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOtomoCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::UpdateOtomoList(class UPalOtomoHolderComponentBase* TmpOtomoholder, class UPalIndividualCharacterSlot* CallFunc_GetPrevOtomoSlot_Slot, bool CallFunc_GetPrevOtomoSlot_IsEmpty, class UPalIndividualCharacterSlot* CallFunc_GetNextOtomoSlot_Slot, bool CallFunc_GetNextOtomoSlot_IsEmpty, int32 CallFunc_GetSelectedOtomoID_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsALLEmpty_ReturnValue, int32 CallFunc_GetOtomoCount_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "UpdateOtomoList");

	Params::UWBP_Ingame_PalHPGauge_C_UpdateOtomoList_Params Parms{};

	Parms.TmpOtomoholder = TmpOtomoholder;
	Parms.CallFunc_GetPrevOtomoSlot_Slot = CallFunc_GetPrevOtomoSlot_Slot;
	Parms.CallFunc_GetPrevOtomoSlot_IsEmpty = CallFunc_GetPrevOtomoSlot_IsEmpty;
	Parms.CallFunc_GetNextOtomoSlot_Slot = CallFunc_GetNextOtomoSlot_Slot;
	Parms.CallFunc_GetNextOtomoSlot_IsEmpty = CallFunc_GetNextOtomoSlot_IsEmpty;
	Parms.CallFunc_GetSelectedOtomoID_ReturnValue = CallFunc_GetSelectedOtomoID_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue = CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_IsALLEmpty_ReturnValue = CallFunc_IsALLEmpty_ReturnValue;
	Parms.CallFunc_GetOtomoCount_ReturnValue = CallFunc_GetOtomoCount_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnUpdateOtomoSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*LastHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedOtomoID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::OnUpdateOtomoSlot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue, int32 CallFunc_GetSelectedOtomoID_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnUpdateOtomoSlot");

	Params::UWBP_Ingame_PalHPGauge_C_OnUpdateOtomoSlot_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.LastHandle = LastHandle;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue = CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue;
	Parms.CallFunc_GetSelectedOtomoID_ReturnValue = CallFunc_GetSelectedOtomoID_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PalPlayerController_C*   K2Node_DynamicCast_AsBP_Pal_Player_Controller                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::Setup(class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class ABP_PalPlayerController_C* K2Node_DynamicCast_AsBP_Pal_Player_Controller, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Setup");

	Params::UWBP_Ingame_PalHPGauge_C_Setup_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_Player_Controller = K2Node_DynamicCast_AsBP_Pal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component = K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Finished_1811421C440B0864689BD0B33F2F9D51
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::Finished_1811421C440B0864689BD0B33F2F9D51()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Finished_1811421C440B0864689BD0B33F2F9D51");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Finished_9B82422440F7C97D278AB2B15E642EE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::Finished_9B82422440F7C97D278AB2B15E642EE3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Finished_9B82422440F7C97D278AB2B15E642EE3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Finished_1F59E19C478A6C6286266A9C072DA24B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::Finished_1F59E19C478A6C6286266A9C072DA24B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Finished_1F59E19C478A6C6286266A9C072DA24B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_OtomoActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::AnmEvent_OtomoActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_OtomoActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_OtomoDeactivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::AnmEvent_OtomoDeactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_OtomoDeactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_NextOtomo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::AnmEvent_NextOtomo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_NextOtomo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_PrevOtomo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::AnmEvent_PrevOtomo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_PrevOtomo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_ThrowActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::AnmEvent_ThrowActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_ThrowActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_ThrowOtomoDeactive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::AnmEvent_ThrowOtomoDeactive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_ThrowOtomoDeactive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_EnableSummonPalGuide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableFlag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::AnmEvent_EnableSummonPalGuide(bool EnableFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_EnableSummonPalGuide");

	Params::UWBP_Ingame_PalHPGauge_C_AnmEvent_EnableSummonPalGuide_Params Parms{};

	Parms.EnableFlag = EnableFlag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Tick");

	Params::UWBP_Ingame_PalHPGauge_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AddLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NowLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::CustomEvent(int32 AddLevel, int32 NowLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "CustomEvent");

	Params::UWBP_Ingame_PalHPGauge_C_CustomEvent_Params Parms{};

	Parms.AddLevel = AddLevel;
	Parms.NowLevel = NowLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnSetup_AfterCreatedPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PalHPGauge_C::OnSetup_AfterCreatedPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnSetup_AfterCreatedPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.ExecuteUbergraph_WBP_Ingame_PalHPGauge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUIDelayGaugeCalculator*  CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_EnableFlag                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPreviousOtomoSlotID_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNextOtomoSlotID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedOtomoID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_addLevel                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_nowLevel                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualCharacterParameterByActor_ReturnValue      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::ExecuteUbergraph_WBP_Ingame_PalHPGauge(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalUIDelayGaugeCalculator* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool K2Node_CustomEvent_EnableFlag, int32 CallFunc_GetPreviousOtomoSlotID_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetNextOtomoSlotID_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_GetSelectedOtomoID_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, int32 K2Node_CustomEvent_addLevel, int32 K2Node_CustomEvent_nowLevel, class UPalIndividualCharacterParameter* CallFunc_GetIndividualCharacterParameterByActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "ExecuteUbergraph_WBP_Ingame_PalHPGauge");

	Params::UWBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetEndTime_ReturnValue_1 = CallFunc_GetEndTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.K2Node_CustomEvent_EnableFlag = K2Node_CustomEvent_EnableFlag;
	Parms.CallFunc_GetPreviousOtomoSlotID_ReturnValue = CallFunc_GetPreviousOtomoSlotID_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetNextOtomoSlotID_ReturnValue = CallFunc_GetNextOtomoSlotID_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetSelectedOtomoID_ReturnValue = CallFunc_GetSelectedOtomoID_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.K2Node_CustomEvent_addLevel = K2Node_CustomEvent_addLevel;
	Parms.K2Node_CustomEvent_nowLevel = K2Node_CustomEvent_nowLevel;
	Parms.CallFunc_GetIndividualCharacterParameterByActor_ReturnValue = CallFunc_GetIndividualCharacterParameterByActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


