#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2E0 - 0x278)
// WidgetBlueprintGeneratedClass WBP_TitleSaveDataButton_OLD.WBP_TitleSaveDataButton_OLD_C
class UWBP_TitleSaveDataButton_OLD_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_C_304;                             // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_23;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                WBP_PalCommonButton;                               // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedSaveDataButton;                           // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                WorldSaveDirectoryName;                            // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FPalWorldBaseInfoSaveData             WorldBaseInfo;                                     // 0x2B8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_TitleSaveDataButton_OLD_C* GetDefaultObj();

	void Construct();
	void BndEvt__WBP_TitleFriendButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_TitleSaveDataButton_OLD(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const class FString& CallFunc_GetWorldName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void OnClickedSaveDataButton__DelegateSignature(const class FString& WorldSaveDirectoryName);
};

}


