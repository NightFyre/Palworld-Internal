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

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
struct UMovieSceneScriptingActorReferenceKey_SetValue_Params
{
public:
	struct FMovieSceneObjectBindingID            InNewValue;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
struct UMovieSceneScriptingActorReferenceKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
struct UMovieSceneScriptingActorReferenceKey_GetValue_Params
{
public:
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
struct UMovieSceneScriptingActorReferenceKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A51[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
struct UMovieSceneScriptingActorReferenceChannel_SetDefault_Params
{
public:
	struct FMovieSceneObjectBindingID            InDefaultValue;                                    // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
struct UMovieSceneScriptingActorReferenceChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
struct UMovieSceneScriptingActorReferenceChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
struct UMovieSceneScriptingActorReferenceChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
struct UMovieSceneScriptingActorReferenceChannel_GetDefault_Params
{
public:
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
struct UMovieSceneScriptingActorReferenceChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID            NewValue;                                          // 0x4(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A82[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingActorReferenceKey* ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue
struct UMovieSceneScriptingBoolKey_SetValue_Params
{
public:
	bool                                         InNewValue;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime
struct UMovieSceneScriptingBoolKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue
struct UMovieSceneScriptingBoolKey_GetValue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime
struct UMovieSceneScriptingBoolKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
struct UMovieSceneScriptingBoolChannel_SetDefault_Params
{
public:
	bool                                         InDefaultValue;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
struct UMovieSceneScriptingBoolChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
struct UMovieSceneScriptingBoolChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
struct UMovieSceneScriptingBoolChannel_GetNumKeys_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
struct UMovieSceneScriptingBoolChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
struct UMovieSceneScriptingBoolChannel_GetDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
struct UMovieSceneScriptingBoolChannel_EvaluateKeys_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameRate                            FrameRate;                                         // 0x14(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
struct UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Params
{
public:
	struct FSequencerScriptingRange              ReturnValue;                                       // 0x0(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
struct UMovieSceneScriptingBoolChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NewValue;                                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SubFrame;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingBoolKey*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteKey.SetValue
struct UMovieSceneScriptingByteKey_SetValue_Params
{
public:
	uint8                                        InNewValue;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteKey.SetTime
struct UMovieSceneScriptingByteKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACF[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteKey.GetValue
struct UMovieSceneScriptingByteKey_GetValue_Params
{
public:
	uint8                                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteKey.GetTime
struct UMovieSceneScriptingByteKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
struct UMovieSceneScriptingByteChannel_SetDefault_Params
{
public:
	uint8                                        InDefaultValue;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
struct UMovieSceneScriptingByteChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
struct UMovieSceneScriptingByteChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
struct UMovieSceneScriptingByteChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
struct UMovieSceneScriptingByteChannel_GetDefault_Params
{
public:
	uint8                                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey
struct UMovieSceneScriptingByteChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NewValue;                                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SubFrame;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieSceneKeyInterpolation       InInterpolation;                                   // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingByteKey*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue
struct UMovieSceneScriptingDoubleKey_SetValue_Params
{
public:
	double                                       InNewValue;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
struct UMovieSceneScriptingDoubleKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF6[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
struct UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Params
{
public:
	enum class ERichCurveTangentWeightMode       InNewValue;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
struct UMovieSceneScriptingDoubleKey_SetTangentMode_Params
{
public:
	enum class ERichCurveTangentMode             InNewValue;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
struct UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
struct UMovieSceneScriptingDoubleKey_SetLeaveTangent_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
struct UMovieSceneScriptingDoubleKey_SetInterpolationMode_Params
{
public:
	enum class ERichCurveInterpMode              InNewValue;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
struct UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
struct UMovieSceneScriptingDoubleKey_SetArriveTangent_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
struct UMovieSceneScriptingDoubleKey_GetValue_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
struct UMovieSceneScriptingDoubleKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
struct UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Params
{
public:
	enum class ERichCurveTangentWeightMode       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
struct UMovieSceneScriptingDoubleKey_GetTangentMode_Params
{
public:
	enum class ERichCurveTangentMode             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
struct UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
struct UMovieSceneScriptingDoubleKey_GetLeaveTangent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
struct UMovieSceneScriptingDoubleKey_GetInterpolationMode_Params
{
public:
	enum class ERichCurveInterpMode              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
struct UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
struct UMovieSceneScriptingDoubleKey_GetArriveTangent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation
struct UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           InExtrapolation;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
struct UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           InExtrapolation;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
struct UMovieSceneScriptingDoubleChannel_SetDefault_Params
{
public:
	double                                       InDefaultValue;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
struct UMovieSceneScriptingDoubleChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
struct UMovieSceneScriptingDoubleChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
struct UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
struct UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
struct UMovieSceneScriptingDoubleChannel_GetNumKeys_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
struct UMovieSceneScriptingDoubleChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
struct UMovieSceneScriptingDoubleChannel_GetDefault_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
struct UMovieSceneScriptingDoubleChannel_EvaluateKeys_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameRate                            FrameRate;                                         // 0x14(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
struct UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Params
{
public:
	struct FSequencerScriptingRange              ReturnValue;                                       // 0x0(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
struct UMovieSceneScriptingDoubleChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B10[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NewValue;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieSceneKeyInterpolation       InInterpolation;                                   // 0x15(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B11[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingDoubleKey*         ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventKey.SetValue
struct UMovieSceneScriptingEventKey_SetValue_Params
{
public:
	struct FMovieSceneEvent                      InNewValue;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventKey.SetTime
struct UMovieSceneScriptingEventKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B15[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventKey.GetValue
struct UMovieSceneScriptingEventKey_GetValue_Params
{
public:
	struct FMovieSceneEvent                      ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventKey.GetTime
struct UMovieSceneScriptingEventKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B16[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
struct UMovieSceneScriptingEventChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
struct UMovieSceneScriptingEventChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey
struct UMovieSceneScriptingEventChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B19[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEvent                      NewValue;                                          // 0x8(0x28)(Parm, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingEventKey*          ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue
struct UMovieSceneScriptingFloatKey_SetValue_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime
struct UMovieSceneScriptingFloatKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B23[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
struct UMovieSceneScriptingFloatKey_SetTangentWeightMode_Params
{
public:
	enum class ERichCurveTangentWeightMode       InNewValue;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
struct UMovieSceneScriptingFloatKey_SetTangentMode_Params
{
public:
	enum class ERichCurveTangentMode             InNewValue;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
struct UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
struct UMovieSceneScriptingFloatKey_SetLeaveTangent_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
struct UMovieSceneScriptingFloatKey_SetInterpolationMode_Params
{
public:
	enum class ERichCurveInterpMode              InNewValue;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
struct UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
struct UMovieSceneScriptingFloatKey_SetArriveTangent_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue
struct UMovieSceneScriptingFloatKey_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime
struct UMovieSceneScriptingFloatKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
struct UMovieSceneScriptingFloatKey_GetTangentWeightMode_Params
{
public:
	enum class ERichCurveTangentWeightMode       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
struct UMovieSceneScriptingFloatKey_GetTangentMode_Params
{
public:
	enum class ERichCurveTangentMode             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
struct UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
struct UMovieSceneScriptingFloatKey_GetLeaveTangent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
struct UMovieSceneScriptingFloatKey_GetInterpolationMode_Params
{
public:
	enum class ERichCurveInterpMode              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
struct UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
struct UMovieSceneScriptingFloatKey_GetArriveTangent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
struct UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           InExtrapolation;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
struct UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           InExtrapolation;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
struct UMovieSceneScriptingFloatChannel_SetDefault_Params
{
public:
	float                                        InDefaultValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
struct UMovieSceneScriptingFloatChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
struct UMovieSceneScriptingFloatChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
struct UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
struct UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
struct UMovieSceneScriptingFloatChannel_GetNumKeys_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
struct UMovieSceneScriptingFloatChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
struct UMovieSceneScriptingFloatChannel_GetDefault_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
struct UMovieSceneScriptingFloatChannel_EvaluateKeys_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameRate                            FrameRate;                                         // 0x14(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B48[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
struct UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Params
{
public:
	struct FSequencerScriptingRange              ReturnValue;                                       // 0x0(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
struct UMovieSceneScriptingFloatChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewValue;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieSceneKeyInterpolation       InInterpolation;                                   // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingFloatKey*          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
struct UMovieSceneScriptingIntegerKey_SetValue_Params
{
public:
	int32                                        InNewValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
struct UMovieSceneScriptingIntegerKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B54[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
struct UMovieSceneScriptingIntegerKey_GetValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
struct UMovieSceneScriptingIntegerKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B56[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
struct UMovieSceneScriptingIntegerChannel_SetDefault_Params
{
public:
	int32                                        InDefaultValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
struct UMovieSceneScriptingIntegerChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
struct UMovieSceneScriptingIntegerChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
struct UMovieSceneScriptingIntegerChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
struct UMovieSceneScriptingIntegerChannel_GetDefault_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
struct UMovieSceneScriptingIntegerChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingIntegerKey*        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
struct UMovieSceneScriptingObjectPathKey_SetValue_Params
{
public:
	class UObject*                               InNewValue;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
struct UMovieSceneScriptingObjectPathKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B61[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
struct UMovieSceneScriptingObjectPathKey_GetValue_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
struct UMovieSceneScriptingObjectPathKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B69[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
struct UMovieSceneScriptingObjectPathChannel_SetDefault_Params
{
public:
	class UObject*                               InDefaultValue;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
struct UMovieSceneScriptingObjectPathChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
struct UMovieSceneScriptingObjectPathChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
struct UMovieSceneScriptingObjectPathChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
struct UMovieSceneScriptingObjectPathChannel_GetDefault_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
struct UMovieSceneScriptingObjectPathChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B72[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               NewValue;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B73[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingObjectPathKey*     ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringKey.SetValue
struct UMovieSceneScriptingStringKey_SetValue_Params
{
public:
	class FString                                InNewValue;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringKey.SetTime
struct UMovieSceneScriptingStringKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B77[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringKey.GetValue
struct UMovieSceneScriptingStringKey_GetValue_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringKey.GetTime
struct UMovieSceneScriptingStringKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B78[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
struct UMovieSceneScriptingStringChannel_SetDefault_Params
{
public:
	class FString                                InDefaultValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
struct UMovieSceneScriptingStringChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
struct UMovieSceneScriptingStringChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
struct UMovieSceneScriptingStringChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
struct UMovieSceneScriptingStringChannel_GetDefault_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey
struct UMovieSceneScriptingStringChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B82[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NewValue;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B83[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingStringKey*         ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.SetParent
struct UMovieSceneBindingExtensions_SetParent_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               InParentBinding;                                   // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.SetName
struct UMovieSceneBindingExtensions_SetName_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                InName;                                            // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
struct UMovieSceneBindingExtensions_SetDisplayName_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  InDisplayName;                                     // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
struct UMovieSceneBindingExtensions_RemoveTrack_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UMovieSceneTrack*                      TrackToRemove;                                     // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.Remove
struct UMovieSceneBindingExtensions_Remove_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
struct UMovieSceneBindingExtensions_MoveBindingContents_Params
{
public:
	struct FMovieSceneBindingProxy               SourceBindingId;                                   // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               DestinationBindingId;                              // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.IsValid
struct UMovieSceneBindingExtensions_IsValid_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetTracks
struct UMovieSceneBindingExtensions_GetTracks_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x18(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
struct UMovieSceneBindingExtensions_GetPossessedObjectClass_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetParent
struct UMovieSceneBindingExtensions_GetParent_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
struct UMovieSceneBindingExtensions_GetObjectTemplate_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetName
struct UMovieSceneBindingExtensions_GetName_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetId
struct UMovieSceneBindingExtensions_GetId_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FGuid                                 ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
struct UMovieSceneBindingExtensions_GetDisplayName_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
struct UMovieSceneBindingExtensions_GetChildPossessables_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneBindingProxy>       ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
struct UMovieSceneBindingExtensions_FindTracksByType_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UMovieSceneTrack>          TrackType;                                         // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x20(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
struct UMovieSceneBindingExtensions_FindTracksByExactType_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UMovieSceneTrack>          TrackType;                                         // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x20(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.AddTrack
struct UMovieSceneBindingExtensions_AddTrack_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UMovieSceneTrack>          TrackType;                                         // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneTrack*                      ReturnValue;                                       // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
struct UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Params
{
public:
	struct FMovieSceneEvent                      EventKey;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UClass*                                ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
struct UMovieSceneEventTrackExtensions_AddEventTriggerSection_Params
{
public:
	class UMovieSceneEventTrack*                 InTrack;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneEventTriggerSection*        ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
struct UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Params
{
public:
	class UMovieSceneEventTrack*                 InTrack;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneEventRepeaterSection*       ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName
struct UMovieSceneFolderExtensions_SetFolderName_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InFolderName;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
struct UMovieSceneFolderExtensions_SetFolderColor_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                InFolderColor;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAC[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
struct UMovieSceneFolderExtensions_RemoveChildObjectBinding_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               InObjectBinding;                                   // 0x8(0x18)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
struct UMovieSceneFolderExtensions_RemoveChildMasterTrack_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneTrack*                      InMasterTrack;                                     // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
struct UMovieSceneFolderExtensions_RemoveChildFolder_Params
{
public:
	class UMovieSceneFolder*                     TargetFolder;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneFolder*                     FolderToRemove;                                    // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName
struct UMovieSceneFolderExtensions_GetFolderName_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
struct UMovieSceneFolderExtensions_GetFolderColor_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
struct UMovieSceneFolderExtensions_GetChildObjectBindings_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneBindingProxy>       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
struct UMovieSceneFolderExtensions_GetChildMasterTracks_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x8(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
struct UMovieSceneFolderExtensions_GetChildFolders_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneFolder*>             ReturnValue;                                       // 0x8(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
struct UMovieSceneFolderExtensions_AddChildObjectBinding_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               InObjectBinding;                                   // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
struct UMovieSceneFolderExtensions_AddChildMasterTrack_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneTrack*                      InMasterTrack;                                     // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
struct UMovieSceneFolderExtensions_AddChildFolder_Params
{
public:
	class UMovieSceneFolder*                     TargetFolder;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneFolder*                     FolderToAdd;                                       // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialIndex
struct UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Params
{
public:
	class UMovieSceneComponentMaterialTrack*     Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialIndex
struct UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Params
{
public:
	class UMovieSceneComponentMaterialTrack*     Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex
struct UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Params
{
public:
	class UMovieScenePrimitiveMaterialTrack*     Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex
struct UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Params
{
public:
	class UMovieScenePrimitiveMaterialTrack*     Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
struct UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Params
{
public:
	class UMovieScenePropertyTrack*              Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InPropertyName;                                    // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InPropertyPath;                                    // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
struct UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Params
{
public:
	class UMovieSceneObjectPropertyTrack*        Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                PropertyClass;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum
struct UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Params
{
public:
	class UMovieSceneByteTrack*                  Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnum*                                 InEnum;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
struct UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Params
{
public:
	class UMovieScenePropertyTrack*              Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
struct UMovieScenePropertyTrackExtensions_GetPropertyPath_Params
{
public:
	class UMovieScenePropertyTrack*              Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
struct UMovieScenePropertyTrackExtensions_GetPropertyName_Params
{
public:
	class UMovieScenePropertyTrack*              Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
struct UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Params
{
public:
	class UMovieSceneObjectPropertyTrack*        Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum
struct UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Params
{
public:
	class UMovieSceneByteTrack*                  Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnum*                                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
struct UMovieSceneSectionExtensions_SetStartFrameSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
struct UMovieSceneSectionExtensions_SetStartFrameBounded_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBounded;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
struct UMovieSceneSectionExtensions_SetStartFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartFrame;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
struct UMovieSceneSectionExtensions_SetRangeSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetRange
struct UMovieSceneSectionExtensions_SetRange_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartFrame;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndFrame;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
struct UMovieSceneSectionExtensions_SetEndFrameSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
struct UMovieSceneSectionExtensions_SetEndFrameBounded_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBounded;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
struct UMovieSceneSectionExtensions_SetEndFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndFrame;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
struct UMovieSceneSectionExtensions_HasStartFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
struct UMovieSceneSectionExtensions_HasEndFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
struct UMovieSceneSectionExtensions_GetStartFrameSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
struct UMovieSceneSectionExtensions_GetStartFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
struct UMovieSceneSectionExtensions_GetParentSequenceFrame_Params
{
public:
	class UMovieSceneSubSection*                 Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InFrame;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSequence*                   ParentSequence;                                    // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C00[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
struct UMovieSceneSectionExtensions_GetEndFrameSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C02[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
struct UMovieSceneSectionExtensions_GetEndFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C04[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
struct UMovieSceneSectionExtensions_GetChannelsByType_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMovieSceneScriptingChannel> ChannelType;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneScriptingChannel*>   ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetChannels
struct UMovieSceneSectionExtensions_GetChannels_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneScriptingChannel*>   ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds
struct UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C06[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame
struct UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C07[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame
struct UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C09[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame
struct UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds
struct UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame
struct UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C10[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
struct UMovieSceneSectionExtensions_GetAllChannels_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneScriptingChannel*>   ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
struct UMovieSceneSectionExtensions_FindChannelsByType_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMovieSceneScriptingChannel> ChannelType;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneScriptingChannel*>   ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
struct UMovieSceneSequenceExtensions_SortMarkedFrames_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
struct UMovieSceneSequenceExtensions_SetWorkRangeStart_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTimeInSeconds;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
struct UMovieSceneSequenceExtensions_SetWorkRangeEnd_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTimeInSeconds;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C21[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
struct UMovieSceneSequenceExtensions_SetViewRangeStart_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTimeInSeconds;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C25[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
struct UMovieSceneSequenceExtensions_SetViewRangeEnd_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTimeInSeconds;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C28[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
struct UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            TickResolution;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
struct UMovieSceneSequenceExtensions_SetTickResolution_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            TickResolution;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
struct UMovieSceneSequenceExtensions_SetReadOnly_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInReadOnly;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
struct UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C31[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
struct UMovieSceneSequenceExtensions_SetPlaybackStart_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartFrame;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C36[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
struct UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C39[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
struct UMovieSceneSequenceExtensions_SetPlaybackEnd_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndFrame;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
struct UMovieSceneSequenceExtensions_SetMarkedFrame_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InMarkIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InFrameNumber;                                     // 0xC(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
struct UMovieSceneSequenceExtensions_SetEvaluationType_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieSceneEvaluationType         InEvaluationType;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C46[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
struct UMovieSceneSequenceExtensions_SetDisplayRate_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            DisplayRate;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
struct UMovieSceneSequenceExtensions_SetClockSource_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUpdateClockSource                InClockSource;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C49[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
struct UMovieSceneSequenceExtensions_ResolveBindingID_Params
{
public:
	class UMovieSceneSequence*                   MasterSequence;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID            InObjectBindingID;                                 // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence
struct UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneFolder*                     Folder;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
struct UMovieSceneSequenceExtensions_RemoveMasterTrack_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneTrack*                      MasterTrack;                                       // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C51[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
struct UMovieSceneSequenceExtensions_MakeRangeSeconds_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSequencerScriptingRange              ReturnValue;                                       // 0x10(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C58[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange
struct UMovieSceneSequenceExtensions_MakeRange_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartFrame;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Duration;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSequencerScriptingRange              ReturnValue;                                       // 0x10(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
struct UMovieSceneSequenceExtensions_MakeBindingID_Params
{
public:
	class UMovieSceneSequence*                   MasterSequence;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMovieSceneObjectBindingSpace     Space;                                             // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C60[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x24(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C61[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
struct UMovieSceneSequenceExtensions_LocateBoundObjects_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
struct UMovieSceneSequenceExtensions_IsReadOnly_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C68[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
struct UMovieSceneSequenceExtensions_GetWorkRangeStart_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C69[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
struct UMovieSceneSequenceExtensions_GetWorkRangeEnd_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
struct UMovieSceneSequenceExtensions_GetViewRangeStart_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
struct UMovieSceneSequenceExtensions_GetViewRangeEnd_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C70[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
struct UMovieSceneSequenceExtensions_GetTimecodeSource_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimecode                             ReturnValue;                                       // 0x8(0x14)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C71[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
struct UMovieSceneSequenceExtensions_GetTickResolution_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
struct UMovieSceneSequenceExtensions_GetSpawnables_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneBindingProxy>       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
struct UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneFolder*>             ReturnValue;                                       // 0x8(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
struct UMovieSceneSequenceExtensions_GetPossessables_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneBindingProxy>       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
struct UMovieSceneSequenceExtensions_GetPortableBindingID_Params
{
public:
	class UMovieSceneSequence*                   MasterSequence;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneSequence*                   DestinationSequence;                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
struct UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C73[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
struct UMovieSceneSequenceExtensions_GetPlaybackStart_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C74[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
struct UMovieSceneSequenceExtensions_GetPlaybackRange_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSequencerScriptingRange              ReturnValue;                                       // 0x8(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C75[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
struct UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C76[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
struct UMovieSceneSequenceExtensions_GetPlaybackEnd_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C78[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
struct UMovieSceneSequenceExtensions_GetMovieScene_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene*                           ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
struct UMovieSceneSequenceExtensions_GetMasterTracks_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x8(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
struct UMovieSceneSequenceExtensions_GetMarkedFrames_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneMarkedFrame>        ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
struct UMovieSceneSequenceExtensions_GetEvaluationType_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieSceneEvaluationType         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C80[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
struct UMovieSceneSequenceExtensions_GetDisplayRate_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
struct UMovieSceneSequenceExtensions_GetClockSource_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUpdateClockSource                ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C82[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings
struct UMovieSceneSequenceExtensions_GetBindings_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneBindingProxy>       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
struct UMovieSceneSequenceExtensions_GetBindingID_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
struct UMovieSceneSequenceExtensions_FindNextMarkedFrame_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InFrameNumber;                                     // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForward;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
struct UMovieSceneSequenceExtensions_FindMasterTracksByType_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMovieSceneTrack>          TrackType;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x10(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
struct UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMovieSceneTrack>          TrackType;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x10(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
struct UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InLabel;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
struct UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InFrameNumber;                                     // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
struct UMovieSceneSequenceExtensions_FindBindingByName_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
struct UMovieSceneSequenceExtensions_FindBindingById_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 BindingID;                                         // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
struct UMovieSceneSequenceExtensions_DeleteMarkedFrames_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
struct UMovieSceneSequenceExtensions_DeleteMarkedFrame_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeleteIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
struct UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ObjectToSpawn;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
struct UMovieSceneSequenceExtensions_AddSpawnableFromClass_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                ClassToSpawn;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
struct UMovieSceneSequenceExtensions_AddRootFolderToSequence_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewFolderName;                                     // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneFolder*                     ReturnValue;                                       // 0x18(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
struct UMovieSceneSequenceExtensions_AddPossessable_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ObjectToPossess;                                   // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
struct UMovieSceneSequenceExtensions_AddMasterTrack_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMovieSceneTrack>          TrackType;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneTrack*                      ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
struct UMovieSceneSequenceExtensions_AddMarkedFrame_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneMarkedFrame                InMarkedFrame;                                     // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
struct UMovieSceneTrackExtensions_SetTrackRowDisplayName_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  InName;                                            // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        RowIndex;                                          // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
struct UMovieSceneTrackExtensions_SetSortingOrder_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SortingOrder;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
struct UMovieSceneTrackExtensions_SetSectionToKey_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneSection*                    Section;                                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
struct UMovieSceneTrackExtensions_SetDisplayName_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  InName;                                            // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint
struct UMovieSceneTrackExtensions_SetColorTint_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                ColorTint;                                         // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection
struct UMovieSceneTrackExtensions_RemoveSection_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneSection*                    Section;                                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
struct UMovieSceneTrackExtensions_GetTrackRowDisplayName_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RowIndex;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
struct UMovieSceneTrackExtensions_GetSortingOrder_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
struct UMovieSceneTrackExtensions_GetSectionToKey_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneSection*                    ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.GetSections
struct UMovieSceneTrackExtensions_GetSections_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneSection*>            ReturnValue;                                       // 0x8(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
struct UMovieSceneTrackExtensions_GetDisplayName_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint
struct UMovieSceneTrackExtensions_GetColorTint_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.AddSection
struct UMovieSceneTrackExtensions_AddSection_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneSection*                    ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed
struct UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Params
{
public:
	class UMovieSceneFloatVectorTrack*           Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InNumChannelsUsed;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
struct UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Params
{
public:
	class UMovieSceneFloatVectorTrack*           Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
struct UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Params
{
public:
	class UMovieSceneDoubleVectorTrack*          Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InNumChannelsUsed;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
struct UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Params
{
public:
	class UMovieSceneDoubleVectorTrack*          Track;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
struct USequencerScriptingRangeExtensions_SetStartSeconds_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Start;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
struct USequencerScriptingRangeExtensions_SetStartFrame_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Start;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
struct USequencerScriptingRangeExtensions_SetEndSeconds_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        End;                                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
struct USequencerScriptingRangeExtensions_SetEndFrame_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        End;                                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
struct USequencerScriptingRangeExtensions_RemoveStart_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
struct USequencerScriptingRangeExtensions_RemoveEnd_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart
struct USequencerScriptingRangeExtensions_HasStart_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE7[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
struct USequencerScriptingRangeExtensions_HasEnd_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
struct USequencerScriptingRangeExtensions_GetStartSeconds_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
struct USequencerScriptingRangeExtensions_GetStartFrame_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
struct USequencerScriptingRangeExtensions_GetEndSeconds_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
struct USequencerScriptingRangeExtensions_GetEndFrame_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


