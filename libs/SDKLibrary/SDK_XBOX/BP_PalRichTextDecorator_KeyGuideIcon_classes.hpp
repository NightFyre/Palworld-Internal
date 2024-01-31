#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xC8 - 0x28)
// BlueprintGeneratedClass BP_PalRichTextDecorator_KeyGuideIcon.BP_PalRichTextDecorator_KeyGuideIcon_C
class UBP_PalRichTextDecorator_KeyGuideIcon_C : public UPaRichTextDecorator_KeyGuideIcon
{
public:
	TMap<class FName, class UWidget*>            CreatedUIInputKeyGuideWidgets;                     // 0x28(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FName, class UWidget*>            CreatedPlayerInputKeyGuideWidgets;                 // 0x78(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBP_PalRichTextDecorator_KeyGuideIcon_C* GetDefaultObj();

	class UWidget* CreateWidget(class FName KeyGuideActionName, float IconScale, int32 OverrideType, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FCommonInputActionDataBase& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWidget* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UWBP_PlayerInputKeyGuideIcon_C* K2Node_DynamicCast_AsWBP_Player_Input_Key_Guide_Icon, bool K2Node_DynamicCast_bSuccess, class UPalGameInstance* CallFunc_GetPalGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PlayerInputKeyGuideIcon_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class UWBP_PalKeyGuideIcon_C* CallFunc_Create_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast);
};

}


