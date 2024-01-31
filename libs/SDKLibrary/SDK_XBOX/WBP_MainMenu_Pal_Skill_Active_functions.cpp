#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C
// (None)

class UClass* UWBP_MainMenu_Pal_Skill_Active_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Pal_Skill_Active_C");

	return Clss;
}


// WBP_MainMenu_Pal_Skill_Active_C WBP_MainMenu_Pal_Skill_Active.Default__WBP_MainMenu_Pal_Skill_Active_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Pal_Skill_Active_C* UWBP_MainMenu_Pal_Skill_Active_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Pal_Skill_Active_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Pal_Skill_Active_C*>(UWBP_MainMenu_Pal_Skill_Active_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.SetEmptyInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_MainMenu_Pal_Skill_Active_C::SetEmptyInfo(class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "SetEmptyInfo");

	Params::UWBP_MainMenu_Pal_Skill_Active_C_SetEmptyInfo_Params Parms{};

	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.GetBindedWazaID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalWazaID              WazaID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Active_C::GetBindedWazaID(enum class EPalWazaID* WazaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "GetBindedWazaID");

	Params::UWBP_MainMenu_Pal_Skill_Active_C_GetBindedWazaID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WazaID != nullptr)
		*WazaID = Parms.WazaID;

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_Skill_Active_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.SetWazaID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalWazaID              WazaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWazaName_outName                                     (None)
// class UPalWazaDatabase*            CallFunc_GetWazaDatabase_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalWazaDatabaseRaw         CallFunc_FindWazaForBP_OutData                                   (None)
// bool                               CallFunc_FindWazaForBP_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_MainMenu_Pal_Skill_Active_C::SetWazaID(enum class EPalWazaID WazaID, class FText CallFunc_GetWazaName_outName, class UPalWazaDatabase* CallFunc_GetWazaDatabase_ReturnValue, const struct FPalWazaDatabaseRaw& CallFunc_FindWazaForBP_OutData, bool CallFunc_FindWazaForBP_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "SetWazaID");

	Params::UWBP_MainMenu_Pal_Skill_Active_C_SetWazaID_Params Parms{};

	Parms.WazaID = WazaID;
	Parms.CallFunc_GetWazaName_outName = CallFunc_GetWazaName_outName;
	Parms.CallFunc_GetWazaDatabase_ReturnValue = CallFunc_GetWazaDatabase_ReturnValue;
	Parms.CallFunc_FindWazaForBP_OutData = CallFunc_FindWazaForBP_OutData;
	Parms.CallFunc_FindWazaForBP_ReturnValue = CallFunc_FindWazaForBP_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.AnmEvent_Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_Skill_Active_C::AnmEvent_Selected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "AnmEvent_Selected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.AnmEvent_Unselcted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_Skill_Active_C::AnmEvent_Unselcted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "AnmEvent_Unselcted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_Skill_Active_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Active_C::BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_Skill_Active_C_BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Active_C::BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_Skill_Active_C_BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Active_C::BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_Skill_Active_C_BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Active
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Active_C::ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Active(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Active");

	Params::UWBP_MainMenu_Pal_Skill_Active_C_ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Active_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Active_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Active_C::OnClicked__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "OnClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_Skill_Active_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Active_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Active_C::OnUnhovered__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "OnUnhovered__DelegateSignature");

	Params::UWBP_MainMenu_Pal_Skill_Active_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Active_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_Skill_Active_C::OnHovered__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_Skill_Active_C", "OnHovered__DelegateSignature");

	Params::UWBP_MainMenu_Pal_Skill_Active_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


