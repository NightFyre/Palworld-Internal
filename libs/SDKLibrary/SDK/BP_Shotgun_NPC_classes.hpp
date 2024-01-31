#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x57C - 0x570)
// BlueprintGeneratedClass BP_Shotgun_NPC.BP_Shotgun_NPC_C
class ABP_Shotgun_NPC_C : public ABP_PumpActionShotgun_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        ReloadCount;                                       // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Shotgun_NPC_C* GetDefaultObj();

	int32 GetNPCWeaponDamage();
	int32 GetWeaponDamage(int32 CallFunc_CalcNPCWeaponDamage_ReturnValue);
	void OnWeaponNotify(enum class EWeaponNotifyType Type);
	void ExecuteUbergraph_BP_Shotgun_NPC(int32 EntryPoint, int32 Temp_int_Variable, enum class EWeaponNotifyType K2Node_Event_type, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


