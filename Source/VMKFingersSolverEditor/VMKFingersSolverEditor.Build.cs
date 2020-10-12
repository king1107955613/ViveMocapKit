// VMKFingersSolver
// (c) Yuri N Kalinin, 2019, ykasczc@gmail.com. All right reserved.

using UnrealBuildTool;
using System.IO;

namespace UnrealBuildTool.Rules
{
    public class VMKFingersSolverEditor : ModuleRules
    {
        public VMKFingersSolverEditor(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
            PrivatePCHHeaderFile = "Private/VMKFingersSolverEditor.h";

            PrivateDependencyModuleNames.AddRange(
                new string[] {
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "AnimGraphRuntime",
                    "AnimGraph",
                    "BlueprintGraph",
                    "UnrealEd",
                    "ContentBrowser",
                    "SlateCore",
                    "Slate",
                    "AssetRegistry",
                    "VMKFingersSolver",
                    "ViveMocapKit",
                    "DesktopPlatform"
                }
            );
        }
    }
}