#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WorldSecurityLaw_AttackToNonCriminal.BP_WorldSecurityLaw_AttackToNonCriminal_C
// (None)

class UClass* UBP_WorldSecurityLaw_AttackToNonCriminal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WorldSecurityLaw_AttackToNonCriminal_C");

	return Clss;
}


// BP_WorldSecurityLaw_AttackToNonCriminal_C BP_WorldSecurityLaw_AttackToNonCriminal.Default__BP_WorldSecurityLaw_AttackToNonCriminal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WorldSecurityLaw_AttackToNonCriminal_C* UBP_WorldSecurityLaw_AttackToNonCriminal_C::GetDefaultObj()
{
	static class UBP_WorldSecurityLaw_AttackToNonCriminal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WorldSecurityLaw_AttackToNonCriminal_C*>(UBP_WorldSecurityLaw_AttackToNonCriminal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WorldSecurityLaw_AttackToNonCriminal.BP_WorldSecurityLaw_AttackToNonCriminal_C.IsValidCharacterActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bValid                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CharacterParameter                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*Parameter                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WorldSecurityLaw_AttackToNonCriminal_C::IsValidCharacterActor(class AActor* Actor, bool* bValid, class UPalCharacterParameterComponent** CharacterParameter, class UPalCharacterParameterComponent* Parameter, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WorldSecurityLaw_AttackToNonCriminal_C", "IsValidCharacterActor");

	Params::UBP_WorldSecurityLaw_AttackToNonCriminal_C_IsValidCharacterActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.Parameter = Parameter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (CharacterParameter != nullptr)
		*CharacterParameter = Parms.CharacterParameter;

}


// Function BP_WorldSecurityLaw_AttackToNonCriminal.BP_WorldSecurityLaw_AttackToNonCriminal_C.IsOrganizationCitizen
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalOrganizationType    OrganizationType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCitizen                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WorldSecurityLaw_AttackToNonCriminal_C::IsOrganizationCitizen(enum class EPalOrganizationType OrganizationType, bool* bCitizen, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WorldSecurityLaw_AttackToNonCriminal_C", "IsOrganizationCitizen");

	Params::UBP_WorldSecurityLaw_AttackToNonCriminal_C_IsOrganizationCitizen_Params Parms{};

	Parms.OrganizationType = OrganizationType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCitizen != nullptr)
		*bCitizen = Parms.bCitizen;

}


// Function BP_WorldSecurityLaw_AttackToNonCriminal.BP_WorldSecurityLaw_AttackToNonCriminal_C.Condition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult            DamageResult                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UPalIndividualCharacterHandle*CriminalHandle                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*AttackerCharacterParameter                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*DefenderCharacterParameter                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWildNPC_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalRideMarkerComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOtomo_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRiding_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWildNPC_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPalMonster_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidCharacterActor_bValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_IsValidCharacterActor_CharacterParameter                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidCharacterActor_bValid_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_IsValidCharacterActor_CharacterParameter_1              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalOrganizationType    CallFunc_GetOrganizationTypeByIndividualHandle_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOrganizationCitizen_bCitizen                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_WorldSecurityLaw_AttackToNonCriminal_C::Condition(struct FPalDamageResult& DamageResult, class UPalIndividualCharacterHandle** CriminalHandle, class UPalCharacterParameterComponent* AttackerCharacterParameter, class UPalCharacterParameterComponent* DefenderCharacterParameter, bool CallFunc_IsWildNPC_ReturnValue, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsOtomo_ReturnValue, bool CallFunc_IsRiding_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsWildNPC_ReturnValue_1, bool CallFunc_IsPalMonster_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidCharacterActor_bValid, class UPalCharacterParameterComponent* CallFunc_IsValidCharacterActor_CharacterParameter, bool CallFunc_IsValidCharacterActor_bValid_1, class UPalCharacterParameterComponent* CallFunc_IsValidCharacterActor_CharacterParameter_1, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class EPalOrganizationType CallFunc_GetOrganizationTypeByIndividualHandle_ReturnValue, bool CallFunc_IsOrganizationCitizen_bCitizen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WorldSecurityLaw_AttackToNonCriminal_C", "Condition");

	Params::UBP_WorldSecurityLaw_AttackToNonCriminal_C_Condition_Params Parms{};

	Parms.DamageResult = DamageResult;
	Parms.AttackerCharacterParameter = AttackerCharacterParameter;
	Parms.DefenderCharacterParameter = DefenderCharacterParameter;
	Parms.CallFunc_IsWildNPC_ReturnValue = CallFunc_IsWildNPC_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsOtomo_ReturnValue = CallFunc_IsOtomo_ReturnValue;
	Parms.CallFunc_IsRiding_ReturnValue = CallFunc_IsRiding_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsWildNPC_ReturnValue_1 = CallFunc_IsWildNPC_ReturnValue_1;
	Parms.CallFunc_IsPalMonster_ReturnValue = CallFunc_IsPalMonster_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValidCharacterActor_bValid = CallFunc_IsValidCharacterActor_bValid;
	Parms.CallFunc_IsValidCharacterActor_CharacterParameter = CallFunc_IsValidCharacterActor_CharacterParameter;
	Parms.CallFunc_IsValidCharacterActor_bValid_1 = CallFunc_IsValidCharacterActor_bValid_1;
	Parms.CallFunc_IsValidCharacterActor_CharacterParameter_1 = CallFunc_IsValidCharacterActor_CharacterParameter_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOrganizationTypeByIndividualHandle_ReturnValue = CallFunc_GetOrganizationTypeByIndividualHandle_ReturnValue;
	Parms.CallFunc_IsOrganizationCitizen_bCitizen = CallFunc_IsOrganizationCitizen_bCitizen;

	UObject::ProcessEvent(Func, &Parms);

	if (CriminalHandle != nullptr)
		*CriminalHandle = Parms.CriminalHandle;

	return Parms.ReturnValue;

}

}


