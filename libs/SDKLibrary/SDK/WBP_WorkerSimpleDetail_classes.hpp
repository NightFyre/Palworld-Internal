#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x410 - 0x408)
// WidgetBlueprintGeneratedClass WBP_WorkerSimpleDetail.WBP_WorkerSimpleDetail_C
class UWBP_WorkerSimpleDetail_C : public UPalUIWorkerSimpleDetailCanvas
{
public:
	class UWBP_PalWorkerInfo_C*                  WBP_PalWorkerInfo;                                 // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_WorkerSimpleDetail_C* GetDefaultObj();

	void CloseSetup();
	void OpenSetup(class UPalIndividualCharacterHandle* TargetHandle, bool CallFunc_IsValid_ReturnValue);
};

}


