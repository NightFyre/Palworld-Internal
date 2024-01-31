#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DungeonInfo.WBP_DungeonInfo_C
// (None)

class UClass* UWBP_DungeonInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DungeonInfo_C");

	return Clss;
}


// WBP_DungeonInfo_C WBP_DungeonInfo.Default__WBP_DungeonInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DungeonInfo_C* UWBP_DungeonInfo_C::GetDefaultObj()
{
	static class UWBP_DungeonInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DungeonInfo_C*>(UWBP_DungeonInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonBossSpawned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalDungeonInstanceBossStateCallFunc_GetBossState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::SetDungeonBossSpawned(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModel* DungeonInstanceModel, enum class EPalDungeonInstanceBossState CallFunc_GetBossState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "SetDungeonBossSpawned");

	Params::UWBP_DungeonInfo_C_SetDungeonBossSpawned_Params Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.CallFunc_GetBossState_ReturnValue = CallFunc_GetBossState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.UpdateDungeonDisappearRemainTime
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcRemainSecondsBy_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_PalTimeSecondsToString_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_SelectText_ReturnValue                                  (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::UpdateDungeonDisappearRemainTime(class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, float CallFunc_CalcRemainSecondsBy_ReturnValue, const class FString& CallFunc_PalTimeSecondsToString_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_SelectText_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "UpdateDungeonDisappearRemainTime");

	Params::UWBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime_Params Parms{};

	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CalcRemainSecondsBy_ReturnValue = CallFunc_CalcRemainSecondsBy_ReturnValue;
	Parms.CallFunc_PalTimeSecondsToString_ReturnValue = CallFunc_PalTimeSecondsToString_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_SelectText_ReturnValue = CallFunc_SelectText_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonDisappearTimeAt
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameDateTime               CallFunc_GetDisappearTimeAt_ReturnValue                          (ConstParm, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::SetDungeonDisappearTimeAt(class UPalDungeonInstanceModel* DungeonInstanceModel, const struct FGameDateTime& CallFunc_GetDisappearTimeAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "SetDungeonDisappearTimeAt");

	Params::UWBP_DungeonInfo_C_SetDungeonDisappearTimeAt_Params Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.CallFunc_GetDisappearTimeAt_ReturnValue = CallFunc_GetDisappearTimeAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonLevel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_DungeonInfo_C::SetDungeonLevel(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModel* DungeonInstanceModel, int32 CallFunc_GetLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "SetDungeonLevel");

	Params::UWBP_DungeonInfo_C_SetDungeonLevel_Params Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDungeonNameText_ReturnValue                          (None)

void UWBP_DungeonInfo_C::SetDungeonName(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModel* DungeonInstanceModel, class FText CallFunc_GetDungeonNameText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "SetDungeonName");

	Params::UWBP_DungeonInfo_C_SetDungeonName_Params Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.CallFunc_GetDungeonNameText_ReturnValue = CallFunc_GetDungeonNameText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.UpdateDisplayInfo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::UpdateDisplayInfo(class UPalDungeonInstanceModel* DungeonInstanceModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "UpdateDisplayInfo");

	Params::UWBP_DungeonInfo_C_UpdateDisplayInfo_Params Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetupEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalStageModelDungeon*       StageModel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    InstanceModel                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    CallFunc_GetInstanceModel_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::SetupEvents(class UPalStageModelDungeon* StageModel, class UPalDungeonInstanceModel* InstanceModel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalDungeonInstanceModel* CallFunc_GetInstanceModel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "SetupEvents");

	Params::UWBP_DungeonInfo_C_SetupEvents_Params Parms{};

	Parms.StageModel = StageModel;
	Parms.InstanceModel = InstanceModel;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetInstanceModel_ReturnValue = CallFunc_GetInstanceModel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.UpdateDungeonInfoByTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DungeonInfo_C::UpdateDungeonInfoByTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "UpdateDungeonInfoByTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.Setup By Stage Model
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalStageModelDungeon*       InStageModel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    InstanceModel                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    CallFunc_GetInstanceModel_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::Setup_By_Stage_Model(class UPalStageModelDungeon* InStageModel, class UPalDungeonInstanceModel* InstanceModel, class UPalDungeonInstanceModel* CallFunc_GetInstanceModel_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "Setup By Stage Model");

	Params::UWBP_DungeonInfo_C_Setup_By_Stage_Model_Params Parms{};

	Parms.InStageModel = InStageModel;
	Parms.InstanceModel = InstanceModel;
	Parms.CallFunc_GetInstanceModel_ReturnValue = CallFunc_GetInstanceModel_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "Tick");

	Params::UWBP_DungeonInfo_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo.WBP_DungeonInfo_C.ExecuteUbergraph_WBP_DungeonInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_C::ExecuteUbergraph_WBP_DungeonInfo(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_C", "ExecuteUbergraph_WBP_DungeonInfo");

	Params::UWBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


