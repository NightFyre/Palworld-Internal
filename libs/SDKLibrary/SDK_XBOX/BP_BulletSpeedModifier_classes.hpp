#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass BP_BulletSpeedModifier.BP_BulletSpeedModifier_C
class UBP_BulletSpeedModifier_C : public UPalBulletModifierComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_BulletSpeedModifier_C* GetDefaultObj();

	void Initialize(class APalBullet* Bullet);
	void ExecuteUbergraph_BP_BulletSpeedModifier(int32 EntryPoint, class APalBullet* K2Node_Event_bullet, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Multiply_VectorFloat_B_ImplicitCast);
};

}


