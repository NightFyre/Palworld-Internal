#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x478 - 0x451)
// WidgetBlueprintGeneratedClass WBP_Map_IconDungeon.WBP_Map_IconDungeon_C
class UWBP_Map_IconDungeon_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
public:
	uint8                                        Pad_2513[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Icon;                                              // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                WBP_PalCommonButton;                               // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuid                                 BaseCampId;                                        // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Map_IconDungeon_C* GetDefaultObj();

};

}


