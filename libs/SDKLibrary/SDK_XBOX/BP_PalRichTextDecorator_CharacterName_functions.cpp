#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRichTextDecorator_CharacterName.BP_PalRichTextDecorator_CharacterName_C
// (None)

class UClass* UBP_PalRichTextDecorator_CharacterName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRichTextDecorator_CharacterName_C");

	return Clss;
}


// BP_PalRichTextDecorator_CharacterName_C BP_PalRichTextDecorator_CharacterName.Default__BP_PalRichTextDecorator_CharacterName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalRichTextDecorator_CharacterName_C* UBP_PalRichTextDecorator_CharacterName_C::GetDefaultObj()
{
	static class UBP_PalRichTextDecorator_CharacterName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalRichTextDecorator_CharacterName_C*>(UBP_PalRichTextDecorator_CharacterName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalRichTextDecorator_CharacterName.BP_PalRichTextDecorator_CharacterName_C.GetTextStringInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedCharacterName_OutText                       (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString UBP_PalRichTextDecorator_CharacterName_C::GetTextStringInternal(class UObject* WorldContextObject, class FName ID, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FText CallFunc_GetLocalizedCharacterName_OutText, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRichTextDecorator_CharacterName_C", "GetTextStringInternal");

	Params::UBP_PalRichTextDecorator_CharacterName_C_GetTextStringInternal_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ID = ID;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetLocalizedCharacterName_OutText = CallFunc_GetLocalizedCharacterName_OutText;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalRichTextDecorator_CharacterName.BP_PalRichTextDecorator_CharacterName_C.GetTagName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_PalRichTextDecorator_CharacterName_C::GetTagName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRichTextDecorator_CharacterName_C", "GetTagName");

	Params::UBP_PalRichTextDecorator_CharacterName_C_GetTagName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


