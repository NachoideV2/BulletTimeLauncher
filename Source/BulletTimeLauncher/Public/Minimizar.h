// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Minimizar.generated.h"

/**
 * 
 */
UCLASS()
class BULLETTIMELAUNCHER_API UMinimizar : public UBlueprintFunctionLibrary
{

	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Minimizar"), Category = "sistema")
	static void Minimizar();
};
