#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass BP_PalUIBuildModel.BP_PalUIBuildModel_C
class UBP_PalUIBuildModel_C : public UPalUIBuildModel
{
public:
	enum class EPalBuildObjectTypeA              CurrentTabType;                                    // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_558D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChangeTabType;                                   // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_PalUIBuildModel_C* GetDefaultObj();

	void ChangeToBackTab(enum class EPalBuildObjectTypeA NextTab, bool K2Node_SwitchEnum_CmpSuccess);
	void ChangeToNextTab(enum class EPalBuildObjectTypeA NextTab, bool K2Node_SwitchEnum_CmpSuccess);
	void ChangeTab(enum class EPalBuildObjectTypeA TypeA);
	void OnChangeTabType__DelegateSignature(enum class EPalBuildObjectTypeA TypeA);
};

}


