#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2A8 - 0x290)
// BlueprintGeneratedClass BP_DummyNavigationInvoker.BP_DummyNavigationInvoker_C
class ABP_DummyNavigationInvoker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalNavigationInvokerComponent*        PalNavigationInvoker;                              // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DummyNavigationInvoker_C* GetDefaultObj();

	void ExecuteUbergraph_BP_DummyNavigationInvoker(int32 EntryPoint);
};

}


