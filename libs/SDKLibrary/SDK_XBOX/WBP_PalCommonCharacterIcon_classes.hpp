#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x470 - 0x440)
// WidgetBlueprintGeneratedClass WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C
class UWBP_PalCommonCharacterIcon_C : public UWBP_PalCharacterIconBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                     CircularThrobber_96;                               // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IconImage;                                         // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynamicMaterial;                                   // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEmpty;                                           // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SphereMaskRadius;                                  // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalCommonCharacterIcon_C* GetDefaultObj();

	void SetFraction(double Fraction, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void OnEmpty();
	void OnLoaded(class UTexture2D* LoadedTexture, bool CallFunc_IsValid_ReturnValue);
	void OnStartLoad();
	void Construct();
	void OnInitialized();
	void ExecuteUbergraph_WBP_PalCommonCharacterIcon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
};

}


