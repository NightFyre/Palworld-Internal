#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C
// (None)

class UClass* UWBP_IngameConstruction_Dismantling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameConstruction_Dismantling_C");

	return Clss;
}


// WBP_IngameConstruction_Dismantling_C WBP_IngameConstruction_Dismantling.Default__WBP_IngameConstruction_Dismantling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameConstruction_Dismantling_C* UWBP_IngameConstruction_Dismantling_C::GetDefaultObj()
{
	static class UWBP_IngameConstruction_Dismantling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameConstruction_Dismantling_C*>(UWBP_IngameConstruction_Dismantling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetupKeyGuide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// class FText                        CallFunc_GetLocalizedText_ReturnValue_1                          (None)
// class FText                        CallFunc_GetLocalizedText_ReturnValue_2                          (None)
// TArray<class UWBP_IngameConstruction_Num_C*>K2Node_MakeArray_Array_3                                         (ReferenceParm, ContainsInstancedReference)

void UWBP_IngameConstruction_Dismantling_C::SetupKeyGuide(class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array, TArray<class FName>& K2Node_MakeArray_Array_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, TArray<class FName>& K2Node_MakeArray_Array_2, class FText CallFunc_GetLocalizedText_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue_1, class FText CallFunc_GetLocalizedText_ReturnValue_2, TArray<class UWBP_IngameConstruction_Num_C*>& K2Node_MakeArray_Array_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameConstruction_Dismantling_C", "SetupKeyGuide");

	Params::UWBP_IngameConstruction_Dismantling_C_SetupKeyGuide_Params Parms{};

	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.CallFunc_GetLocalizedText_ReturnValue_1 = CallFunc_GetLocalizedText_ReturnValue_1;
	Parms.CallFunc_GetLocalizedText_ReturnValue_2 = CallFunc_GetLocalizedText_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetEnableWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_Dismantling_C::SetEnableWarning(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameConstruction_Dismantling_C", "SetEnableWarning");

	Params::UWBP_IngameConstruction_Dismantling_C_SetEnableWarning_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalBuildObjectData         InBuildObjectData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_GetMapObjectName_outName                                (None)

void UWBP_IngameConstruction_Dismantling_C::Setup(const struct FPalBuildObjectData& InBuildObjectData, class FText CallFunc_GetMapObjectName_outName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameConstruction_Dismantling_C", "Setup");

	Params::UWBP_IngameConstruction_Dismantling_C_Setup_Params Parms{};

	Parms.InBuildObjectData = InBuildObjectData;
	Parms.CallFunc_GetMapObjectName_outName = CallFunc_GetMapObjectName_outName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetWarningText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_Dismantling_C::SetWarningText(class FText InText, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameConstruction_Dismantling_C", "SetWarningText");

	Params::UWBP_IngameConstruction_Dismantling_C_SetWarningText_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.ResetAllUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameConstruction_Dismantling_C::ResetAllUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameConstruction_Dismantling_C", "ResetAllUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.InitUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameConstruction_Dismantling_C::InitUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameConstruction_Dismantling_C", "InitUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetMaterial
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StaticItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCommonItemIcon_C*    TargetIcon                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_IngameConstruction_Num_C*TargetNum                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCommonItemIcon_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_IngameConstruction_Num_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FPalStaticItemIdAndNum>CallFunc_CollectItemInfoEnableToUseMaterial_OutItemInfos         (ReferenceParm)
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalStaticItemIdAndNum      CallFunc_Array_Get_Item_2                                        (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameConstruction_Dismantling_C::SetMaterial(int32 Index, class FName StaticItemId, int32 ItemCount, class UWBP_PalCommonItemIcon_C* TargetIcon, class UWBP_IngameConstruction_Num_C* TargetNum, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UWBP_PalCommonItemIcon_C* CallFunc_Array_Get_Item, class UWBP_IngameConstruction_Num_C* CallFunc_Array_Get_Item_1, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectItemInfoEnableToUseMaterial_OutItemInfos, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameConstruction_Dismantling_C", "SetMaterial");

	Params::UWBP_IngameConstruction_Dismantling_C_SetMaterial_Params Parms{};

	Parms.Index = Index;
	Parms.StaticItemId = StaticItemId;
	Parms.ItemCount = ItemCount;
	Parms.TargetIcon = TargetIcon;
	Parms.TargetNum = TargetNum;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_CollectItemInfoEnableToUseMaterial_OutItemInfos = CallFunc_CollectItemInfoEnableToUseMaterial_OutItemInfos;
	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetDismantleObjectName
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InName                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IngameConstruction_Dismantling_C::SetDismantleObjectName(class FText InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameConstruction_Dismantling_C", "SetDismantleObjectName");

	Params::UWBP_IngameConstruction_Dismantling_C_SetDismantleObjectName_Params Parms{};

	Parms.InName = InName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameConstruction_Dismantling_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameConstruction_Dismantling_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameConstruction_Dismantling_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameConstruction_Dismantling_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.ExecuteUbergraph_WBP_IngameConstruction_Dismantling
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PalCommonItemIcon_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_IngameConstruction_Dismantling_C::ExecuteUbergraph_WBP_IngameConstruction_Dismantling(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class UWBP_PalCommonItemIcon_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameConstruction_Dismantling_C", "ExecuteUbergraph_WBP_IngameConstruction_Dismantling");

	Params::UWBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


