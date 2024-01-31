#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalCharacterParameterStorageSubsystem.BP_PalCharacterParameterStorageSubsystem_C
// (None)

class UClass* UBP_PalCharacterParameterStorageSubsystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalCharacterParameterStorageSubsystem_C");

	return Clss;
}


// BP_PalCharacterParameterStorageSubsystem_C BP_PalCharacterParameterStorageSubsystem.Default__BP_PalCharacterParameterStorageSubsystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalCharacterParameterStorageSubsystem_C* UBP_PalCharacterParameterStorageSubsystem_C::GetDefaultObj()
{
	static class UBP_PalCharacterParameterStorageSubsystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalCharacterParameterStorageSubsystem_C*>(UBP_PalCharacterParameterStorageSubsystem_C::StaticClass()->DefaultObject);

	return Default;
}

}


