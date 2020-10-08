// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WorldOfDolls : ModuleRules
{
	public WorldOfDolls(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
