#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x320 - 0x290)
// BlueprintGeneratedClass BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C
class ABP_PalCaptureBodyBase_C : public APalSphereBodyBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalSoundPlayerComponent_C*         SoundPlayer;                                       // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSuccessedCapture;                                // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFailedCapture;                                   // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPalIndividualCharacterHandle*         TargetHandle;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CaptureLevel;                                      // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BCE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPassingCapturePhase;                             // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnShakeBody;                                       // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsSneakBonus;                                      // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsIntoBall;                                        // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BCF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnBouncedBody;                                     // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsRobberyBall;                                     // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BD0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NonTargetTimer;                                    // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalCaptureBodyBase_C* GetDefaultObj();

	void GetOwnerCharacterOrRiderCharacter(class AActor** Character, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetRiderCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void SetSneakBonusFlagToALL(bool IsSneak);
	void SetTargetHandle(class UPalIndividualCharacterHandle* TargetHandle, bool CallFunc_IsValid_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue);
	void SetupInServer(class APalCharacter* TargetCharacter);
	void SetupToALL(class APalCharacter* Target, bool CallFunc_HasAuthority_ReturnValue);
	void SetCaptureLevelToALL(int32 Level);
	void Get_Is_Into_Ball(bool* IntoBall);
	void SetIsIntoBall(bool IntoBall, const struct FPalDataTableRowName_SoundID& SoundId);
	class USceneComponent* GetAkOwnerComponent(class UStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void PlaySound(const struct FPalDataTableRowName_SoundID& ID, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions);
	void IsSneakBonusEnabled(bool* Enabled);
	void SetSneakBonusFlag(bool Flag, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalNetworkMulticastGateComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Setup(class APalCharacter* TargetCharacter, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalNetworkMulticastGateComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetTargetActor(class APalCharacter** TargetActor, class UPalIndividualCharacterHandle* CallFunc_GetTargetHandle_targetHandle, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetCaptureLevel(int32* Level);
	void SetCaptureLevel(int32 NewParam, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalNetworkMulticastGateComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetTargetHandle(class UPalIndividualCharacterHandle** TargetHandle);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetTargetIDToALL(const struct FPalInstanceID& TargetId);
	void ExecuteUbergraph_BP_PalCaptureBodyBase(int32 EntryPoint, class UPalIndividualCharacterHandle* CallFunc_GetTargetHandle_targetHandle, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalInstanceID& K2Node_CustomEvent_TargetID, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetIndividualHandle_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetTargetActor_TargetActor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsServer_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
	void OnBouncedBody__DelegateSignature(enum class E_PalCaptureSphereBouncedReason ReasonType, class UPalIndividualCharacterHandle* TargetHandle);
	void OnShakeBody__DelegateSignature(class ABP_PalCaptureBodyBase_C* ShakedBody);
	void OnPassingCapturePhase__DelegateSignature(int32 PhaseCount, class UPalIndividualCharacterHandle* TargetHandle);
	void OnFailedCapture__DelegateSignature(class UPalIndividualCharacterHandle* TargetHandle, enum class EPalSphereCaptureFailedReason FailedReason);
	void OnSuccessedCapture__DelegateSignature(class UPalIndividualCharacterHandle* TargetHandle);
};

}


