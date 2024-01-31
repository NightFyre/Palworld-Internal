#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C
// (None)

class UClass* UWBP_DungeonInfo_FixedDungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DungeonInfo_FixedDungeon_C");

	return Clss;
}


// WBP_DungeonInfo_FixedDungeon_C WBP_DungeonInfo_FixedDungeon.Default__WBP_DungeonInfo_FixedDungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DungeonInfo_FixedDungeon_C* UWBP_DungeonInfo_FixedDungeon_C::GetDefaultObj()
{
	static class UWBP_DungeonInfo_FixedDungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DungeonInfo_FixedDungeon_C*>(UWBP_DungeonInfo_FixedDungeon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.SetDungeonBossSpawned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalDungeonInstanceBossStateCallFunc_GetBossState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::SetDungeonBossSpawned(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModel* DungeonInstanceModel, enum class EPalDungeonInstanceBossState CallFunc_GetBossState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "SetDungeonBossSpawned");

	Params::UWBP_DungeonInfo_FixedDungeon_C_SetDungeonBossSpawned_Params Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.CallFunc_GetBossState_ReturnValue = CallFunc_GetBossState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.UpdateBossRespawnRemainTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RemainSeconds                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcRemainSecondsBy_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::UpdateBossRespawnRemainTime(float RemainSeconds, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_CalcRemainSecondsBy_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "UpdateBossRespawnRemainTime");

	Params::UWBP_DungeonInfo_FixedDungeon_C_UpdateBossRespawnRemainTime_Params Parms{};

	Parms.RemainSeconds = RemainSeconds;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CalcRemainSecondsBy_ReturnValue = CallFunc_CalcRemainSecondsBy_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.SetBossRespawnTimeAt
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModelFixedDungeon*K2Node_DynamicCast_AsPal_Dungeon_Instance_Model_Fixed_Dungeon    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameDateTime               CallFunc_GetRespawnBossTimeAt_ReturnValue                        (ConstParm, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::SetBossRespawnTimeAt(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModelFixedDungeon* K2Node_DynamicCast_AsPal_Dungeon_Instance_Model_Fixed_Dungeon, bool K2Node_DynamicCast_bSuccess, const struct FGameDateTime& CallFunc_GetRespawnBossTimeAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "SetBossRespawnTimeAt");

	Params::UWBP_DungeonInfo_FixedDungeon_C_SetBossRespawnTimeAt_Params Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.K2Node_DynamicCast_AsPal_Dungeon_Instance_Model_Fixed_Dungeon = K2Node_DynamicCast_AsPal_Dungeon_Instance_Model_Fixed_Dungeon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRespawnBossTimeAt_ReturnValue = CallFunc_GetRespawnBossTimeAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.Set Dungeon Level
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_DungeonInfo_FixedDungeon_C::Set_Dungeon_Level(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModel* DungeonInstanceModel, int32 CallFunc_GetLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "Set Dungeon Level");

	Params::UWBP_DungeonInfo_FixedDungeon_C_Set_Dungeon_Level_Params Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.SetDungeonName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDungeonNameText_ReturnValue                          (None)

void UWBP_DungeonInfo_FixedDungeon_C::SetDungeonName(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModel* DungeonInstanceModel, class FText CallFunc_GetDungeonNameText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "SetDungeonName");

	Params::UWBP_DungeonInfo_FixedDungeon_C_SetDungeonName_Params Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.DungeonInstanceModel = DungeonInstanceModel;
	Parms.CallFunc_GetDungeonNameText_ReturnValue = CallFunc_GetDungeonNameText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.Update Display Info
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDungeonInstanceModel*    DungeonInstanceModel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::Update_Display_Info(class UPalDungeonInstanceModel* DungeonInstanceModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "Update Display Info");

	Params::UWBP_DungeonInfo_FixedDungeon_C_Update_Display_Info_Params Parms{};

	Parms.DungeonInstanceModel = DungeonInstanceModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.SetupEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalStageModelDungeon*       StageModel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    InstanceModel                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    CallFunc_GetInstanceModel_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::SetupEvents(class UPalStageModelDungeon* StageModel, class UPalDungeonInstanceModel* InstanceModel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalDungeonInstanceModel* CallFunc_GetInstanceModel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "SetupEvents");

	Params::UWBP_DungeonInfo_FixedDungeon_C_SetupEvents_Params Parms{};

	Parms.StageModel = StageModel;
	Parms.InstanceModel = InstanceModel;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetInstanceModel_ReturnValue = CallFunc_GetInstanceModel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.UpdateDungeonInfoByTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DungeonInfo_FixedDungeon_C::UpdateDungeonInfoByTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "UpdateDungeonInfoByTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.Setup By Stage Model
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalStageModelDungeon*       InStageModel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    InstanceModel                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDungeonInstanceModel*    CallFunc_GetInstanceModel_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::Setup_By_Stage_Model(class UPalStageModelDungeon* InStageModel, class UPalDungeonInstanceModel* InstanceModel, class UPalDungeonInstanceModel* CallFunc_GetInstanceModel_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "Setup By Stage Model");

	Params::UWBP_DungeonInfo_FixedDungeon_C_Setup_By_Stage_Model_Params Parms{};

	Parms.InStageModel = InStageModel;
	Parms.InstanceModel = InstanceModel;
	Parms.CallFunc_GetInstanceModel_ReturnValue = CallFunc_GetInstanceModel_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "Tick");

	Params::UWBP_DungeonInfo_FixedDungeon_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DungeonInfo_FixedDungeon_C::ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonInfo_FixedDungeon_C", "ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon");

	Params::UWBP_DungeonInfo_FixedDungeon_C_ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


