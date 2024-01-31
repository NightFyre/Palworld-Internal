#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionSoundReaction.BP_ActionSoundReaction_C
// (None)

class UClass* UBP_ActionSoundReaction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionSoundReaction_C");

	return Clss;
}


// BP_ActionSoundReaction_C BP_ActionSoundReaction.Default__BP_ActionSoundReaction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionSoundReaction_C* UBP_ActionSoundReaction_C::GetDefaultObj()
{
	static class UBP_ActionSoundReaction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionSoundReaction_C*>(UBP_ActionSoundReaction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionSoundReaction.BP_ActionSoundReaction_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionSoundReaction_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSoundReaction_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionSoundReaction.BP_ActionSoundReaction_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionSoundReaction_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSoundReaction_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionSoundReaction.BP_ActionSoundReaction_C.ExecuteUbergraph_BP_ActionSoundReaction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSoundReaction_C::ExecuteUbergraph_BP_ActionSoundReaction(int32 EntryPoint, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSoundReaction_C", "ExecuteUbergraph_BP_ActionSoundReaction");

	Params::UBP_ActionSoundReaction_C_ExecuteUbergraph_BP_ActionSoundReaction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


