#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass BP_HitTargetHolder.BP_HitTargetHolder_C
class UBP_HitTargetHolder_C : public UObject
{
public:
	TArray<class AActor*>                        HitActor;                                          // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_HitTargetHolder_C* GetDefaultObj();

	void AddUniqueHitActor(class AActor* Actor, bool* IsNew, bool IsNewActor, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}


