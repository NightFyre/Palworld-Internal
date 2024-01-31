#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OptimizeParameter_CoopHost.BP_OptimizeParameter_CoopHost_C
// (None)

class UClass* UBP_OptimizeParameter_CoopHost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OptimizeParameter_CoopHost_C");

	return Clss;
}


// BP_OptimizeParameter_CoopHost_C BP_OptimizeParameter_CoopHost.Default__BP_OptimizeParameter_CoopHost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OptimizeParameter_CoopHost_C* UBP_OptimizeParameter_CoopHost_C::GetDefaultObj()
{
	static class UBP_OptimizeParameter_CoopHost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OptimizeParameter_CoopHost_C*>(UBP_OptimizeParameter_CoopHost_C::StaticClass()->DefaultObject);

	return Default;
}

}


