#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRichTextDecorator_ActiveSkillName.BP_PalRichTextDecorator_ActiveSkillName_C
// (None)

class UClass* UBP_PalRichTextDecorator_ActiveSkillName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRichTextDecorator_ActiveSkillName_C");

	return Clss;
}


// BP_PalRichTextDecorator_ActiveSkillName_C BP_PalRichTextDecorator_ActiveSkillName.Default__BP_PalRichTextDecorator_ActiveSkillName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalRichTextDecorator_ActiveSkillName_C* UBP_PalRichTextDecorator_ActiveSkillName_C::GetDefaultObj()
{
	static class UBP_PalRichTextDecorator_ActiveSkillName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalRichTextDecorator_ActiveSkillName_C*>(UBP_PalRichTextDecorator_ActiveSkillName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalRichTextDecorator_ActiveSkillName.BP_PalRichTextDecorator_ActiveSkillName_C.GetTextStringInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString UBP_PalRichTextDecorator_ActiveSkillName_C::GetTextStringInternal(class UObject* WorldContextObject, class FName ID, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRichTextDecorator_ActiveSkillName_C", "GetTextStringInternal");

	Params::UBP_PalRichTextDecorator_ActiveSkillName_C_GetTextStringInternal_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ID = ID;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalRichTextDecorator_ActiveSkillName.BP_PalRichTextDecorator_ActiveSkillName_C.GetTagName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_PalRichTextDecorator_ActiveSkillName_C::GetTagName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRichTextDecorator_ActiveSkillName_C", "GetTagName");

	Params::UBP_PalRichTextDecorator_ActiveSkillName_C_GetTagName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


