#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3C8 - 0x3A0)
// BlueprintGeneratedClass BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C
class ABP_MapObject_TreasureBox_VisibleContent_C : public APalMapObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalInteractableSphereComponentNative* BP_InteractableSphere;                             // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  VisualActor;                                       // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       IndicatorOrigin;                                   // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MapObject_TreasureBox_VisibleContent_C* GetDefaultObj();

	void SetupEventToItemContainer(class UPalItemContainer* ItemContainer);
	bool IsShowOutlineInReticleTargetting();
	void OnReadyItemContainerModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
	void TryGetStaticItemId(class UPalMapObjectPickupItemOnLevelModel* PickupItemModel, class FName* StaticItemId, class UPalMapObjectPickupItemOnLevelModel* ConcreteModel);
	void SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel, class UPalStaticItemDataBase* StaticItemData, class UPalMapObjectPickupItemOnLevelModel* pConcreteModel, enum class EPalTreasureBoxVisualType VisualType, class UPalItemIDManager* ItemIDManager, class UPalMapObjectPickupItemOnLevelModel* K2Node_DynamicCast_AsPal_Map_Object_Pickup_Item_on_Level_Model, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class FName CallFunc_GetVisualStaticItemId_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, TSoftClassPtr<class AActor> CallFunc_GetVisualBlueprintClass_ReturnValue);
	void OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B(TSubclassOf<class UObject> Loaded);
	void LoadVisualActor(TSoftClassPtr<class AActor> BlueprintClassSoft);
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, TSoftClassPtr<class AActor> K2Node_CustomEvent_BlueprintClassSoft, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


