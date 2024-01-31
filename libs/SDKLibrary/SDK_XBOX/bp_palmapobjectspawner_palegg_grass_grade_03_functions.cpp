#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_palmapobjectspawner_palegg_grass_grade_03.bp_palmapobjectspawner_palegg_grass_grade_03_C
// (Actor)

class UClass* Abp_palmapobjectspawner_palegg_grass_grade_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_palmapobjectspawner_palegg_grass_grade_03_C");

	return Clss;
}


// bp_palmapobjectspawner_palegg_grass_grade_03_C bp_palmapobjectspawner_palegg_grass_grade_03.Default__bp_palmapobjectspawner_palegg_grass_grade_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_palmapobjectspawner_palegg_grass_grade_03_C* Abp_palmapobjectspawner_palegg_grass_grade_03_C::GetDefaultObj()
{
	static class Abp_palmapobjectspawner_palegg_grass_grade_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_palmapobjectspawner_palegg_grass_grade_03_C*>(Abp_palmapobjectspawner_palegg_grass_grade_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


