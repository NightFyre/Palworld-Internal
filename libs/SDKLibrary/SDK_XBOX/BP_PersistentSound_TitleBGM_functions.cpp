#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PersistentSound_TitleBGM.BP_PersistentSound_TitleBGM_C
// (None)

class UClass* UBP_PersistentSound_TitleBGM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PersistentSound_TitleBGM_C");

	return Clss;
}


// BP_PersistentSound_TitleBGM_C BP_PersistentSound_TitleBGM.Default__BP_PersistentSound_TitleBGM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PersistentSound_TitleBGM_C* UBP_PersistentSound_TitleBGM_C::GetDefaultObj()
{
	static class UBP_PersistentSound_TitleBGM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PersistentSound_TitleBGM_C*>(UBP_PersistentSound_TitleBGM_C::StaticClass()->DefaultObject);

	return Default;
}

}


