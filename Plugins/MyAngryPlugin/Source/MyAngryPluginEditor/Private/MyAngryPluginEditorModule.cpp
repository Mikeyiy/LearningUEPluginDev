#include "MyAngryPluginEditorModule.h"
#include "MotionDatabaseActions.h"
#include "AssetToolsModule.h"


IMPLEMENT_MODULE(MyAngryPluginEditorModule, MyAngryPluginEditor);

MyAngryPluginEditorModule::MyAngryPluginEditorModule() {}

void MyAngryPluginEditorModule::StartupModule()
{
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	RegisterAssetTypeAction(AssetTools, MakeShareable(new FMotionDatabaseActions()));

}

void MyAngryPluginEditorModule::ShutdownModule()
{
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		for (int32 Index = 0; Index < CreatedAssetTypeActions.Num(); ++Index)
		{
			AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[Index].ToSharedRef());
		}
	}
	CreatedAssetTypeActions.Empty();
}

void MyAngryPluginEditorModule::RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
{
	AssetTools.RegisterAssetTypeActions(Action);
	CreatedAssetTypeActions.Add(Action);
}