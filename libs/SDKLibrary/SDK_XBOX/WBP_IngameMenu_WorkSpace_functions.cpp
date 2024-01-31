#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C
// (None)

class UClass* UWBP_IngameMenu_WorkSpace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_WorkSpace_C");

	return Clss;
}


// WBP_IngameMenu_WorkSpace_C WBP_IngameMenu_WorkSpace.Default__WBP_IngameMenu_WorkSpace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_WorkSpace_C* UWBP_IngameMenu_WorkSpace_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_WorkSpace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_WorkSpace_C*>(UWBP_IngameMenu_WorkSpace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.FilteringRecipe
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                RecipeIDArray                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                FilteredArray                                                    (Parm, OutParm)
// TArray<class FName>                WorkingTechnologyRecipeIDArray                                   (Edit, BlueprintVisible)
// TArray<class FName>                MissingBlueprintItemIDArray                                      (Edit, BlueprintVisible)
// TMap<class FName, class FName>     RequireBluepintItemAndRecipeMap                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalStaticItemIdAndNum      CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalStaticItemIdAndNum>CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos    (ReferenceParm)
// class UPalMasterDataTableAccess_ItemRecipe*CallFunc_GetItemRecipeDataTableAccess_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalTechnologyData*          CallFunc_GetLocalTechnologyData_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_FindRow_bResult                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemRecipe              CallFunc_BP_FindRow_ReturnValue                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_FilteringUnlockedRecipe_OutRecipeIdArray                (ReferenceParm)

