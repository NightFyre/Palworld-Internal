#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x440 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C
class UWBP_PalCharacterIconBase_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnLoadedTexture;                                   // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnStartLoadTexture;                                // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSetEmpty;                                        // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_PalCharacterIconBase_C* GetDefaultObj();

	void SetEmpty();
	void Setup(class FName CharacterID, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FName CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetCharacterIconTexture_ReturnValue);
	void OnLoaded_2131D8E64037785EDD84EFACA46D7EBC(class UObject* Loaded);
	void LoadIconEvent_Internal(TSoftObjectPtr<class UTexture2D> SoftTexture);
	void ExecuteUbergraph_WBP_PalCharacterIconBase(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_softTexture);
	void OnSetEmpty__DelegateSignature();
	void OnStartLoadTexture__DelegateSignature();
	void OnLoadedTexture__DelegateSignature(class UTexture2D* LoadedTexture);
};

}


