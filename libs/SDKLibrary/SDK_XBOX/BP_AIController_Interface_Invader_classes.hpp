#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_AIController_Interface_Invader.BP_AIController_Interface_Invader_C
class IBP_AIController_Interface_Invader_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_AIController_Interface_Invader_C* GetDefaultObj();

	void BindOnInvaderArrivedDelegate(FDelegateProperty_ Event);
	void OnInvaderArrived();
};

}


