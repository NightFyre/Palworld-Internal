#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x858 - 0x810)
// BlueprintGeneratedClass BP_NPC_Base.BP_NPC_Base_C
class ABP_NPC_Base_C : public APalNPC
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x810(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_NPCInteractionComponent_C*         BP_NPCInteractionComponent;                        // 0x818(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                   PalFacial;                                         // 0x820(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalNavigationInvokerComponent*        PalNavigationInvoker;                              // 0x828(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative* BP_InteractableSphere;                             // 0x830(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                  PalShooter;                                        // 0x838(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDestoryEvent;                                    // 0x840(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	class UClass*                                AnimLayerClass;                                    // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NPC_Base_C* GetDefaultObj();

	void SetMaterial(class UMaterialInstance* Material, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetupInteraction(TScriptInterface<class IPalInteractiveObjectComponentInterface> CallFunc_Delegates_self_CastInput, class UPalInteractDelegates* CallFunc_Delegates_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IPalInteractiveObjectComponentInterface> CallFunc_SetIndicatorInterface_self_CastInput, TScriptInterface<class IPalInteractiveObjectIndicatorInterface> CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput);
	void DestoryWeapon(class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CreateWeapon(bool DefaultEquip, enum class EPalWeaponType WeaponType, class UClass* TempWeaponClass, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UBP_NPCWeaponGenerator_C* CallFunc_SpawnObject_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, enum class EPalWeaponType CallFunc_GetWeaponType_ReturnValue, bool CallFunc_GetWeaponEquip_ReturnValue);
	void _________2(const struct FPalDeadInfo& DeadInfo);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__BP_NPC_Base_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
	void SetActive_Interact_ToAll(bool Active);
	void _________0(class APalCharacter* InCharacter);
	void ExecuteUbergraph_BP_NPC_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalExpDatabase* CallFunc_GetExpDatabase_ReturnValue, class AController* CallFunc_GetController_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UPalCharacterMovementComponent* K2Node_ComponentBoundEvent_component, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, bool K2Node_CustomEvent_Active, class APalCharacter* K2Node_CustomEvent_InCharacter);
	void OnDestoryEvent__DelegateSignature(class APalCharacter* Character);
};

}


