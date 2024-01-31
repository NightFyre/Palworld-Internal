#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5A0 - 0x590)
// BlueprintGeneratedClass BP_HeatSourceBoxComponent.BP_HeatSourceBoxComponent_C
class UBP_HeatSourceBoxComponent_C : public UPalHeatSourceBoxComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x590(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        HeatLevel_DayTime;                                 // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HeatLevel_NightTime;                               // 0x59C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_HeatSourceBoxComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Begin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void End(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_HeatSourceBoxComponent(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent_1, class AActor* K2Node_CustomEvent_OtherActor_1, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp_1, int32 K2Node_CustomEvent_OtherBodyIndex_1, bool K2Node_CustomEvent_bFromSweep, const struct FHitResult& K2Node_CustomEvent_SweepResult, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FPalHeatSourceInfo& K2Node_MakeStruct_PalHeatSourceInfo, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_OtherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, class UPalHeatSourceModule* CallFunc_GetModule_ReturnValue, class UPalHeatSourceModule* CallFunc_GetModule_ReturnValue_1, class UPalHeatSourceModule* CallFunc_GetModule_ReturnValue_2);
};

}


