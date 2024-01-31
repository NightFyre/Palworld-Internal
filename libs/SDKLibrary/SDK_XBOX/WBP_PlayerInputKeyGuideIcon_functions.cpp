#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerInputKeyGuideIcon.WBP_PlayerInputKeyGuideIcon_C
// (None)

class UClass* UWBP_PlayerInputKeyGuideIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerInputKeyGuideIcon_C");

	return Clss;
}


// WBP_PlayerInputKeyGuideIcon_C WBP_PlayerInputKeyGuideIcon.Default__WBP_PlayerInputKeyGuideIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerInputKeyGuideIcon_C* UWBP_PlayerInputKeyGuideIcon_C::GetDefaultObj()
{
	static class UWBP_PlayerInputKeyGuideIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerInputKeyGuideIcon_C*>(UWBP_PlayerInputKeyGuideIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerInputKeyGuideIcon.WBP_PlayerInputKeyGuideIcon_C.SetOverrideSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInputKeyGuideIcon_C::SetOverrideSize(const struct FVector2D& Size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInputKeyGuideIcon_C", "SetOverrideSize");

	Params::UWBP_PlayerInputKeyGuideIcon_C_SetOverrideSize_Params Parms{};

	Parms.Size = Size;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInputKeyGuideIcon.WBP_PlayerInputKeyGuideIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerInputKeyGuideIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInputKeyGuideIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInputKeyGuideIcon.WBP_PlayerInputKeyGuideIcon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerInputKeyGuideIcon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInputKeyGuideIcon_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInputKeyGuideIcon.WBP_PlayerInputKeyGuideIcon_C.UpdateImage
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 NewBrush                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerInputKeyGuideIcon_C::UpdateImage(const struct FSlateBrush& NewBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInputKeyGuideIcon_C", "UpdateImage");

	Params::UWBP_PlayerInputKeyGuideIcon_C_UpdateImage_Params Parms{};

	Parms.NewBrush = NewBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInputKeyGuideIcon.WBP_PlayerInputKeyGuideIcon_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerInputKeyGuideIcon_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInputKeyGuideIcon_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInputKeyGuideIcon.WBP_PlayerInputKeyGuideIcon_C.ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Event_newBrush                                            (None)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInputKeyGuideIcon_C::ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon(int32 EntryPoint, const struct FSlateBrush& K2Node_Event_newBrush, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInputKeyGuideIcon_C", "ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon");

	Params::UWBP_PlayerInputKeyGuideIcon_C_ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_newBrush = K2Node_Event_newBrush;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


