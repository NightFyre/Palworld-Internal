#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x190 - 0x140)
// BlueprintGeneratedClass BP_AIAction_Death_SelfDestruct.BP_AIAction_Death_SelfDestruct_C
class UBP_AIAction_Death_SelfDestruct_C : public UBP_AIAction_Death_C
{
public:
	TMap<enum class EPalWazaID, class UClass*>   DeathActionMap;                                    // 0x140(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_AIAction_Death_SelfDestruct_C* GetDefaultObj();

	void GetDeathActionClass(class UClass** DeathAction, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


