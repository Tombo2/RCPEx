#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RoadCreatorProEditorExpansionSettings.generated.h"

UENUM()
enum class ERoadCreatorProSignStyle : uint8
{
    US UMETA(DisplayName = "US"),
    EU UMETA(DisplayName = "EU")
};

UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Road Creator Pro Editor Expansion"))
class ROADCREATORPROEDITOREXPANSION_API URoadCreatorProEditorExpansionSettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    virtual FName GetCategoryName() const override;

    UPROPERTY(Config, EditAnywhere, Category = "OpenStreetMap Decoration")
    bool bDecorateImportedRoadsFromOsmTags = false;

    UPROPERTY(Config, EditAnywhere, Category = "OpenStreetMap Decoration")
    bool bSpawnSigns = true;

    UPROPERTY(Config, EditAnywhere, Category = "OpenStreetMap Decoration")
    bool bSpawnRoadDecals = true;

    UPROPERTY(Config, EditAnywhere, Category = "OpenStreetMap Decoration")
    bool bSpawnTrafficSignals = true;

    UPROPERTY(Config, EditAnywhere, Category = "OpenStreetMap Decoration")
    ERoadCreatorProSignStyle SignStyle = ERoadCreatorProSignStyle::US;

    UPROPERTY(Config, EditAnywhere, Category = "Road Features")
    bool bUrbanSidewalks = true;

    UPROPERTY(Config, EditAnywhere, Category = "Road Features")
    bool bUrbanLampposts = true;

    UPROPERTY(Config, EditAnywhere, Category = "Road Features")
    bool bUrbanMarkings = true;

    UPROPERTY(Config, EditAnywhere, Category = "Road Features")
    bool bHighwayGuardrails = true;

    UPROPERTY(Config, EditAnywhere, Category = "Road Features")
    bool bHighwayReflectorPoles = true;

    UPROPERTY(Config, EditAnywhere, Category = "Road Features")
    bool bHighwayNoiseBarriers = false;

    UPROPERTY(Config, EditAnywhere, Category = "Road Features")
    bool bBridgeSupports = true;

    UPROPERTY(Config, EditAnywhere, Category = "Road Features")
    bool bBridgeGuardrails = true;

    UPROPERTY(Config, EditAnywhere, Category = "Road Features")
    bool bTunnelLights = true;

    UPROPERTY(Config, EditAnywhere, Category = "Road Features")
    bool bGravelShoulders = true;
};
