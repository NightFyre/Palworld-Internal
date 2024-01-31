#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x480 - 0x451)
// WidgetBlueprintGeneratedClass WBP_WorldMap_IconBase_OnlyIcon.WBP_WorldMap_IconBase_OnlyIcon_C
class UWBP_WorldMap_IconBase_OnlyIcon_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
public:
	uint8                                        Pad_C7B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Focus;                                             // 0x460(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_130;                                         // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton;                            // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            IconTexture;                                       // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_WorldMap_IconBase_OnlyIcon_C* GetDefaultObj();

	void Setup_Internal(class UPalLocationPoint* LocationPoint);
	void ChangeTexture(class UTexture2D* NewTexture);
	void BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_WorldMap_IconBase_OnlyIcon(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}


