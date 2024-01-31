#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x318 - 0x308)
// BlueprintGeneratedClass BP_GliderObjectBase.BP_GliderObjectBase_C
class ABP_GliderObjectBase_C : public APalGliderObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GliderObjectBase_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnStartGliding();
	void OnEndGliding();
	void ExecuteUbergraph_BP_GliderObjectBase(int32 EntryPoint, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalGliderComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


