#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionPairCall_Petting.BP_AIActionPairCall_Petting_C
// (None)

class UClass* UBP_AIActionPairCall_Petting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionPairCall_Petting_C");

	return Clss;
}


// BP_AIActionPairCall_Petting_C BP_AIActionPairCall_Petting.Default__BP_AIActionPairCall_Petting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionPairCall_Petting_C* UBP_AIActionPairCall_Petting_C::GetDefaultObj()
{
	static class UBP_AIActionPairCall_Petting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionPairCall_Petting_C*>(UBP_AIActionPairCall_Petting_C::StaticClass()->DefaultObject);

	return Default;
}

}


