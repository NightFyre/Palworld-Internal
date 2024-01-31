#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WmfMediaFactory.WmfMediaSettings
// (None)

class UClass* UWmfMediaSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WmfMediaSettings");

	return Clss;
}


// WmfMediaSettings WmfMediaFactory.Default__WmfMediaSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UWmfMediaSettings* UWmfMediaSettings::GetDefaultObj()
{
	static class UWmfMediaSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UWmfMediaSettings*>(UWmfMediaSettings::StaticClass()->DefaultObject);

	return Default;
}

}


