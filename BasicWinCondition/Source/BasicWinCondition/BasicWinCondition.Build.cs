// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BasicWinCondition : ModuleRules
{
	public BasicWinCondition(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
