#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// BlueprintGeneratedClass BP_BuildingUIParameter.BP_BuildingUIParameter_C
class UBP_BuildingUIParameter_C : public UPalHUDDispatchParameterBase
{
public:
	class FName                                  BuildObjectId;                                     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bFromRadialMenu;                                   // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_79F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedIndex;                                     // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_BuildingUIParameter_C* GetDefaultObj();

};

}


