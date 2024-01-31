#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x468 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalDebugInfo.WBP_PalDebugInfo_C
class UWBP_PalDebugInfo_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            RevisionText;                                      // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FString>           BuildConfigDisplayTextMap;                         // 0x418(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_PalDebugInfo_C* GetDefaultObj();

	void Construct();
	void OnSetup();
	void ExecuteUbergraph_WBP_PalDebugInfo(int32 EntryPoint, const class FString& CallFunc_GetDisplayVersion_ReturnValue, const class FString& CallFunc_GetBuildConfiguration_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


