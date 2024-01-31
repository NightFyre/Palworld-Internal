#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5F1 (0x939 - 0x348)
// AnimBlueprintGeneratedClass ABP_Player_Hair.ABP_Player_Hair_C
class UABP_Player_Hair_C : public UAnimInstance
{
public:
	uint8                                        Pad_39F3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x2)(HasGetValueTypeHash)
	uint8                                        Pad_39F4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x370(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x390(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x458(0x20)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_1;                  // 0x478(0x1D8)(ContainsInstancedReference)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x650(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x718(0x48)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x760(0x1D8)(ContainsInstancedReference)
	bool                                         IsDedicatedServer;                                 // 0x938(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Player_Hair_C* GetDefaultObj();

	void HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ABP_Player_Hair(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}


