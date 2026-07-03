// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadCreatorProEditorExpansionSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadCreatorProEditorExpansionSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadCreatorProEditorExpansion(ETypeConstructPhase);
ROADCREATORPROEDITOREXPANSION_API UEnum* Z_Construct_UEnum_RoadCreatorProEditorExpansion_ERoadCreatorProSignStyle(ETypeConstructPhase);
ROADCREATORPROEDITOREXPANSION_API UClass* Z_Construct_UClass_URoadCreatorProEditorExpansionSettings(ETypeConstructPhase);
ROADCREATORPROEDITOREXPANSION_API UClass* Z_Construct_UClass_URoadCreatorProEditorExpansionSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERoadCreatorProSignStyle **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadCreatorProEditorExpansion_ERoadCreatorProSignStyle_Statics
template<> ROADCREATORPROEDITOREXPANSION_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadCreatorProSignStyle>()
{
	return Z_Construct_UEnum_RoadCreatorProEditorExpansion_ERoadCreatorProSignStyle(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "EU.DisplayName", "EU" },
		{ "EU.Name", "ERoadCreatorProSignStyle::EU" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
		{ "US.DisplayName", "US" },
		{ "US.Name", "ERoadCreatorProSignStyle::US" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadCreatorProSignStyle::US", (int64)ERoadCreatorProSignStyle::US },
		{ "ERoadCreatorProSignStyle::EU", (int64)ERoadCreatorProSignStyle::EU },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadCreatorProEditorExpansion,
	nullptr,
	"ERoadCreatorProSignStyle",
	"ERoadCreatorProSignStyle",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERoadCreatorProSignStyle;
UEnum* Z_Construct_UEnum_RoadCreatorProEditorExpansion_ERoadCreatorProSignStyle(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERoadCreatorProSignStyle.OuterSingleton)
		{
			ZRIE_ERoadCreatorProSignStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadCreatorProEditorExpansion_ERoadCreatorProSignStyle, (UObject*)Z_Construct_UPackage__Script_RoadCreatorProEditorExpansion(ETypeConstructPhase::Outer), TEXT("ERoadCreatorProSignStyle"));
		}
		return ZRIE_ERoadCreatorProSignStyle.OuterSingleton;
	}
	if (!ZRIE_ERoadCreatorProSignStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERoadCreatorProSignStyle.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERoadCreatorProSignStyle.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERoadCreatorProSignStyle ****************************************************

// ********** Begin Class URoadCreatorProEditorExpansionSettings ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadCreatorProEditorExpansionSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DisplayName", "Road Creator Pro Editor Expansion" },
		{ "IncludePath", "RoadCreatorProEditorExpansionSettings.h" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDecorateImportedRoadsFromOsmTags_MetaData[] = {
		{ "Category", "OpenStreetMap Decoration" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnSigns_MetaData[] = {
		{ "Category", "OpenStreetMap Decoration" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnRoadDecals_MetaData[] = {
		{ "Category", "OpenStreetMap Decoration" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnTrafficSignals_MetaData[] = {
		{ "Category", "OpenStreetMap Decoration" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignStyle_MetaData[] = {
		{ "Category", "OpenStreetMap Decoration" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUrbanSidewalks_MetaData[] = {
		{ "Category", "Road Features" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUrbanLampposts_MetaData[] = {
		{ "Category", "Road Features" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUrbanMarkings_MetaData[] = {
		{ "Category", "Road Features" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighwayGuardrails_MetaData[] = {
		{ "Category", "Road Features" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighwayReflectorPoles_MetaData[] = {
		{ "Category", "Road Features" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighwayNoiseBarriers_MetaData[] = {
		{ "Category", "Road Features" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBridgeSupports_MetaData[] = {
		{ "Category", "Road Features" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBridgeGuardrails_MetaData[] = {
		{ "Category", "Road Features" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTunnelLights_MetaData[] = {
		{ "Category", "Road Features" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGravelShoulders_MetaData[] = {
		{ "Category", "Road Features" },
		{ "ModuleRelativePath", "Public/RoadCreatorProEditorExpansionSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadCreatorProEditorExpansionSettings constinit property declarations ***
	static void NewProp_bDecorateImportedRoadsFromOsmTags_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bDecorateImportedRoadsFromOsmTags = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDecorateImportedRoadsFromOsmTags;
	static void NewProp_bSpawnSigns_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bSpawnSigns = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnSigns;
	static void NewProp_bSpawnRoadDecals_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bSpawnRoadDecals = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnRoadDecals;
	static void NewProp_bSpawnTrafficSignals_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bSpawnTrafficSignals = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnTrafficSignals;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SignStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SignStyle;
	static void NewProp_bUrbanSidewalks_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bUrbanSidewalks = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUrbanSidewalks;
	static void NewProp_bUrbanLampposts_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bUrbanLampposts = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUrbanLampposts;
	static void NewProp_bUrbanMarkings_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bUrbanMarkings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUrbanMarkings;
	static void NewProp_bHighwayGuardrails_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bHighwayGuardrails = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighwayGuardrails;
	static void NewProp_bHighwayReflectorPoles_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bHighwayReflectorPoles = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighwayReflectorPoles;
	static void NewProp_bHighwayNoiseBarriers_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bHighwayNoiseBarriers = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighwayNoiseBarriers;
	static void NewProp_bBridgeSupports_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bBridgeSupports = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBridgeSupports;
	static void NewProp_bBridgeGuardrails_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bBridgeGuardrails = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBridgeGuardrails;
	static void NewProp_bTunnelLights_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bTunnelLights = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTunnelLights;
	static void NewProp_bGravelShoulders_SetBit(void* Obj)
	{
		((URoadCreatorProEditorExpansionSettings*)Obj)->bGravelShoulders = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGravelShoulders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadCreatorProEditorExpansionSettings constinit property declarations *****
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadCreatorProEditorExpansionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadCreatorProEditorExpansionSettings Property Definitions **************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDecorateImportedRoadsFromOsmTags = { "bDecorateImportedRoadsFromOsmTags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bDecorateImportedRoadsFromOsmTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDecorateImportedRoadsFromOsmTags_MetaData), NewProp_bDecorateImportedRoadsFromOsmTags_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSpawnSigns = { "bSpawnSigns", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bSpawnSigns_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnSigns_MetaData), NewProp_bSpawnSigns_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSpawnRoadDecals = { "bSpawnRoadDecals", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bSpawnRoadDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnRoadDecals_MetaData), NewProp_bSpawnRoadDecals_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSpawnTrafficSignals = { "bSpawnTrafficSignals", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bSpawnTrafficSignals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnTrafficSignals_MetaData), NewProp_bSpawnTrafficSignals_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SignStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SignStyle = { "SignStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URoadCreatorProEditorExpansionSettings, SignStyle), Z_Construct_UEnum_RoadCreatorProEditorExpansion_ERoadCreatorProSignStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignStyle_MetaData), NewProp_SignStyle_MetaData) }; // 36cf687b48aa1ce4dad54bec04a3e873bff5cc0b
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUrbanSidewalks = { "bUrbanSidewalks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bUrbanSidewalks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUrbanSidewalks_MetaData), NewProp_bUrbanSidewalks_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUrbanLampposts = { "bUrbanLampposts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bUrbanLampposts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUrbanLampposts_MetaData), NewProp_bUrbanLampposts_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUrbanMarkings = { "bUrbanMarkings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bUrbanMarkings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUrbanMarkings_MetaData), NewProp_bUrbanMarkings_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHighwayGuardrails = { "bHighwayGuardrails", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bHighwayGuardrails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighwayGuardrails_MetaData), NewProp_bHighwayGuardrails_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHighwayReflectorPoles = { "bHighwayReflectorPoles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bHighwayReflectorPoles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighwayReflectorPoles_MetaData), NewProp_bHighwayReflectorPoles_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHighwayNoiseBarriers = { "bHighwayNoiseBarriers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bHighwayNoiseBarriers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighwayNoiseBarriers_MetaData), NewProp_bHighwayNoiseBarriers_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBridgeSupports = { "bBridgeSupports", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bBridgeSupports_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBridgeSupports_MetaData), NewProp_bBridgeSupports_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBridgeGuardrails = { "bBridgeGuardrails", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bBridgeGuardrails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBridgeGuardrails_MetaData), NewProp_bBridgeGuardrails_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bTunnelLights = { "bTunnelLights", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bTunnelLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTunnelLights_MetaData), NewProp_bTunnelLights_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGravelShoulders = { "bGravelShoulders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadCreatorProEditorExpansionSettings), &UHT_STATICS::NewProp_bGravelShoulders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGravelShoulders_MetaData), NewProp_bGravelShoulders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDecorateImportedRoadsFromOsmTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSpawnSigns,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSpawnRoadDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSpawnTrafficSignals,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SignStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SignStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUrbanSidewalks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUrbanLampposts,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUrbanMarkings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHighwayGuardrails,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHighwayReflectorPoles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHighwayNoiseBarriers,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBridgeSupports,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBridgeGuardrails,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bTunnelLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGravelShoulders,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadCreatorProEditorExpansionSettings Property Definitions ****************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDeveloperSettings,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadCreatorProEditorExpansion,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadCreatorProEditorExpansionSettings,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URoadCreatorProEditorExpansionSettings;
UClass* Z_Construct_UClass_URoadCreatorProEditorExpansionSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadCreatorProEditorExpansionSettings;
		if (!Z_Registration_Info_UClass_URoadCreatorProEditorExpansionSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadCreatorProEditorExpansionSettings"),
				Z_Registration_Info_UClass_URoadCreatorProEditorExpansionSettings.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_URoadCreatorProEditorExpansionSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadCreatorProEditorExpansionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadCreatorProEditorExpansionSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadCreatorProEditorExpansionSettings.OuterSingleton;
}
#undef UHT_STATICS
URoadCreatorProEditorExpansionSettings::URoadCreatorProEditorExpansionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadCreatorProEditorExpansionSettings);
URoadCreatorProEditorExpansionSettings::~URoadCreatorProEditorExpansionSettings() {}
// ********** End Class URoadCreatorProEditorExpansionSettings *************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_RCPEx_Build_HostProject_Plugins_RoadCreatorProEditorExpansion_Source_RoadCreatorProEditorExpansion_Public_RoadCreatorProEditorExpansionSettings_h__Script_RoadCreatorProEditorExpansion_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadCreatorProEditorExpansion_ERoadCreatorProSignStyle, TEXT("ERoadCreatorProSignStyle"), &ZRIE_ERoadCreatorProSignStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 919562363U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadCreatorProEditorExpansionSettings, TEXT("URoadCreatorProEditorExpansionSettings"), &Z_Registration_Info_UClass_URoadCreatorProEditorExpansionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadCreatorProEditorExpansionSettings), 2013889278U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RCPEx_Build_HostProject_Plugins_RoadCreatorProEditorExpansion_Source_RoadCreatorProEditorExpansion_Public_RoadCreatorProEditorExpansionSettings_h__Script_RoadCreatorProEditorExpansion_572cab3b98221fb0236b2c8ca933f5c6928d1d4e{
	TEXT("/Script/RoadCreatorProEditorExpansion"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
