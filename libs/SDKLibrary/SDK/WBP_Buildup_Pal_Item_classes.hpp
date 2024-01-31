#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x290 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Buildup_Pal_Item.WBP_Buildup_Pal_Item_C
class UWBP_Buildup_Pal_Item_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                IconHaveItem;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_HaveNum;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Buildup_Pal_Item_C* GetDefaultObj();

	void SetIcon(int32 IconIndex);
	void SetNum(int32 Num);
	void ExecuteUbergraph_WBP_Buildup_Pal_Item(int32 EntryPoint, int32 Temp_int_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, int32 K2Node_CustomEvent_IconIndex, int32 K2Node_CustomEvent_Num, class FText CallFunc_Conv_IntToText_ReturnValue, class UTexture2D* K2Node_Select_Default);
};

}


