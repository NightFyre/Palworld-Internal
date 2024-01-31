#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5B0 - 0x5A8)
// WidgetBlueprintGeneratedClass WBP_Menu_PlayerEXP.WBP_Menu_PlayerEXP_C
class UWBP_Menu_PlayerEXP_C : public UWBP_Menu_CharacterExpGauge_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_Menu_PlayerEXP_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_Menu_PlayerEXP(int32 EntryPoint, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


