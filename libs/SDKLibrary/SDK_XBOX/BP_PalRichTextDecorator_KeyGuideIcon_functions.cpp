#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRichTextDecorator_KeyGuideIcon.BP_PalRichTextDecorator_KeyGuideIcon_C
// (None)

class UClass* UBP_PalRichTextDecorator_KeyGuideIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRichTextDecorator_KeyGuideIcon_C");

	return Clss;
}


// BP_PalRichTextDecorator_KeyGuideIcon_C BP_PalRichTextDecorator_KeyGuideIcon.Default__BP_PalRichTextDecorator_KeyGuideIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalRichTextDecorator_KeyGuideIcon_C* UBP_PalRichTextDecorator_KeyGuideIcon_C::GetDefaultObj()
{
	static class UBP_PalRichTextDecorator_KeyGuideIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalRichTextDecorator_KeyGuideIcon_C*>(UBP_PalRichTextDecorator_KeyGuideIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalRichTextDecorator_KeyGuideIcon.BP_PalRichTextDecorator_KeyGuideIcon_C.CreateWidget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        KeyGuideActionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IconScale                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OverrideType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommonInputActionDataBase  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerInputKeyGuideIcon_C*K2Node_DynamicCast_AsWBP_Player_Input_Key_Guide_Icon             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameInstance*            CallFunc_GetPalGameInstance_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerInputKeyGuideIcon_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalKeyGuideIcon_C*      CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBP_PalRichTextDecorator_KeyGuideIcon_C::CreateWidget(class FName KeyGuideActionName, float IconScale, int32 OverrideType, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FCommonInputActionDataBase& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWidget* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UWBP_PlayerInputKeyGuideIcon_C* K2Node_DynamicCast_AsWBP_Player_Input_Key_Guide_Icon, bool K2Node_DynamicCast_bSuccess, class UPalGameInstance* CallFunc_GetPalGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PlayerInputKeyGuideIcon_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class UWBP_PalKeyGuideIcon_C* CallFunc_Create_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRichTextDecorator_KeyGuideIcon_C", "CreateWidget");

	Params::UBP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget_Params Parms{};

	Parms.KeyGuideActionName = KeyGuideActionName;
	Parms.IconScale = IconScale;
	Parms.OverrideType = OverrideType;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWBP_Player_Input_Key_Guide_Icon = K2Node_DynamicCast_AsWBP_Player_Input_Key_Guide_Icon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPalGameInstance_ReturnValue = CallFunc_GetPalGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue_1 = CallFunc_Multiply_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


