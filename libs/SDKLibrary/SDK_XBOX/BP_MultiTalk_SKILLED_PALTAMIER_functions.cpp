#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MultiTalk_SKILLED_PALTAMIER.BP_MultiTalk_SKILLED_PALTAMIER_C
// (None)

class UClass* UBP_MultiTalk_SKILLED_PALTAMIER_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiTalk_SKILLED_PALTAMIER_C");

	return Clss;
}


// BP_MultiTalk_SKILLED_PALTAMIER_C BP_MultiTalk_SKILLED_PALTAMIER.Default__BP_MultiTalk_SKILLED_PALTAMIER_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiTalk_SKILLED_PALTAMIER_C* UBP_MultiTalk_SKILLED_PALTAMIER_C::GetDefaultObj()
{
	static class UBP_MultiTalk_SKILLED_PALTAMIER_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiTalk_SKILLED_PALTAMIER_C*>(UBP_MultiTalk_SKILLED_PALTAMIER_C::StaticClass()->DefaultObject);

	return Default;
}

}


