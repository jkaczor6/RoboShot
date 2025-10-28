// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RoboShot : ModuleRules
{
	public RoboShot(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"RoboShot",
			"RoboShot/Variant_Platforming",
			"RoboShot/Variant_Platforming/Animation",
			"RoboShot/Variant_Combat",
			"RoboShot/Variant_Combat/AI",
			"RoboShot/Variant_Combat/Animation",
			"RoboShot/Variant_Combat/Gameplay",
			"RoboShot/Variant_Combat/Interfaces",
			"RoboShot/Variant_Combat/UI",
			"RoboShot/Variant_SideScrolling",
			"RoboShot/Variant_SideScrolling/AI",
			"RoboShot/Variant_SideScrolling/Gameplay",
			"RoboShot/Variant_SideScrolling/Interfaces",
			"RoboShot/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
