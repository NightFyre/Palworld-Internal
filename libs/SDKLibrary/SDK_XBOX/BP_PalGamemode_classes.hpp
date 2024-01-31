#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x370 - 0x358)
// BlueprintGeneratedClass BP_PalGamemode.BP_PalGamemode_C
class ABP_PalGamemode_C : public APalGameMode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  DefaultPlayerStartTag;                             // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalGamemode_C* GetDefaultObj();

	class AActor* ChoosePlayerStart(class AController* Player, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_ChoosePlayerStart_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class APlayerStartPIE*>& CallFunc_GetAllActorsOfClass_OutActors, class APlayerStartPIE* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Array_Length_ReturnValue_1, class APlayerStart* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue);
	class AActor* SpawmDummyNavInvoker(const struct FTransform& Transform, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_DummyNavigationInvoker_C* CallFunc_FinishSpawningActor_ReturnValue);
	void BindFunction_InvaderManager(FDelegateProperty_ Spawn_Dummy_Nav_Invoker_Delegate, class UPalInvaderManager* CallFunc_GetInvaderManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InpActEvt_DebugWindow_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ReceiveBeginPlay();
	void _________0(int32 SoundRadius, const struct FVector& EmitLocation, class AActor* Emitter);
	void ExecuteUbergraph_BP_PalGamemode(int32 EntryPoint, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, int32 K2Node_CustomEvent_SoundRadius, const struct FVector& K2Node_CustomEvent_EmitLocation, class AActor* K2Node_CustomEvent_Emitter, const struct FVector& CallFunc_Vector_One_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SoundSourceDebugModel_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


