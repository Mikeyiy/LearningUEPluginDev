#include "MotionDatabaseActions.h"

#include "MotionDatabase.h"

#include "Internationalization/Internationalization.h"

FText FMotionDatabaseActions::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "FMotionDatabaseActions", "Motion Database");
}

FColor FMotionDatabaseActions::GetTypeColor() const
{
	return FColor::Magenta;
}

UClass* FMotionDatabaseActions::GetSupportedClass() const
{
	return UMotionDatabase::StaticClass();
}

void FMotionDatabaseActions::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
	// const EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	// for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	// {
	// 	if (UMotionField* MotionField = Cast<UMotionField>(*ObjIt))
	// 	{
	// 		//FSimpleAssetEditor::CreateEditor(Mode, Mode == EToolkitMode::WorldCentric ? EditWithinLevelEditor : TSharedPtr<IToolkitHost>(), MotionField);
			
	// 		TSharedRef<FMotionFieldEditor> NewFlipbookEditor(new FMotionFieldEditor());
	// 		NewFlipbookEditor->InitMotionFieldEditor(Mode, EditWithinLevelEditor, MotionField);
			
	// 	}
	// }
}

uint32 FMotionDatabaseActions::GetCategories()
{
	return EAssetTypeCategories::Animation;
}