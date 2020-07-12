#pragma once

#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"

#include "MotionDatabase.generated.h"

class USkeleton;

UCLASS(BlueprintType)
class MYANGRYPLUGIN_API UMotionDatabase : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	USkeleton* Skeleton;
};