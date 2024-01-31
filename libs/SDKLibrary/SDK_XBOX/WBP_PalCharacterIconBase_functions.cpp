#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C
// (None)

class UClass* UWBP_PalCharacterIconBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCharacterIconBase_C");

	return Clss;
}


// WBP_PalCharacterIconBase_C WBP_PalCharacterIconBase.Default__WBP_PalCharacterIconBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCharacterIconBase_C* UWBP_PalCharacterIconBase_C::GetDefaultObj()
{
	static class UWBP_PalCharacterIconBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCharacterIconBase_C*>(UWBP_PalCharacterIconBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCharacterIconBase_C::SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "SetEmpty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetCharacterIconTexture_ReturnValue                     (UObjectWrapper, HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::Setup(class FName CharacterID, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FName CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetCharacterIconTexture_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "Setup");

	Params::UWBP_PalCharacterIconBase_C_Setup_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName = CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCharacterIconTexture_ReturnValue = CallFunc_GetCharacterIconTexture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnLoaded_2131D8E64037785EDD84EFACA46D7EBC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::OnLoaded_2131D8E64037785EDD84EFACA46D7EBC(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "OnLoaded_2131D8E64037785EDD84EFACA46D7EBC");

	Params::UWBP_PalCharacterIconBase_C_OnLoaded_2131D8E64037785EDD84EFACA46D7EBC_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.LoadIconEvent_Internal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::LoadIconEvent_Internal(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "LoadIconEvent_Internal");

	Params::UWBP_PalCharacterIconBase_C_LoadIconEvent_Internal_Params Parms{};

	Parms.SoftTexture = SoftTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.ExecuteUbergraph_WBP_PalCharacterIconBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_CustomEvent_softTexture                                   (HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::ExecuteUbergraph_WBP_PalCharacterIconBase(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_softTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "ExecuteUbergraph_WBP_PalCharacterIconBase");

	Params::UWBP_PalCharacterIconBase_C_ExecuteUbergraph_WBP_PalCharacterIconBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_softTexture = K2Node_CustomEvent_softTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnSetEmpty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCharacterIconBase_C::OnSetEmpty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "OnSetEmpty__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnStartLoadTexture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCharacterIconBase_C::OnStartLoadTexture__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "OnStartLoadTexture__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C.OnLoadedTexture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LoadedTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterIconBase_C::OnLoadedTexture__DelegateSignature(class UTexture2D* LoadedTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCharacterIconBase_C", "OnLoadedTexture__DelegateSignature");

	Params::UWBP_PalCharacterIconBase_C_OnLoadedTexture__DelegateSignature_Params Parms{};

	Parms.LoadedTexture = LoadedTexture;

	UObject::ProcessEvent(Func, &Parms);

}

}


