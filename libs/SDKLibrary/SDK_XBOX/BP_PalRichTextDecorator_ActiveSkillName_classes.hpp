#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_PalRichTextDecorator_ActiveSkillName.BP_PalRichTextDecorator_ActiveSkillName_C
class UBP_PalRichTextDecorator_ActiveSkillName_C : public UPalRichTextDecorator_TagText
{
public:

	static class UClass* StaticClass();
	static class UBP_PalRichTextDecorator_ActiveSkillName_C* GetDefaultObj();

	class FString GetTextStringInternal(class UObject* WorldContextObject, class FName ID, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	class FString GetTagName();
};

}


