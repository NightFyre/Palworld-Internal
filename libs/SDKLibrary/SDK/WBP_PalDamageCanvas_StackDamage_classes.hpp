#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x498 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalDamageCanvas_StackDamage.WBP_PalDamageCanvas_StackDamage_C
class UWBP_PalDamageCanvas_StackDamage_C : public UPalDamageDisplayCanvas
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Damage;                                            // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4966[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Hit_Location;                                      // 0x428(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TSoftObjectPtr<class AActor>, class UPalUIDamageTextBase*> DisplayingDamageTextMap;                           // 0x440(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       DisplayTime;                                       // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalDamageCanvas_StackDamage_C* GetDefaultObj();

	void CalcTargetLocation(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, struct FVector* Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void CleanUpMap(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TSoftObjectPtr<class AActor>>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void UpdateDamageText(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, TSoftObjectPtr<class AActor> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FVector& CallFunc_CalcTargetLocation_location, class UPalUIDamageTextBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_CalcDamage_ReturnValue, class UWBP_PalDamageText_C* K2Node_DynamicCast_AsWBP_Pal_Damage_Text, bool K2Node_DynamicCast_bSuccess, enum class EPalDamageTextType CallFunc_CalcDamageTextType_textType);
	void IsExistDamageText(class AActor* Defender, bool* IsExist, TSoftObjectPtr<class AActor> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UPalUIDamageTextBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void AddNewDamageText(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class AActor> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FVector& CallFunc_CalcTargetLocation_location, int32 CallFunc_CalcDamage_ReturnValue, enum class EPalDamageTextType CallFunc_CalcDamageTextType_textType, class UPalUIDamageTextBase* CallFunc_CreateDamageWidget_createdWdiget, class UWBP_PalDamageText_C* K2Node_DynamicCast_AsWBP_Pal_Damage_Text, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_StartDisplay_inDisplayTime_ImplicitCast);
	void OnRequestedCloseWidget(class UPalUIDamageTextBase* SelfWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TSoftObjectPtr<class AActor>>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UPalUIDamageTextBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void CreateDamageWidget(class UPalUIDamageTextBase** CreatedWdiget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalDamageText_C* CallFunc_Create_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
	void CalcDamageTextType(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, enum class EPalDamageTextType* TextType, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetWeakCount_ForUI_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void OnSetup();
	void Destruct();
	void AddDamageTextEvent(struct FPalDamageInfo& DamageInfo, class AActor* Defender);
	void ExecuteUbergraph_WBP_PalDamageCanvas_StackDamage(int32 EntryPoint, class UPalDamagePopUpManager* CallFunc_GetDamagePopUpManager_ReturnValue, class UPalDamagePopUpManager* CallFunc_GetDamagePopUpManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalDamageInfo& K2Node_CustomEvent_DamageInfo, class AActor* K2Node_CustomEvent_defender, bool CallFunc_IsExistDamageText_isExist, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsExistDamageText_isExist_1);
};

}


