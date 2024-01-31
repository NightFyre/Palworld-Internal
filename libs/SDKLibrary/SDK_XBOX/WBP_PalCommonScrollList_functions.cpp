#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCommonScrollList.WBP_PalCommonScrollList_C
// (None)

class UClass* UWBP_PalCommonScrollList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCommonScrollList_C");

	return Clss;
}


// WBP_PalCommonScrollList_C WBP_PalCommonScrollList.Default__WBP_PalCommonScrollList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCommonScrollList_C* UWBP_PalCommonScrollList_C::GetDefaultObj()
{
	static class UWBP_PalCommonScrollList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCommonScrollList_C*>(UWBP_PalCommonScrollList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.GetScrollBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UScrollBox*                  ScrollBox                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::GetScrollBox(class UScrollBox** ScrollBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "GetScrollBox");

	Params::UWBP_PalCommonScrollList_C_GetScrollBox_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ScrollBox != nullptr)
		*ScrollBox = Parms.ScrollBox;

}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.AddWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::AddWidget(class UUserWidget* Widget, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "AddWidget");

	Params::UWBP_PalCommonScrollList_C_AddWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.GetAllChildrenNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::GetAllChildrenNum(int32* Index, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "GetAllChildrenNum");

	Params::UWBP_PalCommonScrollList_C_GetAllChildrenNum_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.GetIndexFromWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::GetIndexFromWidget(class UWidget* Widget, int32* Index, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "GetIndexFromWidget");

	Params::UWBP_PalCommonScrollList_C_GetIndexFromWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.AddScrollOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_B_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::AddScrollOffset(double Offset, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_FMin_B_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "AddScrollOffset");

	Params::UWBP_PalCommonScrollList_C_AddScrollOffset_Params Parms{};

	Parms.Offset = Offset;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_FMin_B_ImplicitCast = CallFunc_FMin_B_ImplicitCast;
	Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast = CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::OnInputMethodChanged(enum class ECommonInputType bNewInputType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "OnInputMethodChanged");

	Params::UWBP_PalCommonScrollList_C_OnInputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.ClearAllChildren
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonScrollList_C::ClearAllChildren()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "ClearAllChildren");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.UpdateArrowVisibilityAndAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::UpdateArrowVisibilityAndAnimation(double CurrentOffset, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "UpdateArrowVisibilityAndAnimation");

	Params::UWBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation_Params Parms{};

	Parms.CurrentOffset = CurrentOffset;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCommonScrollList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCommonScrollList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              CurrentOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");

	Params::UWBP_PalCommonScrollList_C_BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature_Params Parms{};

	Parms.CurrentOffset = CurrentOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.ExecuteUbergraph_WBP_PalCommonScrollList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_CurrentOffset                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_lastScrollOffset_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_lastScrollOffset_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::ExecuteUbergraph_WBP_PalCommonScrollList(int32 EntryPoint, float K2Node_ComponentBoundEvent_CurrentOffset, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast, double K2Node_VariableSet_lastScrollOffset_ImplicitCast, double CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast_1, double K2Node_VariableSet_lastScrollOffset_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "ExecuteUbergraph_WBP_PalCommonScrollList");

	Params::UWBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_CurrentOffset = K2Node_ComponentBoundEvent_CurrentOffset;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast = CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast;
	Parms.K2Node_VariableSet_lastScrollOffset_ImplicitCast = K2Node_VariableSet_lastScrollOffset_ImplicitCast;
	Parms.CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast_1 = CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast_1;
	Parms.K2Node_VariableSet_lastScrollOffset_ImplicitCast_1 = K2Node_VariableSet_lastScrollOffset_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


