#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x69 - 0x38)
// BlueprintGeneratedClass BP_CharaCreNameEditWindowDispatchParameter.BP_CharaCreNameEditWindowDispatchParameter_C
class UBP_CharaCreNameEditWindowDispatchParameter_C : public UPalHUDDispatchParameterBase
{
public:
	class FText                                  InName;                                            // 0x38(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  OutName;                                           // 0x50(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ForPlayer;                                         // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CharaCreNameEditWindowDispatchParameter_C* GetDefaultObj();

};

}


