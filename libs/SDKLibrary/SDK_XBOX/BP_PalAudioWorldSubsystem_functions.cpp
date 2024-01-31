#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C
// (None)

class UClass* UBP_PalAudioWorldSubsystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalAudioWorldSubsystem_C");

	return Clss;
}


// BP_PalAudioWorldSubsystem_C BP_PalAudioWorldSubsystem.Default__BP_PalAudioWorldSubsystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalAudioWorldSubsystem_C* UBP_PalAudioWorldSubsystem_C::GetDefaultObj()
{
	static class UBP_PalAudioWorldSubsystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalAudioWorldSubsystem_C*>(UBP_PalAudioWorldSubsystem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.FindMaxPriorityAmbientSoundArea
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalAmbientSoundAreaBase*    AmbinetSoundArea                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAmbientSoundAreaBase*    TargetAmbientSoundArea                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              MaxPriority                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAmbientSoundAreaBase*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAmbientSoundAreaBase*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::FindMaxPriorityAmbientSoundArea(class APalAmbientSoundAreaBase** AmbinetSoundArea, class APalAmbientSoundAreaBase* TargetAmbientSoundArea, int32 MaxPriority, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APalAmbientSoundAreaBase* CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, class APalAmbientSoundAreaBase* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "FindMaxPriorityAmbientSoundArea");

	Params::UBP_PalAudioWorldSubsystem_C_FindMaxPriorityAmbientSoundArea_Params Parms{};

	Parms.TargetAmbientSoundArea = TargetAmbientSoundArea;
	Parms.MaxPriority = MaxPriority;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AmbinetSoundArea != nullptr)
		*AmbinetSoundArea = Parms.AmbinetSoundArea;

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.IsPlayingArea
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalAmbientSoundAreaBase*    AmbientSoundArea                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Identical_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Identical_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PalAudioWorldSubsystem_C::IsPlayingArea(class APalAmbientSoundAreaBase* AmbientSoundArea, bool CallFunc_Array_Identical_ReturnValue, bool CallFunc_Array_Identical_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "IsPlayingArea");

	Params::UBP_PalAudioWorldSubsystem_C_IsPlayingArea_Params Parms{};

	Parms.AmbientSoundArea = AmbientSoundArea;
	Parms.CallFunc_Array_Identical_ReturnValue = CallFunc_Array_Identical_ReturnValue;
	Parms.CallFunc_Array_Identical_ReturnValue_1 = CallFunc_Array_Identical_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.ChangeBattleBGMType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalBattleBGMType       GameType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalAudioStateGroup     AudioType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalAudioStateGroup     CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::ChangeBattleBGMType(enum class EPalBattleBGMType GameType, enum class EPalAudioStateGroup* AudioType, enum class EPalAudioStateGroup CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "ChangeBattleBGMType");

	Params::UBP_PalAudioWorldSubsystem_C_ChangeBattleBGMType_Params Parms{};

	Parms.GameType = GameType;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioType != nullptr)
		*AudioType = Parms.AudioType;

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnAddRemoveEnemy
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalBattleBGMType       Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAdd                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalAudioStateGroup     CallFunc_ChangeBattleBGMType_AudioType                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnAddRemoveEnemy(enum class EPalBattleBGMType Rank, bool IsAdd, enum class EPalAudioStateGroup CallFunc_ChangeBattleBGMType_AudioType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnAddRemoveEnemy");

	Params::UBP_PalAudioWorldSubsystem_C_OnAddRemoveEnemy_Params Parms{};

	Parms.Rank = Rank;
	Parms.IsAdd = IsAdd;
	Parms.CallFunc_ChangeBattleBGMType_AudioType = CallFunc_ChangeBattleBGMType_AudioType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerEnterAmbientArea
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAmbientSoundAreaBase*    AmbientSoundArea                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnPlayerEnterAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea, int32 CallFunc_Array_AddUnique_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnPlayerEnterAmbientArea");

	Params::UBP_PalAudioWorldSubsystem_C_OnPlayerEnterAmbientArea_Params Parms{};

	Parms.Player = Player;
	Parms.AmbientSoundArea = AmbientSoundArea;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerExitAmbientArea
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAmbientSoundAreaBase*    AmbientSoundArea                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnPlayerExitAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnPlayerExitAmbientArea");

	Params::UBP_PalAudioWorldSubsystem_C_OnPlayerExitAmbientArea_Params Parms{};

	Parms.Player = Player;
	Parms.AmbientSoundArea = AmbientSoundArea;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.PlayAmbientSounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalOneDayTimeType      OneDayTimeType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkAudioEvent*>       TargetAmbientEvents                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSoundOptions            K2Node_MakeStruct_PalSoundOptions                                (NoDestructor)
// class UAkAudioEvent*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_PlaySound_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::PlayAmbientSounds(enum class EPalOneDayTimeType OneDayTimeType, const TArray<class UAkAudioEvent*>& TargetAmbientEvents, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, class UAkAudioEvent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_PlaySound_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "PlayAmbientSounds");

	Params::UBP_PalAudioWorldSubsystem_C_PlayAmbientSounds_Params Parms{};

	Parms.OneDayTimeType = OneDayTimeType;
	Parms.TargetAmbientEvents = TargetAmbientEvents;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_PalSoundOptions = K2Node_MakeStruct_PalSoundOptions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_PlaySound_ReturnValue = CallFunc_PlaySound_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnChangeOneDayTimeType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalOneDayTimeType      OneDayTimeType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkAudioEvent*>       TargetAmbientEvents                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnChangeOneDayTimeType(enum class EPalOneDayTimeType OneDayTimeType, const TArray<class UAkAudioEvent*>& TargetAmbientEvents, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnChangeOneDayTimeType");

	Params::UBP_PalAudioWorldSubsystem_C_OnChangeOneDayTimeType_Params Parms{};

	Parms.OneDayTimeType = OneDayTimeType;
	Parms.TargetAmbientEvents = TargetAmbientEvents;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue_1 = CallFunc_Array_IsEmpty_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnNightEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalAudioWorldSubsystem_C::OnNightEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnNightEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnNightStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalAudioWorldSubsystem_C::OnNightStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnNightStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateAmbient
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalAmbientSoundAreaBase*    NextAmbientSoundArea                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalAmbientSoundAreaData    CallFunc_GetAmbientSoundAreaData_ReturnValue                     (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingArea_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAmbientSoundAreaBase*    CallFunc_FindMaxPriorityAmbientSoundArea_AmbinetSoundArea        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalTimeManager*             CallFunc_GetTimeManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalOneDayTimeType      CallFunc_GetCurrentDayTimeType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::UpdateAmbient(class APalAmbientSoundAreaBase* NextAmbientSoundArea, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FPalAmbientSoundAreaData& CallFunc_GetAmbientSoundAreaData_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsPlayingArea_ReturnValue, class APalAmbientSoundAreaBase* CallFunc_FindMaxPriorityAmbientSoundArea_AmbinetSoundArea, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue, enum class EPalOneDayTimeType CallFunc_GetCurrentDayTimeType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateAmbient");

	Params::UBP_PalAudioWorldSubsystem_C_UpdateAmbient_Params Parms{};

	Parms.NextAmbientSoundArea = NextAmbientSoundArea;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAmbientSoundAreaData_ReturnValue = CallFunc_GetAmbientSoundAreaData_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsPlayingArea_ReturnValue = CallFunc_IsPlayingArea_ReturnValue;
	Parms.CallFunc_FindMaxPriorityAmbientSoundArea_AmbinetSoundArea = CallFunc_FindMaxPriorityAmbientSoundArea_AmbinetSoundArea;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTimeManager_ReturnValue = CallFunc_GetTimeManager_ReturnValue;
	Parms.CallFunc_GetCurrentDayTimeType_ReturnValue = CallFunc_GetCurrentDayTimeType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnBattleRankDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalPlayerBattleFinishTypeFinish                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnBattleRankDown(enum class EPalPlayerBattleFinishType Finish, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnBattleRankDown");

	Params::UBP_PalAudioWorldSubsystem_C_OnBattleRankDown_Params Parms{};

	Parms.Finish = Finish;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerExitSpotArea
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalSpotAreaBase*            SpotArea                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnPlayerExitSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnPlayerExitSpotArea");

	Params::UBP_PalAudioWorldSubsystem_C_OnPlayerExitSpotArea_Params Parms{};

	Parms.Player = Player;
	Parms.SpotArea = SpotArea;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerEnterSpotArea
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalSpotAreaBase*            SpotArea                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnPlayerEnterSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnPlayerEnterSpotArea");

	Params::UBP_PalAudioWorldSubsystem_C_OnPlayerEnterSpotArea_Params Parms{};

	Parms.Player = Player;
	Parms.SpotArea = SpotArea;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateSpot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAudioState          SpotName                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInsideAnySpot                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalSpotAreaBase*            CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalAudioState          CallFunc_GetAudioState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::UpdateSpot(enum class EPalAudioState SpotName, bool IsInsideAnySpot, int32 CallFunc_Array_LastIndex_ReturnValue, class APalSpotAreaBase* CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, enum class EPalAudioState CallFunc_GetAudioState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateSpot");

	Params::UBP_PalAudioWorldSubsystem_C_UpdateSpot_Params Parms{};

	Parms.SpotName = SpotName;
	Parms.IsInsideAnySpot = IsInsideAnySpot;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_GetAudioState_ReturnValue = CallFunc_GetAudioState_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerExitBaseCamp
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*           BaseCampModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnPlayerExitBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnPlayerExitBaseCamp");

	Params::UBP_PalAudioWorldSubsystem_C_OnPlayerExitBaseCamp_Params Parms{};

	Parms.Player = Player;
	Parms.BaseCampModel = BaseCampModel;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnPlayerEnterBaseCamp
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBaseCampModel*           BaseCampModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnPlayerEnterBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnPlayerEnterBaseCamp");

	Params::UBP_PalAudioWorldSubsystem_C_OnPlayerEnterBaseCamp_Params Parms{};

	Parms.Player = Player;
	Parms.BaseCampModel = BaseCampModel;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateRaid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::UpdateRaid(bool CallFunc_Array_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateRaid");

	Params::UBP_PalAudioWorldSubsystem_C_UpdateRaid_Params Parms{};

	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnArrivedRaid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIncidentBroadcastParameterParam                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnArrivedRaid(struct FPalIncidentBroadcastParameter& Param, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnArrivedRaid");

	Params::UBP_PalAudioWorldSubsystem_C_OnArrivedRaid_Params Parms{};

	Parms.Param = Param;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnEndRaid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIncidentBroadcastParameterParameter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGuid                       Guid                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnEndRaid(struct FPalIncidentBroadcastParameter& Parameter, const struct FGuid& Guid, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnEndRaid");

	Params::UBP_PalAudioWorldSubsystem_C_OnEndRaid_Params Parms{};

	Parms.Parameter = Parameter;
	Parms.Guid = Guid;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnStartRaid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIncidentBroadcastParameterParameter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGuid                       Guid                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnStartRaid(struct FPalIncidentBroadcastParameter& Parameter, const struct FGuid& Guid, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnStartRaid");

	Params::UBP_PalAudioWorldSubsystem_C_OnStartRaid_Params Parms{};

	Parms.Parameter = Parameter;
	Parms.Guid = Guid;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.CreateDebugModel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewParam                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterCameraComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::CreateDebugModel(class AActor** NewParam, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UPalCharacterCameraComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "CreateDebugModel");

	Params::UBP_PalAudioWorldSubsystem_C_CreateDebugModel_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnBattleModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBattleMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnBattleModeChanged(bool IsBattleMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnBattleModeChanged");

	Params::UBP_PalAudioWorldSubsystem_C_OnBattleModeChanged_Params Parms{};

	Parms.IsBattleMode = IsBattleMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateDebugDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSoundPlayerLocation_OutLocation                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_CreateDebugModel_NewParam                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::UpdateDebugDisplay(class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, const struct FVector& CallFunc_GetSoundPlayerLocation_OutLocation, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_CreateDebugModel_NewParam, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateDebugDisplay");

	Params::UBP_PalAudioWorldSubsystem_C_UpdateDebugDisplay_Params Parms{};

	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.CallFunc_GetSoundPlayerLocation_OutLocation = CallFunc_GetSoundPlayerLocation_OutLocation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDebugModel_NewParam = CallFunc_CreateDebugModel_NewParam;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue_1 = CallFunc_GetPalDebugSetting_ReturnValue_1;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateWorldLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterCameraComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::UpdateWorldLocation(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPalCharacterCameraComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateWorldLocation");

	Params::UBP_PalAudioWorldSubsystem_C_UpdateWorldLocation_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue_1 = CallFunc_GetPalmi_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateWorldTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalTimeManager*             CallFunc_GetTimeManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::UpdateWorldTime(class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue, float CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateWorldTime");

	Params::UBP_PalAudioWorldSubsystem_C_UpdateWorldTime_Params Parms{};

	Parms.CallFunc_GetTimeManager_ReturnValue = CallFunc_GetTimeManager_ReturnValue;
	Parms.CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue = CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.UpdateStatePlayerAlive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::UpdateStatePlayerAlive(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, bool CallFunc_IsDead_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "UpdateStatePlayerAlive");

	Params::UBP_PalAudioWorldSubsystem_C_UpdateStatePlayerAlive_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue_1 = CallFunc_GetPalmi_ReturnValue_1;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.SetDefaultState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalAudioWorldSubsystem_C::SetDefaultState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "SetDefaultState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.Tick_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::Tick_BP(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "Tick_BP");

	Params::UBP_PalAudioWorldSubsystem_C_Tick_BP_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnEndOfEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_PalAudioWorldSubsystem_C::OnEndOfEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnEndOfEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.DeathPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalAudioWorldSubsystem_C::DeathPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "DeathPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.RespawnPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::RespawnPlayer(class APalPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "RespawnPlayer");

	Params::UBP_PalAudioWorldSubsystem_C_RespawnPlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.OnSpawnedLocalPlayerCharacter
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::OnSpawnedLocalPlayerCharacter(class APawn* Pawn, class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "OnSpawnedLocalPlayerCharacter");

	Params::UBP_PalAudioWorldSubsystem_C_OnSpawnedLocalPlayerCharacter_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C.ExecuteUbergraph_BP_PalAudioWorldSubsystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalInvaderManager*          CallFunc_GetInvaderManager_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInvaderManager*          CallFunc_GetInvaderManager_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalInvaderManager*          CallFunc_GetInvaderManager_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInvaderManager*          CallFunc_GetInvaderManager_ReturnValue_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_CustomEvent_Player                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_Pawn                                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalTimeManager*             CallFunc_GetTimeManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalTimeManager*             CallFunc_GetTimeManager_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalSoundOptions            K2Node_MakeStruct_PalSoundOptions                                (NoDestructor)
// int32                              CallFunc_PlaySound_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAudioWorldSubsystem_C::ExecuteUbergraph_BP_PalAudioWorldSubsystem(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaTime, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class UPalInvaderManager* CallFunc_GetInvaderManager_ReturnValue, class UPalInvaderManager* CallFunc_GetInvaderManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UPalInvaderManager* CallFunc_GetInvaderManager_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPalInvaderManager* CallFunc_GetInvaderManager_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_2, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_3, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_4, class APalPlayerCharacter* K2Node_CustomEvent_Player, class APawn* K2Node_Event_Pawn, class AController* K2Node_Event_Controller, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, int32 CallFunc_PlaySound_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAudioWorldSubsystem_C", "ExecuteUbergraph_BP_PalAudioWorldSubsystem");

	Params::UBP_PalAudioWorldSubsystem_C_ExecuteUbergraph_BP_PalAudioWorldSubsystem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInvaderManager_ReturnValue = CallFunc_GetInvaderManager_ReturnValue;
	Parms.CallFunc_GetInvaderManager_ReturnValue_1 = CallFunc_GetInvaderManager_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInvaderManager_ReturnValue_2 = CallFunc_GetInvaderManager_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetInvaderManager_ReturnValue_3 = CallFunc_GetInvaderManager_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetPalmi_ReturnValue_1 = CallFunc_GetPalmi_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetPalmi_ReturnValue_2 = CallFunc_GetPalmi_ReturnValue_2;
	Parms.CallFunc_GetPalmi_ReturnValue_3 = CallFunc_GetPalmi_ReturnValue_3;
	Parms.CallFunc_GetPalmi_ReturnValue_4 = CallFunc_GetPalmi_ReturnValue_4;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.K2Node_Event_Pawn = K2Node_Event_Pawn;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_GetTimeManager_ReturnValue = CallFunc_GetTimeManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetTimeManager_ReturnValue_1 = CallFunc_GetTimeManager_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_MakeStruct_PalSoundOptions = K2Node_MakeStruct_PalSoundOptions;
	Parms.CallFunc_PlaySound_ReturnValue = CallFunc_PlaySound_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


