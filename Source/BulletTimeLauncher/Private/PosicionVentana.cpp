// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/GameEngine.h"
#include "EngineGlobals.h"
#include "SlateCore.h"
#include "Engine/GameViewportClient.h"
#include "Containers/UnrealString.h"
#include "GenericPlatform/GenericWindow.h"
#include "Engine/Engine.h"
#include "Widgets/SWindow.h"
#include "Engine.h"
#include "PosicionVentana.h"

void UPosicionVentana::Mover(FVector2D Mouse)
{
    //UGameEngine* gameEngine = Cast<UGameEngine>(GEngine);
    //TSharedPtr<SWindow> windowPtr = gameEngine->GameViewportWindow.Pin();
    //SWindow *window = windowPtr.Get();
    //window->Minimize();
    //GLog->Log(Texto);
    //*Ventana = GEngine->GameViewport->GetWindow();
    //Ventana->Minimize();
    //FVector2D WindowPosition = FVector2D(0.f, 0.f);
    GEngine->GameViewport->GetWindow()->MoveWindowTo(Mouse);
}
