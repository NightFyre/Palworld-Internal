#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WorldMap_IconBase_OnlyIcon.WBP_WorldMap_IconBase_OnlyIcon_C
// (None)

class UClass* UWBP_WorldMap_IconBase_OnlyIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WorldMap_IconBase_OnlyIcon_C");

	return Clss;
}


// WBP_WorldMap_IconBase_OnlyIcon_C WBP_WorldMap_IconBase_OnlyIcon.Default__WBP_WorldMap_IconBase_OnlyIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WorldMap_IconBase_OnlyIcon_C* UWBP_WorldMap_IconBase_OnlyIcon_C::GetDefaultObj()
{
	static class UWBP_WorldMap_IconBase_OnlyIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WorldMap_IconBase_OnlyIcon_C*>(UWBP_WorldMap_IconBase_OnlyIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WorldMap_IconBase_OnlyIcon.WBP_WorldMap_IconBase_OnlyIcon_C.Setup_Internal
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalLocationPoint*           LocationPoint                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_OnlyIcon_C::Setup_Internal(class UPalLocationPoint* LocationPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_OnlyIcon_C", "Setup_Internal");

	Params::UWBP_WorldMap_IconBase_OnlyIcon_C_Setup_Internal_Params Parms{};

	Parms.LocationPoint = LocationPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_IconBase_OnlyIcon.WBP_WorldMap_IconBase_OnlyIcon_C.ChangeTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  NewTexture                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_OnlyIcon_C::ChangeTexture(class UTexture2D* NewTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_OnlyIcon_C", "ChangeTexture");

	Params::UWBP_WorldMap_IconBase_OnlyIcon_C_ChangeTexture_Params Parms{};

	Parms.NewTexture = NewTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_IconBase_OnlyIcon.WBP_WorldMap_IconBase_OnlyIcon_C.BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_OnlyIcon_C::BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_OnlyIcon_C", "BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_WorldMap_IconBase_OnlyIcon_C_BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_IconBase_OnlyIcon.WBP_WorldMap_IconBase_OnlyIcon_C.BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_OnlyIcon_C::BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_OnlyIcon_C", "BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_WorldMap_IconBase_OnlyIcon_C_BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_IconBase_OnlyIcon.WBP_WorldMap_IconBase_OnlyIcon_C.BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_OnlyIcon_C::BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_OnlyIcon_C", "BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_WorldMap_IconBase_OnlyIcon_C_BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_IconBase_OnlyIcon.WBP_WorldMap_IconBase_OnlyIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_OnlyIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_OnlyIcon_C", "PreConstruct");

	Params::UWBP_WorldMap_IconBase_OnlyIcon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_IconBase_OnlyIcon.WBP_WorldMap_IconBase_OnlyIcon_C.ExecuteUbergraph_WBP_WorldMap_IconBase_OnlyIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_OnlyIcon_C::ExecuteUbergraph_WBP_WorldMap_IconBase_OnlyIcon(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_OnlyIcon_C", "ExecuteUbergraph_WBP_WorldMap_IconBase_OnlyIcon");

	Params::UWBP_WorldMap_IconBase_OnlyIcon_C_ExecuteUbergraph_WBP_WorldMap_IconBase_OnlyIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


