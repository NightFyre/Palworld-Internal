#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemGDK.GDKNetDriver
// (None)

class UClass* UGDKNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GDKNetDriver");

	return Clss;
}


// GDKNetDriver OnlineSubsystemGDK.Default__GDKNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UGDKNetDriver* UGDKNetDriver::GetDefaultObj()
{
	static class UGDKNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UGDKNetDriver*>(UGDKNetDriver::StaticClass()->DefaultObject);

	return Default;
}

}


