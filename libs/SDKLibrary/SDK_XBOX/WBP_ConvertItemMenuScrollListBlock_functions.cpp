#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C
// (None)

class UClass* UWBP_ConvertItemMenuScrollListBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConvertItemMenuScrollListBlock_C");

	return Clss;
}


// WBP_ConvertItemMenuScrollListBlock_C WBP_ConvertItemMenuScrollListBlock.Default__WBP_ConvertItemMenuScrollListBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConvertItemMenuScrollListBlock_C* UWBP_ConvertItemMenuScrollListBlock_C::GetDefaultObj()
{
	static class UWBP_ConvertItemMenuScrollListBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConvertItemMenuScrollListBlock_C*>(UWBP_ConvertItemMenuScrollListBlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Target                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemMenuScrollListBlock_C::GetFocusTarget(class UWidget** Target, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalConvertItemMenu_RecipeSlotButton_C* K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemMenuScrollListBlock_C", "GetFocusTarget");

	Params::UWBP_ConvertItemMenuScrollListBlock_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button = K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.FocusTopContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemMenuScrollListBlock_C::FocusTopContent(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalConvertItemMenu_RecipeSlotButton_C* K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemMenuScrollListBlock_C", "FocusTopContent");

	Params::UWBP_ConvertItemMenuScrollListBlock_C_FocusTopContent_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button = K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.OnUnhovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*SelftWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemMenuScrollListBlock_C::OnUnhovered_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelftWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemMenuScrollListBlock_C", "OnUnhovered_Internal");

	Params::UWBP_ConvertItemMenuScrollListBlock_C_OnUnhovered_Internal_Params Parms{};

	Parms.SelftWidget = SelftWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.OnHovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemMenuScrollListBlock_C::OnHovered_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemMenuScrollListBlock_C", "OnHovered_Internal");

	Params::UWBP_ConvertItemMenuScrollListBlock_C_OnHovered_Internal_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.OnClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemMenuScrollListBlock_C::OnClicked_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemMenuScrollListBlock_C", "OnClicked_Internal");

	Params::UWBP_ConvertItemMenuScrollListBlock_C_OnClicked_Internal_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.SetCategoryName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CategoryNameText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ConvertItemMenuScrollListBlock_C::SetCategoryName(class FText CategoryNameText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemMenuScrollListBlock_C", "SetCategoryName");

	Params::UWBP_ConvertItemMenuScrollListBlock_C_SetCategoryName_Params Parms{};

	Parms.CategoryNameText = CategoryNameText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.CreateRecipeIconWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RecipeID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*CreatedWidget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemMenuScrollListBlock_C::CreateRecipeIconWidget(class FName RecipeID, class UWBP_PalConvertItemMenu_RecipeSlotButton_C** CreatedWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalConvertItemMenu_RecipeSlotButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemMenuScrollListBlock_C", "CreateRecipeIconWidget");

	Params::UWBP_ConvertItemMenuScrollListBlock_C_CreateRecipeIconWidget_Params Parms{};

	Parms.RecipeID = RecipeID;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

}


// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.AddRecipeList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                RecipeIDArray                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*CallFunc_CreateRecipeIconWidget_createdWidget                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemMenuScrollListBlock_C::AddRecipeList(TArray<class FName>& RecipeIDArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, class UWBP_PalConvertItemMenu_RecipeSlotButton_C* CallFunc_CreateRecipeIconWidget_createdWidget, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemMenuScrollListBlock_C", "AddRecipeList");

	Params::UWBP_ConvertItemMenuScrollListBlock_C_AddRecipeList_Params Parms{};

	Parms.RecipeIDArray = RecipeIDArray;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CreateRecipeIconWidget_createdWidget = CallFunc_CreateRecipeIconWidget_createdWidget;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.OnUnhoveredAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemMenuScrollListBlock_C::OnUnhoveredAnyContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemMenuScrollListBlock_C", "OnUnhoveredAnyContent__DelegateSignature");

	Params::UWBP_ConvertItemMenuScrollListBlock_C_OnUnhoveredAnyContent__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.OnHoveredAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemMenuScrollListBlock_C::OnHoveredAnyContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemMenuScrollListBlock_C", "OnHoveredAnyContent__DelegateSignature");

	Params::UWBP_ConvertItemMenuScrollListBlock_C_OnHoveredAnyContent__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.OnClickedAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemMenuScrollListBlock_C::OnClickedAnyContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemMenuScrollListBlock_C", "OnClickedAnyContent__DelegateSignature");

	Params::UWBP_ConvertItemMenuScrollListBlock_C_OnClickedAnyContent__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


