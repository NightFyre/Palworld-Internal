#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RadialMenu_base.WBP_RadialMenu_base_C
// (None)

class UClass* UWBP_RadialMenu_base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RadialMenu_base_C");

	return Clss;
}


// WBP_RadialMenu_base_C WBP_RadialMenu_base.Default__WBP_RadialMenu_base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RadialMenu_base_C* UWBP_RadialMenu_base_C::GetDefaultObj()
{
	static class UWBP_RadialMenu_base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RadialMenu_base_C*>(UWBP_RadialMenu_base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RadialMenu_base.WBP_RadialMenu_base_C.SetVisibilityArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        NewVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialMenu_base_C::SetVisibilityArrow(enum class ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenu_base_C", "SetVisibilityArrow");

	Params::UWBP_RadialMenu_base_C_SetVisibilityArrow_Params Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialMenu_base.WBP_RadialMenu_base_C.GetCenterPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   CallFunc_GetTickSpaceGeometry_ReturnValue                        (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetLocalSize_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToViewport_PixelPosition                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToViewport_ViewportPosition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialMenu_base_C::GetCenterPosition(struct FVector2D* Position, const struct FGeometry& CallFunc_GetTickSpaceGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenu_base_C", "GetCenterPosition");

	Params::UWBP_RadialMenu_base_C_GetCenterPosition_Params Parms{};

	Parms.CallFunc_GetTickSpaceGeometry_ReturnValue = CallFunc_GetTickSpaceGeometry_ReturnValue;
	Parms.CallFunc_GetLocalSize_ReturnValue = CallFunc_GetLocalSize_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_LocalToViewport_PixelPosition = CallFunc_LocalToViewport_PixelPosition;
	Parms.CallFunc_LocalToViewport_ViewportPosition = CallFunc_LocalToViewport_ViewportPosition;

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function WBP_RadialMenu_base.WBP_RadialMenu_base_C.SetVisibilityCenterBaseImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        NewVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialMenu_base_C::SetVisibilityCenterBaseImage(enum class ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenu_base_C", "SetVisibilityCenterBaseImage");

	Params::UWBP_RadialMenu_base_C_SetVisibilityCenterBaseImage_Params Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialMenu_base.WBP_RadialMenu_base_C.SetArrowVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialMenu_base_C::SetArrowVisible(enum class ESlateVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenu_base_C", "SetArrowVisible");

	Params::UWBP_RadialMenu_base_C_SetArrowVisible_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialMenu_base.WBP_RadialMenu_base_C.SetArrowAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AngleDegree                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderTransformAngle_Angle_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialMenu_base_C::SetArrowAngle(double AngleDegree, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenu_base_C", "SetArrowAngle");

	Params::UWBP_RadialMenu_base_C_SetArrowAngle_Params Parms{};

	Parms.AngleDegree = AngleDegree;
	Parms.CallFunc_SetRenderTransformAngle_Angle_ImplicitCast = CallFunc_SetRenderTransformAngle_Angle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialMenu_base.WBP_RadialMenu_base_C.Anm_OpenMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RadialMenu_base_C::Anm_OpenMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenu_base_C", "Anm_OpenMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RadialMenu_base.WBP_RadialMenu_base_C.Anm_CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RadialMenu_base_C::Anm_CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenu_base_C", "Anm_CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RadialMenu_base.WBP_RadialMenu_base_C.ExecuteUbergraph_WBP_RadialMenu_base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialMenu_base_C::ExecuteUbergraph_WBP_RadialMenu_base(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenu_base_C", "ExecuteUbergraph_WBP_RadialMenu_base");

	Params::UWBP_RadialMenu_base_C_ExecuteUbergraph_WBP_RadialMenu_base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


