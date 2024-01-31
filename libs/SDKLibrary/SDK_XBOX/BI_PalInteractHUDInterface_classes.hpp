#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BI_PalInteractHUDInterface.BI_PalInteractHUDInterface_C
class IBI_PalInteractHUDInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBI_PalInteractHUDInterface_C* GetDefaultObj();

	void GetInteractWidget(class UPalUserWidget** CreatedWidget);
};

}


