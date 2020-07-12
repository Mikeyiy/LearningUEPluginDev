// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFactory.h"

#include "MotionDatabase.h"

UMyFactory::UMyFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UMotionDatabase::StaticClass();
}

bool UMyFactory::ConfigureProperties()
{

	// TSharedRef<SMotionFieldCreateDialog> Dialog = SNew(SMotionFieldCreateDialog, true);
	// return Dialog->ConfigureProperties(this);
	return true;
};

UObject* UMyFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{

	UMotionDatabase* NewMotionDatabase = NewObject<UMotionDatabase>(InParent, Class, Name, Flags | RF_Transactional);

	if (NewMotionDatabase)
	{

		//NewMotionDatabase->PopulateFromSkeleton(TargetSkeleton, TargetMotionBones);

		return NewMotionDatabase;
	}


	return NULL;
}

UObject* UMyFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return FactoryCreateNew(Class, InParent, Name, Flags, Context, Warn, NAME_None);
}

bool UMyFactory::ShouldShowInNewMenu() const
{
	return true;
}

