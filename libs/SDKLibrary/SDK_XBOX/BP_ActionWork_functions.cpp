#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionWork.BP_ActionWork_C
// (None)

class UClass* UBP_ActionWork_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionWork_C");

	return Clss;
}


// BP_ActionWork_C BP_ActionWork.Default__BP_ActionWork_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionWork_C* UBP_ActionWork_C::GetDefaultObj()
{
	static class UBP_ActionWork_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionWork_C*>(UBP_ActionWork_C::StaticClass()->DefaultObject);

	return Default;
}

}


