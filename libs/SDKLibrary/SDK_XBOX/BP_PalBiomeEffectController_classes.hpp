#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xB8 - 0xA0)
// BlueprintGeneratedClass BP_PalBiomeEffectController.BP_PalBiomeEffectController_C
class UBP_PalBiomeEffectController_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EPalBiomeType                     Current_Biome_Type;                                // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     Current_Particle_System;                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PalBiomeEffectController_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void On_Biome_Enter(enum class EPalBiomeType Biome_Type);
	void On_Biome_Exit();
	void ExecuteUbergraph_BP_PalBiomeEffectController(int32 EntryPoint, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, float K2Node_Event_DeltaSeconds, enum class EPalBiomeType K2Node_CustomEvent_Biome_Type, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, const struct FS_PalBiomeEffect& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
};

}


