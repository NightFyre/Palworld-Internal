#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x298 - 0x280)
// BlueprintGeneratedClass BP_ShooterAnime_ThrowBase.BP_ShooterAnime_ThrowBase_C
class UBP_ShooterAnime_ThrowBase_C : public UPalShooterAnimeAssetBase
{
public:
	class UAnimMontage*                          Ride_Fire_Front;                                   // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Ride_Fire_Right;                                   // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Ride_Fire_Left;                                    // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ShooterAnime_ThrowBase_C* GetDefaultObj();

	void ChangeRidePullTriggerAnime(enum class EPalStepAxisType Direction, bool K2Node_SwitchEnum_CmpSuccess);
};

}


