#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RagdollPreset_Liftup.BP_RagdollPreset_Liftup_C
// (None)

class UClass* UBP_RagdollPreset_Liftup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RagdollPreset_Liftup_C");

	return Clss;
}


// BP_RagdollPreset_Liftup_C BP_RagdollPreset_Liftup.Default__BP_RagdollPreset_Liftup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RagdollPreset_Liftup_C* UBP_RagdollPreset_Liftup_C::GetDefaultObj()
{
	static class UBP_RagdollPreset_Liftup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RagdollPreset_Liftup_C*>(UBP_RagdollPreset_Liftup_C::StaticClass()->DefaultObject);

	return Default;
}

}


