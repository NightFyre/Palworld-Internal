#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6B68 (0x6EB0 - 0x348)
// AnimBlueprintGeneratedClass ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C
class UABP_Player_Hair001_Implementation_C : public UAnimInstance
{
public:
	uint8                                        Pad_4CDF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x368(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x388(0xC8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x450(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x470(0x20)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_13;                    // 0x490(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_12;                    // 0xC20(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_11;                    // 0x13B0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_10;                    // 0x1B40(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_9;                     // 0x22D0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_8;                     // 0x2A60(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_7;                     // 0x31F0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_6;                     // 0x3980(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_5;                     // 0x4110(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_4;                     // 0x48A0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_3;                     // 0x5030(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_2;                     // 0x57C0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_1;                     // 0x5F50(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics;                       // 0x66E0(0x790)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x6E70(0x20)(None)
	struct FKawaiiPhysicsSettings                PhysicsSettings;                                   // 0x6E90(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	double                                       Alpha;                                             // 0x6EA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Player_Hair001_Implementation_C* GetDefaultObj();

	void HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_815AC33B4E182803179C95A88BD10CE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_CF68BD814004A9BE933855AAF278E492();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_45CE30654A7FB37D97E2E4A5510467E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_CCBF9F7B4F40FCEF790AA69A253ED00C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_869DD29A413AF4EDA005FE98B0E48048();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_77CD87CA487FEE98D17775ADDFECDA34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_9722388A446D396F3E44C2953C8CF4BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_D2C627AB41C7F7242090DEB9F5971E6A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_1AA876F346A93B52CF7D11A83BC812CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_5D45771D4196D87E7E3035959F88C0B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_DDAA787A43E397585134FC973C278B17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_3038E75C46270EDCF356C9AE6CDD7DEF();
	void ExecuteUbergraph_ABP_Player_Hair001_Implementation(int32 EntryPoint, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings_1, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings_2);
};

}


