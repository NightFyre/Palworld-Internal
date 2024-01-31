#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x4C8 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C
class UWBP_PalCapturingLoupeCanvas_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_Down;                                // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Up;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          TmpCanvas;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Left;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Right;                                 // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       DisplayBorderX;                                    // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DisplayBorderY;                                    // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_CapturePrism_C>     LastEquipedCaptureWeapon;                          // 0x448(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class UPalIndividualCharacterHandle*, class UWBP_CapturingPalLoupe_C*> WidgetMap;                                         // 0x478(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_PalCapturingLoupeCanvas_C* GetDefaultObj();

	void CheckWidgetEnded(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UPalIndividualCharacterHandle*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UWBP_CapturingPalLoupe_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CreateLoupeWidget(class UPalIndividualCharacterHandle* TargetHandle, class ABP_PalCaptureBodyBase_C* TargetCaptureBody, class UWBP_CapturingPalLoupe_C** CreatedWidget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CapturingPalLoupe_C* CallFunc_Create_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
	void OnStartedCapture(class AActor* CreatedBodyActor, class UPalIndividualCharacterHandle* TargetHandle, bool IsBonus, class ABP_PalCaptureBodyBase_C* K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base, bool K2Node_DynamicCast_bSuccess, class UWBP_CapturingPalLoupe_C* CallFunc_CreateLoupeWidget_createdWidget);
	void OnThrowCaptureWeapon(class AActor* Bullet, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_ThrowCaptureObjectBase_C* K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base, bool K2Node_DynamicCast_bSuccess);
	void RegisterWeaponEvent(class ABP_CapturePrism_C* CaptureWeapon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void UnregisterWeaponEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_CapturePrism_C* K2Node_DynamicCast_AsBP_Capture_Prism, bool K2Node_DynamicCast_bSuccess);
	void OnChangedWeaponEvent(class APalWeaponBase* Weapon, bool CallFunc_IsValid_ReturnValue, class ABP_CapturePrism_C* K2Node_DynamicCast_AsBP_Capture_Prism, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class ABP_CapturePrism_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnSetup_AfterCreatedPlayer();
	void ExecuteUbergraph_WBP_PalCapturingLoupeCanvas(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


