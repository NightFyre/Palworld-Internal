#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_palmapobjectspawner_palegg_grass_grade_04.bp_palmapobjectspawner_palegg_grass_grade_04_C
// (Actor)

class UClass* Abp_palmapobjectspawner_palegg_grass_grade_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_palmapobjectspawner_palegg_grass_grade_04_C");

	return Clss;
}


// bp_palmapobjectspawner_palegg_grass_grade_04_C bp_palmapobjectspawner_palegg_grass_grade_04.Default__bp_palmapobjectspawner_palegg_grass_grade_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_palmapobjectspawner_palegg_grass_grade_04_C* Abp_palmapobjectspawner_palegg_grass_grade_04_C::GetDefaultObj()
{
	static class Abp_palmapobjectspawner_palegg_grass_grade_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_palmapobjectspawner_palegg_grass_grade_04_C*>(Abp_palmapobjectspawner_palegg_grass_grade_04_C::StaticClass()->DefaultObject);

	return Default;
}

}


