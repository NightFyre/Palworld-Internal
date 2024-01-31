#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xAB0 - 0xA00)
// BlueprintGeneratedClass BP_Player_Female.BP_Player_Female_C
class ABP_Player_Female_C : public ABP_PlayerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalSkeletalMeshComponent*             HairAttachAccessory;                               // 0xA08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*         PalBodyPartsCapsule;                               // 0xA10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*          PalBodyPartsSphere;                                // 0xA18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyTemperatureComponent*          PalBodyTemperature;                                // 0xA20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GliderComponent_C*                 BP_GliderComponent;                                // 0xA28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative* BP_InteractableSphere;                             // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*             HairMesh;                                          // 0xA38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*             HeadMesh;                                          // 0xA40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalClimbingComponent_C*            BP_PalClimbingComponent;                           // 0xA48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                   PalFacial;                                         // 0xA50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FluidImplementation_C*             BP_FluidImplementation;                            // 0xA58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerSoundEmitterComponent_C*     BP_PlayerSoundEmitterComponent;                    // 0xA60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     SlidingParticle;                                   // 0xA68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         UsePhysicalBone;                                   // 0xA70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        SlidingSmokeNiagara;                               // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        JumpNiagara;                                       // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  SoundID_Sliding;                                   // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Lamp_C*                            Lamp;                                              // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        SlidingSmokeNiagara_Snow;                          // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        JumpNiagara_Snow;                                  // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_PalLocalPlayerSystemSound_C*       LocalPlayerSound;                                  // 0xAA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Player_Female_C* GetDefaultObj();

	void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>* OutComponent, const TArray<class USceneComponent*>& Components, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
	class USkeletalMeshComponent* GetOverrideFaceMesh();
	void OnUpdateSliding(class UPalCharacterMovementComponent* K2Node_DynamicCast_AsPal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSliding_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPalAnimInstance* K2Node_DynamicCast_AsPal_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetMaxSpeed_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetRTPCValueByActor_value_ImplicitCast);
	void OnSlidingEnd(const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, bool CallFunc_IsValid_ReturnValue);
	void OnSlidingBegin(class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, bool CallFunc_IsValid_ReturnValue, enum class EPhysicalSurface CallFunc_GetFloorPhisicalSurface_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasFloorPhysMaterial_ReturnValue, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
	void CreatePoliceSpawner(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_WantedPolice_NPCSpawner_C* CallFunc_FinishSpawningActor_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void CreateLamp();
	void OnLoaded_CD204E62480922149D33F2914AD3807A(class UObject* Loaded);
	void OnLoaded_B0A699BF41F9214B27FAD1AD60391AE4(class UObject* Loaded);
	void BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature(class UPalCharacterMovementComponent* Component, bool IsInSliding);
	void OnJumped();
	void ReceiveTick(float DeltaSeconds);
	void LoadAsyncAsset();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__BP_Player_Female_BP_GliderComponent_K2Node_ComponentBoundEvent_1_OnStartGliding__DelegateSignature();
	void ReceiveBeginPlay();
	void OnInitialized(class APalCharacter* InCharacter);
	void ExecuteUbergraph_BP_Player_Female(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterMovementComponent* K2Node_ComponentBoundEvent_component, bool K2Node_ComponentBoundEvent_IsInSliding, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UObject* Temp_object_Variable_1, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded_1, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_2, enum class EPhysicalSurface CallFunc_GetFloorPhisicalSurface_ReturnValue, bool CallFunc_HasFloorPhysMaterial_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, class APalCharacter* K2Node_CustomEvent_InCharacter, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UBP_PalLocalPlayerSystemSound_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


