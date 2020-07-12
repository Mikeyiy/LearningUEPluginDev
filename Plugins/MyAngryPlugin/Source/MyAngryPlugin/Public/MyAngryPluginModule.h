#pragma once
//#include "CoreMinimal.h"
//#include "Modules/ModuleManager.h"

class MyAngryPluginModule : public IModuleInterface
{
private:

public:
	MyAngryPluginModule();
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};