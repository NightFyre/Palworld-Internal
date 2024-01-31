#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ReturnOtomoSphereComponent.BP_ReturnOtomoSphereComponent_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UBP_ReturnOtomoSphereComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ReturnOtomoSphereComponent_C");

	return Clss;
}


// BP_ReturnOtomoSphereComponent_C BP_ReturnOtomoSphereComponent.Default__BP_ReturnOtomoSphereComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ReturnOtomoSphereComponent_C* UBP_ReturnOtomoSphereComponent_C::GetDefaultObj()
{
	static class UBP_ReturnOtomoSphereComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ReturnOtomoSphereComponent_C*>(UBP_ReturnOtomoSphereComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ReturnOtomoSphereComponent.BP_ReturnOtomoSphereComponent_C.DeleteSelf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ReturnOtomoSphereComponent_C::DeleteSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReturnOtomoSphereComponent_C", "DeleteSelf");



	UObject::ProcessEvent(Func, nullptr);

}

}


