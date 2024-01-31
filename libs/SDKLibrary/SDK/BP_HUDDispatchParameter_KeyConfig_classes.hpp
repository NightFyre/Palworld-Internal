#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE1 (0x119 - 0x38)
// BlueprintGeneratedClass BP_HUDDispatchParameter_KeyConfig.BP_HUDDispatchParameter_KeyConfig_C
class UBP_HUDDispatchParameter_KeyConfig_C : public UPalHUDDispatchParameterBase
{
public:
	class FName                                  ActionName;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ECommonInputType                  InputType;                                         // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_43DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnKeyChanged;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPalKeyConfigSettings                 KeyConfigSetting;                                  // 0x58(0xC0)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EPalKeyConfigAxisFilterType       AxisType;                                          // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_HUDDispatchParameter_KeyConfig_C* GetDefaultObj();

	void OnKeyChanged__DelegateSignature(class FName ActionName, const struct FKey& NewKey, enum class EPalKeyConfigCategory InputType, enum class EPalKeyConfigAxisFilterType AxisType);
};

}


