#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C
// (None)

class UClass* UWBP_PalDamageCanvas_OneShotText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalDamageCanvas_OneShotText_C");

	return Clss;
}


// WBP_PalDamageCanvas_OneShotText_C WBP_PalDamageCanvas_OneShotText.Default__WBP_PalDamageCanvas_OneShotText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalDamageCanvas_OneShotText_C* UWBP_PalDamageCanvas_OneShotText_C::GetDefaultObj()
{
	static class UWBP_PalDamageCanvas_OneShotText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalDamageCanvas_OneShotText_C*>(UWBP_PalDamageCanvas_OneShotText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.IsEquipAttacker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquip                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              CallFunc_GetHasWeapon_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::IsEquipAttacker(class AActor* Attacker, bool* IsEquip, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "IsEquipAttacker");

	Params::UWBP_PalDamageCanvas_OneShotText_C_IsEquipAttacker_Params Parms{};

	Parms.Attacker = Attacker;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHasWeapon_ReturnValue = CallFunc_GetHasWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquip != nullptr)
		*IsEquip = Parms.IsEquip;

}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.CalcLengthToPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Length                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::CalcLengthToPlayer(const struct FVector& HitLocation, double* Length, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "CalcLengthToPlayer");

	Params::UWBP_PalDamageCanvas_OneShotText_C_CalcLengthToPlayer_Params Parms{};

	Parms.HitLocation = HitLocation;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Length != nullptr)
		*Length = Parms.Length;

}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.CalcTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalDamageInfo              DamageInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::CalcTargetLocation(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "CalcTargetLocation");

	Params::UWBP_PalDamageCanvas_OneShotText_C_CalcTargetLocation_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.Defender = Defender;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.AddNewDamageText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo              DamageInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcDisplayDamage_outSpecialDamageRate                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalcDisplayDamage_weakCount                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalcDisplayDamage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_CalcTargetLocation_location                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalDamageTextType      CallFunc_CalcDamageTextType_textType                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CalcLengthToPlayer_length                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalUIDamageTextBase*        CallFunc_CreateDamageWidget_createdWdiget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalDamageText_C*        K2Node_DynamicCast_AsWBP_Pal_Damage_Text                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CalcDamageTextType_damageRate_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_StartDisplay_inDisplayTime_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::AddNewDamageText(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, float CallFunc_CalcDisplayDamage_outSpecialDamageRate, int32 CallFunc_CalcDisplayDamage_weakCount, int32 CallFunc_CalcDisplayDamage_ReturnValue, const struct FVector& CallFunc_CalcTargetLocation_location, bool CallFunc_Less_IntInt_ReturnValue, enum class EPalDamageTextType CallFunc_CalcDamageTextType_textType, double CallFunc_CalcLengthToPlayer_length, class UPalUIDamageTextBase* CallFunc_CreateDamageWidget_createdWdiget, bool CallFunc_Less_DoubleDouble_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UWBP_PalDamageText_C* K2Node_DynamicCast_AsWBP_Pal_Damage_Text, bool K2Node_DynamicCast_bSuccess, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_CalcDamageTextType_damageRate_ImplicitCast, float CallFunc_StartDisplay_inDisplayTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "AddNewDamageText");

	Params::UWBP_PalDamageCanvas_OneShotText_C_AddNewDamageText_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.Defender = Defender;
	Parms.CallFunc_CalcDisplayDamage_outSpecialDamageRate = CallFunc_CalcDisplayDamage_outSpecialDamageRate;
	Parms.CallFunc_CalcDisplayDamage_weakCount = CallFunc_CalcDisplayDamage_weakCount;
	Parms.CallFunc_CalcDisplayDamage_ReturnValue = CallFunc_CalcDisplayDamage_ReturnValue;
	Parms.CallFunc_CalcTargetLocation_location = CallFunc_CalcTargetLocation_location;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CalcDamageTextType_textType = CallFunc_CalcDamageTextType_textType;
	Parms.CallFunc_CalcLengthToPlayer_length = CallFunc_CalcLengthToPlayer_length;
	Parms.CallFunc_CreateDamageWidget_createdWdiget = CallFunc_CreateDamageWidget_createdWdiget;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Damage_Text = K2Node_DynamicCast_AsWBP_Pal_Damage_Text;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_CalcDamageTextType_damageRate_ImplicitCast = CallFunc_CalcDamageTextType_damageRate_ImplicitCast;
	Parms.CallFunc_StartDisplay_inDisplayTime_ImplicitCast = CallFunc_StartDisplay_inDisplayTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.CreateDamageWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUIDamageTextBase*        CreatedWdiget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalDamageText_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::CreateDamageWidget(class UPalUIDamageTextBase** CreatedWdiget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalDamageText_C* CallFunc_Create_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "CreateDamageWidget");

	Params::UWBP_PalDamageCanvas_OneShotText_C_CreateDamageWidget_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWdiget != nullptr)
		*CreatedWdiget = Parms.CreatedWdiget;

}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.CalcDamageTextType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo              DamageInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DamageRate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WeakCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalDamageTextType      TextType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipAttacker_IsEquip                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetWeakCount_ForUI_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::CalcDamageTextType(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, double DamageRate, int32 WeakCount, enum class EPalDamageTextType* TextType, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsEquipAttacker_IsEquip, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetWeakCount_ForUI_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "CalcDamageTextType");

	Params::UWBP_PalDamageCanvas_OneShotText_C_CalcDamageTextType_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.Defender = Defender;
	Parms.DamageRate = DamageRate;
	Parms.WeakCount = WeakCount;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsEquipAttacker_IsEquip = CallFunc_IsEquipAttacker_IsEquip;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWeakCount_ForUI_ReturnValue = CallFunc_GetWeakCount_ForUI_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TextType != nullptr)
		*TextType = Parms.TextType;

}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDamageCanvas_OneShotText_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalDamageCanvas_OneShotText_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.AddDamageTextEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::AddDamageTextEvent(struct FPalDamageInfo& DamageInfo, class AActor* Defender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "AddDamageTextEvent");

	Params::UWBP_PalDamageCanvas_OneShotText_C_AddDamageTextEvent_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.Defender = Defender;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalDamageCanvas_OneShotText_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C.ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamagePopUpManager*      CallFunc_GetDamagePopUpManager_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamagePopUpManager*      CallFunc_GetDamagePopUpManager_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo              K2Node_CustomEvent_DamageInfo                                    (ConstParm)
// class AActor*                      K2Node_CustomEvent_defender                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDamageCanvas_OneShotText_C::ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText(int32 EntryPoint, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UPalDamagePopUpManager* CallFunc_GetDamagePopUpManager_ReturnValue, class UPalDamagePopUpManager* CallFunc_GetDamagePopUpManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalDamageInfo& K2Node_CustomEvent_DamageInfo, class AActor* K2Node_CustomEvent_defender, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDead_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDamageCanvas_OneShotText_C", "ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText");

	Params::UWBP_PalDamageCanvas_OneShotText_C_ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_GetDamagePopUpManager_ReturnValue = CallFunc_GetDamagePopUpManager_ReturnValue;
	Parms.CallFunc_GetDamagePopUpManager_ReturnValue_1 = CallFunc_GetDamagePopUpManager_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_DamageInfo = K2Node_CustomEvent_DamageInfo;
	Parms.K2Node_CustomEvent_defender = K2Node_CustomEvent_defender;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


