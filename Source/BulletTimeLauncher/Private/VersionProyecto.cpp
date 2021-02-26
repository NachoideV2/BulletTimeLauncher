// Fill out your copyright notice in the Description page of Project Settings.


#include "VersionProyecto.h"

FString UVersionProyecto::GetProjectVersion() { 
    FString ProjectVersion;
     GConfig->GetString(
         TEXT("/Script/EngineSettings.GeneralProjectSettings"),
         TEXT("ProjectVersion"),
         ProjectVersion,
         GGameIni
         );
     return ProjectVersion;

}
     