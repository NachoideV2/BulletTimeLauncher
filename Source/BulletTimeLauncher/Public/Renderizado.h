// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Renderizado.generated.h"

/**
 * 
 */
UCLASS()
class BULLETTIMELAUNCHER_API URenderizado : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Desactivar Renderizado"), Category = "sistema")
	static void Desactivar();
};
