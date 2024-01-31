#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MultiTalk_Research-oriented_scholar.BP_MultiTalk_Research-oriented_scholar_C
// (None)

class UClass* UBP_MultiTalk_ResearchMinusoriented_scholar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiTalk_Research-oriented_scholar_C");

	return Clss;
}


// BP_MultiTalk_Research-oriented_scholar_C BP_MultiTalk_Research-oriented_scholar.Default__BP_MultiTalk_Research-oriented_scholar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiTalk_ResearchMinusoriented_scholar_C* UBP_MultiTalk_ResearchMinusoriented_scholar_C::GetDefaultObj()
{
	static class UBP_MultiTalk_ResearchMinusoriented_scholar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiTalk_ResearchMinusoriented_scholar_C*>(UBP_MultiTalk_ResearchMinusoriented_scholar_C::StaticClass()->DefaultObject);

	return Default;
}

}


