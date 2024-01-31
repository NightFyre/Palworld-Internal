#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass BP_WorldSecurityLaw_AttackToNonCriminal.BP_WorldSecurityLaw_AttackToNonCriminal_C
class UBP_WorldSecurityLaw_AttackToNonCriminal_C : public UPalWorldSecurityLawTrigger_CharacterDamaged
{
public:

	static class UClass* StaticClass();
	static class UBP_WorldSecurityLaw_AttackToNonCriminal_C* GetDefaultObj();

	void IsValidCharacterActor(class AActor* Actor, bool* bValid, class UPalCharacterParameterComponent** CharacterParameter, class UPalCharacterParameterComponent* Parameter, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void IsOrganizationCitizen(enum class EPalOrganizationType OrganizationType, bool* bCitizen, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	bool Condition(struct FPalDamageResult& DamageResult, class UPalIndividualCharacterHandle** CriminalHandle, class UPalCharacterParameterComponent* AttackerCharacterParameter, class UPalCharacterParameterComponent* DefenderCharacterParameter, bool CallFunc_IsWildNPC_ReturnValue, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsOtomo_ReturnValue, bool CallFunc_IsRiding_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsWildNPC_ReturnValue_1, bool CallFunc_IsPalMonster_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidCharacterActor_bValid, class UPalCharacterParameterComponent* CallFunc_IsValidCharacterActor_CharacterParameter, bool CallFunc_IsValidCharacterActor_bValid_1, class UPalCharacterParameterComponent* CallFunc_IsValidCharacterActor_CharacterParameter_1, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class EPalOrganizationType CallFunc_GetOrganizationTypeByIndividualHandle_ReturnValue, bool CallFunc_IsOrganizationCitizen_bCitizen);
};

}


