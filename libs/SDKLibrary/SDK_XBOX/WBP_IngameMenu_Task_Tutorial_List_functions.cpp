#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C
// (None)

class UClass* UWBP_IngameMenu_Task_Tutorial_List_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_Task_Tutorial_List_C");

	return Clss;
}


// WBP_IngameMenu_Task_Tutorial_List_C WBP_IngameMenu_Task_Tutorial_List.Default__WBP_IngameMenu_Task_Tutorial_List_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_Task_Tutorial_List_C* UWBP_IngameMenu_Task_Tutorial_List_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_Task_Tutorial_List_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_Task_Tutorial_List_C*>(UWBP_IngameMenu_Task_Tutorial_List_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.OnCompleteQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalQuestData*               CompletedQuest                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Tutorial_List_C::OnCompleteQuest(class UPalQuestData* CompletedQuest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_List_C", "OnCompleteQuest");

	Params::UWBP_IngameMenu_Task_Tutorial_List_C_OnCompleteQuest_Params Parms{};

	Parms.CompletedQuest = CompletedQuest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.OnUpdateQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalQuestData*               UpdatedQuest                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalQuestBlock*              CallFunc_GetQuestBlock_OutBlock                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetProgressText_OutText                                 (None)
// class FText                        CallFunc_GetDescriptionText_OutText                              (None)

void UWBP_IngameMenu_Task_Tutorial_List_C::OnUpdateQuest(class UPalQuestData* UpdatedQuest, bool CallFunc_IsValid_ReturnValue, class UPalQuestBlock* CallFunc_GetQuestBlock_OutBlock, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_GetProgressText_OutText, class FText CallFunc_GetDescriptionText_OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_List_C", "OnUpdateQuest");

	Params::UWBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest_Params Parms{};

	Parms.UpdatedQuest = UpdatedQuest;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestBlock_OutBlock = CallFunc_GetQuestBlock_OutBlock;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetProgressText_OutText = CallFunc_GetProgressText_OutText;
	Parms.CallFunc_GetDescriptionText_OutText = CallFunc_GetDescriptionText_OutText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalQuestData*               QuestData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Tutorial_List_C::Setup(class UPalQuestData* QuestData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_List_C", "Setup");

	Params::UWBP_IngameMenu_Task_Tutorial_List_C_Setup_Params Parms{};

	Parms.QuestData = QuestData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.Finished_8C570D2F49F607FCB9D12EBC618DA2B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Task_Tutorial_List_C::Finished_8C570D2F49F607FCB9D12EBC618DA2B5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_List_C", "Finished_8C570D2F49F607FCB9D12EBC618DA2B5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.Finished_781203AD4157D75A23805F92A2357ADB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Task_Tutorial_List_C::Finished_781203AD4157D75A23805F92A2357ADB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_List_C", "Finished_781203AD4157D75A23805F92A2357ADB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.AnmEvent_In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Task_Tutorial_List_C::AnmEvent_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_List_C", "AnmEvent_In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.AnmEvent_OutAndRemove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Task_Tutorial_List_C::AnmEvent_OutAndRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_List_C", "AnmEvent_OutAndRemove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.AnmEvent_Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Task_Tutorial_List_C::AnmEvent_Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_List_C", "AnmEvent_Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Task_Tutorial_List_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_List_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Tutorial_List_C::ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_List_C", "ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List");

	Params::UWBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.OnEndCloseAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_IngameMenu_Task_Tutorial_List_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Task_Tutorial_List_C::OnEndCloseAnim__DelegateSignature(class UWBP_IngameMenu_Task_Tutorial_List_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_Tutorial_List_C", "OnEndCloseAnim__DelegateSignature");

	Params::UWBP_IngameMenu_Task_Tutorial_List_C_OnEndCloseAnim__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


