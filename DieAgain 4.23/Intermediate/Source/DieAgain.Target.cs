using UnrealBuildTool;

public class DieAgainTarget : TargetRules
{
	public DieAgainTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("DieAgain");
	}
}
