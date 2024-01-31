#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalWorldSecuritySystem.BP_PalWorldSecuritySystem_C
// (None)

class UClass* UBP_PalWorldSecuritySystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalWorldSecuritySystem_C");

	return Clss;
}


// BP_PalWorldSecuritySystem_C BP_PalWorldSecuritySystem.Default__BP_PalWorldSecuritySystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalWorldSecuritySystem_C* UBP_PalWorldSecuritySystem_C::GetDefaultObj()
{
	static class UBP_PalWorldSecuritySystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalWorldSecuritySystem_C*>(UBP_PalWorldSecuritySystem_C::StaticClass()->DefaultObject);

	return Default;
}

}


