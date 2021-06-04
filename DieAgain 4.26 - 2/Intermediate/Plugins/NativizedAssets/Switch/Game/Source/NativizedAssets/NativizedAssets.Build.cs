// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class NativizedAssets : ModuleRules
{
	public NativizedAssets(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseSharedPCHs;
		PrivatePCHHeaderFile = "Private/NativizedAssets.h";
		bLegacyPublicIncludePaths = Target.bLegacyPublicIncludePaths;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "Engine", "DieAgain" });

		PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "MovieScene", "SlateCore", "UMG", "DialoguePlugin", "AIModule", "AnimGraphRuntime", "NavigationSystem", "ClothingSystemRuntimeNv", "InputCore", "MovieSceneTracks", "LevelSequence", "Paper2D", "ApexDestruction", "FMODStudio", "PhysicsCore", "HeadMountedDisplay", "OnlineSubsystemUtils", "Landscape", "StaticMeshDescription", "MeshDescription", "GameplayTasks", "GameplayTags", "ClothingSystemRuntimeInterface", "PropertyAccess", "Slate", "AudioExtensions", "AudioPlatformConfiguration", "PropertyPath", "AudioMixer", "AnimGraph" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
