#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalHUD_InGame_GeneralDispatchEventReciever.WBP_PalHUD_InGame_GeneralDispatchEventReciever_C
// (None)

class UClass* UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalHUD_InGame_GeneralDispatchEventReciever_C");

	return Clss;
}


// WBP_PalHUD_InGame_GeneralDispatchEventReciever_C WBP_PalHUD_InGame_GeneralDispatchEventReciever.Default__WBP_PalHUD_InGame_GeneralDispatchEventReciever_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C* UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C::GetDefaultObj()
{
	static class UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C*>(UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalHUD_InGame_GeneralDispatchEventReciever.WBP_PalHUD_InGame_GeneralDispatchEventReciever_C.OpenDismantlingUI_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LastSelectedIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromRadialMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PalHUD_InGame_InputListener_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildingUIParameter_C*   CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C::OpenDismantlingUI_Impl(int32 LastSelectedIndex, bool bFromRadialMenu, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PalHUD_InGame_InputListener_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_BuildingUIParameter_C* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_GeneralDispatchEventReciever_C", "OpenDismantlingUI_Impl");

	Params::UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C_OpenDismantlingUI_Impl_Params Parms{};

	Parms.LastSelectedIndex = LastSelectedIndex;
	Parms.bFromRadialMenu = bFromRadialMenu;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_GeneralDispatchEventReciever.WBP_PalHUD_InGame_GeneralDispatchEventReciever_C.OpenDismantlingUIFromRadialMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LastSelectedIndex                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C::OpenDismantlingUIFromRadialMenu(int32 LastSelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_GeneralDispatchEventReciever_C", "OpenDismantlingUIFromRadialMenu");

	Params::UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C_OpenDismantlingUIFromRadialMenu_Params Parms{};

	Parms.LastSelectedIndex = LastSelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_GeneralDispatchEventReciever.WBP_PalHUD_InGame_GeneralDispatchEventReciever_C.OpenBuildingUI_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BuildObjectId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromRadialMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PalHUD_InGame_InputListener_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildingUIParameter_C*   CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C::OpenBuildingUI_Impl(class FName BuildObjectId, bool bFromRadialMenu, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PalHUD_InGame_InputListener_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_BuildingUIParameter_C* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_GeneralDispatchEventReciever_C", "OpenBuildingUI_Impl");

	Params::UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C_OpenBuildingUI_Impl_Params Parms{};

	Parms.BuildObjectId = BuildObjectId;
	Parms.bFromRadialMenu = bFromRadialMenu;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_GeneralDispatchEventReciever.WBP_PalHUD_InGame_GeneralDispatchEventReciever_C.OpenBuildingUIFromRadialMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BuildObjectId                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C::OpenBuildingUIFromRadialMenu(class FName BuildObjectId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_GeneralDispatchEventReciever_C", "OpenBuildingUIFromRadialMenu");

	Params::UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C_OpenBuildingUIFromRadialMenu_Params Parms{};

	Parms.BuildObjectId = BuildObjectId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_GeneralDispatchEventReciever.WBP_PalHUD_InGame_GeneralDispatchEventReciever_C.SetDisablePlayerInputAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        Shooter                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        FlagName                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        CallFunc_GetPalPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C::SetDisablePlayerInputAction(bool Disable, class UPalShooterComponent* Shooter, class FName FlagName, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class APalPlayerController* CallFunc_GetPalPlayerController_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_2, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_GeneralDispatchEventReciever_C", "SetDisablePlayerInputAction");

	Params::UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C_SetDisablePlayerInputAction_Params Parms{};

	Parms.Disable = Disable;
	Parms.Shooter = Shooter;
	Parms.FlagName = FlagName;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetPalPlayerController_ReturnValue = CallFunc_GetPalPlayerController_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue_1 = CallFunc_GetPalmi_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue_2 = CallFunc_GetPalmi_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_GeneralDispatchEventReciever.WBP_PalHUD_InGame_GeneralDispatchEventReciever_C.CloseDismantlingUI
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PalHUD_InGame_InputListener_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C::CloseDismantlingUI(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PalHUD_InGame_InputListener_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_IsValid_Guid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_GeneralDispatchEventReciever_C", "CloseDismantlingUI");

	Params::UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C_CloseDismantlingUI_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_GeneralDispatchEventReciever.WBP_PalHUD_InGame_GeneralDispatchEventReciever_C.OpenDismantlingUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C::OpenDismantlingUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_GeneralDispatchEventReciever_C", "OpenDismantlingUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHUD_InGame_GeneralDispatchEventReciever.WBP_PalHUD_InGame_GeneralDispatchEventReciever_C.CloseBuildingUI
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PalHUD_InGame_InputListener_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C::CloseBuildingUI(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PalHUD_InGame_InputListener_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_GeneralDispatchEventReciever_C", "CloseBuildingUI");

	Params::UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C_CloseBuildingUI_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_GeneralDispatchEventReciever.WBP_PalHUD_InGame_GeneralDispatchEventReciever_C.OpenBuildingUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BuildObjectId                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C::OpenBuildingUI(class FName BuildObjectId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_GeneralDispatchEventReciever_C", "OpenBuildingUI");

	Params::UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C_OpenBuildingUI_Params Parms{};

	Parms.BuildObjectId = BuildObjectId;

	UObject::ProcessEvent(Func, &Parms);

}

}


