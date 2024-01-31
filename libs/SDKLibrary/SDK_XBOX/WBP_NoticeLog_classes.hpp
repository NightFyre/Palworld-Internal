#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x439 - 0x420)
// WidgetBlueprintGeneratedClass WBP_NoticeLog.WBP_NoticeLog_C
class UWBP_NoticeLog_C : public UPalLogWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x428(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Notice_C*                         WBP_Notice;                                        // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EPalLogContentToneType            LogToneType;                                       // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_NoticeLog_C* GetDefaultObj();

	void Close_Internal(bool K2Node_SwitchEnum_CmpSuccess);
	void Open_Internal(bool K2Node_SwitchEnum_CmpSuccess);
	void OnLoaded_19AB6838498B19451FE6AEAD31DEA803(class UObject* Loaded);
	void RequestLoadIconTexture(TSoftObjectPtr<class UTexture2D>& SoftTexturePtr);
	void SetLogText(class FText& InText);
	void RequestInAnime();
	void OnFinished();
	void RequestOutAnime();
	void OnFinishedClose();
	void SetAdditionalData(struct FPalLogAdditionalData& InAdditionalData);
	void OnInitialized();
	void ExecuteUbergraph_WBP_NoticeLog(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TSoftObjectPtr<class UTexture2D> K2Node_Event_softTexturePtr, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class FText K2Node_Event_inText, const struct FPalLogAdditionalData& K2Node_Event_inAdditionalData, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
};

}


