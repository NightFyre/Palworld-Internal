#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x388 - 0x278)
// WidgetBlueprintGeneratedClass WBP_IngameConstruction.WBP_IngameConstruction_C
class UWBP_IngameConstruction_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Caution;                                       // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_C_39;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_C_100;                             // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Warning;                               // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingameconstruction_KeyGuide_C*    WBP_Ingameconstruction_KeyGuide;                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingameconstruction_KeyGuide_C*    WBP_Ingameconstruction_KeyGuide_1;                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingameconstruction_KeyGuide_C*    WBP_Ingameconstruction_KeyGuide_2;                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingameconstruction_KeyGuide_C*    WBP_Ingameconstruction_KeyGuide_3;                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingameconstruction_KeyGuide_C*    WBP_Ingameconstruction_KeyGuide_4;                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameConstruction_Num_C*         WBP_IngameConstruction_Num_0;                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameConstruction_Num_C*         WBP_IngameConstruction_Num_1;                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameConstruction_Num_C*         WBP_IngameConstruction_Num_2;                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameConstruction_Num_C*         WBP_IngameConstruction_Num_3;                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*              WBP_PalCommonItemIcon;                             // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*              WBP_PalCommonItemIcon_1;                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*              WBP_PalCommonItemIcon_2;                           // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*              WBP_PalCommonItemIcon_3;                           // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_IngameConstruction_Num_C*> ItemNums;                                          // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FDataTableRowHandle                   KeyGuideMsgHandle_Reserve;                         // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   KeyGuideMsgHandle_ReserveContinue;                 // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   KeyGuideMsgHandle_Cancel;                          // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   KeyGuideMsgHandle_Close;                           // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UWBP_PalCommonItemIcon_C*>      ItemIconArray;                                     // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FDataTableRowHandle                   KeyGuideMsgHandle_RotateRight;                     // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   KeyGuideMsgHandle_RotateLeft;                      // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_IngameConstruction_C* GetDefaultObj();

	void SetupKeyGuide(class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FText CallFunc_GetLocalizedText_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Conv_StringToName_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue_3, TArray<class FName>& K2Node_MakeArray_Array_1, TArray<class FName>& K2Node_MakeArray_Array_2, class FName CallFunc_Conv_StringToName_ReturnValue_4, class FName CallFunc_Conv_StringToName_ReturnValue_5, TArray<class FName>& K2Node_MakeArray_Array_3, TArray<class FName>& K2Node_MakeArray_Array_4, class FText CallFunc_GetLocalizedText_ReturnValue_1, class FText CallFunc_GetLocalizedText_ReturnValue_2, class FText CallFunc_GetLocalizedText_ReturnValue_3, class FText CallFunc_GetLocalizedText_ReturnValue_4, TArray<class UWBP_IngameConstruction_Num_C*>& K2Node_MakeArray_Array_5);
	void SetEnableWarning(bool IsEnable);
	void SetMaterial(int32 Index, class FName StaticItemId, int32 ItemCount, class UWBP_PalCommonItemIcon_C* TargetIcon, class UWBP_IngameConstruction_Num_C* TargetNum, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item, class UWBP_PalCommonItemIcon_C* CallFunc_Array_Get_Item_1, class UWBP_IngameConstruction_Num_C* CallFunc_Array_Get_Item_2, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Setup(const struct FPalBuildObjectData& InBuildObjectData, class FText CallFunc_GetMapObjectName_outName);
	void SetWarningText(class FText InText, bool CallFunc_TextIsEmpty_ReturnValue);
	void ResetAllUI();
	void SetBuildObjectName(class FText InName);
	void Construct();
	void OnInitialized();
	void ExecuteUbergraph_WBP_IngameConstruction(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class UWBP_PalCommonItemIcon_C*>& K2Node_MakeArray_Array);
};

}


