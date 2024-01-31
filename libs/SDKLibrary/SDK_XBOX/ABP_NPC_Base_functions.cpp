#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_NPC_Base.ABP_NPC_Base_C
// (None)

class UClass* UABP_NPC_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_NPC_Base_C");

	return Clss;
}


// ABP_NPC_Base_C ABP_NPC_Base.Default__ABP_NPC_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_NPC_Base_C* UABP_NPC_Base_C::GetDefaultObj()
{
	static class UABP_NPC_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_NPC_Base_C*>(UABP_NPC_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_NPC_Base.ABP_NPC_Base_C.NPC_HairClothLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   NPC_HairClothLayer                                               (Parm, OutParm, NoDestructor)

void UABP_NPC_Base_C::NPC_HairClothLayer(const struct FPoseLink& InPose, struct FPoseLink* NPC_HairClothLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "NPC_HairClothLayer");

	Params::UABP_NPC_Base_C_NPC_HairClothLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (NPC_HairClothLayer != nullptr)
		*NPC_HairClothLayer = std::move(Parms.NPC_HairClothLayer);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.LeftHandIK
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose_LeftHand                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   LeftHandIK                                                       (Parm, OutParm, NoDestructor)

void UABP_NPC_Base_C::LeftHandIK(const struct FPoseLink& InPose_LeftHand, struct FPoseLink* LeftHandIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "LeftHandIK");

	Params::UABP_NPC_Base_C_LeftHandIK_Params Parms{};

	Parms.InPose_LeftHand = InPose_LeftHand;

	UObject::ProcessEvent(Func, &Parms);

	if (LeftHandIK != nullptr)
		*LeftHandIK = std::move(Parms.LeftHandIK);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.WeaponUpper
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   WeaponUpper                                                      (Parm, OutParm, NoDestructor)

void UABP_NPC_Base_C::WeaponUpper(const struct FPoseLink& InPose, struct FPoseLink* WeaponUpper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "WeaponUpper");

	Params::UABP_NPC_Base_C_WeaponUpper_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponUpper != nullptr)
		*WeaponUpper = std::move(Parms.WeaponUpper);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_NPC_Base_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "AnimGraph");

	Params::UABP_NPC_Base_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_Base_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime, double CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "BlueprintThreadSafeUpdateAnimation");

	Params::UABP_NPC_Base_C_BlueprintThreadSafeUpdateAnimation_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.ShooterComponentUpdate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalShooterComponent*        ShooterComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ThreadSafe_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ThreadSafe_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_Base_C::ShooterComponentUpdate(class UPalShooterComponent* ShooterComponent, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsValid_ThreadSafe_ReturnValue, bool CallFunc_IsValid_ThreadSafe_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "ShooterComponentUpdate");

	Params::UABP_NPC_Base_C_ShooterComponentUpdate_Params Parms{};

	Parms.ShooterComponent = ShooterComponent;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_IsValid_ThreadSafe_ReturnValue = CallFunc_IsValid_ThreadSafe_ReturnValue;
	Parms.CallFunc_IsValid_ThreadSafe_ReturnValue_1 = CallFunc_IsValid_ThreadSafe_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_0D482E0C4B2E4E7CD091E386E53618A7
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_0D482E0C4B2E4E7CD091E386E53618A7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_0D482E0C4B2E4E7CD091E386E53618A7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_40C8EDE3400634534A504B80F766E208
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_40C8EDE3400634534A504B80F766E208()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_40C8EDE3400634534A504B80F766E208");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_3AE6580A4F970316C15CF69E11CE9615
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_3AE6580A4F970316C15CF69E11CE9615()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_3AE6580A4F970316C15CF69E11CE9615");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_BBD8BB9A4AAC9FE30FB9758FBD35CF09
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_BBD8BB9A4AAC9FE30FB9758FBD35CF09()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_BBD8BB9A4AAC9FE30FB9758FBD35CF09");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_E2DE616E480579F7354F33B1777A4358
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_E2DE616E480579F7354F33B1777A4358()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_E2DE616E480579F7354F33B1777A4358");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_F63282324F16651B07F04EA37B13D648
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_F63282324F16651B07F04EA37B13D648()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_F63282324F16651B07F04EA37B13D648");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_8536992D4A36125389B06C90F08A99B2
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_8536992D4A36125389B06C90F08A99B2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_8536992D4A36125389B06C90F08A99B2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_FA0E6E324CA7134F3022AA94B20262ED
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_FA0E6E324CA7134F3022AA94B20262ED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_FA0E6E324CA7134F3022AA94B20262ED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendSpacePlayer_ECEA17A54981985346E400AE295C30FF
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendSpacePlayer_ECEA17A54981985346E400AE295C30FF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendSpacePlayer_ECEA17A54981985346E400AE295C30FF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_A843A5B240417E340E569DA258225C81
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_A843A5B240417E340E569DA258225C81()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_A843A5B240417E340E569DA258225C81");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_103905184AD9AADFC2AC7783DC8F943D
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_103905184AD9AADFC2AC7783DC8F943D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_SequencePlayer_103905184AD9AADFC2AC7783DC8F943D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_F4C92C35456A21C307270A83D6D219A6
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_F4C92C35456A21C307270A83D6D219A6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_BlendListByBool_F4C92C35456A21C307270A83D6D219A6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_98F8247B476FFB0446F91DB7328341FA
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_98F8247B476FFB0446F91DB7328341FA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_98F8247B476FFB0446F91DB7328341FA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_B09EDEC94382438CC2EA92A0E18A09D7
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_B09EDEC94382438CC2EA92A0E18A09D7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_B09EDEC94382438CC2EA92A0E18A09D7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_A9D4C35A4750D9C872FF0F8E72859E1D
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_A9D4C35A4750D9C872FF0F8E72859E1D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_A9D4C35A4750D9C872FF0F8E72859E1D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_F009816844CF3DF7CEFF7DAA17E020BA
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_F009816844CF3DF7CEFF7DAA17E020BA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_F009816844CF3DF7CEFF7DAA17E020BA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_1D93E8984AE04BDD9AC072AC8F1B4CC6
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_1D93E8984AE04BDD9AC072AC8F1B4CC6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_1D93E8984AE04BDD9AC072AC8F1B4CC6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_FB87F47D45ADB262044FA6BC9B050E13
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_FB87F47D45ADB262044FA6BC9B050E13()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_FB87F47D45ADB262044FA6BC9B050E13");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_41047BF041CF74296033DFA993D3480E
// (BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_41047BF041CF74296033DFA993D3480E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Base_AnimGraphNode_TransitionResult_41047BF041CF74296033DFA993D3480E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_NPC_Base_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_NPC_Base.ABP_NPC_Base_C.ExecuteUbergraph_ABP_NPC_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAnimationPoseTypeTemp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Vector_IsZero_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAnimationPoseTypeTemp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentStateName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentStateName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAnimationPoseTypeTemp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFraction_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Map_Find_Value_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Map_Find_Value_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAnimationPoseTypeTemp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAnimationPoseTypeTemp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Map_Find_Value_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Map_Find_Value_4                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsZero2D_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPC_Base_C*              K2Node_DynamicCast_AsBP_NPC_Base                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMainMeshByActor_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet___FloatProperty_9_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_Base_C::ExecuteUbergraph_ABP_NPC_Base(int32 EntryPoint, enum class EWeaponAnimationPoseType Temp_byte_Variable, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Vector_IsZero_ReturnValue, enum class EWeaponAnimationPoseType Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue, class UAnimSequence* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class FName CallFunc_GetCurrentStateName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, class FName CallFunc_GetCurrentStateName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, enum class EWeaponAnimationPoseType Temp_byte_Variable_2, float CallFunc_GetInstanceAssetPlayerTimeFraction_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, class UAnimSequence* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UAnimSequence* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, enum class EWeaponAnimationPoseType Temp_byte_Variable_3, enum class EWeaponAnimationPoseType Temp_byte_Variable_4, class UAnimSequence* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, class UAnimSequence* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, bool CallFunc_IsZero2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class ABP_NPC_Base_C* K2Node_DynamicCast_AsBP_NPC_Base, bool K2Node_DynamicCast_bSuccess, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValidClass_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_9_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_Base_C", "ExecuteUbergraph_ABP_NPC_Base");

	Params::UABP_NPC_Base_C_ExecuteUbergraph_ABP_NPC_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Vector_IsZero_ReturnValue = CallFunc_Vector_IsZero_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue = CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetCurrentStateName_ReturnValue = CallFunc_GetCurrentStateName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1 = CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetCurrentStateName_ReturnValue_1 = CallFunc_GetCurrentStateName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFraction_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.CallFunc_IsZero2D_ReturnValue = CallFunc_IsZero2D_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_1 = CallFunc_TryGetPawnOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_NPC_Base = K2Node_DynamicCast_AsBP_NPC_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetMainMeshByActor_ReturnValue = CallFunc_GetMainMeshByActor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_StructMemberSet___FloatProperty_9_ImplicitCast = K2Node_StructMemberSet___FloatProperty_9_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_2 = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_2 = CallFunc_Add_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_1 = CallFunc_Add_DoubleDouble_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


