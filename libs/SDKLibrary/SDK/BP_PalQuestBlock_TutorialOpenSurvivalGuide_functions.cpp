#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalQuestBlock_TutorialOpenSurvivalGuide.BP_PalQuestBlock_TutorialOpenSurvivalGuide_C
// (None)

class UClass* UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalQuestBlock_TutorialOpenSurvivalGuide_C");

	return Clss;
}


// BP_PalQuestBlock_TutorialOpenSurvivalGuide_C BP_PalQuestBlock_TutorialOpenSurvivalGuide.Default__BP_PalQuestBlock_TutorialOpenSurvivalGuide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C* UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C::GetDefaultObj()
{
	static class UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C*>(UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalQuestBlock_TutorialOpenSurvivalGuide.BP_PalQuestBlock_TutorialOpenSurvivalGuide_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C::OnInputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalQuestBlock_TutorialOpenSurvivalGuide_C", "OnInputMethodChanged");

	Params::UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C_OnInputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalQuestBlock_TutorialOpenSurvivalGuide.BP_PalQuestBlock_TutorialOpenSurvivalGuide_C.GetDescriptionText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        OutText                                                          (Parm, OutParm)
// struct FDataTableRowHandle         NewLocalVar_0                                                    (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         NewLocalVar                                                      (Edit, BlueprintVisible, NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)

void UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C::GetDescriptionText(class FText* OutText, const struct FDataTableRowHandle& NewLocalVar_0, const struct FDataTableRowHandle& NewLocalVar, class FText CallFunc_GetLocalizedTextFromHandle_Text, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalQuestBlock_TutorialOpenSurvivalGuide_C", "GetDescriptionText");

	Params::UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C_GetDescriptionText_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function BP_PalQuestBlock_TutorialOpenSurvivalGuide.BP_PalQuestBlock_TutorialOpenSurvivalGuide_C.OnSetup_ForBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C::OnSetup_ForBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalQuestBlock_TutorialOpenSurvivalGuide_C", "OnSetup_ForBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalQuestBlock_TutorialOpenSurvivalGuide.BP_PalQuestBlock_TutorialOpenSurvivalGuide_C.OnComplete_ForBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C::OnComplete_ForBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalQuestBlock_TutorialOpenSurvivalGuide_C", "OnComplete_ForBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalQuestBlock_TutorialOpenSurvivalGuide.BP_PalQuestBlock_TutorialOpenSurvivalGuide_C.ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C::ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide(int32 EntryPoint, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalQuestBlock_TutorialOpenSurvivalGuide_C", "ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide");

	Params::UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C_ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerController_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


