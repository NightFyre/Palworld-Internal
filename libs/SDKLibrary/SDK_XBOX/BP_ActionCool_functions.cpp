#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionCool.BP_ActionCool_C
// (None)

class UClass* UBP_ActionCool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionCool_C");

	return Clss;
}


// BP_ActionCool_C BP_ActionCool.Default__BP_ActionCool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionCool_C* UBP_ActionCool_C::GetDefaultObj()
{
	static class UBP_ActionCool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionCool_C*>(UBP_ActionCool_C::StaticClass()->DefaultObject);

	return Default;
}

}


