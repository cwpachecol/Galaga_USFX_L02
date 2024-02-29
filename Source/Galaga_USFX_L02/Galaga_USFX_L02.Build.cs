// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Galaga_USFX_L02 : ModuleRules
{
	public Galaga_USFX_L02(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
