// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalGun/Public/PortalActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalActor() {}
// Cross Module References
	PORTALGUN_API UEnum* Z_Construct_UEnum_PortalGun_EPortalType();
	UPackage* Z_Construct_UPackage__Script_PortalGun();
	PORTALGUN_API UClass* Z_Construct_UClass_APortalActor_NoRegister();
	PORTALGUN_API UClass* Z_Construct_UClass_APortalActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	static UEnum* EPortalType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PortalGun_EPortalType, Z_Construct_UPackage__Script_PortalGun(), TEXT("EPortalType"));
		}
		return Singleton;
	}
	template<> PORTALGUN_API UEnum* StaticEnum<EPortalType>()
	{
		return EPortalType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPortalType(EPortalType_StaticEnum, TEXT("/Script/PortalGun"), TEXT("EPortalType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PortalGun_EPortalType_Hash() { return 818483594U; }
	UEnum* Z_Construct_UEnum_PortalGun_EPortalType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PortalGun();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPortalType"), 0, Get_Z_Construct_UEnum_PortalGun_EPortalType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPortalType::PortalGun", (int64)EPortalType::PortalGun },
				{ "EPortalType::FixedPortal", (int64)EPortalType::FixedPortal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FixedPortal.Name", "EPortalType::FixedPortal" },
				{ "ModuleRelativePath", "Public/PortalActor.h" },
				{ "PortalGun.Name", "EPortalType::PortalGun" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PortalGun,
				nullptr,
				"EPortalType",
				"EPortalType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(APortalActor::execPortalEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PortalEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalActor::execPortalTriggerOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBoxIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PortalTriggerOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBoxIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalActor::execSetPortalCapture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPortalCapture(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalActor::execClearPortalDestiny)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPortalDestiny();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalActor::execSetPortalDestiny)
	{
		P_GET_OBJECT(APortalActor,Z_Param_InPortalDestination);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPortalDestiny(Z_Param_InPortalDestination);
		P_NATIVE_END;
	}
	void APortalActor::StaticRegisterNativesAPortalActor()
	{
		UClass* Class = APortalActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearPortalDestiny", &APortalActor::execClearPortalDestiny },
			{ "PortalEffects", &APortalActor::execPortalEffects },
			{ "PortalTriggerOverlap", &APortalActor::execPortalTriggerOverlap },
			{ "SetPortalCapture", &APortalActor::execSetPortalCapture },
			{ "SetPortalDestiny", &APortalActor::execSetPortalDestiny },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APortalActor_ClearPortalDestiny_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalActor_ClearPortalDestiny_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalActor.h" },
		{ "Tooltip", "Clear the portal destiny" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalActor_ClearPortalDestiny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalActor, nullptr, "ClearPortalDestiny", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalActor_ClearPortalDestiny_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalActor_ClearPortalDestiny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalActor_ClearPortalDestiny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalActor_ClearPortalDestiny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalActor_PortalEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalActor_PortalEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalActor_PortalEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalActor, nullptr, "PortalEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalActor_PortalEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalActor_PortalEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalActor_PortalEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalActor_PortalEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics
	{
		struct PortalActor_eventPortalTriggerOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBoxIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBoxIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalActor_eventPortalTriggerOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalActor_eventPortalTriggerOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalActor_eventPortalTriggerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OtherBoxIndex = { "OtherBoxIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalActor_eventPortalTriggerOverlap_Parms, OtherBoxIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PortalActor_eventPortalTriggerOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PortalActor_eventPortalTriggerOverlap_Parms), &Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalActor_eventPortalTriggerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_OtherBoxIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Creating the Overlap Function\n" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
		{ "ToolTip", "Creating the Overlap Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalActor, nullptr, "PortalTriggerOverlap", nullptr, nullptr, sizeof(PortalActor_eventPortalTriggerOverlap_Parms), Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalActor_PortalTriggerOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalActor_PortalTriggerOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalActor_SetPortalCapture_Statics
	{
		struct PortalActor_eventSetPortalCapture_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APortalActor_SetPortalCapture_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalActor_eventSetPortalCapture_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalActor_SetPortalCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalActor_SetPortalCapture_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalActor_SetPortalCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalActor_SetPortalCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalActor, nullptr, "SetPortalCapture", nullptr, nullptr, sizeof(PortalActor_eventSetPortalCapture_Parms), Z_Construct_UFunction_APortalActor_SetPortalCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalActor_SetPortalCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalActor_SetPortalCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalActor_SetPortalCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalActor_SetPortalCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalActor_SetPortalCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalActor_SetPortalDestiny_Statics
	{
		struct PortalActor_eventSetPortalDestiny_Parms
		{
			APortalActor* InPortalDestination;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPortalDestination;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalActor_SetPortalDestiny_Statics::NewProp_InPortalDestination = { "InPortalDestination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalActor_eventSetPortalDestiny_Parms, InPortalDestination), Z_Construct_UClass_APortalActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalActor_SetPortalDestiny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalActor_SetPortalDestiny_Statics::NewProp_InPortalDestination,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalActor_SetPortalDestiny_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalActor.h" },
		{ "Tooltip", "Set the portal destiny" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalActor_SetPortalDestiny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalActor, nullptr, "SetPortalDestiny", nullptr, nullptr, sizeof(PortalActor_eventSetPortalDestiny_Parms), Z_Construct_UFunction_APortalActor_SetPortalDestiny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalActor_SetPortalDestiny_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalActor_SetPortalDestiny_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalActor_SetPortalDestiny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalActor_SetPortalDestiny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalActor_SetPortalDestiny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APortalActor_NoRegister()
	{
		return APortalActor::StaticClass();
	}
	struct Z_Construct_UClass_APortalActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalIndexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PortalIndexID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SelectPortalType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectPortalType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SelectPortalType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticFindPortal_MetaData[];
#endif
		static void NewProp_bAutomaticFindPortal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticFindPortal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalA_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PortalA_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalB_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PortalB_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortalRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortalSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetPortalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SetPortalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortalDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalDestinationTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PortalDestinationTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PortalColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetCaptureA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SetCaptureA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetCaptureB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SetCaptureB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetSceneCapture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SetSceneCapture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTeleporting_MetaData[];
#endif
		static void NewProp_bIsTeleporting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTeleporting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalCapture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortalCapture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortalSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortalMat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortalActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PortalGun,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APortalActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APortalActor_ClearPortalDestiny, "ClearPortalDestiny" }, // 3761300035
		{ &Z_Construct_UFunction_APortalActor_PortalEffects, "PortalEffects" }, // 2184062349
		{ &Z_Construct_UFunction_APortalActor_PortalTriggerOverlap, "PortalTriggerOverlap" }, // 3795123305
		{ &Z_Construct_UFunction_APortalActor_SetPortalCapture, "SetPortalCapture" }, // 1916819159
		{ &Z_Construct_UFunction_APortalActor_SetPortalDestiny, "SetPortalDestiny" }, // 2631317522
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PortalActor.h" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_PortalIndexID_MetaData[] = {
		{ "Category", "PortalActor" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
		{ "Tooltip", "Used by id of gun fired portal" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_PortalIndexID = { "PortalIndexID", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, PortalIndexID), METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalIndexID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalIndexID_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_SelectPortalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_SelectPortalType_MetaData[] = {
		{ "Category", "Basic Configurations" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
		{ "Tooltip", "Select the portal type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_SelectPortalType = { "SelectPortalType", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, SelectPortalType), Z_Construct_UEnum_PortalGun_EPortalType, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_SelectPortalType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_SelectPortalType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_bAutomaticFindPortal_MetaData[] = {
		{ "Category", "Basic Configurations" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
		{ "Tooltip", "Can auto set as self as destiny of portal destiny?" },
	};
#endif
	void Z_Construct_UClass_APortalActor_Statics::NewProp_bAutomaticFindPortal_SetBit(void* Obj)
	{
		((APortalActor*)Obj)->bAutomaticFindPortal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_bAutomaticFindPortal = { "bAutomaticFindPortal", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APortalActor), &Z_Construct_UClass_APortalActor_Statics::NewProp_bAutomaticFindPortal_SetBit, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_bAutomaticFindPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_bAutomaticFindPortal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_PortalA_Color_MetaData[] = {
		{ "Category", "Basic Configurations|Color" },
		{ "EditCondition", "SelectPortalType == EPortalType::PortalGun" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
		{ "Tooltip", "Select the first portal color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_PortalA_Color = { "PortalA_Color", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, PortalA_Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalA_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalA_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_PortalB_Color_MetaData[] = {
		{ "Category", "Basic Configurations|Color" },
		{ "EditCondition", "SelectPortalType == EPortalType::PortalGun" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
		{ "Tooltip", "Select the second portal color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_PortalB_Color = { "PortalB_Color", nullptr, (EPropertyFlags)0x0010000000030005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, PortalB_Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalB_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalB_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_PortalRootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_PortalRootComponent = { "PortalRootComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, PortalRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_PortalSpawnPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_PortalSpawnPoint = { "PortalSpawnPoint", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, PortalSpawnPoint), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_OverlapComp_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Creating the box volume component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
		{ "ToolTip", "Creating the box volume component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_OverlapComp = { "OverlapComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, OverlapComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_OverlapComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_OverlapComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_PortalMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_PortalMesh = { "PortalMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, PortalMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_SetPortalMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_SetPortalMesh = { "SetPortalMesh", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, SetPortalMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_SetPortalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_SetPortalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_PortalDestination_MetaData[] = {
		{ "Category", "Basic Configurations" },
		{ "EditCondition", "SelectPortalType == EPortalType::FixedPortal" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
		{ "Tooltip", "Get the portal destiny" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_PortalDestination = { "PortalDestination", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, PortalDestination), Z_Construct_UClass_APortalActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_PortalDestinationTransform_MetaData[] = {
		{ "Category", "Basic Configurations" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_PortalDestinationTransform = { "PortalDestinationTransform", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, PortalDestinationTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalDestinationTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalDestinationTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_PortalColor_MetaData[] = {
		{ "Category", "Basic Configurations|Color" },
		{ "EditCondition", "SelectPortalType == EPortalType::FixedPortal" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
		{ "Tooltip", "Select Fixed portal color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_PortalColor = { "PortalColor", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, PortalColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_SetCaptureA_MetaData[] = {
		{ "Category", "System Properties" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_SetCaptureA = { "SetCaptureA", nullptr, (EPropertyFlags)0x0020080000030005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, SetCaptureA), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_SetCaptureA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_SetCaptureA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_SetCaptureB_MetaData[] = {
		{ "Category", "System Properties" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_SetCaptureB = { "SetCaptureB", nullptr, (EPropertyFlags)0x0020080000030005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, SetCaptureB), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_SetCaptureB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_SetCaptureB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_SetSceneCapture_MetaData[] = {
		{ "Category", "Basic Configurations" },
		{ "EditCondition", "SelectPortalType == EPortalType::FixedPortal" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
		{ "Tooltip", "Set custom portal scene capture used in Fixed Portal" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_SetSceneCapture = { "SetSceneCapture", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, SetSceneCapture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_SetSceneCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_SetSceneCapture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_bIsTeleporting_MetaData[] = {
		{ "Category", "System Properties" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	void Z_Construct_UClass_APortalActor_Statics::NewProp_bIsTeleporting_SetBit(void* Obj)
	{
		((APortalActor*)Obj)->bIsTeleporting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_bIsTeleporting = { "bIsTeleporting", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APortalActor), &Z_Construct_UClass_APortalActor_Statics::NewProp_bIsTeleporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_bIsTeleporting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_bIsTeleporting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_PortalCapture_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_PortalCapture = { "PortalCapture", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, PortalCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalCapture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_PortalSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_PortalSound = { "PortalSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, PortalSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalActor_Statics::NewProp_PortalMat_MetaData[] = {
		{ "Category", "System Properties|Material" },
		{ "ModuleRelativePath", "Public/PortalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalActor_Statics::NewProp_PortalMat = { "PortalMat", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalActor, PortalMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::NewProp_PortalMat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortalActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_PortalIndexID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_SelectPortalType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_SelectPortalType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_bAutomaticFindPortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_PortalA_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_PortalB_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_PortalRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_PortalSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_OverlapComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_PortalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_SetPortalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_PortalDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_PortalDestinationTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_PortalColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_SetCaptureA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_SetCaptureB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_SetSceneCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_bIsTeleporting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_PortalCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_PortalSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalActor_Statics::NewProp_PortalMat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortalActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortalActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APortalActor_Statics::ClassParams = {
		&APortalActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APortalActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APortalActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortalActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortalActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APortalActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APortalActor, 1646865719);
	template<> PORTALGUN_API UClass* StaticClass<APortalActor>()
	{
		return APortalActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APortalActor(Z_Construct_UClass_APortalActor, &APortalActor::StaticClass, TEXT("/Script/PortalGun"), TEXT("APortalActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortalActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
