#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetAttackableDistance
struct ABP_NormalStationaryLauncherBase_C_GetAttackableDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetMuzzleRotateLocation
struct ABP_NormalStationaryLauncherBase_C_GetMuzzleRotateLocation_Params
{
public:
	struct FVector                               RotateLocation;                                    // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetRotateMuzzleRef
struct ABP_NormalStationaryLauncherBase_C_GetRotateMuzzleRef_Params
{
public:
	class UStaticMeshComponent*                  Muzzle;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetAttackableAngle
struct ABP_NormalStationaryLauncherBase_C_GetAttackableAngle_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetPullTriggerInterval
struct ABP_NormalStationaryLauncherBase_C_GetPullTriggerInterval_Params
{
public:
	double                                       PullTriggerInterval;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetShootNumMax
struct ABP_NormalStationaryLauncherBase_C_GetShootNumMax_Params
{
public:
	int32                                        ShootNumMax;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetWeaponDamage
struct ABP_NormalStationaryLauncherBase_C_GetWeaponDamage_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetOwnerCharacter
struct ABP_NormalStationaryLauncherBase_C_GetOwnerCharacter_Params
{
public:
	class APalCharacter*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         K2Node_DynamicCast_AsPal_Character;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.SetOwnerCharacter
struct ABP_NormalStationaryLauncherBase_C_SetOwnerCharacter_Params
{
public:
	TSoftObjectPtr<class APalCharacter>          OwnerCharacter;                                    // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.SetAttackTarget
struct ABP_NormalStationaryLauncherBase_C_SetAttackTarget_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.SetEnableLauncher
struct ABP_NormalStationaryLauncherBase_C_SetEnableLauncher_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.RotatePitchToTarget
struct ABP_NormalStationaryLauncherBase_C_RotatePitchToTarget_Params
{
public:
	struct FVector                               TargetLocation;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LerpSpeed;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTime;                                         // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GeyEjectionPortTransform
struct ABP_NormalStationaryLauncherBase_C_GeyEjectionPortTransform_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.Is UseEjectionPort
struct ABP_NormalStationaryLauncherBase_C_Is_UseEjectionPort_Params
{
public:
	bool                                         IsUse;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.OnSpawnedBullet
struct ABP_NormalStationaryLauncherBase_C_OnSpawnedBullet_Params
{
public:
	class APalBullet*                            Bullet;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.OnShoot
struct ABP_NormalStationaryLauncherBase_C_OnShoot_Params
{
public:
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetBulletClass
struct ABP_NormalStationaryLauncherBase_C_GetBulletClass_Params
{
public:
	class UClass*                                NewParam;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetBlurAngle
struct ABP_NormalStationaryLauncherBase_C_GetBlurAngle_Params
{
public:
	double                                       Angle;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.CalcShootBlurRotator
struct ABP_NormalStationaryLauncherBase_C_CalcShootBlurRotator_Params
{
public:
	double                                       BlurAngle;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              BlurRotator;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Blur;                                              // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetMuzzleEffectParticle
struct ABP_NormalStationaryLauncherBase_C_GetMuzzleEffectParticle_Params
{
public:
	class UParticleSystem*                       Particle_System;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetMuzzleEffect
struct ABP_NormalStationaryLauncherBase_C_GetMuzzleEffect_Params
{
public:
	class UNiagaraSystem*                        NewParam;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetMuzzleLocation
struct ABP_NormalStationaryLauncherBase_C_GetMuzzleLocation_Params
{
public:
	struct FVector                               MuzzleLocation;                                    // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetMuzzleRotator
struct ABP_NormalStationaryLauncherBase_C_GetMuzzleRotator_Params
{
public:
	struct FRotator                              Rotator;                                           // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetInitializeInterval
struct ABP_NormalStationaryLauncherBase_C_GetInitializeInterval_Params
{
public:
	double                                       Time;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetShootInterval
struct ABP_NormalStationaryLauncherBase_C_GetShootInterval_Params
{
public:
	double                                       Time;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.EjectAmmo
struct ABP_NormalStationaryLauncherBase_C_EjectAmmo_Params
{
public:
	struct FTransform                            CallFunc_GeyEjectionPortTransform_Transform;       // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_UseEjectionPort_isUse;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4127[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Ammo_C*                            CallFunc_FinishSpawningActor_ReturnValue;          // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.ShootBulletInternal
struct ABP_NormalStationaryLauncherBase_C_ShootBulletInternal_Params
{
public:
	struct FRotator                              Blur;                                              // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               Local_SocketTransform;                             // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetOwnerCharacter_ReturnValue;            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetWeaponDamage_ReturnValue;              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_412A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_GetMuzzleRotator_Rotator;                 // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                CallFunc_GetBulletClass_NewParam;                  // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetBlurAngle_Angle;                       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_CalcShootBlurRotator_BlurRotator;         // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetMuzzleLocation_MuzzleLocation;         // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xB0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalBullet*                            CallFunc_FinishSpawningActor_ReturnValue;          // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.PlayMuzzleEffectParticle
struct ABP_NormalStationaryLauncherBase_C_PlayMuzzleEffectParticle_Params
{
public:
	class UParticleSystem*                       CallFunc_GetMuzzleEffectParticle_Particle_System;  // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CallFunc_GetMuzzleEffectParticle_Particle_System_1; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetMuzzleRotator_Rotator;                 // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4135[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetMuzzleLocation_MuzzleLocation;         // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.PlayShootEffect
struct ABP_NormalStationaryLauncherBase_C_PlayShootEffect_Params
{
public:
	class UNiagaraSystem*                        CallFunc_GetMuzzleEffect_NewParam;                 // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetMuzzleRotator_Rotator;                 // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4137[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetMuzzleLocation_MuzzleLocation;         // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        CallFunc_GetMuzzleEffect_NewParam_1;               // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.ShootBullet
struct ABP_NormalStationaryLauncherBase_C_ShootBullet_Params
{
public:
	class APalCharacter*                         CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShootNumMax_ShootNumMax;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.ReceiveTick
struct ABP_NormalStationaryLauncherBase_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.ExecuteUbergraph_BP_NormalStationaryLauncherBase
struct ABP_NormalStationaryLauncherBase_C_ExecuteUbergraph_BP_NormalStationaryLauncherBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_413B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetShootInterval_Time;                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetInitializeInterval_Time;               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShootNumMax_ShootNumMax;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_413C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_413D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_1;        // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_2;       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_2;        // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetPullTriggerInterval_PullTriggerInterval; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_413E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetPullTriggerInterval_PullTriggerInterval_1; // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_413F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_3;        // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4140[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast; // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4141[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


