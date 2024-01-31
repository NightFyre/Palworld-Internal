#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass ALI_MonsterBase.ALI_MonsterBase_C
class IALI_MonsterBase_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class IALI_MonsterBase_C* GetDefaultObj();

	void UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride);
	void LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation, struct FPoseLink* LookAtOverride);
	void AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride);
};

}


