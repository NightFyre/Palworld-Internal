#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OptimizeParameter_High.BP_OptimizeParameter_High_C
// (None)

class UClass* UBP_OptimizeParameter_High_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OptimizeParameter_High_C");

	return Clss;
}


// BP_OptimizeParameter_High_C BP_OptimizeParameter_High.Default__BP_OptimizeParameter_High_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OptimizeParameter_High_C* UBP_OptimizeParameter_High_C::GetDefaultObj()
{
	static class UBP_OptimizeParameter_High_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OptimizeParameter_High_C*>(UBP_OptimizeParameter_High_C::StaticClass()->DefaultObject);

	return Default;
}

}


