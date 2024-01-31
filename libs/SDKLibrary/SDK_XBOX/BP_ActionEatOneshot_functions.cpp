#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionEatOneshot.BP_ActionEatOneshot_C
// (None)

class UClass* UBP_ActionEatOneshot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionEatOneshot_C");

	return Clss;
}


// BP_ActionEatOneshot_C BP_ActionEatOneshot.Default__BP_ActionEatOneshot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionEatOneshot_C* UBP_ActionEatOneshot_C::GetDefaultObj()
{
	static class UBP_ActionEatOneshot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionEatOneshot_C*>(UBP_ActionEatOneshot_C::StaticClass()->DefaultObject);

	return Default;
}

}


