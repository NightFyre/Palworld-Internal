#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalAIActionComposite_OtomoBaseCampWorker.BP_PalAIActionComposite_OtomoBaseCampWorker_C
// (None)

class UClass* UBP_PalAIActionComposite_OtomoBaseCampWorker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalAIActionComposite_OtomoBaseCampWorker_C");

	return Clss;
}


// BP_PalAIActionComposite_OtomoBaseCampWorker_C BP_PalAIActionComposite_OtomoBaseCampWorker.Default__BP_PalAIActionComposite_OtomoBaseCampWorker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalAIActionComposite_OtomoBaseCampWorker_C* UBP_PalAIActionComposite_OtomoBaseCampWorker_C::GetDefaultObj()
{
	static class UBP_PalAIActionComposite_OtomoBaseCampWorker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalAIActionComposite_OtomoBaseCampWorker_C*>(UBP_PalAIActionComposite_OtomoBaseCampWorker_C::StaticClass()->DefaultObject);

	return Default;
}

}


