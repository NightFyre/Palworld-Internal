#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_PalLocalPlayerSystemSound.BP_PalLocalPlayerSystemSound_C
class UBP_PalLocalPlayerSystemSound_C : public UPalGetWorldUObject
{
public:

	static class UClass* StaticClass();
	static class UBP_PalLocalPlayerSystemSound_C* GetDefaultObj();

	void OnChangeHunger(enum class EPalStatusHungerType Current, enum class EPalStatusHungerType Last, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1);
	void SetupLocalPlayer(class APalPlayerCharacter* Player, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue);
};

}


