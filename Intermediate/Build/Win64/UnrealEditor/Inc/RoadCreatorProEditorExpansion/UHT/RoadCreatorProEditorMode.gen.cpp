// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadCreatorProEditorMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadCreatorProEditorMode() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadCreatorProEditorExpansion(ETypeConstructPhase);
ROADCREATORPROEDITOREXPANSION_API UClass* Z_Construct_UClass_URoadCreatorProEditorMode(ETypeConstructPhase);
ROADCREATORPROEDITOREXPANSION_API UClass* Z_Construct_UClass_URoadCreatorProEditorMode(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URoadCreatorProEditorMode ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadCreatorProEditorMode_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Standalone Road Creator Pro editor mode.\n *\n * This uses the UE5 UEdMode path with the legacy widget helper only for the\n * editor transform widget bridge.\n */" },
		{ "IncludePath", "RoadCreatorProEditorMode.h" },
		{ "ModuleRelativePath", "Private/RoadCreatorProEditorMode.h" },
		{ "ToolTip", "Standalone Road Creator Pro editor mode.\n\nThis uses the UE5 UEdMode path with the legacy widget helper only for the\neditor transform widget bridge." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadCreatorProEditorMode constinit property declarations ****************
// ********** End Class URoadCreatorProEditorMode constinit property declarations ******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadCreatorProEditorMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBaseLegacyWidgetEdMode,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadCreatorProEditorExpansion,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadCreatorProEditorMode,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URoadCreatorProEditorMode;
UClass* Z_Construct_UClass_URoadCreatorProEditorMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadCreatorProEditorMode;
		if (!Z_Registration_Info_UClass_URoadCreatorProEditorMode.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadCreatorProEditorMode"),
				Z_Registration_Info_UClass_URoadCreatorProEditorMode.InnerSingleton,
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
		return Z_Registration_Info_UClass_URoadCreatorProEditorMode.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadCreatorProEditorMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadCreatorProEditorMode.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadCreatorProEditorMode.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadCreatorProEditorMode);
URoadCreatorProEditorMode::~URoadCreatorProEditorMode() {}
// ********** End Class URoadCreatorProEditorMode **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_RCPEx_Build_HostProject_Plugins_RoadCreatorProEditorExpansion_Source_RoadCreatorProEditorExpansion_Private_RoadCreatorProEditorMode_h__Script_RoadCreatorProEditorExpansion_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadCreatorProEditorMode, TEXT("URoadCreatorProEditorMode"), &Z_Registration_Info_UClass_URoadCreatorProEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadCreatorProEditorMode), 2111659347U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RCPEx_Build_HostProject_Plugins_RoadCreatorProEditorExpansion_Source_RoadCreatorProEditorExpansion_Private_RoadCreatorProEditorMode_h__Script_RoadCreatorProEditorExpansion_fad1bc2eec43557d0f6370cb647c97141cc60be6{
	TEXT("/Script/RoadCreatorProEditorExpansion"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
