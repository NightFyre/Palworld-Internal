#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C70 (0x2280 - 0x610)
// AnimBlueprintGeneratedClass ABP_MonsterBase.ABP_MonsterBase_C
class UABP_MonsterBase_C : public UPalAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x618(0x5A)(HasGetValueTypeHash)
	uint8                                        Pad_987[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x678(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x680(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x688(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x6A8(0xC8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x770(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x838(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x858(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x920(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x940(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xA08(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0xA28(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0xA50(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0xA78(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0xAA0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0xAC8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0xAF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0xB18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0xB40(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0xB68(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0xB90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0xBB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0xBE0(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0xC08(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0xCD0(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0xD40(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0xD60(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0xDD0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xE18(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0xE60(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0xE80(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0xEF0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xF38(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0xF80(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xFA0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xFE8(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x1008(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x1050(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x10C0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x1108(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x1150(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x11C0(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x1230(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x1278(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x12E8(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1358(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1378(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x1440(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x1488(0x48)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x14D0(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x1598(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x16A0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x16C8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x1710(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x1738(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x1840(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1868(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x18B0(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x18D8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x1920(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x1948(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1A10(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1B18(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x1B40(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1C08(0x28)(None)
	class UPalCharacterMovementComponent*        K2Node_PropertyAccess_17;                          // 0x1C30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_15;                          // 0x1C38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_989[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalCharacterMovementComponent*        K2Node_PropertyAccess_14;                          // 0x1C40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_12;                          // 0x1C48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_PropertyAccess_10;                          // 0x1C4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_PropertyAccess_9;                           // 0x1C50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_PropertyAccess_8;                           // 0x1C58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_7;                           // 0x1C70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_PropertyAccess_6;                           // 0x1C78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_PropertyAccess_4;                           // 0x1C90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_PropertyAccess_3;                           // 0x1CA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FWeaponAnimationInfo                  K2Node_PropertyAccess_2;                           // 0x1CC0(0x258)(None)
	bool                                         K2Node_PropertyAccess_1;                           // 0x1F18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess;                             // 0x1F19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              __CustomProperty_AimRotator_D409488B47D1A68373AC2E9D883DDF47; // 0x1F20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               __CustomProperty_LookAtWorldLocation_FBA1F7A649A7D6231954198C8C515A62; // 0x1F38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAiming;                                          // 0x1F50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShooting;                                        // 0x1F51(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponAnimationInfo                  WeaponAnimInfo;                                    // 0x1F58(0x258)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                             CameraVelocityXY;                                  // 0x21B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              AimRotator;                                        // 0x21C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsLookatEnable;                                    // 0x21D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAtTarget;                                      // 0x21E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LookatInTime;                                      // 0x21F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LookatOutTime;                                     // 0x2200(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsJumpPreliminary;                                 // 0x2208(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSkipJumpStart;                                   // 0x2209(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_992[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AngleSpeed;                                        // 0x2210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRiding;                                          // 0x2218(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFlying;                                          // 0x2219(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldBeUseShooterComponent;                       // 0x221A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldBeUseRiderComponent;                         // 0x221B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_994[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PrevMoveSpeed;                                     // 0x2220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        FootStepEffectClass;                               // 0x2228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  FootStepAttachPointName;                           // 0x2230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     FootStepEffect;                                    // 0x2238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         TSCached_OwnerPalCharacter;                        // 0x2240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                  TSCached_ShooterComponent;                         // 0x2248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalLookAtComponent*                   TSCached_LookAtComponent;                          // 0x2250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalRideMarkerComponent*               TSCached_RideMarker;                               // 0x2258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSpawnDashEffect;                                 // 0x2260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_997[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DashEffectSpeed;                                   // 0x2268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFloating;                                        // 0x2270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_998[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MovementScale;                                     // 0x2278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_MonsterBase_C* GetDefaultObj();

	void UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride);
	void LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation, struct FPoseLink* LookAtOverride);
	void AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void IsFloatingPal(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APalMonsterCharacter* K2Node_DynamicCast_AsPal_Monster_Character, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCollisionProfileName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void MakeSwitchStatePalSize(class APalMonsterCharacter* Pal, class FString* PalSize, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue);
	void PlayLandingSound(class AActor* Owner, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class APalMonsterCharacter* K2Node_DynamicCast_AsPal_Monster_Character, bool K2Node_DynamicCast_bSuccess, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, const class FString& CallFunc_MakeSwitchStatePalSize_PalSize);
	void UpdateDashEffect_AnyThread(double CallFunc_GetFootStepCharacterSpeed_CharacterSpeed, bool CallFunc_CanSpawnDashEffect_ReturnValue);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void GetFootStepEffectScale(double* Scale, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalSizeParameterDataRow& CallFunc_FindPalSizeParameter_RowData, bool CallFunc_FindPalSizeParameter_ReturnValue, double K2Node_FunctionResult_Scale_ImplicitCast);
	void GetFootStepCharacterSpeed(double* CharacterSpeed, class UPalCharacterMovementComponent* MovementComponent, bool CallFunc_IsValid_ThreadSafe_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void CanSpawnFootStepEffect(bool* CanSpawn, class APawn* Owner, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, enum class EPhysicalSurface CallFunc_GetFloorPhisicalSurface_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsEnteredWater_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasFloorPhysMaterial_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_4);
	void StopFootStepEffect(bool CallFunc_IsValid_ReturnValue);
	void StartFootStepEffect(double CallFunc_GetFootStepEffectScale_Scale, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
	void PostUpdateDashEffect(bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void PlaySound(class FName SoundId, const struct FVector& OffsetDown, const struct FVector& OffsetUp, const struct FPalSoundOptions& Options, class AActor* Owner, class FName Name_None, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, bool CallFunc_NotEqual_NameName_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetSprint(bool* IsSprint, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, bool CallFunc_IsSprint_ReturnValue);
	void UpdateRidingParameter(bool CallFunc_IsValid_ThreadSafe_ReturnValue);
	void UpdateBasicParameter(bool CallFunc_IsValid_ThreadSafe_ReturnValue, bool CallFunc_IsValid_ThreadSafe_ReturnValue_1);
	void Update_Look_at_Parameter(class UPalLookAtComponent* LookAtComponent, bool CallFunc_IsValid_ThreadSafe_ReturnValue, double K2Node_VariableSet_LookatInTime_ImplicitCast, double K2Node_VariableSet_LookatOutTime_ImplicitCast);
	void UpdateShooterParameter(const struct FRotator& CallFunc_NegateRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ThreadSafe_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_ECFECB414886E0974195E991463ACD99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_925DF20E402882570857548CCD9E3C68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_6FEC962E4C28F1AC8D56A49C89C4ADFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_C95153CD4007A62F8D752891550DF5D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_40ADA346423143A5CAA0D4B50B157F15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_ADBAEE7E4B8D4BFED7B43DBC07178B76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_128A52BB436E9B3A31FBB7A0A5CC15C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_672678E246E619FB275DE5AFE6DDA234();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_B62C4ED042628BD16274AFA4FDD16719();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_FE682B1C41C3E7BF960F52B352036D22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_E84338B149C6CA71A04CD2A2AFEE1A26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_FB442B974C195CB35B6129B622134627();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_EA0B5CD54E5A85E50831B98555463D29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_CE52F1054119833750D5A6BE24F3D0CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F0D464AD4B31CE2D2A7A7EA95C239B70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_EE0E56854535C9DCA7F729A194F159F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_A47488D6499D3064732F10A46F49E205();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_6D5D23194B5DCCF74E79899BDAC0B9BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_8E5298E14CFFC43AC4CB97899CB66188();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_56B64F4E4C9E82DE226407ACE61B8F62();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_94EBA2794624A1AE0E87B0B8F0C035CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_12D0A21548EC4F9A1B3A7F89B42E002E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F48506EF4272DE0D9403FC8091658CC2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F96787034784DF12FF90028A34BB8B39();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void BlueprintPostEvaluateAnimation();
	void AnimNotify_Landing();
	void ExecuteUbergraph_ABP_MonsterBase(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, enum class EPalGeneralAnimSequenceType Temp_byte_Variable, enum class EPalGeneralBlendSpaceType Temp_byte_Variable_1, class UAnimSequence* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UBlendSpace* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ThreadSafe_ReturnValue, enum class EPalGeneralBlendSpaceType Temp_byte_Variable_2, bool Temp_bool_Variable_1, class UBlendSpace* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool Temp_bool_Variable_2, class UBlendSpace* K2Node_Select_Default, enum class EPalGeneralAnimSequenceType Temp_byte_Variable_3, enum class EPalGeneralBlendSpaceType Temp_byte_Variable_4, class UAnimSequence* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, class UBlendSpace* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, bool CallFunc_IsValid_ThreadSafe_ReturnValue_1, enum class EPalGeneralBlendSpaceType Temp_byte_Variable_5, bool Temp_bool_Variable_3, class UBlendSpace* CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_3, class UBlendSpace* K2Node_Select_Default_1, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, enum class EPalGeneralAnimSequenceType Temp_byte_Variable_6, class UAnimSequence* CallFunc_Map_Find_Value_6, bool CallFunc_Map_Find_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, enum class EPalGeneralBlendSpaceType Temp_byte_Variable_7, class UBlendSpace* CallFunc_Map_Find_Value_7, bool CallFunc_Map_Find_ReturnValue_7, enum class EPalGeneralBlendSpaceType Temp_byte_Variable_8, enum class EPalGeneralBlendSpaceType Temp_byte_Variable_9, class UBlendSpace* CallFunc_Map_Find_Value_8, bool CallFunc_Map_Find_ReturnValue_8, class UBlendSpace* CallFunc_Map_Find_Value_9, bool CallFunc_Map_Find_ReturnValue_9, enum class EPalGeneralBlendSpaceType Temp_byte_Variable_10, enum class EPalGeneralBlendSpaceType Temp_byte_Variable_11, class UBlendSpace* CallFunc_Map_Find_Value_10, bool CallFunc_Map_Find_ReturnValue_10, class UBlendSpace* CallFunc_Map_Find_Value_11, bool CallFunc_Map_Find_ReturnValue_11, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_4, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_5, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_6, class UPalLookAtComponent* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_7, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_17_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_15_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_10_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_12_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1);
};

}


