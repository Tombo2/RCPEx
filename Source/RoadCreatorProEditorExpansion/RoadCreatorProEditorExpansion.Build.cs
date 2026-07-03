using UnrealBuildTool;

public class RoadCreatorProEditorExpansion : ModuleRules
{
    public RoadCreatorProEditorExpansion(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bUsePrecompiled = true;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "InputCore"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "ApplicationCore",
            "ComponentVisualizers",
            "EditorFramework",
            "EditorInteractiveToolsFramework",
            "DesktopPlatform",
            "InteractiveToolsFramework",
            "LevelEditor",
            "Projects",
            "Slate",
            "SlateCore",
            "UnrealEd",
            "XmlParser"
        });
    }
}
