#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x440 - 0x3D0)
// BlueprintGeneratedClass BP_MapObject_TreasureBox.BP_MapObject_TreasureBox_C
class ABP_MapObject_TreasureBox_C : public APalMapObjectTreasureBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  VisualActor;                                       // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative* BP_InteractableSphere;                             // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       IndicatorOrigin;                                   // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EPalMapObjectTreasureGradeType, class UClass*> VisualMap;                                         // 0x3F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_MapObject_TreasureBox_C* GetDefaultObj();

	void SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel, class UPalMapObjectTreasureBoxModel* ConcreteModel, enum class EPalTreasureBoxVisualType VisualType, class UPalItemIDManager* ItemIDManager, class UPalMapObjectTreasureBoxModel* K2Node_DynamicCast_AsPal_Map_Object_Treasure_Box_Model, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EPalMapObjectTreasureGradeType CallFunc_GetTreasureGradeType_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, bool CallFunc_IsDevelopmentBuild_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1);
	void TriggerOpen();
	void OnFinishOpenVisual();
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void OnNotifiedStartOpen();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MapObject_TreasureBox(int32 EntryPoint, class AActor* CallFunc_AdjustActorToFloor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class ABP_TreasureBoxVisual_Base_C* K2Node_DynamicCast_AsBP_Treasure_Box_Visual_Base, bool K2Node_DynamicCast_bSuccess, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, class ABP_TreasureBoxVisual_Base_C* K2Node_DynamicCast_AsBP_Treasure_Box_Visual_Base_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


