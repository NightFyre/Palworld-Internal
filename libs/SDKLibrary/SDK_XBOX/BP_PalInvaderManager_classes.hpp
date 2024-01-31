#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1E0 - 0x1C0)
// BlueprintGeneratedClass BP_PalInvaderManager.BP_PalInvaderManager_C
class UBP_PalInvaderManager_C : public UPalInvaderManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalIncidentNotifyListener_C*       IncidentListener;                                  // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  InvaderEnemyIncidentId;                            // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  VisitorNPCIncidentId;                              // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PalInvaderManager_C* GetDefaultObj();

	class UPalInvaderIncidentBase* RequestIncidentVisitorNPC_BP(class UObject* OccuredBaseCamp, class UPalIncidentDynamicParameterInvader* Parameter, class UPalInvaderIncidentBase* CallFunc_RequestIncident_ReturnValue);
	class UPalInvaderIncidentBase* RequestIncidentInvaderEnemy_BP(class UObject* OccuredBaseCamp, class UPalIncidentDynamicParameterInvader* Parameter, class UPalInvaderIncidentBase* CallFunc_RequestIncident_ReturnValue);
	class UPalInvaderIncidentBase* RequestIncident(class FName IncidentName, class UObject* OccuredBaseCamp, class UPalIncidentDynamicParameterInvader* Parameter, class UPalIncidentBase* NewIncident, class UPalInvaderIncidentBase* K2Node_DynamicCast_AsPal_Invader_Incident_Base, bool K2Node_DynamicCast_bSuccess, class UPalIncidentSystem* CallFunc_GetIncidentSystem_ReturnValue, class UPalIncidentBase* CallFunc_RequestIncident_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIncidentSystem* CallFunc_GetIncidentSystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void OnIncidentStateNotify(class UPalIncidentNotifyListener* Listener, enum class EPalIncidentState IncidentState, struct FPalIncidentNotifyParameter& Parameter);
	void RegisterIncidentListener();
	void UnregisterIncidentListener();
	void ExecuteUbergraph_BP_PalInvaderManager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalIncidentNotifyListener* K2Node_CustomEvent_Listener, enum class EPalIncidentState K2Node_CustomEvent_IncidentState, const struct FPalIncidentNotifyParameter& K2Node_CustomEvent_Parameter, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_PalIncidentNotifyListener_C* CallFunc_SpawnObject_ReturnValue);
};

}