void UWBP_IngameMenu_WorkSpace_C::FilteringRecipe(TArray<class FName>& RecipeIDArray, TArray<class FName>* FilteredArray, const TArray<class FName>& WorkingTechnologyRecipeIDArray, const TArray<class FName>& MissingBlueprintItemIDArray, TMap<class FName, class FName> RequireBluepintItemAndRecipeMap, int32 Temp_int_Array_Index_Variable, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item_2, bool CallFunc_Array_RemoveItem_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue_1, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, class UPalMasterDataTableAccess_ItemRecipe* CallFunc_GetItemRecipeDataTableAccess_ReturnValue, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalItemRecipe& CallFunc_BP_FindRow_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<class FName>& CallFunc_FilteringUnlockedRecipe_OutRecipeIdArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "FilteringRecipe");

	Params::UWBP_IngameMenu_WorkSpace_C_FilteringRecipe_Params Parms{};

	Parms.RecipeIDArray = RecipeIDArray;
	Parms.WorkingTechnologyRecipeIDArray = WorkingTechnologyRecipeIDArray;
	Parms.MissingBlueprintItemIDArray = MissingBlueprintItemIDArray;
	Parms.RequireBluepintItemAndRecipeMap = RequireBluepintItemAndRecipeMap;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos = CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos;
	Parms.CallFunc_GetItemRecipeDataTableAccess_ReturnValue = CallFunc_GetItemRecipeDataTableAccess_ReturnValue;
	Parms.CallFunc_GetLocalTechnologyData_ReturnValue = CallFunc_GetLocalTechnologyData_ReturnValue;
	Parms.CallFunc_BP_FindRow_bResult = CallFunc_BP_FindRow_bResult;
	Parms.CallFunc_BP_FindRow_ReturnValue = CallFunc_BP_FindRow_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_FilteringUnlockedRecipe_OutRecipeIdArray = CallFunc_FilteringUnlockedRecipe_OutRecipeIdArray;

	UObject::ProcessEvent(Func, &Parms);

	if (FilteredArray != nullptr)
		*FilteredArray = std::move(Parms.FilteredArray);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.OnCancelInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_C::OnCancelInput(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "OnCancelInput");

	Params::UWBP_IngameMenu_WorkSpace_C_OnCancelInput_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.IsSelectingProductNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsSelecting                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_C::IsSelectingProductNum(bool* IsSelecting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "IsSelectingProductNum");

	Params::UWBP_IngameMenu_WorkSpace_C_IsSelectingProductNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsSelecting != nullptr)
		*IsSelecting = Parms.IsSelecting;

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.FilterSkillUnlocker
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Recipes                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        WorkBenchId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                FilteredRecipes                                                  (Parm, OutParm)
// TArray<class FName>                TempRecipes                                                      (Edit, BlueprintVisible)
// TArray<class FName>                Filtered                                                         (Edit, BlueprintVisible)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_C::FilterSkillUnlocker(TArray<class FName>& Recipes, class FName WorkBenchId, TArray<class FName>* FilteredRecipes, const TArray<class FName>& TempRecipes, const TArray<class FName>& Filtered, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "FilterSkillUnlocker");

	Params::UWBP_IngameMenu_WorkSpace_C_FilterSkillUnlocker_Params Parms{};

	Parms.Recipes = Recipes;
	Parms.WorkBenchId = WorkBenchId;
	Parms.TempRecipes = TempRecipes;
	Parms.Filtered = Filtered;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FilteredRecipes != nullptr)
		*FilteredRecipes = std::move(Parms.FilteredRecipes);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_IngameMenu_WorkSpace_C::BP_GetDesiredFocusTarget(bool Temp_bool_Variable, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_IngameMenu_WorkSpace_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.UpdateRecipeDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIConvertItemRequestStartResponseCallFunc_CanStartProduction_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// TArray<struct FPalStaticItemIdAndNum>CallFunc_GetRequiredMaterialInfos_RequiredMaterialInfos          (ReferenceParm)
// float                              CallFunc_CalcWorkAmount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_WorkAmountToManMonth_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_C::UpdateRecipeDetail(class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, enum class EPalUIConvertItemRequestStartResponse CallFunc_CanStartProduction_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue, TArray<struct FPalStaticItemIdAndNum>& CallFunc_GetRequiredMaterialInfos_RequiredMaterialInfos, float CallFunc_CalcWorkAmount_ReturnValue, float CallFunc_WorkAmountToManMonth_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, double CallFunc_Conv_DoubleToText_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "UpdateRecipeDetail");

	Params::UWBP_IngameMenu_WorkSpace_C_UpdateRecipeDetail_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_CanStartProduction_ReturnValue = CallFunc_CanStartProduction_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetRequiredMaterialInfos_RequiredMaterialInfos = CallFunc_GetRequiredMaterialInfos_RequiredMaterialInfos;
	Parms.CallFunc_CalcWorkAmount_ReturnValue = CallFunc_CalcWorkAmount_ReturnValue;
	Parms.CallFunc_WorkAmountToManMonth_ReturnValue = CallFunc_WorkAmountToManMonth_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast = CallFunc_Conv_DoubleToText_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.OnClickedRecipeSlot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, int32>           MaterialDetails                                                  (Edit, BlueprintVisible)
// class FName                        CallFunc_GetRecipeID_recipeID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMasterDataTableAccess_ItemRecipe*CallFunc_GetItemRecipeDataTableAccess_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_FindRow_bResult                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemRecipe              CallFunc_BP_FindRow_ReturnValue                                  (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FPalStaticItemIdAndNum>CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos    (ReferenceParm)
// class FText                        CallFunc_GetItemName_outName                                     (None)
// struct FPalStaticItemIdAndNum      CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)

void UWBP_IngameMenu_WorkSpace_C::OnClickedRecipeSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Slot, TMap<class FName, int32> MaterialDetails, class FName CallFunc_GetRecipeID_recipeID, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalMasterDataTableAccess_ItemRecipe* CallFunc_GetItemRecipeDataTableAccess_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalItemRecipe& CallFunc_BP_FindRow_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, class FText CallFunc_GetItemName_outName, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "OnClickedRecipeSlot");

	Params::UWBP_IngameMenu_WorkSpace_C_OnClickedRecipeSlot_Params Parms{};

	Parms.Slot = Slot;
	Parms.MaterialDetails = MaterialDetails;
	Parms.CallFunc_GetRecipeID_recipeID = CallFunc_GetRecipeID_recipeID;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemRecipeDataTableAccess_ReturnValue = CallFunc_GetItemRecipeDataTableAccess_ReturnValue;
	Parms.CallFunc_BP_FindRow_bResult = CallFunc_BP_FindRow_bResult;
	Parms.CallFunc_BP_FindRow_ReturnValue = CallFunc_BP_FindRow_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos = CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos;
	Parms.CallFunc_GetItemName_outName = CallFunc_GetItemName_outName;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.OnUnhoveredRecipeSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_C::OnUnhoveredRecipeSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Slot, class UPalHUDService* CallFunc_GetHUDService_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "OnUnhoveredRecipeSlot");

	Params::UWBP_IngameMenu_WorkSpace_C_OnUnhoveredRecipeSlot_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.OnHoveredRecipeSlot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalConvertItemMenu_RecipeSlotButton_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRecipeID_recipeID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUICommonItemInfoDisplayDataK2Node_MakeStruct_PalUICommonItemInfoDisplayData                 (NoDestructor, ContainsInstancedReference)

