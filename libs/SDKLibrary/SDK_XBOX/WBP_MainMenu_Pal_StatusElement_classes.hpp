#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2D8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_StatusElement.WBP_MainMenu_Pal_StatusElement_C
class UWBP_MainMenu_Pal_StatusElement_C : public UUserWidget
{
public:
	class UImage*                                Image_Element;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_ElementTypeName;                              // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class EPalElementType, TSoftObjectPtr<class UTexture2D>> TextureMap;                                        // 0x288(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_Pal_StatusElement_C* GetDefaultObj();

	void Setup(enum class EPalElementType ElementType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetPalElementTypeName_outName, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


