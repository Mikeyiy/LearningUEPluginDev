using UnrealBuildTool;

public class MyAngryPluginEditor : ModuleRules
{
	public MyAngryPluginEditor(ReadOnlyTargetRules target) : base(target)
    {
		PublicIncludePaths.AddRange(
			new string[] 
			{ 
				"MyAngryPluginEditor/Public",
				// ... add public include paths required here ...
			}
		);

        PrivateIncludePaths.AddRange(
        	new string[] 
        	{ 
        		"MyAngryPluginEditor/Private",
        		// ... add other private include paths required here ...
        	}
        );

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
                "CoreUObject",
                "Json",
                "Slate",
                "SlateCore",
                "Engine",
                "InputCore",
                "UnrealEd", // for FAssetEditorManager
				"KismetWidgets",
                "Kismet",  // for FWorkflowCentricApplication
				"PropertyEditor",
                "RenderCore",
                "ContentBrowser",
                "WorkspaceMenuStructure",
                "EditorStyle",
                "MeshPaint",
                "EditorWidgets",
                "Projects",
                "AnimGraph",
                "BlueprintGraph",
                "AssetRegistry",
                "AdvancedPreviewScene",
				"MyAngryPlugin",
				// ... add private dependencies that you statically link with here ...
			}
		);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
                "AssetTools",
				// ... add any modules that your module loads dynamically here ...
			}
		);
	}

}