// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EjecutandoEditor.generated.h"

/**
 * 
 */
UCLASS()
class BULLETTIMELAUNCHER_API UEjecutandoEditor : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintPure, DisplayName = "EjecutandoEditor", Category = "Sistema")
	static bool GetEjecutandoEditor();

};
