// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PosicionVentana.generated.h"

/**
 * 
 */
UCLASS()
class BULLETTIMELAUNCHER_API UPosicionVentana : public UBlueprintFunctionLibrary
{

	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Posicion Ventana"), Category = "sistema")
	static void Mover(FVector2D Mouse);
};