void UWBP_IngameMenu_WorkSpace_C::OnHoveredRecipeSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Slot, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class FName CallFunc_GetRecipeID_recipeID, const struct FPalUICommonItemInfoDisplayData& K2Node_MakeStruct_PalUICommonItemInfoDisplayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "OnHoveredRecipeSlot");

	Params::UWBP_IngameMenu_WorkSpace_C_OnHoveredRecipeSlot_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GetRecipeID_recipeID = CallFunc_GetRecipeID_recipeID;
	Parms.K2Node_MakeStruct_PalUICommonItemInfoDisplayData = K2Node_MakeStruct_PalUICommonItemInfoDisplayData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_2                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_3                     (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_4                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_5                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_6                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConvertItemModel*CallFunc_TryGetConcreteModel_Model                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetConcreteModel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_ConvertItem*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Convert_Item      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetRecipes_ReturnValue                                  (ConstParm, ReferenceParm)
// class FName                        CallFunc_TryGetMapObjectId_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_FilteringRecipe_FilteredArray                           (ReferenceParm)
// class FText                        CallFunc_GetMapObjectName_outName                                (None)
// TArray<class FName>                CallFunc_FilterSkillUnlocker_FilteredRecipes                     (ReferenceParm)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalUIConvertItemModel_C* CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_ConvertItemMenuScrollListBlock_C*CallFunc_AddRecipeSet_createdBlock                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_C::Setup(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalMapObjectConvertItemModel* CallFunc_TryGetConcreteModel_Model, bool CallFunc_TryGetConcreteModel_ReturnValue, class UPalHUDDispatchParameter_ConvertItem* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Convert_Item, bool K2Node_DynamicCast_bSuccess, TArray<class FName>& CallFunc_GetRecipes_ReturnValue, class FName CallFunc_TryGetMapObjectId_ReturnValue, TArray<class FName>& CallFunc_FilteringRecipe_FilteredArray, class FText CallFunc_GetMapObjectName_outName, TArray<class FName>& CallFunc_FilterSkillUnlocker_FilteredRecipes, bool CallFunc_Array_IsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UBP_PalUIConvertItemModel_C* CallFunc_SpawnObject_ReturnValue, class UWBP_ConvertItemMenuScrollListBlock_C* CallFunc_AddRecipeSet_createdBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "Setup");

	Params::UWBP_IngameMenu_WorkSpace_C_Setup_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_2 = CallFunc_RegisterActionBinding_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_3 = CallFunc_RegisterActionBinding_ReturnValue_3;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_4 = CallFunc_RegisterActionBinding_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_5 = CallFunc_RegisterActionBinding_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_6 = CallFunc_RegisterActionBinding_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.CallFunc_TryGetConcreteModel_Model = CallFunc_TryGetConcreteModel_Model;
	Parms.CallFunc_TryGetConcreteModel_ReturnValue = CallFunc_TryGetConcreteModel_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Convert_Item = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Convert_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRecipes_ReturnValue = CallFunc_GetRecipes_ReturnValue;
	Parms.CallFunc_TryGetMapObjectId_ReturnValue = CallFunc_TryGetMapObjectId_ReturnValue;
	Parms.CallFunc_FilteringRecipe_FilteredArray = CallFunc_FilteringRecipe_FilteredArray;
	Parms.CallFunc_GetMapObjectName_outName = CallFunc_GetMapObjectName_outName;
	Parms.CallFunc_FilterSkillUnlocker_FilteredRecipes = CallFunc_FilterSkillUnlocker_FilteredRecipes;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_AddRecipeSet_createdBlock = CallFunc_AddRecipeSet_createdBlock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.OnClosed
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "OnClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_NumArrow_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_C::BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_NumArrow_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_NumArrow_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_Sub_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_C::BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_Sub_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_Sub_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.SetMax
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_C::SetMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "SetMax");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_StartButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_C::BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_StartButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_StartButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_Add10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_C::BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_Add10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_Add10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_Sub10_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_C::BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_Sub10_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_Sub10_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.BndEvt__WBP_IngameMenu_WorkSpace_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_C::BndEvt__WBP_IngameMenu_WorkSpace_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "BndEvt__WBP_IngameMenu_WorkSpace_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_WorkSpace_C_BndEvt__WBP_IngameMenu_WorkSpace_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.StartProduce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_C::StartProduce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "StartProduce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_WorkSpace_C::BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_WorkSpace.WBP_IngameMenu_WorkSpace_C.ExecuteUbergraph_WBP_IngameMenu_WorkSpace
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIConvertItemRequestStartResponseCallFunc_CanStartProduction_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalcMaxProductableNum_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalcMaxProductableNum_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSelectingProductNum_IsSelecting                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSelectingProductNum_IsSelecting_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSelectingProductNum_IsSelecting_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSelectingProductNum_IsSelecting_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSelectingProductNum_IsSelecting_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_WorkSpace_C::ExecuteUbergraph_WBP_IngameMenu_WorkSpace(int32 EntryPoint, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPalUIConvertItemRequestStartResponse CallFunc_CanStartProduction_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_CalcMaxProductableNum_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_CalcMaxProductableNum_ReturnValue_1, int32 CallFunc_Max_ReturnValue_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsSelectingProductNum_IsSelecting, bool CallFunc_IsSelectingProductNum_IsSelecting_1, bool CallFunc_IsSelectingProductNum_IsSelecting_2, bool CallFunc_IsSelectingProductNum_IsSelecting_3, bool CallFunc_IsSelectingProductNum_IsSelecting_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_WorkSpace_C", "ExecuteUbergraph_WBP_IngameMenu_WorkSpace");

	Params::UWBP_IngameMenu_WorkSpace_C_ExecuteUbergraph_WBP_IngameMenu_WorkSpace_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanStartProduction_ReturnValue = CallFunc_CanStartProduction_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CalcMaxProductableNum_ReturnValue = CallFunc_CalcMaxProductableNum_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_CalcMaxProductableNum_ReturnValue_1 = CallFunc_CalcMaxProductableNum_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue_2 = CallFunc_Max_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsSelectingProductNum_IsSelecting = CallFunc_IsSelectingProductNum_IsSelecting;
	Parms.CallFunc_IsSelectingProductNum_IsSelecting_1 = CallFunc_IsSelectingProductNum_IsSelecting_1;
	Parms.CallFunc_IsSelectingProductNum_IsSelecting_2 = CallFunc_IsSelectingProductNum_IsSelecting_2;
	Parms.CallFunc_IsSelectingProductNum_IsSelecting_3 = CallFunc_IsSelectingProductNum_IsSelecting_3;
	Parms.CallFunc_IsSelectingProductNum_IsSelecting_4 = CallFunc_IsSelectingProductNum_IsSelecting_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


