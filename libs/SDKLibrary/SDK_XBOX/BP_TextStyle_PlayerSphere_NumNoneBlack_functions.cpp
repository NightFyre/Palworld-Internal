#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TextStyle_PlayerSphere_NumNoneBlack.BP_TextStyle_PlayerSphere_NumNoneBlack_C
// (None)

class UClass* UBP_TextStyle_PlayerSphere_NumNoneBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TextStyle_PlayerSphere_NumNoneBlack_C");

	return Clss;
}


// BP_TextStyle_PlayerSphere_NumNoneBlack_C BP_TextStyle_PlayerSphere_NumNoneBlack.Default__BP_TextStyle_PlayerSphere_NumNoneBlack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TextStyle_PlayerSphere_NumNoneBlack_C* UBP_TextStyle_PlayerSphere_NumNoneBlack_C::GetDefaultObj()
{
	static class UBP_TextStyle_PlayerSphere_NumNoneBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TextStyle_PlayerSphere_NumNoneBlack_C*>(UBP_TextStyle_PlayerSphere_NumNoneBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


