// Copyright Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;

public class GUIS : ModuleRules
{
    public GUIS(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[]
            {
            }
        );


        PrivateIncludePaths.AddRange(
            new string[]
            {
            }
        );


        PublicDependencyModuleNames.AddRange(
            new[]
            {
                "Core",
                "Projects",
                "NumbskullSerialization"
            }
        );


        PrivateDependencyModuleNames.AddRange(
            new[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "NumbskullSerialization"
            }
        );


        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
            }
        );
    }
}