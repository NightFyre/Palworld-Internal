#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x101 (0x1A1 - 0xA0)
// BlueprintGeneratedClass BP_PalCryComponent.BP_PalCryComponent_C
class UBP_PalCryComponent_C : public UPalCryComponentBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ElapsedTimeFromLastIdleCry;                        // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_475E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CryingCharacter;                                   // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, enum class E_PalEmo>     ActionEmoMap;                                      // 0xB8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UClass*, enum class E_PalEmo>     AIActionEmoMap;                                    // 0x108(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       CoolTImeIdleCry;                                   // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCryingOnAIAction;                                // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_475F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CryingAIActionClass;                               // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CurrentAIActionClass;                              // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*      IndividualParameter;                               // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HasHungry;                                         // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDebug;                                           // 0x181(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4760[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       GeneralCoolTime;                                   // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LastCryEmoState;                                   // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTimeFromLastCry;                              // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalTribeID                       CryPalID;                                          // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PalCryComponent_C* GetDefaultObj();

	void CheckWorkerEvent(bool CallFunc_IsValid_ReturnValue, enum class EPalBaseCampWorkerEventType CallFunc_GetBaseCampWorkerEventType_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FPalBaseCampWorkerEventMasterData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnSpawnPal(bool bIsActive);
	void CheckHungerType(enum class EPalStatusHungerType Current, enum class EPalStatusHungerType Last, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void CheckAIAction(int32 Temp_int_Array_Index_Variable, TArray<class UClass*>& CallFunc_Map_Keys_Keys, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class E_PalEmo CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, enum class E_PalEmo CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPawnAction* CallFunc_GetCurrentAction_BP_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPal_AIAction_Base, bool K2Node_ClassDynamicCast_bSuccess);
	void CheckAction(class UPalActionBase* Action, class UClass* CurrentActionClass, int32 Temp_int_Array_Index_Variable, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UClass*>& CallFunc_Map_Keys_Keys, enum class E_PalEmo CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UClass* CallFunc_Array_Get_Item, enum class E_PalEmo CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	class FName GetPalID(class FName CallFunc_GetCharacterIDFromTribeID_ReturnValue);
	void ProcessIdleCry(double DeltaTime, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_ElapsedTimeFromLastIdleCry_ImplicitCast);
	void PlayCry(class FName EmoState, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FName CallFunc_GetPalID_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Initialize(class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnPlayCryWithAction(enum class E_PalEmo PalEmo);
	void ExecuteUbergraph_BP_PalCryComponent(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, enum class E_PalEmo K2Node_CustomEvent_PalEmo, bool Temp_bool_IsClosed_Variable, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue_1);
};

}


