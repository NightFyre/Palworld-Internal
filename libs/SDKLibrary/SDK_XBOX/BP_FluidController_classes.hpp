#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x320 - 0x290)
// BlueprintGeneratedClass BP_FluidController.BP_FluidController_C
class ABP_FluidController_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Icon;                                              // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentRT;                                         // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Time;                                              // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FluidTransfer;                                     // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FluidSimulation;                                   // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              NormalSimulation;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableSimulation;                                  // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FluidUpdateRate;                                   // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FluidTravelSpeed;                                  // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FluidDampening;                                    // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Height_0;                                          // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Height_1;                                          // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Height_2;                                          // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        RenderTargetSize;                                  // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                FluidOut;                                          // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                FluidOutNormal;                                    // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       NormalIntensity;                                   // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FluidController_C* GetDefaultObj();

	void GetRT_Height(int32 Index, class UTextureRenderTarget2D** RenderTarget, int32 Temp_int_Variable, class UTextureRenderTarget2D* K2Node_Select_Default);
	void CreateMaterials(class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2);
	void ClearRenderTargets();
	void GetRT(int32 Index, class UTextureRenderTarget2D* RenderTarget_0, class UTextureRenderTarget2D* RenderTarget_1, class UTextureRenderTarget2D* RenderTarget_2, class UTextureRenderTarget2D** RenderTarget, int32 Temp_int_Variable, class UTextureRenderTarget2D* K2Node_Select_Default);
	void GetPreviousRT(int32 CurrentRTIndex, int32 FramesOld, class UTextureRenderTarget2D* RenderTarget_0, class UTextureRenderTarget2D* RenderTarget_1, class UTextureRenderTarget2D* RenderTarget_2, class UTextureRenderTarget2D** RenderTargetOut, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UTextureRenderTarget2D* CallFunc_GetRT_RenderTarget);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_FluidController(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, double CallFunc_FMin_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float K2Node_Event_DeltaSeconds, class UTextureRenderTarget2D* CallFunc_GetRT_RenderTarget, double CallFunc_Add_DoubleDouble_ReturnValue, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, class UTextureRenderTarget2D* CallFunc_GetPreviousRT_RenderTargetOut, class UTextureRenderTarget2D* CallFunc_GetPreviousRT_RenderTargetOut_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UTextureRenderTarget2D* CallFunc_GetRT_RenderTarget_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
};

}


