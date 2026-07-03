// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadCreatorProEditorExpansionSettings.h"

#ifdef ROADCREATORPROEDITOREXPANSION_RoadCreatorProEditorExpansionSettings_generated_h
#error "RoadCreatorProEditorExpansionSettings.generated.h already included, missing '#pragma once' in RoadCreatorProEditorExpansionSettings.h"
#endif
#define ROADCREATORPROEDITOREXPANSION_RoadCreatorProEditorExpansionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URoadCreatorProEditorExpansionSettings ***********************************
struct Z_Construct_UClass_URoadCreatorProEditorExpansionSettings_Statics;
ROADCREATORPROEDITOREXPANSION_API UClass* Z_Construct_UClass_URoadCreatorProEditorExpansionSettings(ETypeConstructPhase);

#define FID_RCPEx_Build_HostProject_Plugins_RoadCreatorProEditorExpansion_Source_RoadCreatorProEditorExpansion_Public_RoadCreatorProEditorExpansionSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadCreatorProEditorExpansionSettings_Statics; \
	friend ROADCREATORPROEDITOREXPANSION_API UClass* ::Z_Construct_UClass_URoadCreatorProEditorExpansionSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadCreatorProEditorExpansionSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadCreatorProEditorExpansion"), Z_Construct_UClass_URoadCreatorProEditorExpansionSettings) \
	DECLARE_SERIALIZER(URoadCreatorProEditorExpansionSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_RCPEx_Build_HostProject_Plugins_RoadCreatorProEditorExpansion_Source_RoadCreatorProEditorExpansion_Public_RoadCreatorProEditorExpansionSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadCreatorProEditorExpansionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadCreatorProEditorExpansionSettings(URoadCreatorProEditorExpansionSettings&&) = delete; \
	URoadCreatorProEditorExpansionSettings(const URoadCreatorProEditorExpansionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadCreatorProEditorExpansionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadCreatorProEditorExpansionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadCreatorProEditorExpansionSettings) \
	NO_API virtual ~URoadCreatorProEditorExpansionSettings();


#define FID_RCPEx_Build_HostProject_Plugins_RoadCreatorProEditorExpansion_Source_RoadCreatorProEditorExpansion_Public_RoadCreatorProEditorExpansionSettings_h_14_PROLOG
#define FID_RCPEx_Build_HostProject_Plugins_RoadCreatorProEditorExpansion_Source_RoadCreatorProEditorExpansion_Public_RoadCreatorProEditorExpansionSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RCPEx_Build_HostProject_Plugins_RoadCreatorProEditorExpansion_Source_RoadCreatorProEditorExpansion_Public_RoadCreatorProEditorExpansionSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_RCPEx_Build_HostProject_Plugins_RoadCreatorProEditorExpansion_Source_RoadCreatorProEditorExpansion_Public_RoadCreatorProEditorExpansionSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadCreatorProEditorExpansionSettings;

// ********** End Class URoadCreatorProEditorExpansionSettings *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RCPEx_Build_HostProject_Plugins_RoadCreatorProEditorExpansion_Source_RoadCreatorProEditorExpansion_Public_RoadCreatorProEditorExpansionSettings_h

// ********** Begin Enum ERoadCreatorProSignStyle **************************************************
#define FOREACH_ENUM_EROADCREATORPROSIGNSTYLE(op) \
	op(ERoadCreatorProSignStyle::US) \
	op(ERoadCreatorProSignStyle::EU) 

enum class ERoadCreatorProSignStyle : uint8;
template<> struct TIsUEnumClass<ERoadCreatorProSignStyle> { enum { Value = true }; };
template<> UE_NODEBUG ROADCREATORPROEDITOREXPANSION_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadCreatorProSignStyle>();
// ********** End Enum ERoadCreatorProSignStyle ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
