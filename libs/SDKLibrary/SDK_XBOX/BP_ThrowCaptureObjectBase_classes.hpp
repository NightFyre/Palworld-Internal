#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x3AC - 0x398)
// BlueprintGeneratedClass BP_ThrowCaptureObjectBase.BP_ThrowCaptureObjectBase_C
class ABP_ThrowCaptureObjectBase_C : public ABP_ThrowObjectBase_C
{
public:
	FMulticastInlineDelegateProperty_            OnCaptureStarted;                                  // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CaptureLevel;                                      // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ThrowCaptureObjectBase_C* GetDefaultObj();

	void GetBodyClass(class UClass** bodyClass);
	void GetCaptureLevel(int32* Level);
	void SetCaptureLevel(int32 Level);
	void OnCaptureStarted__DelegateSignature(class AActor* CreatedBodyActor, class UPalIndividualCharacterHandle* TagretHandle, bool IsBonus);
};

}


