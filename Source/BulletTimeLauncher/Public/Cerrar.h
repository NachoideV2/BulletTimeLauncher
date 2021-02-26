// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Cerrar.generated.h"

/**
 * 
 */
UCLASS()
class BULLETTIMELAUNCHER_API UCerrar : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Cerrar"), Category = "sistema")
	static void CerrarVentana();
};
