#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x451 - 0x408)
// WidgetBlueprintGeneratedClass WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C
class UWBP_WorldMap_IconBase_NoDesign_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGuid                                 LocationId;                                        // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCallInternalClickEvent;                          // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_WorldMap_IconBase_NoDesign_C* GetDefaultObj();

	void SetEnable(bool Enable);
	void OnClicked_Internal();
	void ClickEvent();
	void Setup(class UPalLocationPoint* LocationPoint, const struct FGuid& LocationId, bool CallFunc_IsValid_ReturnValue);
	void GetLocationPosition(struct FVector* LocationPosition, class UPalLocationPoint* CallFunc_GetLocationPoint_LocationPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLocation_ReturnValue);
	void GetLocationPoint(class UPalLocationPoint** LocationPoint, class UPalLocationManager* CallFunc_GetLocationManager_ReturnValue, class UPalLocationPoint* CallFunc_GetLocationPoint_ReturnValue);
	void Setup_Internal(class UPalLocationPoint* LocationPoint);
	void GetText(class FText* Text);
	void Destruct();
	void ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign(int32 EntryPoint);
	void OnClicked__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
	void OnUnhovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
	void OnHovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
};

}


