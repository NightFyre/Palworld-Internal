#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_SpawnPointInfo.BPI_SpawnPointInfo_C
// (None)

class UClass* IBPI_SpawnPointInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_SpawnPointInfo_C");

	return Clss;
}


// BPI_SpawnPointInfo_C BPI_SpawnPointInfo.Default__BPI_SpawnPointInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_SpawnPointInfo_C* IBPI_SpawnPointInfo_C::GetDefaultObj()
{
	static class IBPI_SpawnPointInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_SpawnPointInfo_C*>(IBPI_SpawnPointInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_SpawnPointInfo.BPI_SpawnPointInfo_C.GetOneSpawnInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_NPCOnePointSpawnInfo     Info                                                             (Parm, OutParm, HasGetValueTypeHash)

void IBPI_SpawnPointInfo_C::GetOneSpawnInfo(struct FF_NPCOnePointSpawnInfo* Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SpawnPointInfo_C", "GetOneSpawnInfo");

	Params::IBPI_SpawnPointInfo_C_GetOneSpawnInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

}

}


