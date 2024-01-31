#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Technology_Point.WBP_MainMenu_Technology_Point_C
// (None)

class UClass* UWBP_MainMenu_Technology_Point_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Technology_Point_C");

	return Clss;
}


// WBP_MainMenu_Technology_Point_C WBP_MainMenu_Technology_Point.Default__WBP_MainMenu_Technology_Point_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Technology_Point_C* UWBP_MainMenu_Technology_Point_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Technology_Point_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Technology_Point_C*>(UWBP_MainMenu_Technology_Point_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Technology_Point.WBP_MainMenu_Technology_Point_C.OnUpdateTechnologyPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TechnologyPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_MainMenu_Technology_Point_C::OnUpdateTechnologyPoint(int32 TechnologyPoint, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Point_C", "OnUpdateTechnologyPoint");

	Params::UWBP_MainMenu_Technology_Point_C_OnUpdateTechnologyPoint_Params Parms{};

	Parms.TechnologyPoint = TechnologyPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Technology_Point.WBP_MainMenu_Technology_Point_C.AnmEvent_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Technology_Point_C::AnmEvent_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Point_C", "AnmEvent_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Technology_Point.WBP_MainMenu_Technology_Point_C.AnmEvent_DIsable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Technology_Point_C::AnmEvent_DIsable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Point_C", "AnmEvent_DIsable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Technology_Point.WBP_MainMenu_Technology_Point_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Technology_Point_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Point_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Technology_Point.WBP_MainMenu_Technology_Point_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Technology_Point_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Point_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Technology_Point.WBP_MainMenu_Technology_Point_C.ExecuteUbergraph_WBP_MainMenu_Technology_Point
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalTechnologyData*          CallFunc_GetLocalTechnologyData_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBossTechnologyPoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTechnologyPoints_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalTechnologyData*          CallFunc_GetLocalTechnologyData_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Select_Default_1                                          (NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_MainMenu_Technology_Point_C::ExecuteUbergraph_WBP_MainMenu_Technology_Point(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetBossTechnologyPoints_ReturnValue, int32 CallFunc_GetTechnologyPoints_ReturnValue, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, const struct FDataTableRowHandle& K2Node_Select_Default_1, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Technology_Point_C", "ExecuteUbergraph_WBP_MainMenu_Technology_Point");

	Params::UWBP_MainMenu_Technology_Point_C_ExecuteUbergraph_WBP_MainMenu_Technology_Point_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_GetLocalTechnologyData_ReturnValue = CallFunc_GetLocalTechnologyData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBossTechnologyPoints_ReturnValue = CallFunc_GetBossTechnologyPoints_ReturnValue;
	Parms.CallFunc_GetTechnologyPoints_ReturnValue = CallFunc_GetTechnologyPoints_ReturnValue;
	Parms.CallFunc_GetLocalTechnologyData_ReturnValue_1 = CallFunc_GetLocalTechnologyData_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


