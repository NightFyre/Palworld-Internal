#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C
// (None)

class UClass* UWBP_MainMenu_Pal_Skill_Passive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Pal_Skill_Passive_C");

	return Clss;
}


// WBP_MainMenu_Pal_Skill_Passive_C WBP_MainMenu_Pal_Skill_Passive.Default__WBP_MainMenu_Pal_Skill_Passive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Pal_Skill_Passive_C* UWBP_MainMenu_Pal_Skill_Passive_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Pal_Skill_Passive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Pal_Skill_Passive_C*>(UWBP_MainMenu_Pal_Skill_Passive_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C.GetBindedPassiveSkillName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        PassiveSkillName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Passive_C::GetBindedPassiveSkillName(class FName* PassiveSkillName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Passive_C", "GetBindedPassiveSkillName");

	Params::UWBP_MainMenu_Pal_Skill_Passive_C_GetBindedPassiveSkillName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassiveSkillName != nullptr)
		*PassiveSkillName = Parms.PassiveSkillName;

}


// Function WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_Skill_Passive_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Passive_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C.SetPassiveSkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SkillName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPassiveSkillName_outName                             (None)
// class UPalPassiveSkillManager*     CallFunc_GetPassiveSkillManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalPassiveSkillDatabaseRow CallFunc_GetSkillData_outSkillData                               (None)
// bool                               CallFunc_GetSkillData_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Abs_Int_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Passive_C::SetPassiveSkill(class FName SkillName, int32 Temp_int_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetPassiveSkillName_outName, class UPalPassiveSkillManager* CallFunc_GetPassiveSkillManager_ReturnValue, const struct FPalPassiveSkillDatabaseRow& CallFunc_GetSkillData_outSkillData, bool CallFunc_GetSkillData_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Abs_Int_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UTexture2D* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Passive_C", "SetPassiveSkill");

	Params::UWBP_MainMenu_Pal_Skill_Passive_C_SetPassiveSkill_Params Parms{};

	Parms.SkillName = SkillName;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetPassiveSkillName_outName = CallFunc_GetPassiveSkillName_outName;
	Parms.CallFunc_GetPassiveSkillManager_ReturnValue = CallFunc_GetPassiveSkillManager_ReturnValue;
	Parms.CallFunc_GetSkillData_outSkillData = CallFunc_GetSkillData_outSkillData;
	Parms.CallFunc_GetSkillData_ReturnValue = CallFunc_GetSkillData_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Abs_Int_ReturnValue = CallFunc_Abs_Int_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C.AnmEvent_Rare
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_Skill_Passive_C::AnmEvent_Rare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Passive_C", "AnmEvent_Rare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C.AnmEvent_Bad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_Skill_Passive_C::AnmEvent_Bad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Passive_C", "AnmEvent_Bad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C.AnmEvent_Common
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_Skill_Passive_C::AnmEvent_Common()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Passive_C", "AnmEvent_Common");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C.AnmEvent_BgBlack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_Skill_Passive_C::AnmEvent_BgBlack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Passive_C", "AnmEvent_BgBlack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C.BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Passive_C::BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Passive_C", "BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_Skill_Passive_C_BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C.BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Passive_C::BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Passive_C", "BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_Skill_Passive_C_BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C.ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Passive
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Passive_C::ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Passive(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Passive_C", "ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Passive");

	Params::UWBP_MainMenu_Pal_Skill_Passive_C_ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Passive_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Passive_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Passive_C::OnUnhovered__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Passive_C", "OnUnhovered__DelegateSignature");

	Params::UWBP_MainMenu_Pal_Skill_Passive_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Passive.WBP_MainMenu_Pal_Skill_Passive_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Passive_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Passive_C::OnHovered__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Passive_C", "OnHovered__DelegateSignature");

	Params::UWBP_MainMenu_Pal_Skill_Passive_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


