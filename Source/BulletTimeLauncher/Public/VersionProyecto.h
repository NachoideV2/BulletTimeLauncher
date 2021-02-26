// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VersionProyecto.generated.h"

/**
 * 
 */
UCLASS()
class BULLETTIMELAUNCHER_API UVersionProyecto : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Version proyecto", CompactNodeTitle = "Version Proyecto"), Category = "Informacion Sistema")
	static FString GetProjectVersion();
	
};
