#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OptimizeParameter_DedicatedServer.BP_OptimizeParameter_DedicatedServer_C
// (None)

class UClass* UBP_OptimizeParameter_DedicatedServer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OptimizeParameter_DedicatedServer_C");

	return Clss;
}


// BP_OptimizeParameter_DedicatedServer_C BP_OptimizeParameter_DedicatedServer.Default__BP_OptimizeParameter_DedicatedServer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OptimizeParameter_DedicatedServer_C* UBP_OptimizeParameter_DedicatedServer_C::GetDefaultObj()
{
	static class UBP_OptimizeParameter_DedicatedServer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OptimizeParameter_DedicatedServer_C*>(UBP_OptimizeParameter_DedicatedServer_C::StaticClass()->DefaultObject);

	return Default;
}

}


