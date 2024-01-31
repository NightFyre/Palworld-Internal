#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalItemIconBase.WBP_PalItemIconBase_C
// (None)

class UClass* UWBP_PalItemIconBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalItemIconBase_C");

	return Clss;
}


// WBP_PalItemIconBase_C WBP_PalItemIconBase.Default__WBP_PalItemIconBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalItemIconBase_C* UWBP_PalItemIconBase_C::GetDefaultObj()
{
	static class UWBP_PalItemIconBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalItemIconBase_C*>(UWBP_PalItemIconBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalItemIconBase.WBP_PalItemIconBase_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemIconBase_C::SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemIconBase_C", "SetEmpty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemIconBase.WBP_PalItemIconBase_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StaticItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemIconBase_C::Setup(class FName StaticItemId, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemIconBase_C", "Setup");

	Params::UWBP_PalItemIconBase_C_Setup_Params Parms{};

	Parms.StaticItemId = StaticItemId;
	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemIconBase.WBP_PalItemIconBase_C.OnLoaded_4877576D403287D740E132872987B748
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemIconBase_C::OnLoaded_4877576D403287D740E132872987B748(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemIconBase_C", "OnLoaded_4877576D403287D740E132872987B748");

	Params::UWBP_PalItemIconBase_C_OnLoaded_4877576D403287D740E132872987B748_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemIconBase.WBP_PalItemIconBase_C.LoadIconEvent_Internal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_PalItemIconBase_C::LoadIconEvent_Internal(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemIconBase_C", "LoadIconEvent_Internal");

	Params::UWBP_PalItemIconBase_C_LoadIconEvent_Internal_Params Parms{};

	Parms.SoftTexture = SoftTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemIconBase.WBP_PalItemIconBase_C.ExecuteUbergraph_WBP_PalItemIconBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_CustomEvent_softTexture                                   (HasGetValueTypeHash)

void UWBP_PalItemIconBase_C::ExecuteUbergraph_WBP_PalItemIconBase(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_softTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemIconBase_C", "ExecuteUbergraph_WBP_PalItemIconBase");

	Params::UWBP_PalItemIconBase_C_ExecuteUbergraph_WBP_PalItemIconBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_softTexture = K2Node_CustomEvent_softTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalItemIconBase.WBP_PalItemIconBase_C.OnSetEmpty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemIconBase_C::OnSetEmpty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemIconBase_C", "OnSetEmpty__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemIconBase.WBP_PalItemIconBase_C.OnStartLoadTexture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalItemIconBase_C::OnStartLoadTexture__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemIconBase_C", "OnStartLoadTexture__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalItemIconBase.WBP_PalItemIconBase_C.OnLoadedTexture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LoadedTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemIconBase_C::OnLoadedTexture__DelegateSignature(class UTexture2D* LoadedTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalItemIconBase_C", "OnLoadedTexture__DelegateSignature");

	Params::UWBP_PalItemIconBase_C_OnLoadedTexture__DelegateSignature_Params Parms{};

	Parms.LoadedTexture = LoadedTexture;

	UObject::ProcessEvent(Func, &Parms);

}

}


