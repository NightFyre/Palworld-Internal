#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x428 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalLiftItem.WBP_PalLiftItem_C
class UWBP_PalLiftItem_C : public UPalUserWidget
{
public:
	class UWidgetAnimation*                      FailedOpShake;                                     // 0x408(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*         WBP_PalCommonCharacterSlot;                        // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_PalInGameMenuItemSlotButton;                   // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalUILiftSlotModel*                   Model;                                             // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalLiftItem_C* GetDefaultObj();

	void ShowSetup();
	void OnUpdateHandleSlot(class UPalIndividualCharacterSlot* TargetHandleSlot);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& K2Node_MakeStruct_EventReply, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const class FString& CallFunc_Conv_Vector2dToString_ReturnValue);
	void OnFailedItemOperation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnUpdateCount(int32 Count, class FText CallFunc_Conv_IntToText_ReturnValue);
	void On_Update_Icon_Texture_Path(TSoftObjectPtr<class UTexture2D> IconTexture, bool CallFunc_IsValid_ReturnValue);
	void Dispose(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue);
	void Setup(class UPalUILiftSlotModel* Model, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


