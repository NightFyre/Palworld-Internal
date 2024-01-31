#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionPairStandby_Petting.BP_ActionPairStandby_Petting_C
// (None)

class UClass* UBP_ActionPairStandby_Petting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionPairStandby_Petting_C");

	return Clss;
}


// BP_ActionPairStandby_Petting_C BP_ActionPairStandby_Petting.Default__BP_ActionPairStandby_Petting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionPairStandby_Petting_C* UBP_ActionPairStandby_Petting_C::GetDefaultObj()
{
	static class UBP_ActionPairStandby_Petting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionPairStandby_Petting_C*>(UBP_ActionPairStandby_Petting_C::StaticClass()->DefaultObject);

	return Default;
}

}


