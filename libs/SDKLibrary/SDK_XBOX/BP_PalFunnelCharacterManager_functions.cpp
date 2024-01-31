#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalFunnelCharacterManager.BP_PalFunnelCharacterManager_C
// (None)

class UClass* UBP_PalFunnelCharacterManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalFunnelCharacterManager_C");

	return Clss;
}


// BP_PalFunnelCharacterManager_C BP_PalFunnelCharacterManager.Default__BP_PalFunnelCharacterManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalFunnelCharacterManager_C* UBP_PalFunnelCharacterManager_C::GetDefaultObj()
{
	static class UBP_PalFunnelCharacterManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalFunnelCharacterManager_C*>(UBP_PalFunnelCharacterManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalFunnelCharacterManager.BP_PalFunnelCharacterManager_C.SetFunnelCharacterActive
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalFunnelCharacter*         FunnelCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               Trainer                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     VEd                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     VSt                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_FunnelCharacterAIController_C*K2Node_DynamicCast_AsBP_Funnel_Character_AIController            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalFunnelCharacterManager_C::SetFunnelCharacterActive(class APalFunnelCharacter* FunnelCharacter, bool IsActive, class APalCharacter* Trainer, const struct FVector& VEd, const struct FVector& VSt, class AController* CallFunc_GetController_ReturnValue, class ABP_FunnelCharacterAIController_C* K2Node_DynamicCast_AsBP_Funnel_Character_AIController, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalFunnelCharacterManager_C", "SetFunnelCharacterActive");

	Params::UBP_PalFunnelCharacterManager_C_SetFunnelCharacterActive_Params Parms{};

	Parms.FunnelCharacter = FunnelCharacter;
	Parms.IsActive = IsActive;
	Parms.Trainer = Trainer;
	Parms.VEd = VEd;
	Parms.VSt = VSt;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Funnel_Character_AIController = K2Node_DynamicCast_AsBP_Funnel_Character_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


