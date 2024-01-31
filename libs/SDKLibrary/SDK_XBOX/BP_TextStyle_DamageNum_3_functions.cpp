#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TextStyle_DamageNum_3.BP_TextStyle_DamageNum_3_C
// (None)

class UClass* UBP_TextStyle_DamageNum_3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TextStyle_DamageNum_3_C");

	return Clss;
}


// BP_TextStyle_DamageNum_3_C BP_TextStyle_DamageNum_3.Default__BP_TextStyle_DamageNum_3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TextStyle_DamageNum_3_C* UBP_TextStyle_DamageNum_3_C::GetDefaultObj()
{
	static class UBP_TextStyle_DamageNum_3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TextStyle_DamageNum_3_C*>(UBP_TextStyle_DamageNum_3_C::StaticClass()->DefaultObject);

	return Default;
}

}


