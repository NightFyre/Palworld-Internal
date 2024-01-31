#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C
// (None)

class UClass* UWBP_CharaCre_PartsSelect_sq_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_PartsSelect_sq_C");

	return Clss;
}


// WBP_CharaCre_PartsSelect_sq_C WBP_CharaCre_PartsSelect_sq.Default__WBP_CharaCre_PartsSelect_sq_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_PartsSelect_sq_C* UWBP_CharaCre_PartsSelect_sq_C::GetDefaultObj()
{
	static class UWBP_CharaCre_PartsSelect_sq_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_PartsSelect_sq_C*>(UWBP_CharaCre_PartsSelect_sq_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BindName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelect_sq_C::Setup(class FName BindName, TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelect_sq_C", "Setup");

	Params::UWBP_CharaCre_PartsSelect_sq_C_Setup_Params Parms{};

	Parms.BindName = BindName;
	Parms.SoftTexture = SoftTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C.GetBindedPresetName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        PresetName                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelect_sq_C::GetBindedPresetName(class FName* PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelect_sq_C", "GetBindedPresetName");

	Params::UWBP_CharaCre_PartsSelect_sq_C_GetBindedPresetName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PresetName != nullptr)
		*PresetName = Parms.PresetName;

}


// Function WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C.SetupByMeshPresetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalCharacterCreationMeshPresetDataRowMeshData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        BindName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelect_sq_C::SetupByMeshPresetData(const struct FPalCharacterCreationMeshPresetDataRow& MeshData, class FName BindName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelect_sq_C", "SetupByMeshPresetData");

	Params::UWBP_CharaCre_PartsSelect_sq_C_SetupByMeshPresetData_Params Parms{};

	Parms.MeshData = MeshData;
	Parms.BindName = BindName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C.AnmEvent_Normal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_PartsSelect_sq_C::AnmEvent_Normal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelect_sq_C", "AnmEvent_Normal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_PartsSelect_sq_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelect_sq_C", "AnmEvent_Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C.AnmEvent_Push
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_PartsSelect_sq_C::AnmEvent_Push()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelect_sq_C", "AnmEvent_Push");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C.AnmEvent_Unselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_PartsSelect_sq_C::AnmEvent_Unselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelect_sq_C", "AnmEvent_Unselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C.BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelect_sq_C::BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelect_sq_C", "BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CharaCre_PartsSelect_sq_C_BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C.BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelect_sq_C::BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelect_sq_C", "BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CharaCre_PartsSelect_sq_C_BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C.BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelect_sq_C::BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelect_sq_C", "BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_CharaCre_PartsSelect_sq_C_BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C.ExecuteUbergraph_WBP_CharaCre_PartsSelect_sq
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelect_sq_C::ExecuteUbergraph_WBP_CharaCre_PartsSelect_sq(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelect_sq_C", "ExecuteUbergraph_WBP_CharaCre_PartsSelect_sq");

	Params::UWBP_CharaCre_PartsSelect_sq_C_ExecuteUbergraph_WBP_CharaCre_PartsSelect_sq_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_PartsSelect_sq_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelect_sq_C::OnClicked__DelegateSignature(class UWBP_CharaCre_PartsSelect_sq_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelect_sq_C", "OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_PartsSelect_sq_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


