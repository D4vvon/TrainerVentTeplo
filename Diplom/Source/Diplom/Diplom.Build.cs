// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Diplom : ModuleRules
{
	public Diplom(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "HTTP", "Json" });

		PrivateIncludePaths.AddRange(new string[] { Name });
	}
}
