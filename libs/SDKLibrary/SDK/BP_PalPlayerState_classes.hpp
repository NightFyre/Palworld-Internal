#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x7D0 - 0x7C0)
// BlueprintGeneratedClass BP_PalPlayerState.BP_PalPlayerState_C
class ABP_PalPlayerState_C : public APalPlayerState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalPlayerState_C* GetDefaultObj();

	void LoadTitleLevel(bool bIsSaveSuccess);
	void ExecuteUbergraph_BP_PalPlayerState(int32 EntryPoint, bool K2Node_Event_bIsSaveSuccess, class UPalSaveGameManager* CallFunc_GetSaveGameManager_ReturnValue, bool CallFunc_IsWorldOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue);
};

}


