#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionDummy.BP_AIActionDummy_C
// (None)

class UClass* UBP_AIActionDummy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionDummy_C");

	return Clss;
}


// BP_AIActionDummy_C BP_AIActionDummy.Default__BP_AIActionDummy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionDummy_C* UBP_AIActionDummy_C::GetDefaultObj()
{
	static class UBP_AIActionDummy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionDummy_C*>(UBP_AIActionDummy_C::StaticClass()->DefaultObject);

	return Default;
}

}


