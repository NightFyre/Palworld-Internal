#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalUIDispatchParameter_ItemShop.BP_PalUIDispatchParameter_ItemShop_C
// (None)

class UClass* UBP_PalUIDispatchParameter_ItemShop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalUIDispatchParameter_ItemShop_C");

	return Clss;
}


// BP_PalUIDispatchParameter_ItemShop_C BP_PalUIDispatchParameter_ItemShop.Default__BP_PalUIDispatchParameter_ItemShop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalUIDispatchParameter_ItemShop_C* UBP_PalUIDispatchParameter_ItemShop_C::GetDefaultObj()
{
	static class UBP_PalUIDispatchParameter_ItemShop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalUIDispatchParameter_ItemShop_C*>(UBP_PalUIDispatchParameter_ItemShop_C::StaticClass()->DefaultObject);

	return Default;
}

}


