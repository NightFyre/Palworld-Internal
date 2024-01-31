#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_WorkSpace_NumArrow.WBP_IngameMenu_WorkSpace_NumArrow_C
// (None)

class UClass* UWBP_IngameMenu_WorkSpace_NumArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_WorkSpace_NumArrow_C");

	return Clss;
}


// WBP_IngameMenu_WorkSpace_NumArrow_C WBP_IngameMenu_WorkSpace_NumArrow.Default__WBP_IngameMenu_WorkSpace_NumArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_WorkSpace_NumArrow_C* UWBP_IngameMenu_WorkSpace_NumArrow_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_WorkSpace_NumArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_WorkSpace_NumArrow_C*>(UWBP_IngameMenu_WorkSpace_NumArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_WorkSpace_NumArrow.WBP_IngameMenu_WorkSpace_NumArrow_C.AnmEvent_Trigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_NumArrow_C::AnmEvent_Trigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_NumArrow_C", "AnmEvent_Trigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace_NumArrow.WBP_IngameMenu_WorkSpace_NumArrow_C.OnArrowClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_NumArrow_C::OnArrowClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_NumArrow_C", "OnArrowClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace_NumArrow.WBP_IngameMenu_WorkSpace_NumArrow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_NumArrow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_NumArrow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace_NumArrow.WBP_IngameMenu_WorkSpace_NumArrow_C.BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_NumArrow_C::BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_NumArrow_C", "BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_WorkSpace_NumArrow_C_BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace_NumArrow.WBP_IngameMenu_WorkSpace_NumArrow_C.BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_NumArrow_C::BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_NumArrow_C", "BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_WorkSpace_NumArrow_C_BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace_NumArrow.WBP_IngameMenu_WorkSpace_NumArrow_C.BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_NumArrow_C::BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_NumArrow_C", "BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_WorkSpace_NumArrow_C_BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace_NumArrow.WBP_IngameMenu_WorkSpace_NumArrow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_NumArrow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_NumArrow_C", "PreConstruct");

	Params::UWBP_IngameMenu_WorkSpace_NumArrow_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace_NumArrow.WBP_IngameMenu_WorkSpace_NumArrow_C.ExecuteUbergraph_WBP_IngameMenu_WorkSpace_NumArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_NumArrow_C::ExecuteUbergraph_WBP_IngameMenu_WorkSpace_NumArrow(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWidget* K2Node_Select_Default, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UWidget* K2Node_Select_Default_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, int32 CallFunc_SelectInt_ReturnValue, class UWidget* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_NumArrow_C", "ExecuteUbergraph_WBP_IngameMenu_WorkSpace_NumArrow");

	Params::UWBP_IngameMenu_WorkSpace_NumArrow_C_ExecuteUbergraph_WBP_IngameMenu_WorkSpace_NumArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace_NumArrow.WBP_IngameMenu_WorkSpace_NumArrow_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_NumArrow_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_NumArrow_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


