#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x490 - 0x428)
// WidgetBlueprintGeneratedClass WBP_PlayerInputKeyGuideIcon.WBP_PlayerInputKeyGuideIcon_C
class UWBP_PlayerInputKeyGuideIcon_C : public UPalUIActionWidgetForPlayerInput
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_32;                                          // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class ECommonInputType, class UTexture2D*> OverrideImage;                                     // 0x440(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UWBP_PlayerInputKeyGuideIcon_C* GetDefaultObj();

	void SetOverrideSize(const struct FVector2D& Size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void Construct();
	void Destruct();
	void UpdateImage(const struct FSlateBrush& NewBrush);
	void OnInitialized();
	void ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon(int32 EntryPoint, const struct FSlateBrush& K2Node_Event_newBrush, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


