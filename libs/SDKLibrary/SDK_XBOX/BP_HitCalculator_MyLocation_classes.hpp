#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_HitCalculator_MyLocation.BP_HitCalculator_MyLocation_C
class UBP_HitCalculator_MyLocation_C : public UPalHitLocationCalculator
{
public:

	static class UClass* StaticClass();
	static class UBP_HitCalculator_MyLocation_C* GetDefaultObj();

	struct FVector CalcLocation(class UPrimitiveComponent* MyHitComponent, class UPrimitiveComponent* OtherHitComponent, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


