#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x298 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Title_WorldMenu_Head.WBP_Title_WorldMenu_Head_C
class UWBP_Title_WorldMenu_Head_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                    Text_Title;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   MsgId;                                             // 0x288(0x10)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_Title_WorldMenu_Head_C* GetDefaultObj();

	void OnInitialized();
	void ExecuteUbergraph_WBP_Title_WorldMenu_Head(int32 EntryPoint, class FText CallFunc_GetLocalizedTextFromHandle_Text);
};

}


