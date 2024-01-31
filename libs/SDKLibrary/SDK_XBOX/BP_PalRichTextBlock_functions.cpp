#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRichTextBlock.BP_PalRichTextBlock_C
// (None)

class UClass* UBP_PalRichTextBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRichTextBlock_C");

	return Clss;
}


// BP_PalRichTextBlock_C BP_PalRichTextBlock.Default__BP_PalRichTextBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalRichTextBlock_C* UBP_PalRichTextBlock_C::GetDefaultObj()
{
	static class UBP_PalRichTextBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalRichTextBlock_C*>(UBP_PalRichTextBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


