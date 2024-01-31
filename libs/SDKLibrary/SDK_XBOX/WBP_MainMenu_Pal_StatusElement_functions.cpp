#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_StatusElement.WBP_MainMenu_Pal_StatusElement_C
// (None)

class UClass* UWBP_MainMenu_Pal_StatusElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Pal_StatusElement_C");

	return Clss;
}


// WBP_MainMenu_Pal_StatusElement_C WBP_MainMenu_Pal_StatusElement.Default__WBP_MainMenu_Pal_StatusElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Pal_StatusElement_C* UWBP_MainMenu_Pal_StatusElement_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Pal_StatusElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Pal_StatusElement_C*>(UWBP_MainMenu_Pal_StatusElement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Pal_StatusElement.WBP_MainMenu_Pal_StatusElement_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalElementType         ElementType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPalElementTypeName_outName                           (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_StatusElement_C::Setup(enum class EPalElementType ElementType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetPalElementTypeName_outName, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_StatusElement_C", "Setup");

	Params::UWBP_MainMenu_Pal_StatusElement_C_Setup_Params Parms{};

	Parms.ElementType = ElementType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPalElementTypeName_outName = CallFunc_GetPalElementTypeName_outName;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


