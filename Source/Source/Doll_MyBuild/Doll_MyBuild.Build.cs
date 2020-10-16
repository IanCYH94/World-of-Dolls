// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Doll_MyBuild : ModuleRules
{
	public Doll_MyBuild(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
