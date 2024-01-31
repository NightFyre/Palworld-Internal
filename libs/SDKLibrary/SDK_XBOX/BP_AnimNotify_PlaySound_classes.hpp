#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x81 - 0x38)
// BlueprintGeneratedClass BP_AnimNotify_PlaySound.BP_AnimNotify_PlaySound_C
class UBP_AnimNotify_PlaySound_C : public UAnimNotify
{
public:
	bool                                         Mute;                                              // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalDataTableRowName_SoundID          SoundId;                                           // 0x3C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                      SoundOption;                                       // 0x44(0x4)(Edit, BlueprintVisible, NoDestructor)
	class FName                                  SocketName;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UPalSoundSlot>           DebugSoundSlot;                                    // 0x50(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class EPhysicalSurface                  DebugPhysicsMaterial;                              // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AnimNotify_PlaySound_C* GetDefaultObj();

	void PlaySoundEditor(class UMeshComponent* MeshComp, class FName Name_None, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
	void PlaySound(class UMeshComponent* MeshComp, class FName Name_None, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, bool CallFunc_IsGame_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


