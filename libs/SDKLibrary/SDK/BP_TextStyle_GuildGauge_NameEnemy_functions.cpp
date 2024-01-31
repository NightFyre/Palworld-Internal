#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TextStyle_GuildGauge_NameEnemy.BP_TextStyle_GuildGauge_NameEnemy_C
// (None)

class UClass* UBP_TextStyle_GuildGauge_NameEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TextStyle_GuildGauge_NameEnemy_C");

	return Clss;
}


// BP_TextStyle_GuildGauge_NameEnemy_C BP_TextStyle_GuildGauge_NameEnemy.Default__BP_TextStyle_GuildGauge_NameEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TextStyle_GuildGauge_NameEnemy_C* UBP_TextStyle_GuildGauge_NameEnemy_C::GetDefaultObj()
{
	static class UBP_TextStyle_GuildGauge_NameEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TextStyle_GuildGauge_NameEnemy_C*>(UBP_TextStyle_GuildGauge_NameEnemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


