#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3F8 - 0x3E0)
// BlueprintGeneratedClass BP_FoliageModelChunk.BP_FoliageModelChunk_C
class ABP_FoliageModelChunk_C : public APalFoliageModelChunk
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FoliageModelChunk_C* GetDefaultObj();

	void OnReceivedChunkGridSize(int32 NewChunkGridSize);
	void ExecuteUbergraph_BP_FoliageModelChunk(int32 EntryPoint, int32 K2Node_Event_NewChunkGridSize, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


