#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPC_Base.BP_NPC_Base_C
// (Actor, Pawn)

class UClass* ABP_NPC_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPC_Base_C");

	return Clss;
}


// BP_NPC_Base_C BP_NPC_Base.Default__BP_NPC_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPC_Base_C* ABP_NPC_Base_C::GetDefaultObj()
{
	static class ABP_NPC_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPC_Base_C*>(ABP_NPC_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPC_Base.BP_NPC_Base_C.SetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*           Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_Base_C::SetMaterial(class UMaterialInstance* Material, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Base_C", "SetMaterial");

	Params::ABP_NPC_Base_C_SetMaterial_Params Parms{};

	Parms.Material = Material;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_Base.BP_NPC_Base_C.SetupInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IPalInteractiveObjectComponentInterface>CallFunc_Delegates_self_CastInput                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalInteractDelegates*       CallFunc_Delegates_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalInteractiveObjectComponentInterface>CallFunc_SetIndicatorInterface_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalInteractiveObjectIndicatorInterface>CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_NPC_Base_C::SetupInteraction(TScriptInterface<class IPalInteractiveObjectComponentInterface> CallFunc_Delegates_self_CastInput, class UPalInteractDelegates* CallFunc_Delegates_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IPalInteractiveObjectComponentInterface> CallFunc_SetIndicatorInterface_self_CastInput, TScriptInterface<class IPalInteractiveObjectIndicatorInterface> CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Base_C", "SetupInteraction");

	Params::ABP_NPC_Base_C_SetupInteraction_Params Parms{};

	Parms.CallFunc_Delegates_self_CastInput = CallFunc_Delegates_self_CastInput;
	Parms.CallFunc_Delegates_ReturnValue = CallFunc_Delegates_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SetIndicatorInterface_self_CastInput = CallFunc_SetIndicatorInterface_self_CastInput;
	Parms.CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput = CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_Base.BP_NPC_Base_C.DestoryWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              CallFunc_GetHasWeapon_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_Base_C::DestoryWeapon(class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Base_C", "DestoryWeapon");

	Params::ABP_NPC_Base_C_DestoryWeapon_Params Parms{};

	Parms.CallFunc_GetHasWeapon_ReturnValue = CallFunc_GetHasWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_Base.BP_NPC_Base_C.CreateWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DefaultEquip                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWeaponType          WeaponType                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TempWeaponClass                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_NPCWeaponGenerator_C*    CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWeaponType          CallFunc_GetWeaponType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponEquip_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_Base_C::CreateWeapon(bool DefaultEquip, enum class EPalWeaponType WeaponType, class UClass* TempWeaponClass, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UBP_NPCWeaponGenerator_C* CallFunc_SpawnObject_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, enum class EPalWeaponType CallFunc_GetWeaponType_ReturnValue, bool CallFunc_GetWeaponEquip_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Base_C", "CreateWeapon");

	Params::ABP_NPC_Base_C_CreateWeapon_Params Parms{};

	Parms.DefaultEquip = DefaultEquip;
	Parms.WeaponType = WeaponType;
	Parms.TempWeaponClass = TempWeaponClass;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetCharacterID_ReturnValue = CallFunc_GetCharacterID_ReturnValue;
	Parms.CallFunc_GetWeaponType_ReturnValue = CallFunc_GetWeaponType_ReturnValue;
	Parms.CallFunc_GetWeaponEquip_ReturnValue = CallFunc_GetWeaponEquip_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_Base.BP_NPC_Base_C.«¹¿à¤ÙóÈ_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_NPC_Base_C::_________2(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Base_C", "«¹¿à¤ÙóÈ_2");

	Params::ABP_NPC_Base_C__________2_Params Parms{};

	Parms.DeadInfo = DeadInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_Base.BP_NPC_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_NPC_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_Base.BP_NPC_Base_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_Base_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Base_C", "ReceiveEndPlay");

	Params::ABP_NPC_Base_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_Base.BP_NPC_Base_C.BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalCharacterMovementComponent*Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_Base_C::BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Base_C", "BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature");

	Params::ABP_NPC_Base_C_BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature_Params Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_Base.BP_NPC_Base_C.SetActive_Interact_ToAll
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_Base_C::SetActive_Interact_ToAll(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Base_C", "SetActive_Interact_ToAll");

	Params::ABP_NPC_Base_C_SetActive_Interact_ToAll_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_Base.BP_NPC_Base_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               InCharacter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_Base_C::_________0(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Base_C", "«¹¿à¤ÙóÈ_0");

	Params::ABP_NPC_Base_C__________0_Params Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_Base.BP_NPC_Base_C.ExecuteUbergraph_BP_NPC_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDataTableRowName_SoundIDK2Node_MakeStruct_PalDataTableRowName_SoundID                    (NoDestructor, HasGetValueTypeHash)
// struct FPalDeadInfo                K2Node_CustomEvent_DeadInfo                                      (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalExpDatabase*             CallFunc_GetExpDatabase_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*K2Node_ComponentBoundEvent_component                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterOnCompleteInitializeParameterWrapper*CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalSoundOptions            K2Node_MakeStruct_PalSoundOptions                                (NoDestructor)
// bool                               K2Node_CustomEvent_Active                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_InCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_Base_C::ExecuteUbergraph_BP_NPC_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalExpDatabase* CallFunc_GetExpDatabase_ReturnValue, class AController* CallFunc_GetController_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UPalCharacterMovementComponent* K2Node_ComponentBoundEvent_component, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, bool K2Node_CustomEvent_Active, class APalCharacter* K2Node_CustomEvent_InCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Base_C", "ExecuteUbergraph_BP_NPC_Base");

	Params::ABP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_PalDataTableRowName_SoundID = K2Node_MakeStruct_PalDataTableRowName_SoundID;
	Parms.K2Node_CustomEvent_DeadInfo = K2Node_CustomEvent_DeadInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetExpDatabase_ReturnValue = CallFunc_GetExpDatabase_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_ComponentBoundEvent_component = K2Node_ComponentBoundEvent_component;
	Parms.CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue = CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue;
	Parms.K2Node_MakeStruct_PalSoundOptions = K2Node_MakeStruct_PalSoundOptions;
	Parms.K2Node_CustomEvent_Active = K2Node_CustomEvent_Active;
	Parms.K2Node_CustomEvent_InCharacter = K2Node_CustomEvent_InCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_Base.BP_NPC_Base_C.OnDestoryEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_Base_C::OnDestoryEvent__DelegateSignature(class APalCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Base_C", "OnDestoryEvent__DelegateSignature");

	Params::ABP_NPC_Base_C_OnDestoryEvent__DelegateSignature_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


