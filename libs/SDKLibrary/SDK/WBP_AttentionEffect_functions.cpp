#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_AttentionEffect.WBP_AttentionEffect_C
// (None)

class UClass* UWBP_AttentionEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AttentionEffect_C");

	return Clss;
}


// WBP_AttentionEffect_C WBP_AttentionEffect.Default__WBP_AttentionEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AttentionEffect_C* UWBP_AttentionEffect_C::GetDefaultObj()
{
	static class UWBP_AttentionEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AttentionEffect_C*>(UWBP_AttentionEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


