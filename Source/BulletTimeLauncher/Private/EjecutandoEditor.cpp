// Fill out your copyright notice in the Description page of Project Settings.


#include "EjecutandoEditor.h"


bool UEjecutandoEditor::GetEjecutandoEditor() {
	bool GetEjecutandoEditor;
        {
        #if WITH_EDITOR
        return true;
        #else
        return false;
        #endif
        };
    return GetEjecutandoEditor;
}