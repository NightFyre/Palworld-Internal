#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C
// (Actor)

class UClass* ABP_MapObject_TreasureBox_VisibleContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObject_TreasureBox_VisibleContent_C");

	return Clss;
}


// BP_MapObject_TreasureBox_VisibleContent_C BP_MapObject_TreasureBox_VisibleContent.Default__BP_MapObject_TreasureBox_VisibleContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapObject_TreasureBox_VisibleContent_C* ABP_MapObject_TreasureBox_VisibleContent_C::GetDefaultObj()
{
	static class ABP_MapObject_TreasureBox_VisibleContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapObject_TreasureBox_VisibleContent_C*>(ABP_MapObject_TreasureBox_VisibleContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.SetupEventToItemContainer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*           ItemContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::SetupEventToItemContainer(class UPalItemContainer* ItemContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "SetupEventToItemContainer");

	Params::ABP_MapObject_TreasureBox_VisibleContent_C_SetupEventToItemContainer_Params Parms{};

	Parms.ItemContainer = ItemContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.IsShowOutlineInReticleTargetting
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MapObject_TreasureBox_VisibleContent_C::IsShowOutlineInReticleTargetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "IsShowOutlineInReticleTargetting");

	Params::ABP_MapObject_TreasureBox_VisibleContent_C_IsShowOutlineInReticleTargetting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.OnReadyItemContainerModule
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelModuleBase*Module                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::OnReadyItemContainerModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "OnReadyItemContainerModule");

	Params::ABP_MapObject_TreasureBox_VisibleContent_C_OnReadyItemContainerModule_Params Parms{};

	Parms.Model = Model;
	Parms.Module = Module;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.TryGetStaticItemId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectPickupItemOnLevelModel*PickupItemModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        StaticItemId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectPickupItemOnLevelModel*ConcreteModel                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::TryGetStaticItemId(class UPalMapObjectPickupItemOnLevelModel* PickupItemModel, class FName* StaticItemId, class UPalMapObjectPickupItemOnLevelModel* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "TryGetStaticItemId");

	Params::ABP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId_Params Parms{};

	Parms.PickupItemModel = PickupItemModel;
	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);

	if (StaticItemId != nullptr)
		*StaticItemId = Parms.StaticItemId;

}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.SetupVisual
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      StaticItemData                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectPickupItemOnLevelModel*ConcreteModel                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalTreasureBoxVisualTypeVisualType                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemIDManager*           ItemIDManager                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectPickupItemOnLevelModel*K2Node_DynamicCast_AsPal_Map_Object_Pickup_Item_on_Level_Model   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetVisualStaticItemId_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class AActor>        CallFunc_GetVisualBlueprintClass_ReturnValue                     (UObjectWrapper, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel, class UPalStaticItemDataBase* StaticItemData, class UPalMapObjectPickupItemOnLevelModel* ConcreteModel, enum class EPalTreasureBoxVisualType VisualType, class UPalItemIDManager* ItemIDManager, class UPalMapObjectPickupItemOnLevelModel* K2Node_DynamicCast_AsPal_Map_Object_Pickup_Item_on_Level_Model, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class FName CallFunc_GetVisualStaticItemId_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, TSoftClassPtr<class AActor> CallFunc_GetVisualBlueprintClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "SetupVisual");

	Params::ABP_MapObject_TreasureBox_VisibleContent_C_SetupVisual_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;
	Parms.StaticItemData = StaticItemData;
	Parms.ConcreteModel = ConcreteModel;
	Parms.VisualType = VisualType;
	Parms.ItemIDManager = ItemIDManager;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Pickup_Item_on_Level_Model = K2Node_DynamicCast_AsPal_Map_Object_Pickup_Item_on_Level_Model;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetVisualStaticItemId_ReturnValue = CallFunc_GetVisualStaticItemId_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;
	Parms.CallFunc_GetVisualBlueprintClass_ReturnValue = CallFunc_GetVisualBlueprintClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B");

	Params::ABP_MapObject_TreasureBox_VisibleContent_C_OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.LoadVisualActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class AActor>        BlueprintClassSoft                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::LoadVisualActor(TSoftClassPtr<class AActor> BlueprintClassSoft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "LoadVisualActor");

	Params::ABP_MapObject_TreasureBox_VisibleContent_C_LoadVisualActor_Params Parms{};

	Parms.BlueprintClassSoft = BlueprintClassSoft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "BP_OnSetConcreteModel");

	Params::ABP_MapObject_TreasureBox_VisibleContent_C_BP_OnSetConcreteModel_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class AActor>        K2Node_CustomEvent_BlueprintClassSoft                            (HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_Event_ConcreteModel                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_C::ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, TSoftClassPtr<class AActor> K2Node_CustomEvent_BlueprintClassSoft, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_C", "ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent");

	Params::ABP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_CustomEvent_BlueprintClassSoft = K2Node_CustomEvent_BlueprintClassSoft;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_Event_ConcreteModel = K2Node_Event_ConcreteModel;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


