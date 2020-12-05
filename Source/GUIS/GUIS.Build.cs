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
                "Projects"
            }
        );


        PrivateDependencyModuleNames.AddRange(
            new[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore"
            }
        );


        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
            }
        );
    }
}