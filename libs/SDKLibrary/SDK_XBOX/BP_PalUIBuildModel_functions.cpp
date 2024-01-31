#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalUIBuildModel.BP_PalUIBuildModel_C
// (None)

class UClass* UBP_PalUIBuildModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalUIBuildModel_C");

	return Clss;
}


// BP_PalUIBuildModel_C BP_PalUIBuildModel.Default__BP_PalUIBuildModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalUIBuildModel_C* UBP_PalUIBuildModel_C::GetDefaultObj()
{
	static class UBP_PalUIBuildModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalUIBuildModel_C*>(UBP_PalUIBuildModel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalUIBuildModel.BP_PalUIBuildModel_C.ChangeToBackTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalBuildObjectTypeA    NextTab                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalUIBuildModel_C::ChangeToBackTab(enum class EPalBuildObjectTypeA NextTab, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalUIBuildModel_C", "ChangeToBackTab");

	Params::UBP_PalUIBuildModel_C_ChangeToBackTab_Params Parms{};

	Parms.NextTab = NextTab;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalUIBuildModel.BP_PalUIBuildModel_C.ChangeToNextTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalBuildObjectTypeA    NextTab                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalUIBuildModel_C::ChangeToNextTab(enum class EPalBuildObjectTypeA NextTab, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalUIBuildModel_C", "ChangeToNextTab");

	Params::UBP_PalUIBuildModel_C_ChangeToNextTab_Params Parms{};

	Parms.NextTab = NextTab;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalUIBuildModel.BP_PalUIBuildModel_C.ChangeTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalBuildObjectTypeA    TypeA                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalUIBuildModel_C::ChangeTab(enum class EPalBuildObjectTypeA TypeA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalUIBuildModel_C", "ChangeTab");

	Params::UBP_PalUIBuildModel_C_ChangeTab_Params Parms{};

	Parms.TypeA = TypeA;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalUIBuildModel.BP_PalUIBuildModel_C.OnChangeTabType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalBuildObjectTypeA    TypeA                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalUIBuildModel_C::OnChangeTabType__DelegateSignature(enum class EPalBuildObjectTypeA TypeA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalUIBuildModel_C", "OnChangeTabType__DelegateSignature");

	Params::UBP_PalUIBuildModel_C_OnChangeTabType__DelegateSignature_Params Parms{};

	Parms.TypeA = TypeA;

	UObject::ProcessEvent(Func, &Parms);

}

}


