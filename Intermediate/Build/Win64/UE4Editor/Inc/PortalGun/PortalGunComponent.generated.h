// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FHitResult;
#ifdef PORTALGUN_PortalGunComponent_generated_h
#error "PortalGunComponent.generated.h already included, missing '#pragma once' in PortalGunComponent.h"
#endif
#define PORTALGUN_PortalGunComponent_generated_h

#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_SPARSE_DATA
#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWeaponTrace); \
	DECLARE_FUNCTION(execDestroyAllPortals); \
	DECLARE_FUNCTION(execDestroySinglePortal); \
	DECLARE_FUNCTION(execCreatePortal);


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWeaponTrace); \
	DECLARE_FUNCTION(execDestroyAllPortals); \
	DECLARE_FUNCTION(execDestroySinglePortal); \
	DECLARE_FUNCTION(execCreatePortal);


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPortalGunComponent(); \
	friend struct Z_Construct_UClass_UPortalGunComponent_Statics; \
public: \
	DECLARE_CLASS(UPortalGunComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortalGun"), NO_API) \
	DECLARE_SERIALIZER(UPortalGunComponent)


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPortalGunComponent(); \
	friend struct Z_Construct_UClass_UPortalGunComponent_Statics; \
public: \
	DECLARE_CLASS(UPortalGunComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortalGun"), NO_API) \
	DECLARE_SERIALIZER(UPortalGunComponent)


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPortalGunComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPortalGunComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortalGunComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortalGunComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPortalGunComponent(UPortalGunComponent&&); \
	NO_API UPortalGunComponent(const UPortalGunComponent&); \
public:


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPortalGunComponent(UPortalGunComponent&&); \
	NO_API UPortalGunComponent(const UPortalGunComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortalGunComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortalGunComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPortalGunComponent)


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_18_PROLOG
#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_SPARSE_DATA \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_RPC_WRAPPERS \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_INCLASS \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_SPARSE_DATA \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_INCLASS_NO_PURE_DECLS \
	PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTALGUN_API UClass* StaticClass<class UPortalGunComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginProject_Plugins_PortalGun_Source_PortalGun_Public_PortalGunComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
