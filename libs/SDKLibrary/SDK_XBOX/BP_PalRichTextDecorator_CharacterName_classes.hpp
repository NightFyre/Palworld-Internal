#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_PalRichTextDecorator_CharacterName.BP_PalRichTextDecorator_CharacterName_C
class UBP_PalRichTextDecorator_CharacterName_C : public UPalRichTextDecorator_TagText
{
public:

	static class UClass* StaticClass();
	static class UBP_PalRichTextDecorator_CharacterName_C* GetDefaultObj();

	class FString GetTextStringInternal(class UObject* WorldContextObject, class FName ID, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FText CallFunc_GetLocalizedCharacterName_OutText, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	class FString GetTagName();
};

}


