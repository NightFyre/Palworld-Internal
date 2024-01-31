#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x320 - 0x278)
// WidgetBlueprintGeneratedClass WBP_MapFilter_Win.WBP_MapFilter_Win_C
class UWBP_MapFilter_Win_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_MapFilter_Content_C*              WBP_MapFilter_Content;                             // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapFilter_Content_C*              WBP_MapFilter_Content_1;                           // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapFilter_Content_C*              WBP_MapFilter_Content_2;                           // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapFilter_Content_C*              WBP_MapFilter_Content_3;                           // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapFilter_Content_C*              WBP_MapFilter_Content_4;                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapFilter_Content_C*              WBP_MapFilter_Content_5;                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_MapFilter_Content_C*>      Filters;                                           // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<enum class EPalLocationType, struct FDataTableRowHandle> FilterMsgMap;                                      // 0x2C0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnFilterChanged;                                   // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_MapFilter_Win_C* GetDefaultObj();

	void Construct();
	void ChangeFilter(enum class EPalLocationType LocationType, bool IsEnable);
	void ForceFTEnable(bool IsEnable);
	void ExecuteUbergraph_WBP_MapFilter_Win(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWBP_MapFilter_Content_C*>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class EPalLocationType K2Node_CustomEvent_LocationType, bool K2Node_CustomEvent_IsEnable_1, TArray<struct FDataTableRowHandle>& CallFunc_Map_Values_Values, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, TArray<enum class EPalLocationType>& CallFunc_Map_Keys_Keys, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPalLocationType CallFunc_Array_Get_Item_1, bool K2Node_CustomEvent_IsEnable, TArray<enum class EPalLocationType>& CallFunc_Map_Keys_Keys_1, class UWBP_MapFilter_Content_C* CallFunc_Array_Get_Item_2, enum class EPalLocationType CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UWBP_MapFilter_Content_C* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_1);
	void OnFilterChanged__DelegateSignature(enum class EPalLocationType FilterMap, bool IsEnable);
};

}


