#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass BP_WorldSecurityLaw_AreaInvasion.BP_WorldSecurityLaw_AreaInvasion_C
class UBP_WorldSecurityLaw_AreaInvasion_C : public UPalWorldSecurityLawTrigger_AreaInvasion
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_WorldSecurityLaw_AreaInvasion_C* GetDefaultObj();

	bool Condition(class AActor* InvasionActor, class UPalIndividualCharacterHandle** CriminalHandle, bool CallFunc_IsPlayerControlActor_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion(int32 EntryPoint);
};

}


