#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FootStepEffectAssetDefault.BP_FootStepEffectAssetDefault_C
// (None)

class UClass* UBP_FootStepEffectAssetDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FootStepEffectAssetDefault_C");

	return Clss;
}


// BP_FootStepEffectAssetDefault_C BP_FootStepEffectAssetDefault.Default__BP_FootStepEffectAssetDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FootStepEffectAssetDefault_C* UBP_FootStepEffectAssetDefault_C::GetDefaultObj()
{
	static class UBP_FootStepEffectAssetDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FootStepEffectAssetDefault_C*>(UBP_FootStepEffectAssetDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


