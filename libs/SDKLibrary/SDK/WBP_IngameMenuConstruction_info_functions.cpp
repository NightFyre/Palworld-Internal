#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenuConstruction_info.WBP_IngameMenuConstruction_info_C
// (None)

class UClass* UWBP_IngameMenuConstruction_info_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenuConstruction_info_C");

	return Clss;
}


// WBP_IngameMenuConstruction_info_C WBP_IngameMenuConstruction_info.Default__WBP_IngameMenuConstruction_info_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenuConstruction_info_C* UWBP_IngameMenuConstruction_info_C::GetDefaultObj()
{
	static class UWBP_IngameMenuConstruction_info_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenuConstruction_info_C*>(UWBP_IngameMenuConstruction_info_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenuConstruction_info.WBP_IngameMenuConstruction_info_C.Get Useable Material Item Num
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Num                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FPalStaticItemIdAndNum>CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos    (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalStaticItemIdAndNum      CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenuConstruction_info_C::Get_Useable_Material_Item_Num(class FName ItemId, int32* Num, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, int32 CallFunc_Array_Length_ReturnValue, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_info_C", "Get Useable Material Item Num");

	Params::UWBP_IngameMenuConstruction_info_C_Get_Useable_Material_Item_Num_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos = CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;

}


// Function WBP_IngameMenuConstruction_info.WBP_IngameMenuConstruction_info_C.SetMaterialInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_IngameMenuConstruction_InfoItem_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NeedNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Useable_Material_Item_Num_Num                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenuConstruction_info_C::SetMaterialInfo(class UWBP_IngameMenuConstruction_InfoItem_C* Widget, class FName ID, int32 NeedNum, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Get_Useable_Material_Item_Num_Num, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_info_C", "SetMaterialInfo");

	Params::UWBP_IngameMenuConstruction_info_C_SetMaterialInfo_Params Parms{};

	Parms.Widget = Widget;
	Parms.ID = ID;
	Parms.NeedNum = NeedNum;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Useable_Material_Item_Num_Num = CallFunc_Get_Useable_Material_Item_Num_Num;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenuConstruction_info.WBP_IngameMenuConstruction_info_C.Set Build Object Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalBuildObjectData         BuildObjectData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_WorkAmountToManMonth_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FText                        CallFunc_GetBuildObjectDesc_outDesc                              (None)
// class FText                        CallFunc_GetMapObjectName_outName                                (None)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenuConstruction_info_C::Set_Build_Object_Data(const struct FPalBuildObjectData& BuildObjectData, const class FString& NewLocalVar_0, float CallFunc_WorkAmountToManMonth_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_GetBuildObjectDesc_outDesc, class FText CallFunc_GetMapObjectName_outName, double CallFunc_Conv_DoubleToText_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_info_C", "Set Build Object Data");

	Params::UWBP_IngameMenuConstruction_info_C_Set_Build_Object_Data_Params Parms{};

	Parms.BuildObjectData = BuildObjectData;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_WorkAmountToManMonth_ReturnValue = CallFunc_WorkAmountToManMonth_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_GetBuildObjectDesc_outDesc = CallFunc_GetBuildObjectDesc_outDesc;
	Parms.CallFunc_GetMapObjectName_outName = CallFunc_GetMapObjectName_outName;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast = CallFunc_Conv_DoubleToText_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


