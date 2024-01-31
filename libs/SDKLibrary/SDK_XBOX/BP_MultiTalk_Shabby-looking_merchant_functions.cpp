#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MultiTalk_Shabby-looking_merchant.BP_MultiTalk_Shabby-looking_merchant_C
// (None)

class UClass* UBP_MultiTalk_ShabbyMinuslooking_merchant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiTalk_Shabby-looking_merchant_C");

	return Clss;
}


// BP_MultiTalk_Shabby-looking_merchant_C BP_MultiTalk_Shabby-looking_merchant.Default__BP_MultiTalk_Shabby-looking_merchant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiTalk_ShabbyMinuslooking_merchant_C* UBP_MultiTalk_ShabbyMinuslooking_merchant_C::GetDefaultObj()
{
	static class UBP_MultiTalk_ShabbyMinuslooking_merchant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiTalk_ShabbyMinuslooking_merchant_C*>(UBP_MultiTalk_ShabbyMinuslooking_merchant_C::StaticClass()->DefaultObject);

	return Default;
}

}


