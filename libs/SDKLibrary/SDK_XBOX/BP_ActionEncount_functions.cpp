#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionEncount.BP_ActionEncount_C
// (None)

class UClass* UBP_ActionEncount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionEncount_C");

	return Clss;
}


// BP_ActionEncount_C BP_ActionEncount.Default__BP_ActionEncount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionEncount_C* UBP_ActionEncount_C::GetDefaultObj()
{
	static class UBP_ActionEncount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionEncount_C*>(UBP_ActionEncount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionEncount.BP_ActionEncount_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionEncount_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionEncount_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionEncount.BP_ActionEncount_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionEncount_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionEncount_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionEncount.BP_ActionEncount_C.ExecuteUbergraph_BP_ActionEncount
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionEncount_C::ExecuteUbergraph_BP_ActionEncount(int32 EntryPoint, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionEncount_C", "ExecuteUbergraph_BP_ActionEncount");

	Params::UBP_ActionEncount_C_ExecuteUbergraph_BP_ActionEncount_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


