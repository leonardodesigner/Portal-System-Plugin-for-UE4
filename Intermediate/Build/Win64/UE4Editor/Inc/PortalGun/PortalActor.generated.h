// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class APortalActor;
#ifdef PORTALGUN_PortalActor_generated_h
#error "PortalActor.generated.h already included, missing '#pragma once' in PortalActor.h"
#endif
#define PORTALGUN_PortalActor_generated_h

#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_SPARSE_DATA
#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPortalEffects); \
	DECLARE_FUNCTION(execPortalTriggerOverlap); \
	DECLARE_FUNCTION(execSetPortalCapture); \
	DECLARE_FUNCTION(execClearPortalDestiny); \
	DECLARE_FUNCTION(execSetPortalDestiny);


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPortalEffects); \
	DECLARE_FUNCTION(execPortalTriggerOverlap); \
	DECLARE_FUNCTION(execSetPortalCapture); \
	DECLARE_FUNCTION(execClearPortalDestiny); \
	DECLARE_FUNCTION(execSetPortalDestiny);


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortalActor(); \
	friend struct Z_Construct_UClass_APortalActor_Statics; \
public: \
	DECLARE_CLASS(APortalActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortalGun"), NO_API) \
	DECLARE_SERIALIZER(APortalActor)


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAPortalActor(); \
	friend struct Z_Construct_UClass_APortalActor_Statics; \
public: \
	DECLARE_CLASS(APortalActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortalGun"), NO_API) \
	DECLARE_SERIALIZER(APortalActor)


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APortalActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APortalActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortalActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortalActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortalActor(APortalActor&&); \
	NO_API APortalActor(const APortalActor&); \
public:


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortalActor(APortalActor&&); \
	NO_API APortalActor(const APortalActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortalActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortalActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortalActor)


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PortalRootComponent() { return STRUCT_OFFSET(APortalActor, PortalRootComponent); } \
	FORCEINLINE static uint32 __PPO__PortalSpawnPoint() { return STRUCT_OFFSET(APortalActor, PortalSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__OverlapComp() { return STRUCT_OFFSET(APortalActor, OverlapComp); } \
	FORCEINLINE static uint32 __PPO__PortalMesh() { return STRUCT_OFFSET(APortalActor, PortalMesh); } \
	FORCEINLINE static uint32 __PPO__SetPortalMesh() { return STRUCT_OFFSET(APortalActor, SetPortalMesh); } \
	FORCEINLINE static uint32 __PPO__PortalDestination() { return STRUCT_OFFSET(APortalActor, PortalDestination); } \
	FORCEINLINE static uint32 __PPO__PortalDestinationTransform() { return STRUCT_OFFSET(APortalActor, PortalDestinationTransform); } \
	FORCEINLINE static uint32 __PPO__PortalColor() { return STRUCT_OFFSET(APortalActor, PortalColor); } \
	FORCEINLINE static uint32 __PPO__SetCaptureA() { return STRUCT_OFFSET(APortalActor, SetCaptureA); } \
	FORCEINLINE static uint32 __PPO__SetCaptureB() { return STRUCT_OFFSET(APortalActor, SetCaptureB); } \
	FORCEINLINE static uint32 __PPO__SetSceneCapture() { return STRUCT_OFFSET(APortalActor, SetSceneCapture); } \
	FORCEINLINE static uint32 __PPO__bIsTeleporting() { return STRUCT_OFFSET(APortalActor, bIsTeleporting); } \
	FORCEINLINE static uint32 __PPO__PortalCapture() { return STRUCT_OFFSET(APortalActor, PortalCapture); } \
	FORCEINLINE static uint32 __PPO__PortalSound() { return STRUCT_OFFSET(APortalActor, PortalSound); } \
	FORCEINLINE static uint32 __PPO__PortalMat() { return STRUCT_OFFSET(APortalActor, PortalMat); }


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_20_PROLOG
#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_PRIVATE_PROPERTY_OFFSET \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_SPARSE_DATA \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_RPC_WRAPPERS \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_INCLASS \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_PRIVATE_PROPERTY_OFFSET \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_SPARSE_DATA \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_INCLASS_NO_PURE_DECLS \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTALGUN_API UClass* StaticClass<class APortalActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalActor_h


#define FOREACH_ENUM_EPORTALTYPE(op) \
	op(EPortalType::PortalGun) \
	op(EPortalType::FixedPortal) 

enum class EPortalType;
template<> PORTALGUN_API UEnum* StaticEnum<EPortalType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
