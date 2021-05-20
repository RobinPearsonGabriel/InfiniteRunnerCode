// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GMPROG2P1 : ModuleRules
{
	public GMPROG2P1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
