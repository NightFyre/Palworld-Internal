#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharaCre_ColorSelectWindowDispatchParameter.BP_CharaCre_ColorSelectWindowDispatchParameter_C
// (None)

class UClass* UBP_CharaCre_ColorSelectWindowDispatchParameter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharaCre_ColorSelectWindowDispatchParameter_C");

	return Clss;
}


// BP_CharaCre_ColorSelectWindowDispatchParameter_C BP_CharaCre_ColorSelectWindowDispatchParameter.Default__BP_CharaCre_ColorSelectWindowDispatchParameter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* UBP_CharaCre_ColorSelectWindowDispatchParameter_C::GetDefaultObj()
{
	static class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CharaCre_ColorSelectWindowDispatchParameter_C*>(UBP_CharaCre_ColorSelectWindowDispatchParameter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharaCre_ColorSelectWindowDispatchParameter.BP_CharaCre_ColorSelectWindowDispatchParameter_C.OnChangedColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharaCre_ColorSelectWindowDispatchParameter_C::OnChangedColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharaCre_ColorSelectWindowDispatchParameter_C", "OnChangedColor__DelegateSignature");

	Params::UBP_CharaCre_ColorSelectWindowDispatchParameter_C_OnChangedColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}

}


