#pragma once
//#include "CoreMinimal.h"
//#include "Modules/ModuleManager.h"
#include "IAssetTypeActions.h"

class IAssetTools;

class MyAngryPluginEditorModule : public IModuleInterface
{
private:
	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action);

public:
	MyAngryPluginEditorModule();
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	TArray< TSharedPtr<IAssetTypeActions> > CreatedAssetTypeActions;

};