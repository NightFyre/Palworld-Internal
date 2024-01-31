#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WorldMap_Icon_Respawn.WBP_WorldMap_Icon_Respawn_C
// (None)

class UClass* UWBP_WorldMap_Icon_Respawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WorldMap_Icon_Respawn_C");

	return Clss;
}


// WBP_WorldMap_Icon_Respawn_C WBP_WorldMap_Icon_Respawn.Default__WBP_WorldMap_Icon_Respawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WorldMap_Icon_Respawn_C* UWBP_WorldMap_Icon_Respawn_C::GetDefaultObj()
{
	static class UWBP_WorldMap_Icon_Respawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WorldMap_Icon_Respawn_C*>(UWBP_WorldMap_Icon_Respawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WorldMap_Icon_Respawn.WBP_WorldMap_Icon_Respawn_C.Setup_Internal
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalLocationPoint*           LocationPoint                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalLocationPoint_Respawn*   K2Node_DynamicCast_AsPal_Location_Point_Respawn                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_Icon_Respawn_C::Setup_Internal(class UPalLocationPoint* LocationPoint, class UPalLocationPoint_Respawn* K2Node_DynamicCast_AsPal_Location_Point_Respawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_Icon_Respawn_C", "Setup_Internal");

	Params::UWBP_WorldMap_Icon_Respawn_C_Setup_Internal_Params Parms{};

	Parms.LocationPoint = LocationPoint;
	Parms.K2Node_DynamicCast_AsPal_Location_Point_Respawn = K2Node_DynamicCast_AsPal_Location_Point_Respawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_Icon_Respawn.WBP_WorldMap_Icon_Respawn_C.BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_Icon_Respawn_C::BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_Icon_Respawn_C", "BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_WorldMap_Icon_Respawn_C_BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_Icon_Respawn.WBP_WorldMap_Icon_Respawn_C.BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_Icon_Respawn_C::BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_Icon_Respawn_C", "BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_WorldMap_Icon_Respawn_C_BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_Icon_Respawn.WBP_WorldMap_Icon_Respawn_C.BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_Icon_Respawn_C::BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_Icon_Respawn_C", "BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_WorldMap_Icon_Respawn_C_BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_Icon_Respawn.WBP_WorldMap_Icon_Respawn_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_WorldMap_Icon_Respawn_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_Icon_Respawn_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorldMap_Icon_Respawn.WBP_WorldMap_Icon_Respawn_C.ExecuteUbergraph_WBP_WorldMap_Icon_Respawn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_Icon_Respawn_C::ExecuteUbergraph_WBP_WorldMap_Icon_Respawn(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_Icon_Respawn_C", "ExecuteUbergraph_WBP_WorldMap_Icon_Respawn");

	Params::UWBP_WorldMap_Icon_Respawn_C_ExecuteUbergraph_WBP_WorldMap_Icon_Respawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


