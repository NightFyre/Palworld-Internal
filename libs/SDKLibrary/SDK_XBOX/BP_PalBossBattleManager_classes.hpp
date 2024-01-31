#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x218 - 0x210)
// BlueprintGeneratedClass BP_PalBossBattleManager.BP_PalBossBattleManager_C
class UBP_PalBossBattleManager_C : public UPalBossBattleManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_PalBossBattleManager_C* GetDefaultObj();

	void DisableSky(bool Activce, class APPSkyCreator* Sky, int32 Temp_int_Loop_Counter_Variable, TArray<class USceneComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class USceneComponent* CallFunc_Array_Get_Item);
	void DisableSkyCreator(bool Disable);
	void ExecuteUbergraph_BP_PalBossBattleManager(int32 EntryPoint, class APPSkyCreator* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_Disable, bool CallFunc_Not_PreBool_ReturnValue);
};

}


