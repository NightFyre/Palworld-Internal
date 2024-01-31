#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x1518 - 0x14F0)
// WidgetBlueprintGeneratedClass WBP_PalCommonButtonBase.WBP_PalCommonButtonBase_C
class UWBP_PalCommonButtonBase_C : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         HideFocusCursor;                                   // 0x14F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_161[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         HoverAKAudioEvent;                                 // 0x1500(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         UnhoverAKAudioEvent;                               // 0x1508(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         ClickAKAudioEvent;                                 // 0x1510(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalCommonButtonBase_C* GetDefaultObj();

	void PlayAkSound(class UAkAudioEvent* AudioEvent, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Destruct();
	void BP_OnClicked();
	void ExecuteUbergraph_WBP_PalCommonButtonBase(int32 EntryPoint, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1);
};

}


