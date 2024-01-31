#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// WidgetBlueprintGeneratedClass WBP_PalGenderIcon.WBP_PalGenderIcon_C
class UWBP_PalGenderIcon_C : public UUserWidget
{
public:
	class UImage*                                Image_Gender;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalGenderIcon_C* GetDefaultObj();

	void Setup(enum class EPalGenderType GenderType, bool K2Node_SwitchEnum_CmpSuccess);
};

}


