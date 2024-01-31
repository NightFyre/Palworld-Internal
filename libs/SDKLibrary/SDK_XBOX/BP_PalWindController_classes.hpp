#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB68 - 0xB60)
// BlueprintGeneratedClass BP_PalWindController.BP_PalWindController_C
class ABP_PalWindController_C : public APalWindController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PalWindController_C* GetDefaultObj();

	void UpdateNPC(struct FPalWindInfo& WindInfo, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue);
	void UpdateNiagaraParameterCollection(struct FPalWindInfo& WindInfo);
	void ExecuteUbergraph_BP_PalWindController(int32 EntryPoint, const struct FPalWindInfo& K2Node_Event_WindInfo);
};

}


