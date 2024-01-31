#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C
// (None)

class UClass* UWBP_BuildObjectScrollListBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BuildObjectScrollListBlock_C");

	return Clss;
}


// WBP_BuildObjectScrollListBlock_C WBP_BuildObjectScrollListBlock.Default__WBP_BuildObjectScrollListBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BuildObjectScrollListBlock_C* UWBP_BuildObjectScrollListBlock_C::GetDefaultObj()
{
	static class UWBP_BuildObjectScrollListBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BuildObjectScrollListBlock_C*>(UWBP_BuildObjectScrollListBlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Target                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalBuildObjectThumbnailButton_C*K2Node_DynamicCast_AsWBP_Pal_Build_Object_Thumbnail_Button       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectScrollListBlock_C::GetFocusTarget(class UWidget** Target, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalBuildObjectThumbnailButton_C* K2Node_DynamicCast_AsWBP_Pal_Build_Object_Thumbnail_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "GetFocusTarget");

	Params::UWBP_BuildObjectScrollListBlock_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Build_Object_Thumbnail_Button = K2Node_DynamicCast_AsWBP_Pal_Build_Object_Thumbnail_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.GetBuildObjectTypeA
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalBuildObjectTypeA    NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectScrollListBlock_C::GetBuildObjectTypeA(enum class EPalBuildObjectTypeA* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "GetBuildObjectTypeA");

	Params::UWBP_BuildObjectScrollListBlock_C_GetBuildObjectTypeA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.FocusTopContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalBuildObjectThumbnailButton_C*K2Node_DynamicCast_AsWBP_Pal_Build_Object_Thumbnail_Button       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectScrollListBlock_C::FocusTopContent(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalBuildObjectThumbnailButton_C* K2Node_DynamicCast_AsWBP_Pal_Build_Object_Thumbnail_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "FocusTopContent");

	Params::UWBP_BuildObjectScrollListBlock_C_FocusTopContent_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Pal_Build_Object_Thumbnail_Button = K2Node_DynamicCast_AsWBP_Pal_Build_Object_Thumbnail_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.GetBuildObjectTypeB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalBuildObjectTypeB    TypeB                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectScrollListBlock_C::GetBuildObjectTypeB(enum class EPalBuildObjectTypeB* TypeB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "GetBuildObjectTypeB");

	Params::UWBP_BuildObjectScrollListBlock_C_GetBuildObjectTypeB_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TypeB != nullptr)
		*TypeB = Parms.TypeB;

}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.OnUnhovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalBuildObjectThumbnailButton_C*SelftWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectScrollListBlock_C::OnUnhovered_Internal(class UWBP_PalBuildObjectThumbnailButton_C* SelftWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "OnUnhovered_Internal");

	Params::UWBP_BuildObjectScrollListBlock_C_OnUnhovered_Internal_Params Parms{};

	Parms.SelftWidget = SelftWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.OnHovered_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalBuildObjectThumbnailButton_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectScrollListBlock_C::OnHovered_Internal(class UWBP_PalBuildObjectThumbnailButton_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "OnHovered_Internal");

	Params::UWBP_BuildObjectScrollListBlock_C_OnHovered_Internal_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.OnClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalBuildObjectThumbnailButton_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectScrollListBlock_C::OnClicked_Internal(class UWBP_PalBuildObjectThumbnailButton_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "OnClicked_Internal");

	Params::UWBP_BuildObjectScrollListBlock_C_OnClicked_Internal_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.SetCategoryName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CategoryNameText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_BuildObjectScrollListBlock_C::SetCategoryName(class FText CategoryNameText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "SetCategoryName");

	Params::UWBP_BuildObjectScrollListBlock_C_SetCategoryName_Params Parms{};

	Parms.CategoryNameText = CategoryNameText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.CreateBuildObjectIconWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalBuildObjectData         BuildObjectData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_PalBuildObjectThumbnailButton_C*CreatedWidget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalBuildObjectThumbnailButton_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectScrollListBlock_C::CreateBuildObjectIconWidget(const struct FPalBuildObjectData& BuildObjectData, class UWBP_PalBuildObjectThumbnailButton_C** CreatedWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalBuildObjectThumbnailButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "CreateBuildObjectIconWidget");

	Params::UWBP_BuildObjectScrollListBlock_C_CreateBuildObjectIconWidget_Params Parms{};

	Parms.BuildObjectData = BuildObjectData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.AddBuildObjectList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPalBuildObjectData> buildObjectDataArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EPalBuildObjectTypeB    TypeB                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBuildObjectTypeA    TypeA                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalBuildObjectData         CallFunc_Array_Get_Item                                          (None)
// class UWBP_PalBuildObjectThumbnailButton_C*CallFunc_CreateBuildObjectIconWidget_createdWidget               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectScrollListBlock_C::AddBuildObjectList(TArray<struct FPalBuildObjectData>& buildObjectDataArray, enum class EPalBuildObjectTypeB TypeB, enum class EPalBuildObjectTypeA TypeA, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FPalBuildObjectData& CallFunc_Array_Get_Item, class UWBP_PalBuildObjectThumbnailButton_C* CallFunc_CreateBuildObjectIconWidget_createdWidget, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "AddBuildObjectList");

	Params::UWBP_BuildObjectScrollListBlock_C_AddBuildObjectList_Params Parms{};

	Parms.buildObjectDataArray = buildObjectDataArray;
	Parms.TypeB = TypeB;
	Parms.TypeA = TypeA;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CreateBuildObjectIconWidget_createdWidget = CallFunc_CreateBuildObjectIconWidget_createdWidget;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.OnUnhoveredAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalBuildObjectThumbnailButton_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectScrollListBlock_C::OnUnhoveredAnyContent__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "OnUnhoveredAnyContent__DelegateSignature");

	Params::UWBP_BuildObjectScrollListBlock_C_OnUnhoveredAnyContent__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.OnHoveredAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalBuildObjectThumbnailButton_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectScrollListBlock_C::OnHoveredAnyContent__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "OnHoveredAnyContent__DelegateSignature");

	Params::UWBP_BuildObjectScrollListBlock_C_OnHoveredAnyContent__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.OnClickedAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalBuildObjectThumbnailButton_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectScrollListBlock_C::OnClickedAnyContent__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectScrollListBlock_C", "OnClickedAnyContent__DelegateSignature");

	Params::UWBP_BuildObjectScrollListBlock_C_OnClickedAnyContent__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


