// (c) Yuri N. K. 2017. All rights reserved.
// ykasczc@gmail.com

using UnrealBuildTool;
using System.IO;

public class ViveMocapKit : ModuleRules
{
	public ViveMocapKit(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivatePCHHeaderFile = "Public/ViveMocapKit.h";
        //PCHUsage = PCHUsageMode.UseSharedPCHs;

        PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "InputCore",
                "SteamVR",
                "HeadMountedDisplay",
                "Engine",
                "VMKFingersSolver"
            }
            );
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
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
