#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1820 (0x1B68 - 0x348)
// AnimBlueprintGeneratedClass ABP_F_OldCloth001_Implimentation.ABP_F_OldCloth001_Implimentation_C
class UABP_F_OldCloth001_Implimentation_C : public UAnimInstance
{
public:
	uint8                                        Pad_5750[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	uint8                                        Pad_5751[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_2;                     // 0x370(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_1;                     // 0xB00(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics;                       // 0x1290(0x790)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1A20(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1A40(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1A60(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1A80(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1B48(0x20)(None)

	static class UClass* StaticClass();
	static class UABP_F_OldCloth001_Implimentation_C* GetDefaultObj();

	void ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* ClothLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_A8F9A51E4CAB94A2E9F5F58E6AE9E9C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_DB22254C408B73DD7E9BC4A62D018730();
	void ExecuteUbergraph_ABP_F_OldCloth001_Implimentation(int32 EntryPoint, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings);
};

}


