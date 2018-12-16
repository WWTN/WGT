// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ITOSGTarget : TargetRules
{
	public ITOSGTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("ITOSG");
	}
}
