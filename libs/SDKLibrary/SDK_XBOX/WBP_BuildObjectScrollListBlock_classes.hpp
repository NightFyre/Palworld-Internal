#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3A (0x442 - 0x408)
// WidgetBlueprintGeneratedClass WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C
class UWBP_BuildObjectScrollListBlock_C : public UPalUserWidget
{
public:
	class UWBP_ConstructionListContent_C*        WBP_ConstructionListContent;                       // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedAnyContent;                               // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredAnyContent;                               // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhoveredAnyContent;                             // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EPalBuildObjectTypeB              TypeB;                                             // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalBuildObjectTypeA              TypeA;                                             // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_BuildObjectScrollListBlock_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Target, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalBuildObjectThumbnailButton_C* K2Node_DynamicCast_AsWBP_Pal_Build_Object_Thumbnail_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetBuildObjectTypeA(enum class EPalBuildObjectTypeA* NewParam);
	void FocusTopContent(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalBuildObjectThumbnailButton_C* K2Node_DynamicCast_AsWBP_Pal_Build_Object_Thumbnail_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetBuildObjectTypeB(enum class EPalBuildObjectTypeB* TypeB);
	void OnUnhovered_Internal(class UWBP_PalBuildObjectThumbnailButton_C* SelftWidget);
	void OnHovered_Internal(class UWBP_PalBuildObjectThumbnailButton_C* SelfWidget);
	void OnClicked_Internal(class UWBP_PalBuildObjectThumbnailButton_C* SelfWidget);
	void SetCategoryName(class FText CategoryNameText);
	void CreateBuildObjectIconWidget(const struct FPalBuildObjectData& BuildObjectData, class UWBP_PalBuildObjectThumbnailButton_C** CreatedWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalBuildObjectThumbnailButton_C* CallFunc_Create_ReturnValue);
	void AddBuildObjectList(TArray<struct FPalBuildObjectData>& buildObjectDataArray, enum class EPalBuildObjectTypeB TypeB, enum class EPalBuildObjectTypeA TypeA, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FPalBuildObjectData& CallFunc_Array_Get_Item, class UWBP_PalBuildObjectThumbnailButton_C* CallFunc_CreateBuildObjectIconWidget_createdWidget, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnUnhoveredAnyContent__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* Widget);
	void OnHoveredAnyContent__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* Widget);
	void OnClickedAnyContent__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* Widget);
};

}


