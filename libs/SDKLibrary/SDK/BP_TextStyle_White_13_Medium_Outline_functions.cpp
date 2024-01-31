#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TextStyle_White_13_Medium_Outline.BP_TextStyle_White_13_Medium_Outline_C
// (None)

class UClass* UBP_TextStyle_White_13_Medium_Outline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TextStyle_White_13_Medium_Outline_C");

	return Clss;
}


// BP_TextStyle_White_13_Medium_Outline_C BP_TextStyle_White_13_Medium_Outline.Default__BP_TextStyle_White_13_Medium_Outline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TextStyle_White_13_Medium_Outline_C* UBP_TextStyle_White_13_Medium_Outline_C::GetDefaultObj()
{
	static class UBP_TextStyle_White_13_Medium_Outline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TextStyle_White_13_Medium_Outline_C*>(UBP_TextStyle_White_13_Medium_Outline_C::StaticClass()->DefaultObject);

	return Default;
}

}


