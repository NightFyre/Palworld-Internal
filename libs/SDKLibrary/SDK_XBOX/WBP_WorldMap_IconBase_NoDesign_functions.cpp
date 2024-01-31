#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C
// (None)

class UClass* UWBP_WorldMap_IconBase_NoDesign_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WorldMap_IconBase_NoDesign_C");

	return Clss;
}


// WBP_WorldMap_IconBase_NoDesign_C WBP_WorldMap_IconBase_NoDesign.Default__WBP_WorldMap_IconBase_NoDesign_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WorldMap_IconBase_NoDesign_C* UWBP_WorldMap_IconBase_NoDesign_C::GetDefaultObj()
{
	static class UWBP_WorldMap_IconBase_NoDesign_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WorldMap_IconBase_NoDesign_C*>(UWBP_WorldMap_IconBase_NoDesign_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::SetEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "SetEnable");

	Params::UWBP_WorldMap_IconBase_NoDesign_C_SetEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnClicked_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_WorldMap_IconBase_NoDesign_C::OnClicked_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "OnClicked_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.ClickEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_WorldMap_IconBase_NoDesign_C::ClickEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "ClickEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalLocationPoint*           LocationPoint                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       LocationId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::Setup(class UPalLocationPoint* LocationPoint, const struct FGuid& LocationId, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "Setup");

	Params::UWBP_WorldMap_IconBase_NoDesign_C_Setup_Params Parms{};

	Parms.LocationPoint = LocationPoint;
	Parms.LocationId = LocationId;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetLocationPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     LocationPosition                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLocationPoint*           CallFunc_GetLocationPoint_LocationPoint                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocation_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::GetLocationPosition(struct FVector* LocationPosition, class UPalLocationPoint* CallFunc_GetLocationPoint_LocationPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "GetLocationPosition");

	Params::UWBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition_Params Parms{};

	Parms.CallFunc_GetLocationPoint_LocationPoint = CallFunc_GetLocationPoint_LocationPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocation_ReturnValue = CallFunc_GetLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocationPosition != nullptr)
		*LocationPosition = std::move(Parms.LocationPosition);

}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetLocationPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalLocationPoint*           LocationPoint                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalLocationManager*         CallFunc_GetLocationManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalLocationPoint*           CallFunc_GetLocationPoint_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::GetLocationPoint(class UPalLocationPoint** LocationPoint, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, class UPalLocationPoint* CallFunc_GetLocationPoint_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "GetLocationPoint");

	Params::UWBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint_Params Parms{};

	Parms.CallFunc_GetLocationManager_ReturnValue = CallFunc_GetLocationManager_ReturnValue;
	Parms.CallFunc_GetLocationPoint_ReturnValue = CallFunc_GetLocationPoint_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocationPoint != nullptr)
		*LocationPoint = Parms.LocationPoint;

}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.Setup_Internal
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalLocationPoint*           LocationPoint                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::Setup_Internal(class UPalLocationPoint* LocationPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "Setup_Internal");

	Params::UWBP_WorldMap_IconBase_NoDesign_C_Setup_Internal_Params Parms{};

	Parms.LocationPoint = LocationPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)

void UWBP_WorldMap_IconBase_NoDesign_C::GetText(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "GetText");

	Params::UWBP_WorldMap_IconBase_NoDesign_C_GetText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_WorldMap_IconBase_NoDesign_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign");

	Params::UWBP_WorldMap_IconBase_NoDesign_C_ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::OnClicked__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "OnClicked__DelegateSignature");

	Params::UWBP_WorldMap_IconBase_NoDesign_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::OnUnhovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "OnUnhovered__DelegateSignature");

	Params::UWBP_WorldMap_IconBase_NoDesign_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMap_IconBase_NoDesign_C::OnHovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldMap_IconBase_NoDesign_C", "OnHovered__DelegateSignature");

	Params::UWBP_WorldMap_IconBase_NoDesign_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


