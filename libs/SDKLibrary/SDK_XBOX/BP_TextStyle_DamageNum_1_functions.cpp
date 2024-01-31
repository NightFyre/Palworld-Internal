#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TextStyle_DamageNum_1.BP_TextStyle_DamageNum_1_C
// (None)

class UClass* UBP_TextStyle_DamageNum_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TextStyle_DamageNum_1_C");

	return Clss;
}


// BP_TextStyle_DamageNum_1_C BP_TextStyle_DamageNum_1.Default__BP_TextStyle_DamageNum_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TextStyle_DamageNum_1_C* UBP_TextStyle_DamageNum_1_C::GetDefaultObj()
{
	static class UBP_TextStyle_DamageNum_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TextStyle_DamageNum_1_C*>(UBP_TextStyle_DamageNum_1_C::StaticClass()->DefaultObject);

	return Default;
}

}


