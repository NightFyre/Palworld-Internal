#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MultiTalk_Head_of_Village.BP_MultiTalk_Head_of_Village_C
// (None)

class UClass* UBP_MultiTalk_Head_of_Village_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiTalk_Head_of_Village_C");

	return Clss;
}


// BP_MultiTalk_Head_of_Village_C BP_MultiTalk_Head_of_Village.Default__BP_MultiTalk_Head_of_Village_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiTalk_Head_of_Village_C* UBP_MultiTalk_Head_of_Village_C::GetDefaultObj()
{
	static class UBP_MultiTalk_Head_of_Village_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiTalk_Head_of_Village_C*>(UBP_MultiTalk_Head_of_Village_C::StaticClass()->DefaultObject);

	return Default;
}

}


