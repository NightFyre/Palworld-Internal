#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x81 - 0x30)
// BlueprintGeneratedClass BP_AnimNotifyState_PlaySound.BP_AnimNotifyState_PlaySound_C
class UBP_AnimNotifyState_PlaySound_C : public UAnimNotifyState
{
public:
	bool                                         Mute;                                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalDataTableRowName_SoundID          SoundId;                                           // 0x34(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         StopOnNotifyEnded;                                 // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalSoundOptions                      SoundOption;                                       // 0x40(0x4)(Edit, BlueprintVisible, NoDestructor)
	class FName                                  SocketName;                                        // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UPalSoundSlot>           DebugSoundSlot;                                    // 0x50(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class EPhysicalSurface                  DebugPhysicsMaterial;                              // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AnimNotifyState_PlaySound_C* GetDefaultObj();

	bool PlaySound_Editor(class UMeshComponent* MeshComp, class FName Name_None, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
	void PlaySound(class UMeshComponent* MeshComp, class FName Name_None, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
	void Get_Raycast_Location(class UMeshComponent* Mesh, struct FVector* St, struct FVector* Ed, const struct FVector& RaycastEd, const struct FVector& RaycastSt, const struct FVector& Location, class FName Name_None, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsGame_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_PlaySound_Editor_ReturnValue, bool CallFunc_IsGame_ReturnValue);
};

}


