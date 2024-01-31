#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalUIConvertItemModel.BP_PalUIConvertItemModel_C
// (None)

class UClass* UBP_PalUIConvertItemModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalUIConvertItemModel_C");

	return Clss;
}


// BP_PalUIConvertItemModel_C BP_PalUIConvertItemModel.Default__BP_PalUIConvertItemModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalUIConvertItemModel_C* UBP_PalUIConvertItemModel_C::GetDefaultObj()
{
	static class UBP_PalUIConvertItemModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalUIConvertItemModel_C*>(UBP_PalUIConvertItemModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


