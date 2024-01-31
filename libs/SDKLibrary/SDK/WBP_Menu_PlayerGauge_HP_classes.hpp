#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5C0 - 0x5B8)
// WidgetBlueprintGeneratedClass WBP_Menu_PlayerGauge_HP.WBP_Menu_PlayerGauge_HP_C
class UWBP_Menu_PlayerGauge_HP_C : public UWBP_Menu_CharacterHPGauge_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_Menu_PlayerGauge_HP_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_Menu_PlayerGauge_HP(int32 EntryPoint, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


